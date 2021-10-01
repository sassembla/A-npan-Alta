using System;
using UnityEngine;
using WebuSocketCore.Server;

public class AltaEntryPoint
{
    public enum AltaMode
    {
        None,
        EditorOnly,
        ConnectFromDevice,
        ConnectFromDeviceToEditor,

    }
    private static AltaEntryPoint entry;

    [RuntimeInitializeOnLoadMethod]
    static void EntryPoint()
    {
        // TODO: ここを、それぞれの環境で内部保持したものをUIから書き換えて使えるようにしたい。
        var mode = AltaMode.ConnectFromDeviceToEditor;

        /*
            存在する組み合わせは、
            Unity Body からPluginの起動後、

            * Head -> Bodyへの接続
                実機で実際に起こること
                これためそう。ということはStarscreamをswiftで動かせるようなコードを描かねば。 -> できた
                TODO: 依存を含めたビルドの自動化が必要、丸っと別のところからプロジェクトを持ってくる、import処理かあ。Unityのビルドが後に来るパターンが主流。
                TODO: StarscreamをiOS側で使うには、BuildSystemを更新する + Starscreamをspmで持ってくる、が必要。
            or
            
            * DummyHead -> Bodyへの接続
                エディタで起きること
                TODO: これはデバッグに重宝するはず、モックデータとかを取り出したりしたい。API作るのもここを参考にすると良さそう。

            or
            
            * 別Head -> Bodyへの接続
                デバッグ目的で別からの接続がきた時、それをもって接続状態とかを表示できないといけないね。
                実機をこのモードで再起動できるようなデバッグオプションが必要だね。ALTA_RELEASEタグついてなければデバッグUIをUnity側で出すか。

        */

        // サーバの立ち上げ
        entry = new AltaEntryPoint(mode);

        Debug.Log("サーバ構築まで完了、このあとにheadがws接続すれば良い。");
        entry.InitializeHead();

        // ダミー
        // TODO: これは別にどうでもいいことだが、シミュレータに接続できた。混乱するからたぶん禁止した方がいい
        switch (mode)
        {
            case AltaMode.EditorOnly:
                // エディタのみで動作する場合のダミーヘッド、あんまり出番がなさそうだが一応。
                var go = new GameObject().AddComponent<AltaDummyHead>();
                break;
        }
    }




#if UNITY_IOS
    [System.Runtime.InteropServices.DllImport("__Internal")]
    static extern void initialize(string message);
#endif

#if UNITY_ANDROID
    private static AndroidJavaObject jo;
    static void initialize(string message)
    {
        try
        {
            jo = new AndroidJavaObject("a_npan_alta.head.Bridge");
            {
                using (var player = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
                using (var activity = player.GetStatic<AndroidJavaObject>("currentActivity"))
                {
                    Debug.Log("activity:" + activity + " message:" + message);
                    jo.Call("initialize", activity, message);
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogError("e:" + e);
        }
    }

    static void finish()
    {
        try
        {
            jo.Call("finish");
        }
        catch (Exception e)
        {
            Debug.Log("Uniyt error: e:" + e);
        }
    }
#endif

    public static Action Finish;


    private void InitializeHead()
    {
        // TODO: 条件が適当なので調整する。
#if UNITY_EDITOR
        return;
#endif

#if UNITY_IOS || UNITY_ANDROID
        initialize("test");


        {
#if UNITY_ANDROID
        // TODO: Androidのみ、finish関数を実装済み
        Finish = finish;
        var a = new GameObject().AddComponent<A>();
#endif
        }

#endif
    }


    private WebuSocketServer server;

    private AltaEntryPoint(AltaMode mode)
    {
        Debug.Log("alta-body is waking up.");

        switch (mode)
        {
            case AltaMode.ConnectFromDevice:
                // pass. 本番モード。開発中であればwsを使う。
                break;
            case AltaMode.ConnectFromDeviceToEditor:
#if UNITY_EDITOR
                // pass. サーバを立て、Editor上かシミュレータか実機から通信が来るのを待つ。
                break;
#endif

                // シミュレータの場合、このモードであればサーバを内部に立てない。それだけで、Editor側に通信がいく。
                // TODO: 実機の場合、
                return;
        }

        // サーバを立てる
        ClientConnection remoteSocket = null;
        server = new WebuSocketServer(
            1129,
            newConnection =>
            {
                // 一つ目の通信をチェック、適合しなかったら弾かないといけない。
                // TODO: ここを頑丈にしないといけない。
                if (remoteSocket == null)
                {
                    Debug.Log("WebuSocketServer connection received. やったぜ！！！");
                    remoteSocket = newConnection;
                    remoteSocket.OnMessage = segments =>
                    {
                        while (0 < segments.Count)
                        {
                            var data = segments.Dequeue();
                            var bytes = new byte[data.Count];
                            Buffer.BlockCopy(data.Array, data.Offset, bytes, 0, data.Count);

                            Debug.Log("body received:" + string.Join(", ", bytes));
                            OnReceived(bytes);
                        }
                    };
                };
            }
        );

        // TODO: 利用することがあれば。
        Action serverStop = () =>
        {
            server?.Dispose();
        };
    }

    private Action<byte[]> onReceived = bytes => { };
    private void OnReceived(byte[] data)
    {
        onReceived(data);
    }

    public static void SetOnReceived(Action<byte[]> onReceived)
    {
        entry.onReceived = onReceived;
    }
}
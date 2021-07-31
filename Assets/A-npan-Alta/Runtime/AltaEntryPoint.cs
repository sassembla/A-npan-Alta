using System;
using UnityEngine;
using WebuSocketCore.Server;

class AltaEntryPoint
{
    private static AltaEntryPoint entry;

    [RuntimeInitializeOnLoadMethod]
    static void EntryPoint()
    {
        /*
            存在する組み合わせは、
            Unity Body からPluginの起動後、

            * Head -> Bodyへの接続
                実機で実際に起こること
                TODO: これためそう。ということはStarscreamをswiftで動かせるようなコードを描かねば。

            or
            
            * DummyHead -> Bodyへの接続
                エディタで起きること
                TODO: これはデバッグに重宝するはず、モックデータとかを取り出したりしたい。API作るのもここを参考にすると良さそう。

            or
            
            * 別Head -> Bodyへの接続
                デバッグ目的で別からの接続がきた時、それをもって接続状態とかを表示できないといけないね。
                実機をこのモードで再起動できるようなデバッグオプションが必要だね。RELEASEタグついてなければデバッグUIをUnity側で出すか。
        */

        // サーバの立ち上げ
        entry = new AltaEntryPoint();

        Debug.Log("サーバ構築まで完了、このあとにheadがws接続すれば良い。");
        entry.InitializeHead();

        // ダミー
        // これは別にどうでもいいことだが、シミュレータに接続できた。
        // var go = new GameObject().AddComponent<AltaDummyHead>();
    }




#if UNITY_IOS && !UNITY_EDITOR
    [System.Runtime.InteropServices.DllImport("__Internal")]
    static extern void initialize(string message);
#endif

    private void InitializeHead()
    {
#if UNITY_IOS && !UNITY_EDITOR
        initialize("test");
#endif
    }


    private WebuSocketServer server;

    private AltaEntryPoint()
    {
        Debug.Log("alta-body is waking up.");
        // TODO: Native側のAltaHeadEngineへの接続を行う。具体的にはNative側のモジュールを生成し、Unity側をサーバとして起動、Nativeモジュールからの接続を受け付ける。
        // こうすると、Native側はTCP connectionを貼るだけで済む。Deallocationとかで破壊しても、再生が容易。

        ClientConnection remoteSocket = null;
        server = new WebuSocketServer(
            1129,
            newConnection =>
            {
                // 一つ目の通信をチェック、適合しなかったら弾かないといけない。
                // TODO: ここを頑丈にしないといけない。
                if (remoteSocket == null)
                {
                    Debug.Log("WebuSocketServer connection received.");
                    remoteSocket = newConnection;
                    remoteSocket.OnMessage = segments =>
                    {
                        while (0 < segments.Count)
                        {
                            var data = segments.Dequeue();
                            var bytes = new byte[data.Count];
                            Buffer.BlockCopy(data.Array, data.Offset, bytes, 0, data.Count);

                            Debug.Log("body received:" + string.Join(", ", bytes));

                            // 送り返す
                            remoteSocket.Send(new byte[] { 4, 5, 6, 7 });
                        }
                    };
                };
            }
        );

        Action serverStop = () =>
        {
            server?.Dispose();
        };
    }
}
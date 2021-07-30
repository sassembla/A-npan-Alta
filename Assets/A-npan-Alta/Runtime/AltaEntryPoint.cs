using System;
using UnityEngine;
using WebuSocketCore.Server;

class AltaEntryPoint
{
    private static AltaEntryPoint entry;
    [RuntimeInitializeOnLoadMethod]
    static void EntryPoint()
    {

        // エディタのみの場合、サーバ起動
#if UNITY_EDITOR
        entry = new AltaEntryPoint();
        return;
#endif

        // 実機シミュに繋ぐ場合、エディタでは繋がない(繋いでもいいのかもね〜)
        var go = new GameObject().AddComponent<AltaDummyViewClient>();
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
                if (remoteSocket == null)
                {
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
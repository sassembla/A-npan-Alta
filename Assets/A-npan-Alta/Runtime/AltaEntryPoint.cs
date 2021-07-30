using System;
using UnityEngine;
using WebuSocketCore.Server;

class AltaEntryPoint
{
    private static AltaEntryPoint entry;
    [RuntimeInitializeOnLoadMethod]
    static void EntryPoint()
    {
        entry = new AltaEntryPoint();
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
                    remoteSocket.OnMessage = received =>
                    {
                        Debug.Log("接続とデータがきた:" + received.Count);
                        remoteSocket.Send(new byte[] { 4, 5, 6, 7 });
                    };
                }
            }
        );

        Action serverStop = () =>
        {
            server?.Dispose();
        };

        var go = new GameObject().AddComponent<AltaDummyViewClient>();
    }
}
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

        ClientConnection localSocket = null;
        ClientConnection remoteSocket = null;
        server = new WebuSocketServer(
            1129,
            newConnection =>
            {
                // if (newConnection.RequestHeaderDict.ContainsKey("local"))
                // {
                //     localSocket = newConnection;
                //     newConnection.OnMessage = segments =>
                //     {
                //         while (0 < segments.Count)
                //         {
                //             var data = segments.Dequeue();
                //             var bytes = new byte[data.Count];
                //             Buffer.BlockCopy(data.Array, data.Offset, bytes, 0, data.Count);

                //             remoteSocket?.Send(bytes);

                //             // count++;

                //             // // データがきたタイミングでフレームがいい感じだったらスクショを送り出す
                //             // if (count % 10 == 0)
                //             // {
                //             //     shot = true;
                //             //     count = 0;
                //             // }
                //         }
                //     };
                // }
                // else
                // {
                //     remoteSocket = newConnection;
                //     newConnection.OnMessage = segments =>
                //     {
                //         while (0 < segments.Count)
                //         {
                //             var data = segments.Dequeue();
                //             var bytes = new byte[data.Count];
                //             Buffer.BlockCopy(data.Array, data.Offset, bytes, 0, data.Count);

                //             localSocket?.Send(bytes);
                //         }
                //     };
                // }
            }
        );

        Action serverStop = () =>
        {
            server?.Dispose();
        };
    }
}
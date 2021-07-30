using UnityEngine;

class AltaEntryPoint
{
    [RuntimeInitializeOnLoadMethod]
    static void EntryPoint()
    {
        Debug.Log("alta-body is waking up.");
        // TODO: Native側のAltaHeadEngineへの接続を行う。具体的にはNative側のモジュールを生成し、Unity側をサーバとして起動、Nativeモジュールからの接続を受け付ける。
        // こうすると、Native側はTCP connectionを貼るだけで済む。Deallocationとかで破壊しても、再生が容易。
    }
}
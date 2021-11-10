using System;
using UnityEngine;

public class AltaLoaderForDeviceToEditorHead : MonoBehaviour
{
    private Action onShutdown = () => { };

    // エディタ待ち受け用のCoroutineを回す
    public void Setup(AltaEntryPoint entryPoint)
    {
        onShutdown = () =>
        {
            entryPoint.Shutdown();
        };

        var cor = entryPoint.Setup();
        StartCoroutine(cor);
    }

    public void OnApplicationQuit()
    {
        Debug.Log("終了！");
        onShutdown();
    }
}
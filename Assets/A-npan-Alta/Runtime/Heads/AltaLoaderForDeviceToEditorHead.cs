using UnityEngine;

public class AltaLoaderForDeviceToEditorHead : MonoBehaviour
{
    // エディタ待ち受け用のCoroutineを回す
    public void Setup(AltaEntryPoint entryPoint)
    {
        var cor = entryPoint.Setup();
        StartCoroutine(cor);
    }
}
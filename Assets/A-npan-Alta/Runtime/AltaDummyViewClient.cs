using UnityEngine;
using WebuSocketCore;

public class AltaDummyViewClient : MonoBehaviour
{
    void Start()
    {
        Debug.Log("起動");
        WebuSocket ws = null;
        ws = new WebuSocket(
            "ws://127.0.0.1:1129",
            1000,
            () =>
            {
                Debug.Log("接続できた");
                ws.Send(new byte[] { 1, 2, 3, 4 });
            },
            received =>
            {
                Debug.Log("received:" + received.Count);
            }
        );
    }
}
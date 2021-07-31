using System;
using UnityEngine;
using WebuSocketCore;

public class AltaDummyHead : MonoBehaviour
{
    void Awake()
    {
        Debug.Log("dummy head 起動");
        WebuSocket ws = null;
        ws = new WebuSocket(
            "ws://127.0.0.1:1129",
            1000,
            () =>
            {
                Debug.Log("dummy headからbody 接続できた");
                ws.Send(new byte[] { 1, 2, 3, 4 });
            },
            segments =>
            {
                while (0 < segments.Count)
                {
                    var data = segments.Dequeue();
                    var bytes = new byte[data.Count];
                    Buffer.BlockCopy(data.Array, data.Offset, bytes, 0, data.Count);

                    Debug.Log("head received:" + string.Join(", ", bytes));
                }
            }
        );
    }
}
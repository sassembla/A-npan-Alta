using System;
using System.Collections;
using UnityEngine;

public class A : MonoBehaviour
{
    void Start()
    {
        Debug.Log("そのうちfinishされる");
        IEnumerator some()
        {
            yield return new WaitForSeconds(10);
            Debug.Log("ふむふむ");
            try
            {
                AltaEntryPoint.Finish();
            }
            catch (Exception e)
            {
                Debug.Log("呼ばれてなさそう e:" + e);
            }
        }
        StartCoroutine(some());
    }
}
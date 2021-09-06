using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour
{
    public GameObject cube;
    // Start is called before the first frame update
    void Start()
    {
        Application.targetFrameRate = 60;
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("time:" + Time.frameCount);
        cube.transform.Rotate(new Vector3(Time.frameCount % 360, 0, 0), Space.Self);
    }
}

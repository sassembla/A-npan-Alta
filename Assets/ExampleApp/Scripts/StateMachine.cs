using System;
using UnityEngine;
using WebuSocketCore;

public class StateMachine : MonoBehaviour
{

    enum State
    {
        None,
        ListView,
        TimeView,
        NewItemView
    }
    private State currentState;

    void Start()
    {
        Application.targetFrameRate = 60;


        AltaEntryPoint.SetOnReceived(
            bytes =>
            {
                Debug.Log("データを受け取った:" + bytes.Length + " bytes");
            }
        );

        Debug.Log("起動したので、遷移を管理する。最初はリストビュー");
        Go(State.ListView);
    }

    private void Go(State state)
    {
        currentState = state;

        Debug.Log("画面の要素を起動する state:" + state);
    }


}
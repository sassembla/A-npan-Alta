using System;
using System.Text;
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

        // レシーバのセット
        // TODO: disconnectedとかも検知できたほうがいい。
        AltaEntryPoint.SetOnReceived(
            bytes =>
            {
                Debug.Log("headからのデータを受け取った:" + bytes.Length + " bytes");

                // TODO: 無事にsend-receiveループが成立した。
                AltaEntryPoint.Send(Encoding.UTF8.GetBytes("reply from server"));
            }
        );

        Debug.Log("起動したので、遷移を管理する。最初はリストビュー");
        Go(State.ListView);
    }

    private void Go(State state)
    {
        currentState = state;

        Debug.Log("画面の要素を起動する state:" + state);
        /*
            ここで、stateに応じたビューを用意したいところで、native側に共有部分のデータを送り出すだけ。
        */
    }


}
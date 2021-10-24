using System;
using System.Collections;
using UnityEngine;

public partial class AltaEntryPoint
{
    // TODO: ユーザーランドが持つ変化域を保持するところ、ユーザーランド側に持たせたいがとりあえずこちらに。インターフェースとかで露出させられると良い。
    private State currentState;

    public IEnumerator Setup()
    {
        // レシーバのセット
        // TODO: disconnectedとかも検知できたほうがいい。とりあえずの代物で、実際にはSetできる要素を受け付けることはない。
        AltaEntryPoint.SetOnReceived(
            bytes =>
                {
                    Debug.Log("headからのデータを受け取った:" + bytes.Length + " bytes");

                }
            );

        Debug.Log("起動したので、遷移を管理する。最初はリストビュー");


    // ここから、最初はサーバが立ち上がってないタイミングがありえるので、それをどうするかって話が始まるのか。送信に失敗したら云々が必要か。
    // TODO: 現在は適当なリトライ機構が入ってる、とりあえずこれでclientが来たら何かできるようになった。
    retry:
        try
        {
            Go(State.ListView);
            Debug.Log("送り出せたのでconnected");
            yield break;
        }
        catch (Exception e)
        {
            Debug.Log("e:" + e);
        }

        // 1秒待ち
        yield return new WaitForSeconds(1);

        goto retry;
    }

    // 画面遷移を切り替える
    private void Go(State state)
    {
        currentState = state;

        Debug.Log("画面の要素を起動する state:" + state);
        /*
            ここで、stateに応じたビューを用意したいところで、native側に共有部分のデータを送り出すだけ。
            stateを送り出す必要があり、gRPCの生成系とかを使いたいところだが、さて、、まあとりあえず試験Appだから適当に送る。
        */
        AltaEntryPoint.Send(new byte[] { (byte)state });
    }
}
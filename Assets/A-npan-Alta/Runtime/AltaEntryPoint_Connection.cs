using System;
using System.Collections;
using UnityEngine;

public partial class AltaEntryPoint
{
    // TODO: ユーザーランドが持つ変化域を保持するところ、ユーザーランド側に持たせたいがとりあえずこちらに。インターフェースとかで露出させられると良い。
    private State currentState;

    public IEnumerator Setup(AltaEntryPoint entryPoint)
    {
        var justConnected = false;
        /*
            ここでこの粒度でやるべきなのは、セットアップ = 接続待ち処理の開始で、
                ・接続が来たらstateを返すようなことを自律的に予約する
                ・切断したら検知
                    ・独自UIを出す or native側を破棄してリセット
                ・セキュアさはとりあえず置いておく
        */

        // レシーバのセット
        // TODO: disconnectedとかも検知できたほうがいい。とりあえずの代物で、実際にはSetできる要素を受け付けることはない。
        entryPoint.onReceived = bytes =>
        {
            Debug.Log("headからのデータを受け取った:" + bytes.Length + " bytes");
            // TODO: ここで、receiveしたデータペイロードをなんとかする。そろそろ構造化しないとな
        };
        entryPoint.onConnected = () =>
        {
            Debug.Log("接続がきた");
            justConnected = true;
        };


        // ここから、最初はサーバが立ち上がってないタイミングがありえるので、それをどうするかって話が始まるのか。送信に失敗したら云々が必要か。
        // TODO: 現在は適当なリトライ機構が入ってる、とりあえずこれでclientが来たら何かできるようになった。

        // 一応作ってる接続後の空転ぶロック
        while (true)
        {
            if (justConnected)
            {
                justConnected = false;
                break;
            }

            yield return null;
        }

    reconnect:

        Debug.Log("view側が起動したので、遷移を管理する。最初はリストビュー");


        // 接続がきたのでレスポンスとして初期遷移を返す
        var state = State.ListView;
        currentState = state;

        /*
            ここで、stateに応じたビューを用意したいところで、native側に共有部分のデータを送り出すだけ。
            stateを送り出す必要があり、gRPCの生成系とかを使いたいところだが、さて、、まあとりあえず試験Appだから適当に送る。
        */
        AltaEntryPoint.Send(new byte[] { (byte)state });

        while (true)
        {
            // 二度目以降の接続がきた
            if (justConnected)
            {
                justConnected = false;
                goto reconnect;
            }
            yield return null;
        }

    }
}
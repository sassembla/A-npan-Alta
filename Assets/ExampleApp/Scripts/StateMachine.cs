using System;
using System.Collections;
using UnityEngine;

/*
    TODO: サーバとクライアント間で握るstates、protoで書いて生成系とかだとすごくいいね。
*/
public enum State
{
    None,
    ListView,
    TimeView,
    NewItemView
}

// とりあえずA-npanを使う場合の予定地だが、思ったよりなんもすることがないかも。
public class StateMachine : MonoBehaviour, IA_npan_Alta
{
    void Start()
    {
        Application.targetFrameRate = 60;
    }
}
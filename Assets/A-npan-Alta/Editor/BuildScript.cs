using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildScript
{
    // コンパイル時にNative-siceローカルで動くExectutorを作成するコードを実行可能にする。
    // TODO: AltaHeadEngineをNativeに展開するためのコードをNative側に導入する部分。

    /*
        通信に成功するパターンを見つけたので記録しておく。
        ・starscream + WebuSocketServer
        ・buildSystemをlegacyからdefaulへ変更
        ・starscreamをspmに登録、targetをUnityFrameworkにセット

        こうすることで、起動時にいい感じに読めるのがわかった。前回からの変更点はtargetまわりなので、そのうち再現実験がしたい。
        ただきちんと通過できるケースを作れたことはとても良い。

        TODO: 問題点として、storyboardとかのファイル系が全くコピーされないというのがある。
        これはなんか、根本的に「Native側の人はどこでどうコードを書くのか」という部分に対してanswerを出さないといけないということになる。
        満たしたいものはかなり多いので大変な気がする。

        とりあえずサンプルをいっぱい開発してもらう、という段階にいけそう。
    */
}

//
//  ListViewCell.swift
//  UnityFramework
//
//  Created by coltemonikha on 2021/11/10.
//

import Foundation
import Combine

public class ListViewCell : UITableViewCell {
    // 適当なデータを用意、これの初期化をUnity側にやらせればいい。
    private var data:[(title: String, description: String)] = [
        ("AAA", "aaa aaaaa aaaa"),
        ("BBB", "bbb bbbbb bbbb"),
        ("CCC", "ccc ccccc cccc"),
        ("DDD", "ddd ddddd dddd"),
        ("EEE", "eee eeeee eeee"),
        ("FFF", "fff fffff ffff"),
        ("GGG", "ggg ggggg gggg"),
        ("HHH", "hhh hhhhh hhhh"),
    ]
    

    private var cancellable: AnyCancellable?
        
    public override func prepareForReuse() {
        super.prepareForReuse()
        cancellable?.cancel()
    }
    
    func configure(with index: Int) {
        // ここでCacheくんがdataを持ってて云々が出来上がる。同じ仕掛けで内側がUnityみたいなやつを手配できればいい。やっぱURLレイヤだな
        // TODO: 問題なのが、これのキャッシュ実装でデータがキャッシュ側に入るところかな。レスポンスのタイプの指定をキャッシュプールの指定でやる感じか。protoを指定してprotoが帰ってくるようにすると楽か？ req-resが固定できればいいのか、それはgRPCだなあ。 んでそこまでの強度は求めないようにしたいので、req-resをラップする形のものを定義可能にしよう。ここではindexを与えるとdataが帰ってくる、みたいなのを規定することにしよう。
        // inputとoutputが組み付くのが色々ある。
        cancellable = Cache.shared.load(url: URL(string: "a")!) { [weak self] image in
            // Use default settings
            var content = self!.defaultContentConfiguration()

            // パラメータ類のセット、ここをasyncにできるんだろうか。 既存実装見てみよ
            content.text = self!.data[index].title
            content.secondaryText = self!.data[index].description
            
            // 今日のdone
            if (index % 2 == 0) {
                content.image = UIImage(systemName: "checkmark.square")
                
    //            TODO: グレーカラーに設定を変えたいが、効いてる節がない。まあとりあえず置いておく。
    //            let configuration = UIImage.SymbolConfiguration(hierarchicalColor: .systemRed)
    //            content.image?.applyingSymbolConfiguration(configuration)
            } else {
                content.image = UIImage(systemName: "square")
            }

            // contentの更新
            self!.contentConfiguration = content
            
            // キャンセル対象を初期化
            self?.cancellable = nil
        }
    }
}

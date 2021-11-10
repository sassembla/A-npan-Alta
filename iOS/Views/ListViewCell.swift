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
    
    // この辺が用意できないとダメか、、あれでもできるよね
    func configure(with index: Int) {
        // Use default settings
        var content = defaultContentConfiguration()

        // パラメータ類のセット、ここをasyncにできるんだろうか。 既存実装見てみよ
        content.text = data[index].title
        content.secondaryText = data[index].description
        
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
        contentConfiguration = content
    }
}

//
//  ListViewController.swift
//  UnityFramework
//
//  Created by coltemonikha on 2021/11/07.
//

import Foundation
import UIKit

class ListViewController: UIViewController, UITableViewDelegate, UITableViewDataSource {
    
    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var addButton: UIButton!
    
    private var contents: [UIListContentConfiguration] = [
        {
            //
            var content: UIListContentConfiguration = .valueCell()
            content.textProperties.font = .systemFont(ofSize: 20, weight: .heavy)
            content.textProperties.color = .systemGreen
            content.secondaryTextProperties.font = .monospacedSystemFont(ofSize: 16, weight: .light)
            content.secondaryTextProperties.color = .systemOrange
            content.imageProperties.tintColor = .systemPurple

            return content
        }(),
        {
            var content: UIListContentConfiguration = .subtitleCell()
            content.textProperties.font = .systemFont(ofSize: 20, weight: .heavy)
            content.textProperties.color = .systemBlue
            content.secondaryTextProperties.font = .systemFont(ofSize: 16, weight: .light)
            content.secondaryTextProperties.color = .systemTeal
            content.imageProperties.tintColor = .systemRed

            return content
        }()
    ]
    
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
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        print("ListViewController view did load.")
        
        // ここでロード待ちを行う感じになりそう。
    }
    
    @IBAction func onTapped(_ sender: Any) {
        print("onTapped", sender)
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return data.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath)

        // Use default settings
        var content = cell.defaultContentConfiguration()

        // パラメータ類のセット、ここをasyncにできるんだろうか。 既存実装見てみよ
        content.text = data[indexPath.row].title
        content.secondaryText = data[indexPath.row].description
        
        // 今日のdone
        if (indexPath.row % 2 == 0) {
            content.image = UIImage(systemName: "checkmark.square")
            
//            TODO: グレーカラーに設定を変えたいが、効いてる節がない。まあとりあえず置いておく。
//            let configuration = UIImage.SymbolConfiguration(hierarchicalColor: .systemRed)
//            content.image?.applyingSymbolConfiguration(configuration)
        } else {
            content.image = UIImage(systemName: "square")
        }

        // contentの更新
        cell.contentConfiguration = content
        
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        print("tapされた", indexPath.row)
        tableView.deselectRow(at: indexPath, animated: true)
        
        // ここからUnity側にリクエストを投げる。 protobufでやろう。定義どうすっかな〜〜、汎用oneofみたいなのが作れれば。データ定義もUnity側からprotoで流れてくるのが理想だなー。partialみたいなので。
        
        var info = Info()
        info.id = Int64(indexPath.row)
        info.data = "something"
        do {
            let binaryData: Data = try info.serializedData()
            AltaHeadEngine.send(binaryData)
        } catch {
            
        }
    }
}

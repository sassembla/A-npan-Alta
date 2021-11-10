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
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        print("ListViewController view did load.")
    }
    
    @IBAction func onTapped(_ sender: Any) {
        print("onTapped", sender)
    }
    
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
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // 全体何件って情報は取得しないとダメか。
        return data.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath) as! ListViewCell

        cell.configure(with: indexPath.row)
        
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        print("tapされた", indexPath.row)
        tableView.deselectRow(at: indexPath, animated: true)
        
        // ここからUnity側にリクエストを投げる。 protobufでやろう。定義どうすっかな〜〜、汎用oneofみたいなのが作れれば。データ定義もUnity側からprotoで流れてくるのが理想だなー。partialみたいなので。 oneofに定義を足すのがどう？っていうのはあるんだけど、とりあえずそれでやってみるか。型定義でやらないと死ぬ。あとresponseを得るような書き方がしたいな。
        
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

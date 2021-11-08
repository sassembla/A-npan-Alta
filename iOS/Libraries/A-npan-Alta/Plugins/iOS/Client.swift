//
//  Client.swift
//  UnityFramework
//
//  Created by livetune on 2021/08/01.
//
// 中継インスタンス

import Foundation
import Network

public class Client {
    init() {}
    
    // 起動時の画面を構築
    // TOOD: このへんのインターフェースを整える必要がある
    // storyboard名とかを開けるインターフェースを考えて、その骨組みも用意する必要がある。
    func open(index: Int) {
        /*
             enum State
             {
                 None,
                 ListView,
                 TimeView,
                 NewItemView
             }
         */
        var storyboardName = ""
        switch (index) {
        case 1:
            storyboardName = "ListView"
        case 2:
            storyboardName = "TimeView"
        case 3:
            storyboardName = "NewItemView"
        default:
            break
        }
        
        let window = UIApplication.shared.windows.filter {$0.isKeyWindow}.first!
        let currentBundle = Bundle(for: type(of: self))
        let storyboard = UIStoryboard(name: storyboardName, bundle: currentBundle)
        let controller = storyboard.instantiateInitialViewController()!
        controller.modalPresentationStyle = .fullScreen
        window.rootViewController?.present(controller, animated: false, completion: nil)
    }
 }

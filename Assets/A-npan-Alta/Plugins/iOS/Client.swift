//
//  Client.swift
//  UnityFramework
//
//  Created by livetune on 2021/08/01.
//
// 中継インスタンス

import Foundation
import Network
// import Starscream


public class Client {
    
    var connection: NWConnection
    let queue = DispatchQueue(label: "com.kissaki.alta")
    
    init() {
        let host = NWEndpoint.Host("127.0.0.1")
        let port = NWEndpoint.Port(integerLiteral: 1129)
        /// NWConnection にホスト名とポート番号を指定して初期化
        connection = NWConnection(host: host, port: port, using: .tcp)
        /// コネクションのステータス監視のハンドラを設定
        connection.stateUpdateHandler = { newState in
            switch newState {
            case .ready:
                NSLog("Ready to send")
//                self.send(text:"test!")
            case .waiting(let error):
                NSLog("\(#function), \(error)")
            case .failed(let error):
                NSLog("\(#function), \(error)")
            case .setup: break
            case .cancelled: break
            case .preparing: break
            @unknown default:
                fatalError("なんぞこれ")
            }
        }
        
        /// コネクションの開始
        connection.start(queue: queue)// nw_protocol_get_quic_image_block_invoke dlopen libquic failed これかー、
        receive(on: connection)
        
        
        // こちらにView追加をやっていくと良さそう
        var window = UIApplication.shared.keyWindow
        var view = UIView(frame: window!.frame)
        view.backgroundColor = UIColor.black;
        window?.addSubview(view)
    }
    
    func receive(on connection: NWConnection) {
        /// コネクションからデータを受信
        connection.receive(minimumIncompleteLength: 0, maximumLength: Int(UInt32.max)) { [weak self] (data, _, _, error) in
            if let data = data {
                let text = String(data: data, encoding: .utf8)!
//                    let message = Message(text: text, isReceived: true)
//                self?.messages.acceptAppending(message)
                self?.receive(on: connection)
            } else {
                NSLog("\(#function), Received data is nil")
            }
        }
    }
    
    func send(text: String) {
        let message = "\(text)\n"
        let data = message.data(using: .utf8)!

        /// メッセージの送信
        connection.send(content: data, completion: .contentProcessed { [unowned self] (error) in
            if let error = error {
                NSLog("\(#function), \(error)")
            } else {
//                let message = Message(text: text, isReceived: false)
//                self.messages.acceptAppending(message)
            }
        })
    }
}

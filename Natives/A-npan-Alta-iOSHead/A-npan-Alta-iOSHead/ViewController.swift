//
//  ViewController.swift
//  A-npan-Alta-iOSHead
//
//  Created by livetune on 2021/07/31.
//

import UIKit
import Network
import Starscream

class ViewController: UIViewController, WebSocketDelegate {
    
    var socket: WebSocket!
    var isConnected = false
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        var request = URLRequest(url: URL(string: "http://127.0.0.1:1129")!)
        request.timeoutInterval = 5
        socket = WebSocket(request: request)
        socket.delegate = self
        socket.connect()
        
        
        
    }
    
    // データの受け取り部
    func didReceive(event: WebSocketEvent, client: WebSocket) {
        switch event {
        case .connected(let headers):
            isConnected = true
            print("websocket is connected: \(headers)")
            
            // 適当な送信
            socket.write(string: "hello there!")
        case .disconnected(let reason, let code):
            isConnected = false
            print("websocket is disconnected: \(reason) with code: \(code)")
        case .text(let string):
            print("Received text: \(string)")
        case .binary(let data):
            print("Received data: \(data.count)")
//            socket.write(string: "hello there!")// ちゃんと動作するのを確認した
        case .ping(_):
            break
        case .pong(_):
            break
        case .viabilityChanged(_):
            break
        case .reconnectSuggested(_):
            break
        case .cancelled:
            isConnected = false
        case .error(let error):
            isConnected = false
            print("error!!")
        default:
            print("なんか予想外")
        }
    }
    

}

// tcpの送受信系、こっちを使う方が楽だな〜とは思うが、とりあえずwsプロトコルのレールがある上に作り上げよう。
//class ChatClient {
//    let connection: NWConnection
//    let queue = DispatchQueue(label: "com.unifa-e.ChatClient")
//
//    struct Message {
//        let text: String
//        let isReceived: Bool
//    }
//
//    /// 送受信したメッセージ
////    var messages = BehaviorRelay<[Message]>(value: [])
//
//    init(ip: String, port: UInt16) {
//        let host = NWEndpoint.Host(ip)
//        let port = NWEndpoint.Port(integerLiteral: port)
//
//        /// NWConnection にホスト名とポート番号を指定して初期化
//        self.connection = NWConnection(host: host, port: port, using: .tcp)
//
//        /// コネクションのステータス監視のハンドラを設定
//        self.connection.stateUpdateHandler = { (newState) in
//            switch newState {
//            case .ready:
//                NSLog("Ready to send")
//            case .waiting(let error):
//                NSLog("\(#function), \(error)")
//            case .failed(let error):
//                NSLog("\(#function), \(error)")
//            case .setup: break
//            case .cancelled: break
//            case .preparing: break
//            @unknown default:
//                fatalError("なんぞこれ")
//            }
//        }
//
//        /// コネクションの開始
//        self.connection.start(queue: queue)
//        self.receive(on: connection)
//    }
//
//    func receive(on connection: NWConnection) {
//        /// コネクションからデータを受信
//        connection.receive(minimumIncompleteLength: 0, maximumLength: Int(UInt32.max)) { [weak self] (data, _, _, error) in
//            if let data = data {
//                let text = String(data: data, encoding: .utf8)!
//                let message = Message(text: text, isReceived: true)
////                self?.messages.acceptAppending(message)
//                self?.receive(on: connection)
//            } else {
//                NSLog("\(#function), Received data is nil")
//            }
//        }
//    }
//
//    func send(text: String) {
//        let message = "\(text)\n"
//        let data = message.data(using: .utf8)!
//
//        /// メッセージの送信
//        connection.send(content: data, completion: .contentProcessed { [unowned self] (error) in
//            if let error = error {
//                NSLog("\(#function), \(error)")
//            } else {
//                let message = Message(text: text, isReceived: false)
////                self.messages.acceptAppending(message)
//            }
//        })
//    }
//}

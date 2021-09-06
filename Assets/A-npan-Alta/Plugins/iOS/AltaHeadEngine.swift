import Foundation
import Network
 import Starscream


@objc public class AltaHeadEngine : NSObject {

    @objc public static func initialize(_ code: String) {
        // 中継インスタンス作成
        let head = AltaHeadConnection()
        
//       let head2 = AltaHeadConnection_raw_tcp()
        
//        let head3 = AltaHeadConnection_iOS_ws()
        
        // ビュー用のインスタンス作成
        let client = Client()
    }
}

 private class AltaHeadConnection : WebSocketDelegate {
     var socket: WebSocket
     var isConnected = false

    init() {
        var request = URLRequest(url: URL(string: "http://127.0.0.1:1129")!)
 //        request.timeoutInterval = 5
        socket = WebSocket(request: request)
        socket.delegate = self
        socket.connect()
    }
    
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
         print("ふむ〜〜？")
     }
 }


private class AltaHeadConnection_raw_tcp {
    var connection: NWConnection
    let queue = DispatchQueue(label: "com.kissaki.alta")
    
    init() {
        let host = NWEndpoint.Host("127.0.0.1")
        let port = NWEndpoint.Port(integerLiteral: 1129)
        // NWConnection にホスト名とポート番号を指定して初期化
        connection = NWConnection(host: host, port: port, using: .tcp)
        // コネクションのステータス監視のハンドラを設定
        connection.stateUpdateHandler = { newState in
            switch newState {
            case .ready:
                NSLog("Ready to send")
                self.send(text:"test!")
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

        // コネクションの開始
        connection.start(queue: queue)// nw_protocol_get_quic_image_block_invoke dlopen libquic failed
        receive(on: connection)
    }

    func receive(on connection: NWConnection) {
        // コネクションからデータを受信
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

        // メッセージの送信
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


private class AltaHeadConnection_iOS_ws {
    private var webSocketTask: URLSessionWebSocketTask?
    
    init() {
        let url = URL(string: "ws://127.0.0.1:1129")!
        webSocketTask = URLSession.shared.webSocketTask(with: url)
        webSocketTask?.receive(completionHandler: onReceive)
        webSocketTask?.resume()
    }
    
    func disconnect() {
        webSocketTask?.cancel(with: .normalClosure, reason: nil)
    }

    private func onReceive(incoming: Result<URLSessionWebSocketTask.Message, Error>) {
        print("receiveしてる", incoming)
    }
    
    deinit {
        disconnect()
    }
}

// こんな感じのwsライブラリを読み込めるといい感じになる。で、Entryからこのプラグインを呼び出して、そこから先はAPIになっていると良い。



// import UIKit
// import Network
// import Starscream

// class ViewController: UIViewController, WebSocketDelegate {
//     var socket: WebSocket!
//     var isConnected = false

//     override func viewDidLoad() {
//         super.viewDidLoad()
//         // Do any additional setup after loading the view.

//         var request = URLRequest(url: URL(string: "http://127.0.0.1:1129")!)
//         request.timeoutInterval = 5
//         socket = WebSocket(request: request)
//         socket.delegate = self
//         socket.connect()



//     }

//     // データの受け取り部
//     func didReceive(event: WebSocketEvent, client: WebSocket) {
//         switch event {
//         case .connected(let headers):
//             isConnected = true
//             print("websocket is connected: \(headers)")

//             // 適当な送信
//             socket.write(string: "hello there!")
//         case .disconnected(let reason, let code):
//             isConnected = false
//             print("websocket is disconnected: \(reason) with code: \(code)")
//         case .text(let string):
//             print("Received text: \(string)")
//         case .binary(let data):
//             print("Received data: \(data.count)")
// //            socket.write(string: "hello there!")// ちゃんと動作するのを確認した
//         case .ping(_):
//             break
//         case .pong(_):
//             break
//         case .viabilityChanged(_):
//             break
//         case .reconnectSuggested(_):
//             break
//         case .cancelled:
//             isConnected = false
//         case .error(let error):
//             isConnected = false
//             print("error!!")
//         default:
//             print("なんか予想外")
//         }
//     }
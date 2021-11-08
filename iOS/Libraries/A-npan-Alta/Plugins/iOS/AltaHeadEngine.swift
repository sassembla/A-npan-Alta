import Foundation
import Network

@objc public class AltaHeadEngine : NSObject {
    
    @objc public static func initialize(_ code: String) {
        
        // ビュー用のインスタンス作成
        let client = Client()
        
        // 中継インスタンス作成
        let head3 = AltaHeadConnection_iOS_ws()
        head3.connect(client: client)
    }
}

class AltaHeadConnection_iOS_ws : NSObject, URLSessionWebSocketDelegate {
    private var webSocketTask: URLSessionWebSocketTask?
    private var _client: Client?
    
    // initで扱いたいけどダメなもん？
    func connect(client: Client) {
        _client = client
        
        // TODO: URLが固定だけど、とりあえずのしろもの
        let url = URL(string: "ws://127.0.0.1:1129")!
        
        // delegateをセットすると、openとcloseが受け取れる
        let session = URLSession(configuration: .default, delegate: self, delegateQueue: nil)
        
        // sessionからWebSocketTaskを作り出す
        webSocketTask = session.webSocketTask(with: url)
        webSocketTask?.receive(completionHandler: onReceive)
        
        // 接続開始
        webSocketTask?.resume()
    }
    
    func disconnect() {
        webSocketTask?.cancel(with: .normalClosure, reason: nil)
    }

    private func onReceive(incoming: Result<URLSessionWebSocketTask.Message, Error>) {
        switch(incoming){
        case.success(let message):
            switch message {
            case .data(let bytes):
                // 特定のシーンに該当するstoryboardを呼び出す
                // この時点ではUInt8になってる
                let index = Int(bytes[0])
                onGo(index: index)
                break;
            case .string(let str):
                print("unexpected, server sent string:", str)
                break;
            default:
                print("invalid data, server sent something wrong.")
            }
            break
        
        case .failure(let err):
            break
        }
        
        // TODO: 送信系、死活監視に使えるか？ ping-pongがあればそれでいい気はする
//        webSocketTask?.send(URLSessionWebSocketTask.Message.string("here comes from client"), completionHandler: {e in
//            guard let err = e else {
//                print("send succeeded.")
//                return
//            }
//
//            print("error:", err)
//        })
        
        // 継続待ち
        webSocketTask?.receive(completionHandler: onReceive)
    }
    
    private func onGo(index:Int) {
        switch index {
        case 1,2,3:
            DispatchQueue.main.async {
                self._client?.open(index: index)
            }
            
            break
        default:
            print("unknown index:", index)
        }
        
    }
    
    deinit {
        disconnect()
    }
    
    func urlSession(_ session: URLSession, webSocketTask: URLSessionWebSocketTask, didOpenWithProtocol protocolName: String?) {
        print("opened")
    }

    func urlSession(_ session: URLSession, webSocketTask: URLSessionWebSocketTask, didCloseWith closeCode: URLSessionWebSocketTask.CloseCode, reason: Data?) {
        print("closed")
    }
    
    func urlSession(_ session: URLSession, task: URLSessionTask, didCompleteWithError: Error?) {
        print("didCompleteWithError")
    }
}

import Foundation

@objc public class BootHead : NSObject {

    @objc public static func initialize(_ code: String) {
        // 中継インスタンス作成
        let client = Client()
    }
}

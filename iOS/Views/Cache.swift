//
//  Cache.swift
//  UnityFramework
//
//  Created by coltemonikha on 2021/11/10.
//

import Foundation
import Combine

public class Content {
    
}

public class Cache {
    
    public static let shared = Cache()

    private let cachedContents = NSCache<NSString, Content>()
    
    public final func image(index: Int) -> Content? {
        return cachedContents.object(forKey: NSString.init(string: index.description))
    }
    
    // indexを指定するとdata(text + condition)を返すキャッシュクラス
    // Unityを基底に使う場合、実ファイルのbyte列をファイルキャッシュから返してくるのがUnityで、それをオンメモリでキャッシュするのがこのレイヤーという形になりそう。
    final func load(index: Int, completion: @escaping (Content?) -> Void) -> AnyCancellable? {
        
        // Check for a cached image.
        if let cachedContent = image(index: index) {
            DispatchQueue.main.async {
                completion(cachedContent)
            }
            return nil
        }
        
        // URLRequestを組み立てて、データ取得して取得できたら画像を返してくるようになっている。
        // この部分を提供する必要がある。この場合は、リクエストに対してもっと情報が欲しいところなんだよな、、index -> リストされるコンテンツ情報なので、
        let request = URLRequest(url: index)
        return URLSession.shared.dataTaskPublisher(for: request)
            .tryCatch({ error -> URLSession.DataTaskPublisher in
                throw error
            })
            .tryMap({ data, response -> UIImage in
                guard let image = UIImage(data: data) else {
                    throw URLError(.resourceUnavailable)
                }
                return image
            })
            .replaceError(with: nil)
            .receive(on: DispatchQueue.main)
            .sink(receiveValue: { [weak self] image in
                if let image = image, let self = self {
                    self.cachedImages.setObject(image, forKey: url as NSURL)
                }
                completion(image)
            })
    }
}

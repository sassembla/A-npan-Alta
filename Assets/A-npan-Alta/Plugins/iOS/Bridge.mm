#import <UnityFramework/UnityFramework-Swift.h>

extern "C" {
    void initialize(const char *code) {
        [AltaHeadEngine initialize:[NSString stringWithUTF8String:code]];
    }
}
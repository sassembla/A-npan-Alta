#import <UnityFramework/UnityFramework-Swift.h>

extern "C" {
    void initialize(const char *code) {
        [BootHead initialize:[NSString stringWithUTF8String:code]];
    }
}
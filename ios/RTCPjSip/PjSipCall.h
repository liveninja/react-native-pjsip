#import <React/RCTUtils.h>
#import <VialerPJSIP/pjsua.h>

@interface PjSipCall : NSObject

@property int id;
@property bool isHeld;
@property bool isMuted;
@property NSString* callSetupId;

+ (instancetype)itemConfig:(int)id callSetupId:(NSString*)callSetupId;
+ (instancetype)itemConfig:(int)id;

- (void)hangup;
- (void)decline;
- (void)answer;
- (void)reInvite;
- (void)hold;
- (void)unhold;
- (void)mute;
- (void)unmute;
- (void)xfer:(NSString*) destination;
- (void)xferReplaces:(int) destinationCallId;
- (void)redirect:(NSString*) destination;
- (void)dtmf:(NSString*) digits;

- (void)onStateChanged:(pjsua_call_info) callInfo;
- (void)onMediaStateChanged:(pjsua_call_info) callInfo;

- (NSDictionary *)toJsonDictionary:(bool) isSpeaker;

@end

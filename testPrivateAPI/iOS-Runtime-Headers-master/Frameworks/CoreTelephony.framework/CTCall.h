/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCall : NSObject {
    NSString * _callID;
    NSString * _callState;
}

@property (nonatomic, copy) NSString *callID;
@property (nonatomic, copy) NSString *callState;

+ (id)callForCTCallRef:(struct __CTCall { }*)arg1;
+ (id)callForCXCall:(id)arg1;

- (id)callID;
- (id)callState;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setCallID:(id)arg1;
- (void)setCallState:(id)arg1;

@end
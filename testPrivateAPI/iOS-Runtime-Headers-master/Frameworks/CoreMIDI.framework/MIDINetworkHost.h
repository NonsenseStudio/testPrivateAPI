/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDINetworkHost : NSObject {
    void * _imp;
}

@property (nonatomic, readonly, retain) NSString *address;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *netServiceDomain;
@property (nonatomic, readonly, retain) NSString *netServiceName;
@property (nonatomic, readonly) unsigned int port;

+ (id)fromAddressAsText:(id)arg1 withName:(id)arg2;
+ (id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned int)arg3;
+ (id)hostWithName:(id)arg1 netService:(id)arg2;
+ (id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3;

- (id)address;
- (id)addressAsText;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (BOOL)hasSameAddressAs:(id)arg1;
- (id)host;
- (id)init;
- (id)name;
- (id)netServiceDomain;
- (id)netServiceName;
- (unsigned int)port;
- (void)setName:(id)arg1;

@end
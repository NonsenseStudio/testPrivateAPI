/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProxyClientRegistry : NSObject {
    GEOProxyClient * _currentComposite;
    NSMutableSet * _currentSet;
    NSLock * _lock;
}

+ (id)sharedRegistry;

- (void)_updateComposite;
- (void)addClient:(id)arg1;
- (void)dealloc;
- (void)enableRegistry;
- (void)removeClient:(id)arg1;

@end
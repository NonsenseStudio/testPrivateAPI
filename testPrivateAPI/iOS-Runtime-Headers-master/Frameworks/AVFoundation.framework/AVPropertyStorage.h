/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPropertyStorage : NSObject {
    NSArray * _keysRequiringExplicitPerThreadSignal;
    NSMutableDictionary * _propertyStorage;
    NSObject<OS_dispatch_queue> * _storageAccessWorkQueue;
}

- (void)dealloc;
- (void)didAccessKVOForAllKeys;
- (void)didAccessKVOForKey:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithKeysRequiringExplicitPerThreadSignal:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(id /* block */)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)shouldUsePropertyStorageCacheForKey:(id)arg1;
- (void)willAccessKVOForAllKeys;
- (void)willAccessKVOForKey:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXRelationships : NSObject {
    unsigned int  mNextId;
    NSString * mPath;
    NSMutableDictionary * mRelationshipMap;
    NSMutableArray * mRelationships;
}

- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3;
- (id)addRelationshipForKey:(id)arg1 type:(id)arg2 target:(id)arg3 external:(BOOL)arg4;
- (void)dealloc;
- (id)idForKey:(id)arg1;
- (id)initWithPath:(id)arg1;
- (BOOL)isEmpty;
- (id)path;
- (id)targetForKey:(id)arg1;
- (void)writeRelationshipsToFilename:(id)arg1 stream:(id)arg2;

@end
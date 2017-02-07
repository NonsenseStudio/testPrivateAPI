/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
    bool  mBuiltIn;
    unsigned int  mFormatId;
    EDString * mFormatString;
    bool  mReferenced;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)contentFormatWithFormatString:(id)arg1;
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned int)arg2;
+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned int)arg2 builtIn:(bool)arg3;

- (bool)builtIn;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)formatId;
- (id)formatString;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContentFormat:(id)arg1;
- (int)key;
- (bool)referenced;
- (void)setFormatId:(unsigned int)arg1;
- (void)setReferenced:(bool)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTEphemeralFilter : NSObject {
    unsigned char  mColumnIndex;
    unsigned int  mFilterIndex;
    NSArray * mRules;
}

@property (nonatomic, readonly) unsigned char columnIndex;
@property (nonatomic, readonly) unsigned int filterIndex;
@property (nonatomic, readonly) unsigned int ruleCount;

+ (id)filterWithIndex:(unsigned int)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;

- (unsigned char)columnIndex;
- (void)dealloc;
- (id)description;
- (id)filterByAddingRule:(id)arg1;
- (id)filterByClearingRules;
- (id)filterByRemovingRuleAtIndex:(unsigned int)arg1;
- (unsigned int)filterIndex;
- (id)filterWithRule:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithIndex:(unsigned int)arg1 columnIndex:(unsigned char)arg2 rules:(id)arg3;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;

@end
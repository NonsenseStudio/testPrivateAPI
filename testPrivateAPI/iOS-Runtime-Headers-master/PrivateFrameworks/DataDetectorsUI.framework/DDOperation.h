/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDOperation : NSOperation <NSCopying> {
    id  _container;
    int  _containerNotReadyTryCount;
    NSDictionary * _context;
    int  _generationNumber;
    BOOL  _ignoreSignatures;
    BOOL  _isCurrentlyUsingTheScanner;
    BOOL  _isDiscarded;
    BOOL  _needContinuation;
    struct __DDScanQuery { } * _query;
    NSArray * _results;
    int  _tryCount;
    unsigned int  _types;
}

@property (nonatomic, retain) id container;
@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic) unsigned int detectionTypes;
@property int generationNumber;
@property (nonatomic) BOOL ignoreSignatures;
@property BOOL isDiscarded;
@property BOOL needContinuation;
@property (nonatomic, retain) NSArray *results;
@property int tryCount;

+ (BOOL)_needsFullScannerForDetectionTypes:(unsigned int)arg1;
+ (struct __DDScanner { }*)_sharedScannerForTypes:(unsigned int)arg1;
+ (id /* block */)shouldUrlifyBlockForTypes:(unsigned int)arg1;
+ (id /* block */)urlificationBlockForTypes:(unsigned int)arg1;

- (void)_applyContainerRestrictionsToTypes;
- (BOOL)_containerReadyForDetection;
- (int)_createScanQuery;
- (struct __DDScanQuery { }*)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_setScanQuery:(struct __DDScanQuery { }*)arg1;
- (void)_updateGenerationNumber;
- (void)cancel;
- (void)cleanup;
- (id)container;
- (BOOL)containerIsReady;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)detectionTypes;
- (void)dispatchContainerModificationBlock:(id /* block */)arg1;
- (void)dispatchScanQueryCreationWithCompletionBlock:(id /* block */)arg1;
- (BOOL)doURLificationOnDocument;
- (int)generationNumber;
- (BOOL)ignoreSignatures;
- (id)initWithContainer:(id)arg1;
- (BOOL)isDiscarded;
- (void)main;
- (BOOL)needContinuation;
- (BOOL)needsFullScanner;
- (BOOL)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (id)results;
- (struct __DDScanQuery { }*)scanQuery;
- (void)setContainer:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDetectionTypes:(unsigned int)arg1;
- (void)setGenerationNumber:(int)arg1;
- (void)setIgnoreSignatures:(BOOL)arg1;
- (void)setIsDiscarded:(BOOL)arg1;
- (void)setNeedContinuation:(BOOL)arg1;
- (void)setResults:(id)arg1;
- (void)setTryCount:(int)arg1;
- (int)tryCount;

@end
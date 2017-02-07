/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectorySearchOperation : NSOperation {
    NSString * _accountID;
    NSError * _error;
    BOOL  _isExecuting;
    BOOL  _isFinished;
    BOOL  _numberOfMatchesExceededLimit;
    EKDirectorySearchQuery * _query;
    id /* block */  _resultsBlock;
    id  _searchID;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) BOOL numberOfMatchesExceededLimit;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (id)_processGroupsInResults:(id)arg1;
- (id)_processLocationsInResults:(id)arg1;
- (id)_processPeopleInResults:(id)arg1;
- (id)_processResourcesInResults:(id)arg1;
- (void)_processResults:(id)arg1;
- (id)_recordTypes;
- (void)cancel;
- (id)error;
- (id)init;
- (id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(id /* block */)arg3;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (BOOL)numberOfMatchesExceededLimit;
- (void)setError:(id)arg1;
- (void)setNumberOfMatchesExceededLimit:(BOOL)arg1;
- (void)start;

@end
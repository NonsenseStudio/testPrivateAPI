/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWritingWritingClaim : NSFileAccessClaim {
    NSFileAccessNode * _location1;
    NSFileAccessNode * _location2;
    unsigned int  _options1;
    unsigned int  _options2;
    NSURL * _url1;
    BOOL  _url1DidChange;
    NSURL * _url2;
    BOOL  _url2DidChange;
}

+ (BOOL)supportsSecureCoding;

- (id)allURLs;
- (BOOL)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned int)arg3 url:(id)arg4 options:(unsigned int)arg5 claimer:(id /* block */)arg6;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned int)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLsThenContinueInvokingClaimer:(id /* block */)arg1;

@end
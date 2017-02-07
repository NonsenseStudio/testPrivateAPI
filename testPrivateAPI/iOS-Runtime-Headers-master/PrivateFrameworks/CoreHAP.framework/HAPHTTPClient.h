/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPHTTPClient : NSObject {
    <HAPHTTPClientDebugDelegate> * _debugDelegate;
    NSObject<OS_dispatch_queue> * _debugDelegateQueue;
    <HAPHTTPClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _dnsName;
    struct HTTPClientPrivate { } * _httpClient;
    BOOL  _invalidateRequested;
    unsigned int  _port;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <HAPHTTPClientDebugDelegate> *debugDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *debugDelegateQueue;
@property (nonatomic) <HAPHTTPClientDelegate> *delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, copy) NSString *dnsName;
@property (nonatomic) BOOL invalidateRequested;
@property (nonatomic, readonly) unsigned int port;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (BOOL)_debugDelegateRespondsToSelector:(SEL)arg1;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id*)arg2;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned int x_3_1_2; char *x_3_1_3; unsigned int x_3_1_4; char *x_3_1_5; unsigned int x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned int x_3_1_9; struct { char *x_10_2_1; unsigned int x_10_2_2; char *x_10_2_3; unsigned int x_10_2_4; char *x_10_2_5; unsigned int x_10_2_6; char *x_10_2_7; unsigned int x_10_2_8; char *x_10_2_9; unsigned int x_10_2_10; char *x_10_2_11; unsigned int x_10_2_12; char *x_10_2_13; unsigned int x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned int x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned int x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; char *x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned char x11[32000]; char *x12; struct { /* ? */ } *x13; char *x14; unsigned int x15; struct iovec { void *x_16_1_1; unsigned int x_16_1_2; } x16[2]; }*)arg1 completionHandler:(id /* block */)arg2;
- (long)_initializeCoreUtilsHTTPClient;
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned int)arg4 timeout:(double)arg5 completionHandler:(id /* block */)arg6;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id*)arg2;
- (id)debugDelegate;
- (id)debugDelegateQueue;
- (id)delegate;
- (id)delegateQueue;
- (id)dnsName;
- (BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char)arg1 writeKey:(unsigned char)arg2 error:(id*)arg3;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (BOOL)invalidateRequested;
- (unsigned int)port;
- (id)queue;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned int)arg3 timeout:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)setDebugDelegate:(id)arg1;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (void)setDebugDelegateQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDnsName:(id)arg1;
- (void)setInvalidateRequested:(BOOL)arg1;
- (void)setQueue:(id)arg1;

@end
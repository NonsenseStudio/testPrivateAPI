/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechConnection : NSObject {
    NSXPCConnection * _connection;
    VSSpeechConnectionDelegateWrapper * _delegateWrapper;
    VSSpeechRequest * _request;
}

@property (nonatomic) <VSSpeechConnectionDelegate> *delegate;
@property (nonatomic, readonly) VSSpeechRequest *request;

- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInvalidated;
- (id)_remoteObject;
- (id)_remoteObjectWithErrorHandler:(id /* block */)arg1;
- (void)_setRequest:(id)arg1;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)continueCurrentSpeechRequest;
- (void)dealloc;
- (id)delegate;
- (void)getAutoDownloadedVoiceAssets:(id /* block */)arg1;
- (void)getLocalVoiceAssets:(id /* block */)arg1;
- (void)getLocalVoiceResources:(id /* block */)arg1;
- (void)getLogToFile:(id /* block */)arg1;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long)arg2 gender:(long)arg3 type:(long)arg4 reply:(id /* block */)arg5;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(id /* block */)arg2;
- (BOOL)isSystemSpeaking;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)pauseCurrentSpeechRequestAtMark:(long)arg1;
- (void)prewarmIfNeededWithRequest:(id)arg1;
- (id)request;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogToFile:(BOOL)arg1;
- (void)startSpeechRequest:(id)arg1;
- (void)stopCurrentSpeechRequestAtMark:(long)arg1;

@end
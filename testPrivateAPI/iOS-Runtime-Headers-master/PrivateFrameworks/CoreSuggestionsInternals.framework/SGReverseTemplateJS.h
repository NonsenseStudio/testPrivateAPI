/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS> {
    SGAsset * _asset;
    NSURL * _assetPath;
    SGReverseTemplatesJSDataDetectors * _dd;
    JSContext * _jsContext;
    JSVirtualMachine * _jsVM;
    NSString * _localeIdentifier;
    NSMutableArray * _memoryMappedFiles;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)emailToJsonLd:(id)arg1 reply:(id /* block */)arg2;
- (void)emailToOutput:(id)arg1 reply:(id /* block */)arg2;
- (void)freeJSContext;
- (id)getJSContext;
- (void)holdXpcTransactionForShortDelay;
- (id)init;
- (void)initCurrentAsset;
- (id)loadJSFromASCIIFile:(id)arg1;
- (id)outputExceptionsFromOutput:(id)arg1;
- (id)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2;
- (void)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2 reply:(id /* block */)arg3;
- (id)processLoadRequestWithFileName:(id)arg1;
- (void)schemaOrgToOutput:(id)arg1 reply:(id /* block */)arg2;
- (void)setAssetPath:(id)arg1 locale:(id)arg2;
- (BOOL)shouldDownloadFull:(id)arg1;
- (void)shouldDownloadFull:(id)arg1 reply:(id /* block */)arg2;
- (void)textMessageToOutput:(id)arg1 reply:(id /* block */)arg2;

@end
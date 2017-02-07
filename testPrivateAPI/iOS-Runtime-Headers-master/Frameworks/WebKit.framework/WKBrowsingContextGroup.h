/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroup> { 
        struct type { 
            unsigned char __lx[60]; 
        } data; 
    }  _pageGroup;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct OpaqueWKPageGroup { }*_pageGroupRef;
@property BOOL allowsJavaScript;
@property BOOL allowsPlugIns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL privateBrowsingEnabled;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct OpaqueWKPageGroup { }*)_pageGroupRef;
- (void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(BOOL)arg6;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(BOOL)arg5;
- (BOOL)allowsJavaScript;
- (BOOL)allowsJavaScriptMarkup;
- (BOOL)allowsPlugIns;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)privateBrowsingEnabled;
- (void)removeAllUserScripts;
- (void)removeAllUserStyleSheets;
- (void)setAllowsJavaScript:(BOOL)arg1;
- (void)setAllowsJavaScriptMarkup:(BOOL)arg1;
- (void)setAllowsPlugIns:(BOOL)arg1;
- (void)setPrivateBrowsingEnabled:(BOOL)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialLayout : NSObject {
    SKUIEditorialComponent * _editorial;
    int  _landscapeLinkLayoutIndex;
    int  _landscapeTextLayoutIndex;
    int  _landscapeTitleLayoutIndex;
    float  _landscapeWidth;
    int  _portraitLinkLayoutIndex;
    int  _portraitTextLayoutIndex;
    int  _portraitTitleLayoutIndex;
    float  _portraitWidth;
    SKUILayoutCache * _textLayoutCache;
}

@property (nonatomic, readonly) SKUIEditorialComponent *editorialComponent;
@property (nonatomic, readonly) SKUILayoutCache *layoutCache;

- (void).cxx_destruct;
- (id)_bodyTextLayoutRequestWithTotalWidth:(float)arg1;
- (id)_linkLayoutRequestWithTotalWidth:(float)arg1;
- (id)_titleTextLayoutRequestWithTotalWidth:(float)arg1;
- (id)bodyTextLayoutForOrientation:(int)arg1;
- (id)editorialComponent;
- (void)enqueueLayoutRequests;
- (id)initWithEditorial:(id)arg1 layoutCache:(id)arg2;
- (id)layoutCache;
- (float)layoutHeightForOrientation:(int)arg1 expanded:(BOOL)arg2;
- (id)linkLayoutForOrientation:(int)arg1;
- (void)setLayoutWidth:(float)arg1 forOrientation:(int)arg2;
- (id)titleTextLayoutForOrientation:(int)arg1;

@end
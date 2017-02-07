/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITracklistViewElement : SKUIViewElement {
    NSMutableArray * _sections;
    NSMutableArray * _tracks;
}

@property (nonatomic, readonly) SKUIHeaderViewElement *header;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSArray *tracks;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateTracksUsingBlock:(id /* block */)arg1;
- (id)header;
- (int)pageComponentType;
- (id)sections;
- (id)tracks;

@end
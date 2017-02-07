/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelRenderCommandEncoder : MTLIOAccelCommandEncoder

- (unsigned int)getType;
- (id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2;
- (void)setColorStoreAction:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setDepthCleared;
- (void)setDepthClipModeSPI:(unsigned int)arg1;
- (void)setDepthStoreAction:(unsigned int)arg1;
- (void)setStencilCleared;
- (void)setStencilStoreAction:(unsigned int)arg1;
- (void)textureBarrier;

@end
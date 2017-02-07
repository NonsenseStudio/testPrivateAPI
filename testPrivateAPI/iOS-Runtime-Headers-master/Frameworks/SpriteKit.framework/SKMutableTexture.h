/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKMutableTexture : SKTexture {
    struct __IOSurface { } * _ioSurface;
    BOOL  _ioSurfaceBacked;
    void * _pixelData;
    unsigned long  _pixelDataLength;
    int  _pixelFormat;
    struct CGSize { 
        float width; 
        float height; 
    }  _textureSize;
}

+ (id)mutableTextureWithSize:(struct CGSize { float x1; float x2; })arg1;

- (struct shared_ptr<jet_texture> { struct jet_texture {} *x1; struct __shared_weak_count {} *x2; })_backingTexture;
- (void)dealloc;
- (id)description;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 ioSurfaceBacked:(BOOL)arg2 pixelFormat:(int)arg3;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 pixelFormat:(int)arg2;
- (void)modifyPixelDataWithBlock:(id /* block */)arg1;

@end
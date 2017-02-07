/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLImageCanvas : NSObject <MDRenderTarget> {
    BOOL  _allowAlpha;
    BOOL  _canMakeImage;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> > { 
        struct __compressed_pair<ggl::Texture *, std::__1::default_delete<ggl::Texture> > { 
            struct Texture {} *__first_; 
        } __ptr_; 
    }  _colorBuffer;
    float  _contentScale;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    }  _depthStencilBuffer;
    struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; } * _device;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    }  _flippedRenderTarget;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
        struct __compressed_pair<ggl::IOSurfaceTexture *, std::__1::default_delete<ggl::IOSurfaceTexture> > { 
            struct IOSurfaceTexture {} *__first_; 
        } __ptr_; 
    }  _flippedSurfaceTexture;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned int colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _format;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture> > { 
        struct __compressed_pair<ggl::Texture *, std::__1::default_delete<ggl::Texture> > { 
            struct Texture {} *__first_; 
        } __ptr_; 
    }  _msaaResolveBuffer;
    BOOL  _recreateRenderTarget;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    }  _renderTarget;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned int colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _resolvedRenderTargetFormat;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    BOOL  _useMultisampling;
}

@property (nonatomic) BOOL allowAlpha;
@property (nonatomic, readonly) float averageFPS;
@property (nonatomic) float contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; /* Warning: unhandled struct encoding: '{unique_ptr<md::SharedDeviceResources' */ struct x3; }*device; /* unknown property attribute:  std::__1::default_delete<md::SharedDeviceResources> >=^{SharedDeviceResources}}}} */
@property (nonatomic, readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned int x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*finalRenderTarget;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned int x2; unsigned int x3; int x4; }*format;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*imageTexture;
@property (nonatomic, readonly) BOOL multiSample;
@property (nonatomic, readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned int x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*renderTarget;
@property (nonatomic, readonly) struct RenderTargetFormat { int x1[4]; unsigned int x2; unsigned int x3; int x4; } resolvedRenderTargetFormat;
@property (nonatomic, readonly) BOOL shouldRasterize;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } sizeInPixels;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createRenderTarget;
- (void)_destroyRenderTarget;
- (BOOL)allowAlpha;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapDataWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; }*)arg1;
- (float)contentScale;
- (struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)device;
- (void)didDrawView;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned int x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)finalRenderTarget;
- (struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)finalSurface;
- (const struct RenderTargetFormat { int x1[4]; unsigned int x2; unsigned int x3; int x4; }*)format;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)imageTexture;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1 device:(struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)arg2 scale:(float)arg3 useMultisampling:(BOOL)arg4;
- (BOOL)multiSample;
- (struct CGImage { }*)newImageWithRenderer:(struct Renderer { int (**x1)(); struct Device {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; }*)arg1;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned int x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)renderTarget;
- (struct RenderTargetFormat { int x1[4]; unsigned int x2; unsigned int x3; int x4; })resolvedRenderTargetFormat;
- (void)setAllowAlpha:(BOOL)arg1;
- (void)setContentScale:(float)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldRasterize;
- (struct CGSize { float x1; float x2; })size;
- (struct CGSize { float x1; float x2; })sizeInPixels;
- (void)willDrawView;

@end
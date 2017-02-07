/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapModel : VKMapTileModel <VKMapLayer> {
    struct shared_ptr<ggl::Clut::Pos2DUVPipelineState> { 
        struct Pos2DUVPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _clutPipelineState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _clutRenderState;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gglClutTexture;
    unsigned long long  _mapLayer;
    BOOL  _rasterViewer;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _renderState;
    struct shared_ptr<ggl::TextureWithReverseAlpha::Pos2DUVPipelineState> { 
        struct Pos2DUVPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _reverseAlphaPipelineState;
    BOOL  _showingNoDataPlaceholders;
    NSMutableArray * _sortedTiles;
    struct shared_ptr<gss::StylesheetQuery<gss::PropertyID> > { 
        struct StylesheetQuery<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleQuery;
    struct shared_ptr<ggl::Textured::Pos2DUVPipelineState> { 
        struct Pos2DUVPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _texturePipelineState;
    struct Pos2DUVMesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, std::__1::allocator<std::__1::shared_ptr<ggl::VertexData> > > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; } * _unitMesh;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned long long mapLayerPosition;
@property (nonatomic) BOOL rasterViewer;
@property (getter=isShowingNoDataPlaceholders, readonly) BOOL showingNoDataPlaceholders;
@property (readonly) Class superclass;

+ (BOOL)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3 roadAlpha:(float)arg4;
- (void)gglSetupClutTextureForLevelOfDetail:(unsigned int)arg1 scale:(float)arg2;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (BOOL)isShowingNoDataPlaceholders;
- (unsigned long long)mapLayerPosition;
- (BOOL)rasterViewer;
- (void)reset;
- (void)setMapLayerPosition:(unsigned long long)arg1;
- (void)setRasterViewer:(BOOL)arg1;
- (BOOL)shouldEnableCLUT;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetDidChange;

@end
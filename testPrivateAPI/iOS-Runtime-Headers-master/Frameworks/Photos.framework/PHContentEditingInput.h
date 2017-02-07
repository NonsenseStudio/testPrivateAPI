/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHContentEditingInput : NSObject {
    PHAdjustmentData * _adjustmentData;
    AVAsset * _avAsset;
    NSObject<OS_dispatch_queue> * _avAssetIsolationQueue;
    int  _baseVersion;
    NSDate * _creationDate;
    UIImage * _displaySizeImage;
    int  _fullSizeImageOrientation;
    NSURL * _fullSizeImageURL;
    PHLivePhoto * _livePhoto;
    CLLocation * _location;
    unsigned int  _mediaSubtypes;
    int  _mediaType;
    NSMutableArray * _sandboxExtensionHandles;
    NSString * _uniformTypeIdentifier;
    NSURL * _videoURL;
}

@property (nonatomic, retain) PHAdjustmentData *adjustmentData;
@property (readonly) AVAsset *audiovisualAsset;
@property (readonly) AVAsset *avAsset;
@property (nonatomic) int baseVersion;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) UIImage *displaySizeImage;
@property (nonatomic) int fullSizeImageOrientation;
@property (nonatomic, copy) NSURL *fullSizeImageURL;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) unsigned int mediaSubtypes;
@property (nonatomic) int mediaType;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;
@property (nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (void)_invalidateAVAsset;
- (id)adjustmentData;
- (id)audioMix;
- (id)audiovisualAsset;
- (id)avAsset;
- (int)baseVersion;
- (void)consumeSandboxExtensionToken:(id)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)displaySizeImage;
- (int)fullSizeImageOrientation;
- (id)fullSizeImageURL;
- (id)imagePreview;
- (id)init;
- (BOOL)isMediaSubtype:(unsigned int)arg1;
- (id)livePhoto;
- (void)loadFullSizeImageDataWithCompletionHandler:(id /* block */)arg1;
- (id)location;
- (unsigned int)mediaSubtypes;
- (int)mediaType;
- (void)requestFullSizeImageURLWithCompletionHandler:(id /* block */)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseVersion:(int)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplaySizeImage:(id)arg1;
- (void)setFullSizeImageOrientation:(int)arg1;
- (void)setFullSizeImageURL:(id)arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMediaSubtypes:(unsigned int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)uniformTypeIdentifier;
- (id)videoComposition;
- (id)videoURL;

@end
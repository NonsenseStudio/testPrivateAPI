/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasteboard : NSObject

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray *URLs;
@property (nonatomic, readonly) int changeCount;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, readonly) BOOL hasColors;
@property (nonatomic, readonly) BOOL hasImages;
@property (nonatomic, readonly) BOOL hasStrings;
@property (nonatomic, readonly) BOOL hasURLs;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int numberOfItems;
@property (nonatomic, readonly) NSArray *pasteboardTypes;
@property (getter=isPersistent, nonatomic, readonly) BOOL persistent;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, copy) NSArray *strings;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)_pasteboardWithUniqueName;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;

- (id)URL;
- (id)URLs;
- (BOOL)_hasStrings;
- (void)addItems:(id)arg1;
- (int)changeCount;
- (id)color;
- (id)colors;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (BOOL)hasColors;
- (BOOL)hasImages;
- (BOOL)hasStrings;
- (BOOL)hasURLs;
- (id)image;
- (id)images;
- (BOOL)isPersistent;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)items;
- (id)name;
- (int)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 options:(id)arg2;
- (void)setName:(id)arg1;
- (void)setPersistent:(BOOL)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)mf_addPasteboardRepresentationsForAttachments:(id)arg1;
- (void)mf_addPasteboardRepresentationsForTextAttachments:(id)arg1;
- (id)mf_getAttachmentsPasteboardRepresentations;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_newPasteboardRepresentationForAsset:(id)arg1 data:(id)arg2 utiType:(id)arg3;

- (id)pu_assets;
- (BOOL)pu_containsAssets;
- (void)pu_setAssetRepresentation:(id)arg1;
- (void)pu_setAssetRepresentations:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (void)akClearContents;
- (id)akPasteboardAnnotations;
- (BOOL)akPasteboardContainsAnnotations;
- (void)akPasteboardSetAnnotations:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (BOOL)__ck_canCreateComposition;
- (id)__ck_composition;
- (id)__ck_dataForPasteboardType:(id)arg1 atIndex:(unsigned int)arg2;
- (id)__ck_filenameForType:(id)arg1 atIndex:(unsigned int)arg2;
- (id)__ck_mediaObjectAtIndex:(unsigned int)arg1;
- (id)__ck_mediaObjectManager;
- (id)__ck_pasteboardTypeListRTFD;
- (id)__ck_pasteboardTypesForIndex:(unsigned int)arg1;
- (id)__ck_pluginDisplayContainerAtIndex:(unsigned int)arg1;
- (id)__ck_quickLookKnownTypes;
- (id)__ck_valueForPasteboardType:(id)arg1 atIndex:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)pl_assetsInPhotoLibrary:(id)arg1;
- (BOOL)pl_containsAssets;
- (void)pl_setAsset:(id)arg1;
- (void)pl_setAssets:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)objectsForPasteboardType:(id)arg1;

@end
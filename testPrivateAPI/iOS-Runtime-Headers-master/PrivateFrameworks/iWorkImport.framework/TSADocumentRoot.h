/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSADocumentRoot : TSWPDocumentRoot <TSDScrollingAwareChangeSource, TSKImportExportDelegate> {
    NSArray * _buildVersionHistory;
    TSCECalculationEngine * _calculationEngine;
    TSTCustomFormatList * _deprecatedTablesCustomFormatList;
    BOOL  _didLoadControllers;
    BOOL  _didLoadDocumentFromRevert;
    SFUCryptoKey * _documentCacheDecryptionKey;
    NSObject<OS_dispatch_queue> * _documentCacheDecryptionKeyAccessQueue;
    long  _documentCacheOnceToken;
    BOOL  _documentCurrentlyImporting;
    NSString * _documentLanguage;
    unsigned int  _documentLanguageWritingDirection;
    BOOL  _documentLocaleWasUpdated;
    TSAFunctionBrowserState * _functionBrowserState;
    BOOL  _hasPreUFFVersion;
    BOOL  _isClosed;
    BOOL  _needsMediaCompatibilityUpgrade;
    int  _needsToCaptureViewState;
    TSAShortcutController * _shortcutController;
    TSKCustomFormatList * _tablesCustomFormatList;
    NSString * _templateIdentifier;
    NSMutableDictionary * _upgradeState;
    TSPLazyReference * _viewStateReference;
    NSMutableSet * _warnings;
}

@property (nonatomic, copy) NSArray *buildVersionHistory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didLoadDocumentFromRevert;
@property (getter=isDocumentCurrentlyImporting, nonatomic) BOOL documentCurrentlyImporting;
@property (nonatomic, readonly) BOOL documentLocaleWasUpdated;
@property (nonatomic) BOOL hasPreUFFVersion;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
@property (nonatomic, readonly) NSDictionary *incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
@property (nonatomic, readonly) BOOL isBrowsingVersions;
@property (nonatomic, readonly) BOOL isClosed;
@property (nonatomic, readonly) NSSet *missingFontWarningMessages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) BOOL needsMediaCompatibilityUpgrade;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *templateIdentifier;
@property (nonatomic, readonly) TSKViewState *viewState;

+ (id)buildVersionHistoryPath;
+ (id)buildVersionHistoryPathPreUFF;
+ (void)localizeChartInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTableInfo:(id)arg1 withTemplateBundle:(id)arg2;
+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;
+ (id)persistenceWarningsForData:(id)arg1 flags:(unsigned int)arg2;
+ (struct CGSize { float x1; float x2; })previewImageMaxSizeForType:(unsigned int)arg1;
+ (struct CGSize { float x1; float x2; })previewImageSizeForType:(unsigned int)arg1;
+ (unsigned int)previewTypeForCurrentDevice;
+ (void)removeExistingPreviewsForDocumentAtPath:(id)arg1;
+ (id)scaledPreviewImageForType:(unsigned int)arg1 scalableImage:(id)arg2;
+ (id)supportedPreviewImageExtensions;
+ (id)supportedScalablePreviewNames;
+ (void)writePreviewImage:(id)arg1 group:(id)arg2 queue:(id)arg3 dataConsumerProvider:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)writePreviewImage:(id)arg1 toPath:(id)arg2 withIntermediateDirectories:(BOOL)arg3 name:(id)arg4 group:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
+ (BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2;
+ (BOOL)writePreviewImagesToPackageDataWriter:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2;
+ (BOOL)writePreviewImagesToPath:(id)arg1 scalableImage:(id)arg2 group:(id)arg3 queue:(id)arg4;

- (void)addWarning:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (void)blockForRecalcWithTimeout:(double)arg1;
- (id)buildVersionHistory;
- (id)calculationEngine;
- (id)captureViewState;
- (id)captureViewStateForImport;
- (void)captureViewStateIfNeeded;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(BOOL)arg2;
- (int)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)consolidatedDocumentWarningsFromWarnings:(id)arg1;
- (id)createViewStateRootForContinuation:(BOOL)arg1;
- (id)customFormatList;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)dealloc;
- (id)defaultDraftName;
- (void)didDownloadDocumentResources:(id)arg1 failedOrCancelledDocumentResources:(id)arg2 error:(id)arg3;
- (void)didDownloadRemoteData:(id)arg1;
- (void)didEnterBackground;
- (BOOL)didLoadDocumentFromRevert;
- (void)didSaveWithEncryptionChange;
- (id)documentCachePath;
- (void)documentCacheWasInvalidated;
- (void)documentDidLoad;
- (id)documentLanguage;
- (BOOL)documentLocaleWasUpdated;
- (void)enumerateStylesheetsUsingBlock:(id /* block */)arg1;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 delegate:(id)arg3 error:(id*)arg4;
- (BOOL)exportToPath:(id)arg1 exporter:(id)arg2 error:(id*)arg3;
- (void)fulfillPasteboardPromises;
- (id)functionBrowserState;
- (BOOL)hasICloudConflict;
- (BOOL)hasPreUFFVersion;
- (void)importerDidFinish:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)initializeForImport;
- (void)insertTextPresetDisplayItemsPreservingGrouping:(id)arg1 insertAtBeginningOfGroup:(BOOL)arg2;
- (void)invalidateViewState;
- (BOOL)isClosed;
- (BOOL)isDocumentCurrentlyImporting;
- (BOOL)isMultiPageForQuickLook;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; struct Reference {} *x16; bool x17; }*)arg1 unarchiver:(id)arg2;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
- (id)missingFontWarningMessages;
- (id)name;
- (id)namedTextStyles;
- (BOOL)needsMediaCompatibilityUpgrade;
- (id)newExporterForType:(id)arg1 options:(id)arg2 preferredType:(id*)arg3;
- (struct CGImageSource { }*)newImageSourceForDocumentCachePath:(id)arg1;
- (BOOL)objectsNeedToBeMigrated:(id)arg1;
- (void)pUpgradeHyperlinks;
- (void)pUpgradeHyperlinksInStorage:(id)arg1;
- (id)p_captureViewStateForImport:(BOOL)arg1;
- (void)p_cleanupColumnStyles;
- (id)p_documentCacheDecryptionKey;
- (id)p_documentCacheDecryptionKeyAccessQueue;
- (void)p_initializeDocumentCacheIfNeeded;
- (void)p_iterateDrawables:(id)arg1 removeDrawableCommentBlock:(id /* block */)arg2 removeTextCommentsBlock:(id /* block */)arg3 removeCellCommentBlock:(id /* block */)arg4;
- (id)p_parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned int*)arg3;
- (void)p_registerAllFormulasAfterImport;
- (void)p_removeStyles:(id)arg1;
- (void)p_replaceStyle:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_replaceStyles:(id)arg1 andChildrenWithVariationOfStyle:(id)arg2;
- (void)p_updateBuildVersionHistoryWithVersionOfTemplateBundle:(id)arg1;
- (void)p_updateDocumentLanguageToCurrent;
- (void)p_updateViewStateWithRoot:(id)arg1;
- (void)p_upgradeCustomFormatList;
- (void)p_upgradeDocumentCreationLocale;
- (void)p_upgradeTablesIfNeeded:(unsigned long long)arg1;
- (id)packageDataForWrite;
- (void)pauseRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)performHyperlinkUpgradesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)performStylesheetUpdatesIfNecessaryForVersion:(unsigned long long)arg1;
- (void)prepareForSavingAsTemplate;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (void)prepareToGeneratePreview;
- (id)previewImage;
- (id)previewImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)protected_defaultTextPresetOrdering;
- (id)readBuildVersionHistoryFromDiskHasPreUFFVersion:(BOOL)arg1;
- (id)referencedStylesOfClass:(Class)arg1;
- (void)removeRedundantStyleOverridesAndEnsureReferencedStylesAreInStylesheet;
- (void)removeWarning:(id)arg1;
- (void)resetViewState;
- (void)resumeBackgroundActivities;
- (void)resumeRecalculation;
- (void)resumeThumbnailing;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; struct Reference {} *x16; bool x17; }*)arg1 archiver:(id)arg2;
- (void)setBuildVersionHistory:(id)arg1;
- (void)setCalculationEngine:(id)arg1;
- (void)setCustomFormatListToUpgrade:(id)arg1;
- (void)setDidLoadDocumentFromRevert:(BOOL)arg1;
- (void)setDocumentCreationLocale:(id)arg1;
- (void)setDocumentCurrentlyImporting:(BOOL)arg1;
- (void)setDocumentLanguage:(id)arg1;
- (void)setFunctionBrowserState:(id)arg1;
- (void)setHasPreUFFVersion:(BOOL)arg1;
- (void)setNeedsMediaCompatibilityUpgrade:(BOOL)arg1;
- (void)setShortcutController:(id)arg1;
- (void)setTemplateIdentifier:(id)arg1;
- (id)shortcutController;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldCancelScrollingToSelectionPath:(id)arg1 forChanges:(id)arg2;
- (void)stashUpgradeState:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x12; struct Reference {} *x13; struct Reference {} *x14; struct Reference {} *x15; struct Reference {} *x16; bool x17; }*)arg1 unarchiver:(id)arg2;
- (void)suspendBackgroundActivities;
- (void)suspendThumbnailing;
- (id)templateIdentifier;
- (id)tsa_delegate;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)updateViewStateWithRoot:(id)arg1;
- (void)updateWritingDirection:(unsigned int)arg1;
- (void)upgradeCellStyles;
- (id)upgradeState;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityBeforeSingleStylesheetUpgrade;
- (void)upgradeTextStylesForUnityPlusFromFileFormatVersion:(unsigned long long)arg1;
- (void)upgradeTextboxPresets;
- (void)upgradeToSingleStylesheet;
- (id)viewState;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id*)arg2;
- (id)warnings;
- (id)warningsByCombiningSortedWarnings:(id)arg1 withWarnings:(id)arg2;
- (void)willClose;
- (void)willEnterForeground;
- (BOOL)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (unsigned int)writingDirection;

@end
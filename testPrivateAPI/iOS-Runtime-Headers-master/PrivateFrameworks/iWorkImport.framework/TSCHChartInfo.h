/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartInfo : NSObject <NSCopying, TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent, TSDMixing> {
    struct CGSize { 
        float width; 
        float height; 
    }  _minimumChartBodySizeForTransformingGeometry;
    BOOL  mAppearancePreservedForPreset;
    NSMutableArray * mCategoryAxisNonStyles;
    NSMutableArray * mCategoryAxisStyles;
    TSCHChartMediator * mChartMediator;
    TSCHChartType * mChartType;
    BOOL  mDisplayMessageOnRepCreation;
    TSCHChartDrawableInfo * mDrawableInfo;
    NSNumber * mHorizontalMax;
    NSNumber * mHorizontalMin;
    NSString * mHorizontalPrefix;
    NSString * mHorizontalSuffix;
    BOOL  mHorizontalUseSeparator;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mInnerChartFrame;
    BOOL  mIsOlderThanSage;
    NSString * mLastAppliedFillSetLookupString;
    unsigned int  mLastSeriesIndex;
    TSPLazyReference * mLazyPreset;
    TSCHLegendModel * mLegendModel;
    <TSCHStyleActAlike> * mLegendNonStyle;
    <TSCHStyleActAlike> * mLegendStyle;
    double  mMessageDuration;
    NSString * mMessageString;
    TSCHChartModel * mModel;
    BOOL  mNeedsCalcEngineDependentImport;
    BOOL  mNeedsCalcEngineDependentUpgrade;
    TSDInfoGeometry * mNonInfoGeometry;
    <TSCHStyleActAlike> * mNonStyle;
    TSPLazyReference * mOwnedPreset;
    NSMutableArray * mParagraphStyles;
    TSKCustomFormatList * mPasteboardCustomFormatList;
    struct CGPoint { 
        float x; 
        float y; 
    }  mPreviewOrigin;
    NSMutableArray * mPrivateSeriesStyles;
    NSMutableDictionary * mRefLineNonStylesMap;
    NSMutableDictionary * mRefLineStylesMap;
    NSMutableArray * mSeriesNonStyles;
    <TSCHStyleActAlike> * mStyle;
    NSMutableDictionary * mStyleViewProxyMap;
    NSArray * mStyleViewProxyParagraphStyleArray;
    <TSCHStyleActAlike> * mThemePresetRefLineStyle;
    NSMutableArray * mThemeSeriesStyles;
    NSMutableArray * mValueAxisNonStyles;
    NSMutableArray * mValueAxisStyles;
    NSNumber * mValueMax;
    NSNumber * mValueMin;
    NSString * mValuePrefix;
    NSString * mValueSuffix;
    BOOL  mValueUseSeparator;
}

@property (nonatomic, readonly, retain) TSCHChartType *chartType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; } defaultLayoutSettings;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayMessageOnRepCreation;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (nonatomic, readonly) TSSStylesheet *documentStylesheet;
@property (nonatomic, readonly) TSCHChartDrawableInfo *drawableInfo;
@property (nonatomic, readonly) TSCHChartStylePreset *firstPresetFromTheme;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (nonatomic, readonly) int gridDirection;
@property (nonatomic, readonly) BOOL hasSetDefaultLayoutSettings;
@property (readonly) unsigned int hash;
@property (nonatomic) double informationalMessageDuration;
@property (nonatomic, retain) NSString *informationalMessageString;
@property (nonatomic, readonly) BOOL isPhantom;
@property (nonatomic, copy) NSString *lastAppliedFillSetLookupString;
@property (nonatomic, retain) TSCHLegendModel *legend;
@property (nonatomic, retain) TSCHChartMediator *mediator;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } minimumChartBodySize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } minimumChartBodySizeForTransformingGeometry;
@property (nonatomic, retain) TSCHChartModel *model;
@property (nonatomic, readonly) unsigned int multiDataSetIndex;
@property (nonatomic, readonly) TSCHChartStylePreset *preset;
@property (nonatomic, readonly) TSCHChartStylePreset *presetFromThemeIfNecessary;
@property (nonatomic) struct CGPoint { float x1; float x2; } previewOrigin;
@property (nonatomic, readonly) TSCHChartLayoutCache *sceneAreaLayoutItemCache;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *themeChartPresets;
@property (nonatomic, readonly) BOOL wantsDeferredUpgradeOrImport;

+ (int)adjustNumberFormatType:(int)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (id)adjustNumberFormatTypeValue:(id)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned int)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
+ (id)categoryAxisStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)chartStyleIdentifierForRoleIndex:(unsigned int)arg1;
+ (Class)classForAxisNonstyle;
+ (Class)classForAxisStyle;
+ (Class)classForChartNonstyle;
+ (Class)classForChartStyle;
+ (Class)classForLegendNonstyle;
+ (Class)classForLegendStyle;
+ (Class)classForSeriesNonstyle;
+ (Class)classForSeriesStyle;
+ (id)genericParagraphStyleIndexProperties;
+ (id)genericParagraphStyleIndexPropertiesInUse;
+ (BOOL)groupedShadowsForChartModel:(id)arg1;
+ (id)legendStyleIdentifierForRoleIndex:(unsigned int)arg1;
+ (struct CGSize { float x1; float x2; })minimumChartBodySizeForTransformingGeometryForChart:(id)arg1;
+ (id)p_chartTypeTo3DScalePropertyPairs;
+ (id)p_currentThreadSceneAreaLayoutCache;
+ (id)p_stylesheetFromOrderedArrayOfSources:(id)arg1;
+ (id)paragraphStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)paragraphStyleIndexProperties;
+ (id)paragraphStyleIndexPropertiesInUse;
+ (id)paragraphStylePropertiesChartsUse;
+ (id)propertiesThatInvalidateModel;
+ (id)referenceLineStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)scale3DPropertyToConstantDepthInfoChartScaleMappingsWithBarShape:(int)arg1 conversionBlock:(id /* block */)arg2;
+ (id)seriesStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (void)setCurrentThreadSceneAreaLayoutCache:(id)arg1;
+ (id)specificNumberFormatTypeProperties;
+ (id)specificPropertiesThatCanContainCustomDateFormats;
+ (id)specificPropertiesThatCanContainCustomFormats;
+ (id)specificPropertiesThatCanContainCustomNumberFormats;
+ (unsigned char)styleOwnerPathType;
+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;
+ (id)valueAxisStyleIdentifierForRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;

- (unsigned int)addParagraphStyle:(id)arg1;
- (void)addReferenceLineForAxisID:(id)arg1 nonStyle:(id)arg2 style:(id)arg3 uuid:(id)arg4;
- (void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allCustomFormatKeys;
- (id)allStyleOwners;
- (id)allStylesAndNonStylesThatCanHaveCustomNumberFormats;
- (BOOL)appearancePreservedForCurrentPreset;
- (BOOL)appearancePreservedForPreset;
- (void)applyChartStyleState:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuples:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (id)categoryAxisNonstyleAtIndex:(unsigned int)arg1;
- (id)categoryAxisStyleAtIndex:(unsigned int)arg1;
- (unsigned int)categoryAxisStyleCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg1 isSpiceDoc:(BOOL)arg2;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (id)chartInfo;
- (void)chartMoveToPosition:(struct CGPoint { float x1; float x2; })arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)chartStyleState;
- (id)chartType;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (id)childInfos;
- (id)clamped3DRotationPropertyObject;
- (void)clearParent;
- (void)clearViewStyleProxyForLayouts:(id)arg1;
- (id)context;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (id)create3DSceneWithLayoutSettings:(const struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; }*)arg1;
- (void)dealloc;
- (void)debugLayoutCache;
- (void)debugVerifyPreset;
- (unsigned int)defaultDataColumnCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (unsigned int)defaultDataRowCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; })defaultLayoutSettings;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (void)deleteReferenceLineForAxisID:(id)arg1 uuid:(id)arg2;
- (BOOL)displayMessageOnRepCreation;
- (id)documentRoot;
- (id)documentStylesheet;
- (id)drawableInfo;
- (int)elementKind;
- (id)fillsForSeriesAndTheme;
- (id)firstPresetFromTheme;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)geometry;
- (int)gridDirection;
- (BOOL)gridEqualToDefaultGrid;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (BOOL)hasSetDefaultLayoutSettings;
- (id)infoGeometryForDesiredCircumscribingGeometry:(id)arg1;
- (id)infoGeometryForDesiredPureLayoutGeometry:(id)arg1;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1;
- (id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint { float x1; float x2; })arg1;
- (double)informationalMessageDuration;
- (id)informationalMessageString;
- (id)init;
- (id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 refLineNonStylesMap:(id)arg14 refLineStylesMap:(id)arg15 forDocumentLocale:(id)arg16;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)isPhantom;
- (BOOL)isSingleCircleSpecialCase;
- (BOOL)isSingleCircleSpecialCaseOutSeries:(id*)arg1;
- (id)lastAppliedFillSetLookupString;
- (Class)layoutClass;
- (id)legend;
- (id)legendNonStyle;
- (id)legendStyle;
- (void)loadFromPreUFFArchive:(const struct ChartInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct ChartModelArchive {} *x6; struct Reference {} *x7; struct LegendModelArchive {} *x8; struct RectArchive {} *x9; struct RepeatedPtrField<TSP::Reference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::Reference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<TSP::Reference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::Reference> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; int x15; int x16; struct SparseReferenceArray {} *x17; struct SparseReferenceArray {} *x18; struct Reference {} *x19; struct Reference {} *x20; struct Point {} *x21; }*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)masterFontNameForInspectors;
- (float)maximumExplosion;
- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;
- (id)mediator;
- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;
- (struct CGSize { float x1; float x2; })minimumChartBodySize;
- (struct CGSize { float x1; float x2; })minimumChartBodySizeForTransformingGeometry;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)model;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (id)modelForDataSetIndex:(unsigned int)arg1;
- (unsigned int)multiDataSetIndex;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned int)arg1 forTheme:(id)arg2;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned int)arg1 withSeriesCount:(unsigned int)arg2 forTheme:(id)arg3;
- (id)nonStyleForAxis:(id)arg1;
- (id)nonStyleForSeries:(id)arg1;
- (unsigned int)nonStyleIndexForStyleOwnerRef:(id)arg1;
- (id)nonstyle;
- (unsigned int)numberOfThemeSeriesStyles;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2;
- (id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(struct _NSZone { }*)arg2 context:(id)arg3;
- (id)p_copyStyleAndNonStyleMap:(id)arg1 withZone:(struct _NSZone { }*)arg2 context:(id)arg3;
- (id)p_copyStyleArray:(id)arg1 inContext:(id)arg2 withMapper:(id)arg3;
- (float)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1;
- (void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1;
- (id)p_genericToDefaultPropertyMap;
- (id)p_getLocalizableDefaultDataDictionaryForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (id)p_infoGeometryForGeometry:(id)arg1 isCircumscribing:(BOOL)arg2;
- (id)p_init;
- (void)p_invalidateCachesInLayouts:(id)arg1;
- (unsigned int)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
- (id)p_presetByAdoptingStylesheet:(id)arg1 forPreset:(id)arg2 withMapper:(id)arg3;
- (unsigned int)p_refLineIndexWithUUID:(id)arg1 nonStyleItems:(id)arg2;
- (BOOL)p_refLineNonStyleMapIsValid;
- (void)p_setDrawableInfo:(id)arg1;
- (id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(BOOL)arg2;
- (id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1;
- (id)p_swapTuplesForMutations:(id)arg1;
- (float)p_titleAccommodationWithLegendSize:(struct CGSize { float x1; float x2; })arg1 optionalLayout:(id)arg2;
- (id)p_uuidForRefLineOnAxis:(id)arg1 havingNonStyle:(id)arg2;
- (id)paragraphStyleAtIndex:(unsigned int)arg1;
- (id)paragraphStyleForSelectionPath:(id)arg1;
- (int)paragraphStylePropertyForSelectionPath:(id)arg1;
- (id)paragraphStyles;
- (id)pasteboardCustomFormatList;
- (void)performDeferredUpgradeAndImportOperations;
- (void)preserveAppearanceForCurrentPresetAdoptingStylesheet:(BOOL)arg1;
- (id)preset;
- (id)presetFromThemeIfNecessary;
- (struct CGPoint { float x1; float x2; })previewOrigin;
- (float)radiusForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withMaxExplosion:(float)arg2;
- (void)reassignPasteboardCustomFormatKeys;
- (id)referenceLineNonStyleForAxisID:(id)arg1 atIndex:(unsigned int)arg2;
- (id)referenceLineNonStyleForAxisID:(id)arg1 uuid:(id)arg2 outIndex:(unsigned int*)arg3;
- (id)referenceLineNonStyleItemsForAxisID:(id)arg1;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned int)arg2;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned int)arg2 privateStyleOnly:(BOOL)arg3;
- (BOOL)referenceLineStyleIsPrivate:(id)arg1;
- (Class)repClass;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })resizedLegendFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 oldChartSize:(struct CGSize { float x1; float x2; })arg2 newChartSize:(struct CGSize { float x1; float x2; })arg3;
- (float)sageDepthFactorForExport;
- (void)saveToUnityArchive:(struct ChartArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;
- (id)scaleAllStrokesInStyle:(id)arg1 byRatio:(float)arg2;
- (id)sceneAreaLayoutItemCache;
- (id)seriesNonstyleForSeriesIndex:(unsigned int)arg1;
- (id)seriesStyleForSeries:(id)arg1;
- (id)seriesStyleForSeriesIndex:(unsigned int)arg1;
- (BOOL)seriesStyleIsPrivate:(id)arg1;
- (void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setChartNonstyle:(id)arg1;
- (void)setChartType:(id)arg1 andSetLegendDefaults:(BOOL)arg2 gridRowIds:(id)arg3 gridColumnIds:(id)arg4 forDocumentLocale:(id)arg5;
- (void)setDefaultLayoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; unsigned int x7; })arg1;
- (void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (void)setDisplayMessageOnRepCreation:(BOOL)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 clearObjectPlaceholderFlag:(BOOL)arg3;
- (void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1;
- (void)setInformationalMessageDuration:(double)arg1;
- (void)setInformationalMessageString:(id)arg1;
- (void)setLastAppliedFillSetIdentifier:(id)arg1;
- (void)setLastAppliedFillSetLookupString:(id)arg1;
- (void)setLegend:(id)arg1;
- (void)setMediator:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPreset:(id)arg1;
- (void)setPreset:(id)arg1 forceOwning:(BOOL)arg2;
- (void)setPreviewOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setReferenceLineNonStyleItem:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setReferenceLineStyle:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)stringForSelectionPath:(id)arg1;
- (int)stringPropertyForSelectionPath:(id)arg1;
- (id)style;
- (id)styleForAxis:(id)arg1;
- (id)styleOwnerForPath:(id)arg1;
- (id)styleOwnerForRef:(id)arg1;
- (id)styleOwnerForSelectionPath:(id)arg1;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned int)arg2;
- (id)styleOwnerPathForRef:(id)arg1;
- (id)styleOwnerPathForSemanticTag:(id)arg1;
- (id)styleOwnerPathForStyleOwner:(id)arg1;
- (id)styleOwnerRefForSemanticTag:(id)arg1;
- (id)styleOwnerRefForStyleOwner:(id)arg1;
- (id)styleOwnerRefForStyleOwnerPath:(id)arg1;
- (id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)themeChartPresetForUUID:(id)arg1;
- (id)themeChartPresets;
- (id)tuplesToApplyState:(id)arg1;
- (void)updateAfterPaste;
- (void)updateTitlesForExportingModel:(id)arg1;
- (void)upgradeAxisLabelFormatWithValuePrefix:(id)arg1 valueSuffix:(id)arg2 valueUseSeparator:(BOOL)arg3 horizontalPrefix:(id)arg4 horizontalSuffix:(id)arg5 horizontalUseSeparator:(BOOL)arg6;
- (void)upgradeWithHorizontalMin:(id)arg1 horizontalMax:(id)arg2 valueMin:(id)arg3 valueMax:(id)arg4;
- (id)valueAxisNonstyleAtIndex:(unsigned int)arg1;
- (id)valueAxisStyleAtIndex:(unsigned int)arg1;
- (unsigned int)valueAxisStyleCount;
- (id)valueForProperty:(int)arg1;
- (id)viewOverrideMapForStyleOwner:(id)arg1;
- (BOOL)wantsDeferredUpgradeOrImport;
- (void)willModify;

@end
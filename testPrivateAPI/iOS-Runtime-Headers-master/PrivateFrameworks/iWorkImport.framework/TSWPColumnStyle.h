/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>

@property (nonatomic, readonly) BOOL alwaysStartsNewTarget;
@property (nonatomic, readonly) unsigned int columnCount;
@property (nonatomic, readonly) BOOL columnsAreLeftToRight;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) BOOL shrinkTextToFit;
@property (nonatomic, readonly) float textScaleFactor;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)properties;

- (struct CGSize { float x1; float x2; })adjustedInsetsForTarget:(id)arg1;
- (BOOL)alwaysStartsNewTarget;
- (unsigned int)columnCount;
- (BOOL)columnsAreLeftToRight;
- (BOOL)equalWidth;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)layoutMargins;
- (void)loadFromArchive:(const struct ColumnStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ColumnStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 target:(id)arg3 outWidth:(float*)arg4 outGap:(float*)arg5;
- (void)saveToArchive:(struct ColumnStyleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StyleArchive {} *x5; struct ColumnStylePropertiesArchive {} *x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (BOOL)shrinkTextToFit;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;

@end
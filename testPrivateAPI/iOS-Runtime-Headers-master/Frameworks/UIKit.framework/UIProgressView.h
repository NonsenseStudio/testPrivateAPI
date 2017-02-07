/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProgressView : UIView <NSCoding> {
    int  _barStyle;
    UIView * _contentView;
    UIVisualEffectView * _effectView;
    BOOL  _isAnimating;
    NSProgress * _observedProgress;
    float  _progress;
    NSArray * _progressColors;
    UIImage * _progressImage;
    NSObservation * _progressObservation;
    UIColor * _progressTintColor;
    UIImageView * _progressView;
    int  _progressViewStyle;
    NSArray * _trackColors;
    UIImage * _trackImage;
    UIColor * _trackTintColor;
    UIImageView * _trackView;
}

@property (nonatomic, retain) NSProgress *observedProgress;
@property (nonatomic) float progress;
@property (nonatomic, retain) UIImage *progressImage;
@property (nonatomic, retain) UIColor *progressTintColor;
@property (nonatomic) int progressViewStyle;
@property (nonatomic, retain) UIImage *trackImage;
@property (nonatomic, retain) UIColor *trackTintColor;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_fillImagesForIndex:(unsigned int)arg1 style:(int)arg2 barStyle:(int)arg3;
+ (unsigned int)_indexForStyle:(int)arg1 barStyle:(int)arg2;
+ (id)_standardInnerImageForStyle:(int)arg1 barStyle:(int)arg2;
+ (id)_standardOuterImageForStyle:(int)arg1 barStyle:(int)arg2;
+ (id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2;
+ (id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned int)arg3;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void).cxx_destruct;
- (id)_appropriateProgressImage;
- (id)_appropriateTrackImage;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_defaultTrackColorForCurrentStyle;
- (id)_effectiveContentView;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_progressColor;
- (unsigned int)_roundedCornersForProgressForCurrentStyle;
- (unsigned int)_roundedCornersForTrackForCurrentStyle;
- (void)_setProgress:(float)arg1;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned int)arg4;
- (void)_setProgressColor:(id)arg1;
- (void)_setupProgressViewCommon;
- (BOOL)_shouldTintProgress;
- (BOOL)_shouldTintTrack;
- (void)_updateImages;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (int)barStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithProgressViewStyle:(int)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (id)observedProgress;
- (float)progress;
- (id)progressImage;
- (id)progressTintColor;
- (int)progressViewStyle;
- (void)setBarStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)setProgressImage:(id)arg1;
- (void)setProgressTintColor:(id)arg1;
- (void)setProgressViewStyle:(int)arg1;
- (void)setTrackImage:(id)arg1;
- (void)setTrackTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (id)trackImage;
- (id)trackTintColor;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
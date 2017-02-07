/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface SubtitleCellWithAdditionalDetail : EKUIConstrainedFontsTableViewCell {
    UILabel * _additionalDetailLabel;
    id  _source;
}

@property (nonatomic, readonly, retain) UILabel *additionalDetailLabel;
@property id source;

- (void).cxx_destruct;
- (id)additionalDetailLabel;
- (void)layoutSubviews;
- (BOOL)leftFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 overlapsRightFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 difference:(float*)arg3;
- (void)setSource:(id)arg1;
- (id)source;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwitch : UIControl <NSCoding, UISwitchControl, UISwitchVisualElementProvider> {
    BOOL  _alwaysShowOnOffLabel;
    UIImage * _offImage;
    BOOL  _on;
    UIImage * _onImage;
    UIColor * _onTintColor;
    UIColor * _thumbTintColor;
    UIColor * _tintColor;
    UISwitchVisualElement * _visualElement;
}

@property (getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:, nonatomic) BOOL alwaysShowOnOffLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_impactFeedbackBehavior, setter=_setImpactFeedbackBehavior:, nonatomic, retain) _UIFeedbackImpactBehavior *impactFeedbackBehavior;
@property (nonatomic, retain) UIImage *offImage;
@property (getter=isOn, nonatomic) BOOL on;
@property (nonatomic, retain) UIImage *onImage;
@property (nonatomic, retain) UIColor *onTintColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UISwitchVisualElement *visualElement;

+ (void)setVisualElementProvider:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (BOOL)_alwaysShowOnOffLabel;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned int)_controlEventsForActionTriggered;
- (void)_encodeFrameWithCoder:(id)arg1;
- (id)_impactFeedbackBehavior;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2;
- (void)_setAlwaysShowsOnOffLabel:(BOOL)arg1;
- (void)_setImpactFeedbackBehavior:(id)arg1;
- (BOOL)_shouldAlterCodedFrame;
- (BOOL)_shouldShowOnOffLabels;
- (void)_showingOnOffLabelChanged;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isOn;
- (id)offImage;
- (id)onImage;
- (id)onTintColor;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(BOOL)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2 notifyingVisualElement:(BOOL)arg3;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setSemanticContentAttribute:(int)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisualElement:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbTintColor;
- (id)tintColor;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualElement;
- (void)visualElement:(id)arg1 transitionedToOn:(BOOL)arg2;
- (void)visualElementHadTouchUpInside:(id)arg1;

@end
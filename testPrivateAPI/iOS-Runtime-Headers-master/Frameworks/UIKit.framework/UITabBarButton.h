/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarButton : UIControl {
    Class  _appearanceGuideClass;
    _UIBadgeView * _badge;
    UIColor * _badgeColor;
    NSMutableDictionary * _badgeTextAttributesForState;
    NSMutableDictionary * _buttonTintColorsForState;
    BOOL  _centerAllContents;
    NSMutableDictionary * _contentTintColorsForState;
    UIImage * _customSelectedIndicatorImage;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _hitRect;
    UITabBarSwappableImageView * _info;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _infoInsets;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    }  _infoOffset;
    UITabBarButtonLabel * _label;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    }  _labelOffset;
    BOOL  _selected;
    UIImageView * _selectedIndicator;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    }  _selectedInfoOffset;
    BOOL  _showsHighlightedState;
    UITabBar * _tabBar;
    UIVisualEffectView * _vibrancyEffectView;
}

@property (setter=_setAppearanceGuideClass:, nonatomic, retain) Class _appearanceGuideClass;
@property (setter=_setCenterAllContents:, nonatomic) BOOL _centerAllContents;
@property (getter=_isSelected, setter=_setSelected:, nonatomic) BOOL _selected;
@property (setter=_setShowsHighlightedState:, nonatomic) BOOL _showsHighlightedState;
@property (nonatomic, readonly) UITabBar *tabBar;
@property (getter=_unselectedTintColor, setter=_setUnselectedTintColor:, nonatomic, retain) UIColor *unselectedTintColor;

+ (id)_defaultLabelColor;

- (void).cxx_destruct;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (Class)_appearanceGuideClass;
- (void)_appleTV_layoutSubviews;
- (struct CGSize { float x1; float x2; })_appleTV_sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_buttonTintColorForState:(unsigned int)arg1;
- (BOOL)_centerAllContents;
- (id)_contentTintColorForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_focusRegionFrameInScreen:(id)arg1;
- (BOOL)_isSelected;
- (void)_positionBadge;
- (void)_positionBadgeAfterChangesIfNecessary:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_responderSelectionRectForCoordinateSpace:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_selectedIndicatorImage;
- (id)_selectedIndicatorView;
- (void)_sendFocusAction;
- (struct CGSize { float x1; float x2; })_sensitivitySize;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBadgeColor:(id)arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setBadgeValue:(id)arg1;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned int)arg2;
- (void)_setCenterAllContents:(BOOL)arg1;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned int)arg2;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setImage:(id)arg1 selected:(BOOL)arg2 offset:(struct UIOffset { float x1; float x2; })arg3;
- (void)_setInfoOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setLabelHidden:(BOOL)arg1;
- (void)_setSelected:(BOOL)arg1;
- (void)_setSelectedInfoOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setShowsHighlightedState:(BOOL)arg1;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_setUnselectedTintColor:(id)arg1;
- (void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2;
- (BOOL)_showsHighlightedState;
- (id)_tabBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tabBarHitRect;
- (struct UIOffset { float x1; float x2; })_titlePositionAdjustment;
- (id)_unselectedTintColor;
- (void)_updateBadgeAppearanceAndLayoutNow:(BOOL)arg1;
- (void)_updateInfoFrame;
- (void)_updateSelectedIndicatorFrame;
- (void)_updateSelectedIndicatorView;
- (void)_updateToMatchCurrentState;
- (void)_updateVibrancyEffectView;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4 tabBar:(id)arg5;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setSemanticContentAttribute:(int)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tabBar;
- (void)traitCollectionDidChange:(id)arg1;

@end
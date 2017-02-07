/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPlayModeControlView : UIView {
    NSArray * _activeButtonLayoutConstraints;
    MCDPlayModeButton * _addToLibraryButton;
    BOOL  _fuseSubscriberLayout;
    MCDPlayModeButton * _moreButton;
    MCDRepeatButton * _repeatButton;
    MCDPlayModeButton * _shuffleButton;
}

@property (nonatomic, retain) NSArray *activeButtonLayoutConstraints;
@property (nonatomic, readonly) MCDPlayModeButton *addToLibraryButton;
@property (nonatomic) BOOL fuseSubscriberLayout;
@property (nonatomic, readonly) MCDPlayModeButton *moreButton;
@property (nonatomic, readonly) MCDRepeatButton *repeatButton;
@property (nonatomic, readonly) MCDPlayModeButton *shuffleButton;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_updateButtonLayouts;
- (id)activeButtonLayoutConstraints;
- (id)addToLibraryButton;
- (BOOL)fuseSubscriberLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)moreButton;
- (id)repeatButton;
- (void)setActiveButtonLayoutConstraints:(id)arg1;
- (void)setFuseSubscriberLayout:(BOOL)arg1;
- (id)shuffleButton;

@end
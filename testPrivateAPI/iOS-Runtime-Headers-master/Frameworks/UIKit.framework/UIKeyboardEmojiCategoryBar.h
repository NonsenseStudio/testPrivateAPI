/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView {
    UIKeyboardEmojiGraphicsTraits * _emojiGraphicsTraits;
    BOOL  _isScrubbing;
    float  _scrubStartXLocation;
    UIView * _scrubView;
    unsigned int  _selectedIndex;
}

@property (nonatomic, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic, retain) UIView *scrubView;
@property unsigned int selectedIndex;

- (void)animateScrubberToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })categorySelectedCircleRect:(int)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)dimKeys:(id)arg1;
- (id)emojiGraphicsTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDivider:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)scrubView;
- (unsigned int)selectedIndex;
- (unsigned int)selectedIndexForTouches:(id)arg1;
- (void)setEmojiGraphicsTraits:(id)arg1;
- (void)setScrubView:(id)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateCategory;
- (void)updateCategoryOnBar:(unsigned int)arg1;
- (void)updateToCategory:(int)arg1;

@end
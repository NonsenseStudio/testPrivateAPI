/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRemoteUIHeaderView : UIView <RUIHeader> {
    float  _bottomMargin;
    float  _height;
    BOOL  _isFirstSection;
    GKLabel * _textLabel;
}

@property (nonatomic) float bottomMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float height;
@property (nonatomic) BOOL isFirstSection;
@property (readonly) Class superclass;
@property (nonatomic, retain) GKLabel *textLabel;

- (float)bottomMargin;
- (void)dealloc;
- (float)headerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (float)height;
- (id)initWithAttributes:(id)arg1;
- (BOOL)isFirstSection;
- (void)setBottomMargin:(float)arg1;
- (void)setHeight:(float)arg1;
- (void)setIsFirstSection:(BOOL)arg1;
- (void)setSectionIsFirst:(BOOL)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
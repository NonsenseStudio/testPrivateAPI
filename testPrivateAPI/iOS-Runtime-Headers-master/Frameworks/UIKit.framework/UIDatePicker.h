/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDatePicker : UIControl <NSCoding, UIPickerViewScrollTesting> {
    _UIDatePickerView * _pickerView;
    BOOL  _useCurrentDateDuringDecoding;
    BOOL  shouldAnimateSetDateCall;
}

@property (getter=_usesModernStyle, setter=_setUsesModernStyle:, nonatomic) BOOL _usesModernStyle;
@property (getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:, nonatomic) BOOL allowsZeroCountDownDuration;
@property (getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:, nonatomic) BOOL allowsZeroTimeInterval;
@property (nonatomic, copy) NSCalendar *calendar;
@property (getter=_contentWidth, nonatomic, readonly) float contentWidth;
@property (nonatomic) double countDownDuration;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) int datePickerMode;
@property (getter=_dateUnderSelectionBar, nonatomic, readonly) NSDate *dateUnderSelectionBar;
@property (getter=_drawsBackground, setter=_setDrawsBackground:, nonatomic) BOOL drawsBackground;
@property (getter=_highlightColor, setter=_setHighlightColor:, nonatomic, retain) UIColor *highlightColor;
@property (getter=_isTimeIntervalMode, nonatomic, readonly) BOOL isTimeIntervalMode;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;
@property (nonatomic) int minuteInterval;
@property (getter=_shouldAnimateSetDateCall, setter=_setShouldAnimateSetDateCall:, nonatomic) BOOL shouldAnimateSetDateCall;
@property (getter=_textColor, setter=_setTextColor:, nonatomic, retain) UIColor *textColor;
@property (getter=_textShadowColor, setter=_setTextShadowColor:, nonatomic, retain) UIColor *textShadowColor;
@property (nonatomic) double timeInterval;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:, nonatomic) BOOL useCurrentDateDuringDecoding;
@property (getter=_usesBlackChrome, setter=_setUsesBlackChrome:, nonatomic) BOOL usesBlackChrome;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (BOOL)_allowsZeroCountDownDuration;
- (BOOL)_allowsZeroTimeInterval;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (float)_contentWidth;
- (unsigned int)_controlEventsForActionTriggered;
- (id)_dateUnderSelectionBar;
- (BOOL)_drawsBackground;
- (void)_emitValueChanged;
- (id)_highlightColor;
- (void)_installPickerView:(id)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isTimeIntervalMode;
- (id)_labelTextForCalendarUnit:(unsigned int)arg1;
- (id)_locale;
- (void)_performScrollTest:(id)arg1 withIterations:(int)arg2 rowsToScroll:(int)arg3 inComponent:(int)arg4;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
- (void)_setAllowsZeroCountDownDuration:(BOOL)arg1;
- (void)_setAllowsZeroTimeInterval:(BOOL)arg1;
- (void)_setDrawsBackground:(BOOL)arg1;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)_setHighlightColor:(id)arg1;
- (void)_setHighlightsToday:(BOOL)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setShouldAnimateSetDateCall:(BOOL)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextShadowColor:(id)arg1;
- (void)_setUpInitialValues;
- (void)_setUseCurrentDateDuringDecoding:(BOOL)arg1;
- (void)_setUsesBlackChrome:(BOOL)arg1;
- (void)_setUsesModernStyle:(BOOL)arg1;
- (BOOL)_shouldAnimateSetDateCall;
- (id)_textColor;
- (id)_textShadowColor;
- (BOOL)_useCurrentDateDuringDecoding;
- (BOOL)_usesBlackChrome;
- (BOOL)_usesModernStyle;
- (void)awakeFromNib;
- (id)calendar;
- (double)countDownDuration;
- (id)date;
- (id)dateComponents;
- (int)datePickerMode;
- (void)didReceiveBindingsUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (int)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (int)minute;
- (int)minuteInterval;
- (int)second;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCalendar:(id)arg1;
- (void)setCountDownDuration:(double)arg1;
- (void)setDate:(id)arg1;
- (void)setDate:(id)arg1 animate:(BOOL)arg2;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(int)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (double)timeInterval;
- (id)timeZone;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willReceiveBindingsUpdate;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
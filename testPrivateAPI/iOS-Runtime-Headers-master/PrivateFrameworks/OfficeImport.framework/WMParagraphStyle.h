/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphStyle : WMStyle {
    WDStyle * _baseStyle;
    BOOL  _isInTextFrame;
}

+ (BOOL)isShadingNull:(id)arg1;

- (void)addParagraphProperties:(id)arg1;
- (void)addParagraphPropertiesFromStyle;
- (void)addParagraphPropertiesFromStyle:(id)arg1;
- (void)addParagraphStyleCharacterProperties:(id)arg1;
- (void)dealloc;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(BOOL)arg2;
- (BOOL)isRTLWithOverridesFromProperties:(id)arg1;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;
- (void)mapBorders:(id)arg1;
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg1;

@end
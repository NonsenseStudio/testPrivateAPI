/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICIColor : UIColor {
    CIColor * _ciColor;
    UIColor * _rgbColor;
}

- (void).cxx_destruct;
- (struct CGColor { }*)CGColor;
- (id)CIColor;
- (id)_rgbColor;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (unsigned int)hash;
- (id)initWithCIColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
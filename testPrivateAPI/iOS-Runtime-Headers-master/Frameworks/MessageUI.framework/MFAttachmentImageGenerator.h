/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAttachmentImageGenerator : UIView {
    NSString * _displayString;
    UIImage * _image;
    float  _maxImageHeight;
    struct CGSize { 
        float width; 
        float height; 
    }  _textSize;
}

+ (float)defaultHeight;
+ (id)imageForAttachment:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForAttachment:(id)arg1;
+ (id)pngDataForAttachment:(id)arg1;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (id)initWithAttachment:(id)arg1;

@end
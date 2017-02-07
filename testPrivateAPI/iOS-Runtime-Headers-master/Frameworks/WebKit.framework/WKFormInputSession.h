/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormInputSession : NSObject <_WKFormInputSession> {
    BOOL  _accessoryViewShouldNotShow;
    WKContentView * _contentView;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _customInputView;
    struct RetainPtr<WKFocusedElementInfo> { 
        void *m_ptr; 
    }  _focusedElementInfo;
    BOOL  _forceSecureTextEntry;
    struct RetainPtr<NSArray<UITextSuggestion *> > { 
        void *m_ptr; 
    }  _suggestions;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _textContentType;
    struct RetainPtr<NSObject<NSSecureCoding> > { 
        void *m_ptr; 
    }  _userObject;
}

@property (nonatomic, copy) NSString *accessoryViewCustomButtonTitle;
@property (nonatomic) BOOL accessoryViewShouldNotShow;
@property (nonatomic, retain) UIView *customInputView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <_WKFocusedElementInfo> *focusedElementInfo;
@property (nonatomic) BOOL forceSecureTextEntry;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *suggestions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessoryViewCustomButtonTitle;
- (BOOL)accessoryViewShouldNotShow;
- (id)customInputView;
- (id)focusedElementInfo;
- (BOOL)forceSecureTextEntry;
- (id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 userObject:(id)arg3;
- (void)invalidate;
- (BOOL)isValid;
- (void)setAccessoryViewCustomButtonTitle:(id)arg1;
- (void)setAccessoryViewShouldNotShow:(BOOL)arg1;
- (void)setCustomInputView:(id)arg1;
- (void)setForceSecureTextEntry:(BOOL)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTextContentType:(id)arg1;
- (id)suggestions;
- (id)textContentType;
- (id)userObject;

@end
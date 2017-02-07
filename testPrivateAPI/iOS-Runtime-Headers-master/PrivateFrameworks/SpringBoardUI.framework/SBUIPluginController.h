/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIPluginController : NSObject <SBPluginBundleController> {
    <SBUIPluginControllerHost> * _host;
    BOOL  _isVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <SBUIPluginControllerHost> *host;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) BOOL visible;

- (void).cxx_destruct;
- (void)cancelPendingActivationEvent:(int)arg1;
- (BOOL)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3;
- (void)handleBluetoothDismissal;
- (void)handlePreheatCommand;
- (void)handleViewFullyRevealed;
- (BOOL)handledButtonDownEventFromSource:(int)arg1;
- (BOOL)handledButtonTapFromSource:(int)arg1;
- (BOOL)handledButtonUpEventFromSource:(int)arg1;
- (BOOL)handledMenuButtonDownEvent;
- (BOOL)handledMenuButtonTap;
- (BOOL)handledMenuButtonUpEvent;
- (BOOL)handledPasscodeUnlockWithCompletion:(id /* block */)arg1;
- (BOOL)handledWiredMicButtonTap;
- (id)host;
- (BOOL)isVisible;
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (void)registeredWithHost;
- (void)setHost:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (BOOL)supportedAndEnabled;
- (id)viewControllerForActivationContext:(id)arg1;
- (void)viewPartiallyRevealedWithPercentRevealed:(float)arg1;
- (BOOL)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3;

@end
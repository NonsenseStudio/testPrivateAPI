/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSpace : NSObject <ADAdSpaceRemoteViewControllerDelegate, ADAdSpace_RPC, ADPrivacyViewControllerInternalDelegate, ADWebViewActionViewControllerDelegate, UIViewControllerTransitioningDelegate> {
    BOOL  _actionViewControllerReadyForPresentation;
    BOOL  _actionViewControllerWantsDismissal;
    NSDictionary * _adToLoad;
    NSString * _advertisingSection;
    NSString * _authenticationUserName;
    NSSet * _context;
    ADAdSpaceRemoteViewController * _creativeViewController;
    ADAdActionPublicAttributes * _currentActionPublicAttributes;
    ADAdImpressionPublicAttributes * _currentAdImpressionPublicAttributes;
    BOOL  _fastVisibilityContextIsFeed;
    BOOL  _gettingSnapshot;
    NSString * _identifier;
    UIImageView * _imageView;
    BOOL  _isModalInterstitial;
    double  _lastSlowCheck;
    int  _lastSnapshottingOrientation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _nativeAdFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _placeholderImageRect;
    _ADRemoteViewController * _portraitOnlyViewController;
    ADPrivacyViewController * _privacyViewController;
    <ADAdRecipient> * _recipient;
    _ADRemoteViewController * _remoteViewController;
    _UIAsyncInvocation * _remoteViewControllerRequestCancelationInvocation;
    BOOL  _requiresFastVisibiltyTestOnly;
    NSURL * _serverURL;
    BOOL  _serviceAdSpaceRequestInProgress;
    BOOL  _shouldPresentActionViewControllerWhenReady;
    int  _visibility;
    BOOL  _visibilityCheckScheduled;
    ADWebViewActionViewController * _webViewActionViewController;
}

@property (nonatomic) BOOL actionViewControllerReadyForPresentation;
@property (nonatomic) BOOL actionViewControllerWantsDismissal;
@property (nonatomic, retain) NSDictionary *adToLoad;
@property (nonatomic, copy) NSString *advertisingSection;
@property (nonatomic, copy) NSString *authenticationUserName;
@property (nonatomic, readonly) ADAdSpaceConfiguration *configuration;
@property (nonatomic, readonly) NSString *connectionAssertionIdentifier;
@property (nonatomic, copy) NSSet *context;
@property (nonatomic, retain) ADAdSpaceRemoteViewController *creativeViewController;
@property (nonatomic, retain) ADAdActionPublicAttributes *currentActionPublicAttributes;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *currentAdImpressionPublicAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fastVisibilityContextIsFeed;
@property (nonatomic) BOOL gettingSnapshot;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) BOOL isModalInterstitial;
@property (nonatomic) double lastSlowCheck;
@property (nonatomic) int lastSnapshottingOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } nativeAdFrame;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } placeholderImageRect;
@property (nonatomic, retain) _ADRemoteViewController *portraitOnlyViewController;
@property (nonatomic, retain) ADPrivacyViewController *privacyViewController;
@property (nonatomic, readonly) <ADAdRecipient> *recipient;
@property (nonatomic, retain) _ADRemoteViewController *remoteViewController;
@property (nonatomic, retain) _UIAsyncInvocation *remoteViewControllerRequestCancelationInvocation;
@property (nonatomic) BOOL requiresFastVisibiltyTestOnly;
@property (nonatomic, copy) NSURL *serverURL;
@property (nonatomic, readonly) <ADSAdSpace_RPC><NSObject> *serviceAdSpace;
@property (nonatomic) BOOL serviceAdSpaceRequestInProgress;
@property (nonatomic) BOOL shouldPresentActionViewControllerWhenReady;
@property (readonly) Class superclass;
@property (nonatomic) int visibility;
@property (nonatomic) BOOL visibilityCheckScheduled;
@property (nonatomic, retain) ADWebViewActionViewController *webViewActionViewController;

+ (int)_modalTansitionStyleForTransitionType:(int)arg1;

- (void)_clientApplicationDidBecomeActive;
- (void)_clientApplicationDidEnterBackground;
- (void)_closeConnectionIfNecessary;
- (void)_considerPresentingActionViewController;
- (void)_considerPresentingWebViewActionViewController;
- (bool)_contextForFeldsparClientIsFeed:(id)arg1;
- (void)_presentPrivacyViewController;
- (void)_remote_actionViewControllerReadyForPresentation;
- (void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1;
- (void)_remote_changeBannerViewState:(int)arg1;
- (void)_remote_close;
- (void)_remote_creativeDidFailWithError:(id)arg1;
- (void)_remote_creativeWillLoad;
- (void)_remote_dismissPortraitOnlyViewController;
- (void)_remote_dismissViewController;
- (void)_remote_dismissViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)_remote_openURL:(id)arg1;
- (void)_remote_pauseBannerMedia;
- (void)_remote_requestPortraitOnlyViewController;
- (void)_remote_requestPresentationForMRAIDOpenEvent;
- (void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2;
- (void)_remote_resumeBannerMedia;
- (void)_remote_setRequiresFastVisibilityTestOnly:(BOOL)arg1;
- (void)_remote_updateViewControllerSupportedOrientations:(unsigned int)arg1;
- (void)_requestServiceAdSpace;
- (void)_resetWebActionViewController;
- (void)_updateAllProperties;
- (BOOL)actionViewControllerReadyForPresentation;
- (BOOL)actionViewControllerWantsDismissal;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidAppear:(id)arg1;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLinkOut:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)adPrivacyViewControllerDidRenderTransparency:(id)arg1;
- (void)adSpaceRemoteViewControllerDidTerminateWithError:(id)arg1;
- (id)adToLoad;
- (id)advertisingSection;
- (id)authenticationUserName;
- (void)cancelBannerViewAction;
- (void)close;
- (id)configuration;
- (id)connectionAssertionIdentifier;
- (id)context;
- (id)creativeViewController;
- (id)currentActionPublicAttributes;
- (id)currentAdImpressionPublicAttributes;
- (void)dealloc;
- (id)description;
- (void)determineActionForTapAtLocation:(struct CGPoint { float x1; float x2; })arg1 inFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 completeHandler:(id /* block */)arg3;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTapLocation:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)fastVisibilityContextIsFeed;
- (BOOL)gettingSnapshot;
- (id)identifier;
- (id)imageView;
- (id)initForRecipient:(id)arg1;
- (void)installCreativeView;
- (void)installImageView;
- (void)interstitialWasRemovedFromSuperview;
- (BOOL)isModalInterstitial;
- (double)lastSlowCheck;
- (int)lastSnapshottingOrientation;
- (void)loadAd:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })nativeAdFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })placeholderImageRect;
- (id)portraitOnlyViewController;
- (id)privacyViewController;
- (id)recipient;
- (void)refuseBannerViewAction;
- (id)remoteViewController;
- (id)remoteViewControllerRequestCancelationInvocation;
- (BOOL)remoteViewControllerShouldAnimate:(id)arg1;
- (void)reportNativeClickEvent;
- (BOOL)requiresFastVisibiltyTestOnly;
- (void)safariViewControllerDidFinish:(id)arg1;
- (id)serverURL;
- (id)serviceAdSpace;
- (BOOL)serviceAdSpaceRequestInProgress;
- (void)setActionViewControllerReadyForPresentation:(BOOL)arg1;
- (void)setActionViewControllerWantsDismissal:(BOOL)arg1;
- (void)setAdSpaceType:(int)arg1;
- (void)setAdToLoad:(id)arg1;
- (void)setAdvertisingSection:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreativeViewController:(id)arg1;
- (void)setCurrentActionPublicAttributes:(id)arg1;
- (void)setCurrentAdImpressionPublicAttributes:(id)arg1;
- (void)setFastVisibilityContextIsFeed:(BOOL)arg1;
- (void)setGettingSnapshot:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsModalInterstitial:(BOOL)arg1;
- (void)setLastSlowCheck:(double)arg1;
- (void)setLastSnapshottingOrientation:(int)arg1;
- (void)setNativeAdFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlaceholderImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPortraitOnlyViewController:(id)arg1;
- (void)setPrivacyViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRemoteViewControllerRequestCancelationInvocation:(id)arg1;
- (void)setRequiresFastVisibiltyTestOnly:(BOOL)arg1;
- (void)setServerURL:(id)arg1;
- (void)setServiceAdSpaceRequestInProgress:(BOOL)arg1;
- (void)setShouldPresentActionViewControllerWhenReady:(BOOL)arg1;
- (void)setVisibility:(int)arg1;
- (void)setVisibilityCheckScheduled:(BOOL)arg1;
- (void)setWebViewActionViewController:(id)arg1;
- (BOOL)shouldPresentActionViewControllerWhenReady;
- (void)showAdTransparency;
- (void)showPlaceholderImage:(BOOL)arg1;
- (void)updateCreativeSnapshotImageWithDebugHighlight:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)updateVisibility;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (int)visibility;
- (BOOL)visibilityCheckScheduled;
- (id)webViewActionViewController;
- (void)webViewActionViewControllerHomeButtonWasTapped:(id)arg1;

@end
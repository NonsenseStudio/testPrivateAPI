/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <ADPrivacyViewControllerDelegate, SKUIDocumentViewController> {
    UIViewController * _privacyViewController;
    SKUITrendingSearchView * _resultsView;
    SKUITrendingSearchTemplateElement * _template;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIViewController *privacyViewController;
@property (nonatomic, retain) SKUITrendingSearchView *resultsView;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUITrendingSearchTemplateElement *template;

- (void).cxx_destruct;
- (void)_reloadResultsView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_resultsViewContentInset;
- (void)adPrivacyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)adPrivacyViewControllerDidDismiss:(id)arg1;
- (void)adPrivacyViewControllerDidLoad:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (id)privacyViewController;
- (id)resultsView;
- (void)resultsViewTapRecognized:(id)arg1;
- (void)searchResultButtonTapped:(id)arg1;
- (void)setPrivacyViewController:(id)arg1;
- (void)setResultsView:(id)arg1;
- (void)setTemplate:(id)arg1;
- (id)template;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
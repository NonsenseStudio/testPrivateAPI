/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMailActivity : UIActivity <UIStateRestoring> {
    NSString * _autosaveIdentifier;
    BOOL  _hasAnyAccount;
    BOOL  _hasFilteredAccount;
    BOOL  _keyboardVisible;
    MFMailComposeViewController * _mailComposeViewController;
    BOOL  _sourceIsManaged;
    NSString * _subject;
}

@property (nonatomic, retain) NSString *autosaveIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAnyAccount;
@property (nonatomic) BOOL hasFilteredAccount;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL keyboardVisible;
@property (nonatomic, retain) MFMailComposeViewController *mailComposeViewController;
@property (nonatomic, readonly) Class objectRestorationClass;
@property (nonatomic, readonly) <UIStateRestoring> *restorationParent;
@property (nonatomic) BOOL sourceIsManaged;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;

+ (int)activityCategory;
+ (id)applicationBundleID;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (void)_cleanup;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (id)_mailDraftRestorationURL;
- (BOOL)_restoreDraft;
- (void)_saveDraft:(id)arg1;
- (void)_setSubject:(id)arg1;
- (id)_stateRestorationDraftIsAvailable;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)autosaveIdentifier;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)hasAnyAccount;
- (BOOL)hasFilteredAccount;
- (id)init;
- (BOOL)keyboardVisible;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)mailComposeViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setHasAnyAccount:(BOOL)arg1;
- (void)setHasFilteredAccount:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)setMailComposeViewController:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (void)setSubject:(id)arg1;
- (BOOL)sourceIsManaged;
- (id)subject;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDialogManager : NSObject <ISSingleton> {
    NSMutableArray * _dialogs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int numberOfPendingDialogs;
@property (readonly) Class superclass;

+ (id)newDialogWithError:(id)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_finishDialog:(id)arg1 withButtonIndex:(int)arg2;
- (BOOL)_isDisplayingEquivalentDialog:(id)arg1;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(int)arg2;
- (void)dealloc;
- (int)numberOfPendingDialogs;
- (BOOL)presentDialog:(id)arg1;
- (BOOL)presentDialog:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (BOOL)presentDialogForError:(id)arg1;
- (BOOL)presentDialogForError:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end
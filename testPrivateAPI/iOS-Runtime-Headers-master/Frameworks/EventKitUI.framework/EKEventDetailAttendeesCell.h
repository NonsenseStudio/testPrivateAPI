/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailAttendeesCell : EKEventDetailCell {
    UIView<EKEventDetailAttendeesList> * _attendeesListView;
    BOOL  _useFaces;
    UIViewController * _viewController;
}

@property BOOL useFaces;
@property UIViewController *viewController;

- (void).cxx_destruct;
- (id)_attendeesListView;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (void)setAttendees:(id)arg1;
- (void)setUseFaces:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (BOOL)update;
- (BOOL)useFaces;
- (id)viewController;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    NSMutableSet * _activeTouches;
    float  _allowableMovement;
    unsigned int  _allowsDynamicTouchesList;
    int  _buttonType;
    unsigned int  _cancelPastAllowableMovement;
    float  _currentImpulse;
    UIHeldAction * _enoughTimeElapsed;
    unsigned int  _gotEnoughTaps;
    unsigned int  _gotTooMany;
    unsigned int  _gotTouchEnd;
    UITapRecognizer * _imp;
    int  _impulseObservations;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastCentroidScreen;
    float  _lastForce;
    double  _lastForceTimestamp;
    double  _minimumPressDuration;
    unsigned int  _numberOfTouchesRequired;
    BOOL  _requiresQuietImpulse;
    BOOL  _requiresQuietImpulseForCurrentTouchSequence;
    struct CGPoint { 
        float x; 
        float y; 
    }  _startPointScreen;
    UIDelayedAction * _tooMuchTimeElapsed;
    NSObservation * _touchForceObservation;
    NSArray * _touches;
}

@property (setter=_setButtonType:, nonatomic) int _buttonType;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } _centroidScreen;
@property (setter=_setRequiresQuietImpulse:, nonatomic) BOOL _requiresQuietImpulse;
@property (setter=_setRequiresQuietImpulseForCurrentTouchSequence:, nonatomic) BOOL _requiresQuietImpulseForCurrentTouchSequence;
@property (nonatomic) float allowableMovement;
@property (nonatomic) BOOL cancelPastAllowableMovement;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } centroid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) unsigned int numberOfTapsRequired;
@property (nonatomic) unsigned int numberOfTouchesRequired;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } startPoint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *touches;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (float)_allowableSeparation;
- (BOOL)_allowsDynamicTouchesList;
- (int)_buttonType;
- (struct CGPoint { float x1; float x2; })_centroidInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centroidScreen;
- (void)_changeTouchesListTo:(id)arg1;
- (int)_finalStateForRecognition;
- (BOOL)_impulseQuietEnough;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;
- (void)_interactionsEndedWithValidTouches:(BOOL)arg1;
- (BOOL)_requiresQuietImpulse;
- (BOOL)_requiresQuietImpulseForCurrentTouchSequence;
- (void)_resetGestureRecognizer;
- (void)_resetImpulseQuietness;
- (void)_setAllowableSeparation:(float)arg1;
- (void)_setAllowsDynamicTouchesList:(BOOL)arg1;
- (void)_setButtonType:(int)arg1;
- (void)_setRequiresQuietImpulse:(BOOL)arg1;
- (void)_setRequiresQuietImpulseForCurrentTouchSequence:(BOOL)arg1;
- (BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldReceivePress:(id)arg1;
- (struct CGPoint { float x1; float x2; })_startPointInView:(id)arg1;
- (void)_startTapFinishedTimer;
- (float)_touchSloppinessFactor;
- (BOOL)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1;
- (struct CGPoint { float x1; float x2; })_translationInView:(id)arg1;
- (BOOL)activeTouchesExceedAllowableSeparation;
- (float)allowableMovement;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)cancelPastAllowableMovement;
- (struct CGPoint { float x1; float x2; })centroid;
- (void)clearTimer;
- (double)delay;
- (void)encodeWithCoder:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (double)minimumPressDuration;
- (unsigned int)numberOfTapsRequired;
- (unsigned int)numberOfTouches;
- (unsigned int)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(float)arg1;
- (void)setCancelPastAllowableMovement:(BOOL)arg1;
- (void)setDelay:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (void)setTouches:(id)arg1;
- (void)setView:(id)arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (void)startTimer;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tooMuchElapsed:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (BOOL)cam_isHoldingLongPress;

@end
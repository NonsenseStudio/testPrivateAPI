/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATransaction : NSObject

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2;
+ (void)activate;
+ (void)activateBackground:(BOOL)arg1;
+ (void)addCommitHandler:(id /* block */)arg1 forPhase:(int)arg2;
+ (BOOL)animatesFromModelValues;
+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (id /* block */)animator;
+ (void)assertInactive;
+ (void)begin;
+ (void)commit;
+ (double)commitTime;
+ (id /* block */)completionBlock;
+ (unsigned int)currentState;
+ (BOOL)disableActions;
+ (BOOL)disableRunLoopObserverCommits;
+ (void)flush;
+ (unsigned int)generateSeed;
+ (double)inputTime;
+ (void)lock;
+ (BOOL)lowLatency;
+ (void)popAnimator;
+ (void)pushAnimator:(id /* block */)arg1;
+ (void)setAnimatesFromModelValues:(BOOL)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)setCommitHandler:(id /* block */)arg1;
+ (void)setCommitTime:(double)arg1;
+ (void)setCompletionBlock:(id /* block */)arg1;
+ (void)setDisableActions:(BOOL)arg1;
+ (void)setDisableRunLoopObserverCommits:(BOOL)arg1;
+ (void)setInputTime:(double)arg1;
+ (void)setLowLatency:(BOOL)arg1;
+ (void)setPresentationHandler:(id /* block */)arg1 queue:(id)arg2;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)synchronize;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (void)hk_performWithoutAnimations:(id /* block */)arg1;

@end
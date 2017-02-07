/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet * _allWatchdogs;
    BOOL  _createResponseReceived;
    BKSProcessAssertion * _deliverMessageProcessAssertion;
    unsigned int  _deliverMessageProcessAssertionCount;
    BKSProcessAssertion * _resumeProcessAssertion;
    BKSProcessAssertion * _seoProcessAssertion;
    int  _suspendType;
    BKSProcessAssertion * _suspendingProcessAssertion;
    NSMutableArray * _watchdogStack;
}

- (void)_dispatchBlockAfterProcessLaunch:(id /* block */)arg1;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_workspaceQueue_activateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(id /* block */)arg4;
- (void)_workspaceQueue_activateResponseReceived:(id)arg1;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned int)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_deactivateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(id /* block */)arg4;
- (void)_workspaceQueue_deactivateResponseReceived:(id)arg1;
- (unsigned int)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2;
- (void)_workspaceQueue_dropAllProcessAssertions;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion:(BOOL)arg1;
- (void)_workspaceQueue_dropResumeProcessAssertion;
- (void)_workspaceQueue_dropSEOProcessAssertion;
- (void)_workspaceQueue_dropSuspendingProcessAssertion;
- (void)_workspaceQueue_invalidate;
- (int)_workspaceQueue_lifecycleStateForSettings:(id)arg1;
- (id)_workspaceQueue_newProcessAssertionForReason:(unsigned int)arg1 withName:(id)arg2 transitionContext:(id)arg3 acquireSynchronously:(BOOL)arg4;
- (void)_workspaceQueue_performGracefulExitWithDeliveryConfirmation:(id /* block */)arg1;
- (int)_workspaceQueue_pid;
- (id)_workspaceQueue_process;
- (void)_workspaceQueue_takeAssertionsForDeactivation:(BOOL)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSuspendingProcessAssertion;
- (void)dealloc;
- (id)initWithParentWorkspace:(id)arg1 identity:(id)arg2;
- (id)parentWorkspace;

@end
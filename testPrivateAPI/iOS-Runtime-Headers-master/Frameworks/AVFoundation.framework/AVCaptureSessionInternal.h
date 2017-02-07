/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSessionInternal : NSObject {
    AVCaptureDevice * adjustingDeviceActiveFormat;
    BOOL  adjustingVideoDeviceHDREnabled;
    BOOL  authorizedToUseCameraInMultipleForegroundAppLayout;
    BOOL  automaticallyConfiguresApplicationAudioSession;
    BOOL  automaticallyConfiguresCaptureDeviceForWideColor;
    int  beginConfigRefCount;
    NSMutableArray * committedAVCaptureSessionConfigurations;
    NSMutableArray * connections;
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    BOOL  figCaptureSessionRunning;
    BOOL  figCaptureSessionStarted;
    NSMutableArray * inputs;
    BOOL  interrupted;
    AVCaptureSessionConfiguration * liveAVCaptureSessionConfiguration;
    struct OpaqueCMClock { } * masterClock;
    BOOL  notifiesOnMainThread;
    NSMutableArray * outputs;
    BOOL  resetVideoZoomFactorAndMinMaxFrameDurations;
    AVRunLoopCondition * runLoopCondition;
    BOOL  running;
    id  serverConnectionDiedNotificationToken;
    NSObject<OS_dispatch_semaphore> * serverConnectionDiedSemaphore;
    FigCaptureSessionConfiguration * sessionConfig;
    NSString * sessionPreset;
    NSError * stopError;
    BOOL  usesApplicationAudioSession;
    NSHashTable * videoPreviewLayers;
    BOOL  waitingForFigCaptureSessionConfigurationToBecomeLive;
    BOOL  waitingForFigCaptureSessionToStart;
    BOOL  waitingForFigCaptureSessionToStop;
    AVWeakReference * weakReference;
}

@end
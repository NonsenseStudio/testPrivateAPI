/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAccelerometer : NSObject {
    struct __CFRunLoop { } * _accelerometerEventsRunLoop;
    struct __CFRunLoopSource { } * _accelerometerEventsSource;
    <BKSAccelerometerDelegate> * _delegate;
    double  _interval;
    NSLock * _lock;
    int  _orientationCheckToken;
    BOOL  _orientationEventsEnabled;
    NSThread * _orientationEventsThread;
    int  _orientationNotificationsToken;
    unsigned int  _orientationPort;
    BOOL  _passiveOrientationEvents;
    double  _updateInterval;
    float  _xThreshold;
    float  _yThreshold;
    float  _zThreshold;
}

@property (nonatomic) BOOL accelerometerEventsEnabled;
@property (nonatomic) <BKSAccelerometerDelegate> *delegate;
@property (nonatomic) BOOL orientationEventsEnabled;
@property (nonatomic) BOOL passiveOrientationEvents;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;

- (void)_checkIn;
- (void)_checkOut;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (void)_serverWasRestarted;
- (void)_updateOrientationServer;
- (BOOL)accelerometerEventsEnabled;
- (int)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)orientationEventsEnabled;
- (BOOL)passiveOrientationEvents;
- (void)setAccelerometerEventsEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientationEventsEnabled:(BOOL)arg1;
- (void)setPassiveOrientationEvents:(BOOL)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setZThreshold:(float)arg1;
- (double)updateInterval;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;

@end
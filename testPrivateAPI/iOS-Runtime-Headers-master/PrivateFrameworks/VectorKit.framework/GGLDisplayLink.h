/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLDisplayLink : NSObject {
    CADisplay * _display;
    CADisplayLink * _displayLink;
    SEL  _selector;
    /* Warning: unhandled struct encoding: '{_geo_weak_ptr<id>="_p"@}' */ struct _geo_weak_ptr<id> { 
        id _p; 
    }  _target;
}

@property (nonatomic, retain) CADisplay *display;
@property (nonatomic) int frameRate;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic, readonly) double targetTimestamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (int)frameRate;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (BOOL)isPaused;
- (void)setDisplay:(id)arg1;
- (void)setFrameRate:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (id)target;
- (double)targetTimestamp;

@end
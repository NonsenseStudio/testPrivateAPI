/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAudioAgent : PLAgent {
    PLEntryNotificationOperatorComposition * _accessoryPowerCallback;
    int  _accessoryPowerState;
    PLXPCListenerOperatorComposition * _audioAppXPCListener;
    NSString * _audioHardware;
    NSDictionary * _audioPowerModel;
    PLEntry * _entryRoutingOld;
    BOOL  _headsetIsPlayingAudio;
    NSDate * _lastAudioStateChangeDate;
    NSMutableArray * _nsOutputNotifications;
    NSMutableArray * _nsRoutingNotifications;
    PLXPCListenerOperatorComposition * _screenMirroringXPCListener;
    PLXPCListenerOperatorComposition * _speakerAmpXPCListener;
    BOOL  _speakerIsPlayingAudio;
}

@property (retain) PLEntryNotificationOperatorComposition *accessoryPowerCallback;
@property int accessoryPowerState;
@property (retain) PLXPCListenerOperatorComposition *audioAppXPCListener;
@property (readonly) NSString *audioHardware;
@property (readonly) NSDictionary *audioPowerModel;
@property (retain) PLEntry *entryRoutingOld;
@property BOOL headsetIsPlayingAudio;
@property (retain) NSDate *lastAudioStateChangeDate;
@property (readonly) NSMutableArray *nsOutputNotifications;
@property (readonly) NSMutableArray *nsRoutingNotifications;
@property (retain) PLXPCListenerOperatorComposition *screenMirroringXPCListener;
@property (retain) PLXPCListenerOperatorComposition *speakerAmpXPCListener;
@property BOOL speakerIsPlayingAudio;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionNowPlaying;
+ (id)entryEventForwardDefinitionOutput;
+ (id)entryEventForwardDefinitionRouting;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionAudioApp;
+ (id)entryEventPointDefinitionSpeakerAmp;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)accessoryPowerCallback;
- (int)accessoryPowerState;
- (BOOL)active;
- (id)activeRoute;
- (id)audioAppXPCListener;
- (id)audioHardware;
- (double)audioPowerForRoute:(id)arg1 forVolume:(double)arg2;
- (id)audioPowerModel;
- (id)buildCallBack:(id)arg1 withGroup:(BOOL)arg2 withHandler:(id /* block */)arg3;
- (double)convertSpeakerProtectionModeledPowerToTotalSpeakerPower:(double)arg1;
- (void)createAirPlayAccountingEvents:(id)arg1;
- (void)createAudioAccountingEvents:(id)arg1;
- (void)createBluetoothAccountingEvents:(id)arg1;
- (void)createCarPlayAccountingEvents:(id)arg1;
- (id)entryRoutingOld;
- (void)handleLightningStatusCallback:(id)arg1;
- (void)handleNowPlayingApplicationIsPlayingDidChange;
- (BOOL)headphonesConnected;
- (BOOL)headsetHasInput;
- (BOOL)headsetIsPlayingAudio;
- (id)init;
- (void)initOperatorDependancies;
- (id)lastAudioStateChangeDate;
- (void)log;
- (void)logEventForwardOutput;
- (void)logEventForwardRouting;
- (void)logEventPointAudioApp:(id)arg1;
- (void)logEventPointSpeakerAmp:(id)arg1;
- (void)modelAudioPower;
- (void)modelAudioPowerCodec:(id)arg1;
- (void)modelAudioPowerSpeaker:(id)arg1;
- (double)modelAudioPowerWithVolume:(double)arg1;
- (BOOL)muted;
- (id)nowPlayingAppBundleID;
- (int)nowPlayingAppPID;
- (id)nsOutputNotifications;
- (id)nsRoutingNotifications;
- (id)outputCategory;
- (id)returnVolumeOrOutPutCategory:(int)arg1;
- (id)screenMirroringXPCListener;
- (void)setAccessoryPowerCallback:(id)arg1;
- (void)setAccessoryPowerState:(int)arg1;
- (void)setAudioAppXPCListener:(id)arg1;
- (void)setEntryRoutingOld:(id)arg1;
- (void)setHeadsetIsPlayingAudio:(BOOL)arg1;
- (void)setLastAudioStateChangeDate:(id)arg1;
- (void)setScreenMirroringXPCListener:(id)arg1;
- (void)setSpeakerAmpXPCListener:(id)arg1;
- (void)setSpeakerIsPlayingAudio:(BOOL)arg1;
- (void)setupAVSystemController;
- (id)speakerAmpXPCListener;
- (BOOL)speakerIsPlayingAudio;
- (id)volume;

@end
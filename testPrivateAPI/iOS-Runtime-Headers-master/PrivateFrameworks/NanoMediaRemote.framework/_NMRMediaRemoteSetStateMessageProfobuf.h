/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying> {
    NSData * _applicationInfo;
    NSData * _digest;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    }  _has;
    NSData * _nowPlayingInfo;
    NSData * _payload;
    NSData * _playbackQueue;
    int  _state;
    NSData * _supportedCommands;
    double  _timestamp;
}

@property (nonatomic, retain) NSData *applicationInfo;
@property (nonatomic, retain) NSData *digest;
@property (nonatomic, readonly) BOOL hasApplicationInfo;
@property (nonatomic, readonly) BOOL hasDigest;
@property (nonatomic, readonly) BOOL hasNowPlayingInfo;
@property (nonatomic, readonly) BOOL hasPayload;
@property (nonatomic, readonly) BOOL hasPlaybackQueue;
@property (nonatomic) BOOL hasState;
@property (nonatomic, readonly) BOOL hasSupportedCommands;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSData *nowPlayingInfo;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSData *playbackQueue;
@property (nonatomic) int state;
@property (nonatomic, retain) NSData *supportedCommands;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)applicationInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digest;
- (BOOL)hasApplicationInfo;
- (BOOL)hasDigest;
- (BOOL)hasNowPlayingInfo;
- (BOOL)hasPayload;
- (BOOL)hasPlaybackQueue;
- (BOOL)hasState;
- (BOOL)hasSupportedCommands;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (id)payload;
- (id)playbackQueue;
- (BOOL)readFrom:(id)arg1;
- (void)setApplicationInfo:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (int)state;
- (id)supportedCommands;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
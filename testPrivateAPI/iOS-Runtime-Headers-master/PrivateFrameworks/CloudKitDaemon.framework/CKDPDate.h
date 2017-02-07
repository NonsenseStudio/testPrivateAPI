/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPDate : PBCodable <NSCopying> {
    struct { 
        unsigned int time : 1; 
    }  _has;
    double  _time;
}

@property (nonatomic) BOOL hasTime;
@property (nonatomic) double time;

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTime;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTime:(BOOL)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (void)writeTo:(id)arg1;

@end
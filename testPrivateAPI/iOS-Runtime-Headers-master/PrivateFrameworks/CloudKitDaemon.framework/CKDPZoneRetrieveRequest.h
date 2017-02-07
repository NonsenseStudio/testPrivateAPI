/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int onlyFetchPCSInfo : 1; 
    }  _has;
    BOOL  _onlyFetchPCSInfo;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic) BOOL hasOnlyFetchPCSInfo;
@property (nonatomic, readonly) BOOL hasZoneIdentifier;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOnlyFetchPCSInfo;
- (BOOL)hasZoneIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)onlyFetchPCSInfo;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasOnlyFetchPCSInfo:(BOOL)arg1;
- (void)setOnlyFetchPCSInfo:(BOOL)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
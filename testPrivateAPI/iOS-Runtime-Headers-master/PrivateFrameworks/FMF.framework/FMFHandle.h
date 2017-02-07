/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * __prettyNameInternal;
    NSArray * _aliasServerIds;
    NSNumber * _dsid;
    NSDictionary * _expiresByGroupId;
    NSNumber * _favoriteOrder;
    NSString * _hashedDSID;
    NSString * _identifier;
    int  _idsStatus;
    NSArray * _invitationSentToIds;
    BOOL  _isFamilyMember;
    BOOL  _pending;
    NSString * _qualifiedIdentifier;
    BOOL  _reachable;
    NSString * _serverId;
    NSNumber * _trackingTimestamp;
}

@property (nonatomic, copy) NSString *_prettyNameInternal;
@property (nonatomic, copy) NSArray *aliasServerIds;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, copy) NSDictionary *expiresByGroupId;
@property (nonatomic, copy) NSNumber *favoriteOrder;
@property (nonatomic, copy) NSString *hashedDSID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int idsStatus;
@property (nonatomic, copy) NSArray *invitationSentToIds;
@property (nonatomic) BOOL isFamilyMember;
@property (getter=isPending, nonatomic) BOOL pending;
@property (nonatomic, copy) NSString *qualifiedIdentifier;
@property (nonatomic) BOOL reachable;
@property (nonatomic, copy) NSString *serverId;
@property (nonatomic, copy) NSNumber *trackingTimestamp;

+ (id)familyHandleWithId:(id)arg1 dsid:(id)arg2;
+ (id)handleWithId:(id)arg1;
+ (id)handleWithId:(id)arg1 serverId:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_prettyNameInternal;
- (void)abPreferencesDidChange;
- (void)addressBookDidChange;
- (id)aliasServerIds;
- (void)clearFavoriteOrder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresByGroupId;
- (id)favoriteOrder;
- (unsigned int)hash;
- (id)hashedDSID;
- (id)identifier;
- (int)idsStatus;
- (id)initWithCoder:(id)arg1;
- (id)invitationSentToIds;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFamilyMember;
- (BOOL)isPending;
- (BOOL)isPhoneNumber;
- (BOOL)isSharingThroughGroupId:(id)arg1;
- (id)prettyName;
- (int)prettyNameCompare:(id)arg1;
- (id)qualifiedIdentifier;
- (BOOL)reachable;
- (id)recordId;
- (id)serverId;
- (void)setAliasServerIds:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setExpiresByGroupId:(id)arg1;
- (void)setFavoriteOrder:(id)arg1;
- (void)setHashedDSID:(id)arg1;
- (void)setICloudId:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsStatus:(int)arg1;
- (void)setInvitationSentToIds:(id)arg1;
- (void)setIsFamilyMember:(BOOL)arg1;
- (void)setPending:(BOOL)arg1;
- (void)setQualifiedIdentifier:(id)arg1;
- (void)setReachable:(BOOL)arg1;
- (void)setServerId:(id)arg1;
- (void)setTrackingTimestamp:(id)arg1;
- (void)set_prettyNameInternal:(id)arg1;
- (id)trackingTimestamp;

@end
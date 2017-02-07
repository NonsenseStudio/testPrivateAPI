/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchRequest : NSObject {
    GKMatchRequestInternal * _internal;
    id /* block */  _inviteeResponseHandler;
    id /* block */  _recipientResponseHandler;
}

@property unsigned int defaultNumberOfPlayers;
@property (retain) GKMatchRequestInternal *internal;
@property (copy) NSString *inviteMessage;
@property (copy) id /* block */ inviteeResponseHandler;
@property unsigned int maxPlayers;
@property unsigned int minPlayers;
@property unsigned int playerAttributes;
@property unsigned int playerGroup;
@property (retain) NSArray *playersToInvite;
@property (copy) id /* block */ recipientResponseHandler;
@property (retain) NSArray *recipients;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (unsigned int)maxPlayersAllowedForMatchOfType:(unsigned int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)defaultNumberOfPlayersIsValid;
- (id)description;
- (void)ensureValidityHosted:(BOOL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)guestPlayers;
- (unsigned int)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id /* block */)inviteeResponseHandler;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRecipientCountValid;
- (BOOL)isTurnBasedValid;
- (BOOL)isValidForHosted:(BOOL)arg1;
- (BOOL)isValidWithMax:(unsigned int)arg1;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)playersToInvite;
- (id /* block */)recipientResponseHandler;
- (id)recipients;
- (void)removeLocalPlayerFromPlayersToInvite;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setInviteeResponseHandler:(id /* block */)arg1;
- (void)setPlayersToInvite:(id)arg1;
- (void)setRecipientResponseHandler:(id /* block */)arg1;
- (void)setRecipients:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
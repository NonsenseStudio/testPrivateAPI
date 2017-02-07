/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchSendToProtobufConduitCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSData *rawResponse;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)sendToProtobufConduitCompleted;
+ (id)sendToProtobufConduitCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)rawResponse;
- (void)setRawResponse:(id)arg1;

@end
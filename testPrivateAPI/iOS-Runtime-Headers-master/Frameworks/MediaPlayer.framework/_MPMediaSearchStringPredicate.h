/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPMediaSearchStringPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    NSSet * _properties;
    NSString * _searchString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSSet *properties;
@property (nonatomic, copy) NSString *searchString;
@property (readonly) Class superclass;

+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)properties;
- (id)protobufferEncodableObject;
- (id)searchString;
- (void)setProperties:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
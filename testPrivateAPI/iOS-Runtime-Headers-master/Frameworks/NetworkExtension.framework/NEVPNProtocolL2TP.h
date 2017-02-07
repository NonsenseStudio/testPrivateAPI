/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolL2TP : NEVPNProtocolPPP {
    NSString * _localIdentifier;
    int  _machineAuthenticationMethod;
    NEIdentityKeychainItem * _machineIdentity;
    BOOL  _machineIdentityDataImported;
    NSData * _machineIdentityDataInternal;
    NEKeychainItem * _sharedSecretKeychainItem;
}

@property (copy) NSString *localIdentifier;
@property int machineAuthenticationMethod;
@property (retain) NEIdentityKeychainItem *machineIdentity;
@property BOOL machineIdentityDataImported;
@property (copy) NSData *machineIdentityDataInternal;
@property (copy) NSData *machineIdentityReference;
@property (copy) NEKeychainItem *sharedSecretKeychainItem;
@property (copy) NSData *sharedSecretReference;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyIPSecDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __SCNetworkInterface { }*)createInterface;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localIdentifier;
- (int)machineAuthenticationMethod;
- (id)machineIdentity;
- (BOOL)machineIdentityDataImported;
- (id)machineIdentityDataInternal;
- (id)machineIdentityReference;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences { }*)arg1;
- (BOOL)needToUpdateKeychain;
- (void)removeKeychainItemsInDomain:(int)arg1 keepIdentity:(bool)arg2;
- (void)setIPSecSettingsFromLegacyDictionary:(id)arg1;
- (void)setLocalIdentifier:(id)arg1;
- (void)setMachineAuthenticationMethod:(int)arg1;
- (void)setMachineIdentity:(id)arg1;
- (void)setMachineIdentityDataImported:(BOOL)arg1;
- (void)setMachineIdentityDataInternal:(id)arg1;
- (void)setMachineIdentityReference:(id)arg1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setSharedSecretKeychainItem:(id)arg1;
- (void)setSharedSecretReference:(id)arg1;
- (id)sharedSecretKeychainItem;
- (id)sharedSecretReference;
- (void)syncWithKeychainInDomain:(int)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;

@end
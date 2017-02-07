/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUSoftwareUpdateAssetMatcher : SUAssetStateMatcher {
    BOOL  _checkTatsu;
    NSString * _fromBuild;
    NSString * _fromProductType;
    NSString * _fromReleaseType;
    NSString * _fromVersion;
    SUPreferences * _preferences;
}

@property (nonatomic) BOOL compareWithTatsuForEligibility;
@property (nonatomic, readonly) NSString *fromBuild;
@property (nonatomic, readonly) NSString *fromProductType;
@property (nonatomic, readonly) NSString *fromReleaseType;
@property (nonatomic, readonly) NSString *fromVersion;
@property (nonatomic, retain) SUPreferences *preferences;

+ (id)matcherForCurrentDevice;
+ (id)matcherForCurrentDeviceWithInterestedStates:(int)arg1;

- (id)_copyMatchingAssetsAfterSortingAndFiltering:(id)arg1;
- (id)_createCleanOSVersionString:(id)arg1;
- (id)_createSortedAndFilteredAssetResults:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;
- (id)_fileterPatchesIfNecessary:(id)arg1;
- (id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2;
- (unsigned int)_getIndexOfHighestVersionedAsset:(id)arg1 usingFirstKey:(id)arg2 secondKey:(id)arg3;
- (BOOL)_isDeviceEligibleForUpdate:(id)arg1;
- (BOOL)_isPossibleSoftwareUpdate:(id)arg1;
- (BOOL)compareWithTatsuForEligibility;
- (void)dealloc;
- (id)fromBuild;
- (id)fromProductType;
- (id)fromReleaseType;
- (id)fromVersion;
- (id)initWithVersion:(id)arg1 build:(id)arg2 productType:(id)arg3 releaseType:(id)arg4 interestedStates:(int)arg5;
- (id)preferences;
- (void)setCompareWithTatsuForEligibility:(BOOL)arg1;
- (void)setPreferences:(id)arg1;

@end
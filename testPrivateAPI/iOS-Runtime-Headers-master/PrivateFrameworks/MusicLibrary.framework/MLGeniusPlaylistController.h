/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLGeniusPlaylistController : NSObject {
    void * _echo;
    void * _echo_cluster_playlist;
    void * _echo_library;
    NSMutableData * _sharedBlobMutableData;
}

+ (unsigned int)defaultMinTrackCount;
+ (unsigned int)defaultTrackCount;
+ (id)geniusTracksForSeedTrack:(id)arg1 error:(id*)arg2;
+ (BOOL)hasGeniusDataAvailable;
+ (BOOL)hasGeniusFeatureEnabled;
+ (void)ignoreUnusedWarnings;
+ (id)playlistControllerWithSeedTracks:(id)arg1 error:(id*)arg2;
+ (void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(id /* block */)arg3;
+ (BOOL)useFakeGeniusData;

- (void).cxx_destruct;
- (BOOL)_canIncludeTrackInGeniusContainer:(id)arg1;
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id*)arg2;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned int)arg2 stride:(int)arg3;
- (BOOL)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id*)arg3;
- (BOOL)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id*)arg3;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned int)arg1 error:(id*)arg2;
- (id)_sharedBlobMutableData;
- (void)dealloc;
- (id)init;
- (id)tracksFromClusterForCount:(unsigned int)arg1 error:(id*)arg2;

@end
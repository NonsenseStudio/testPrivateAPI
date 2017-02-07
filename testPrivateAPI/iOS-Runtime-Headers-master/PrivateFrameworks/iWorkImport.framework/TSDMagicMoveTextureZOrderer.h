/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMagicMoveTextureZOrderer : NSObject {
    NSArray * _incomingTexturesInZOrder;
    NSArray * _outgoingTexturesInZOrder;
    NSArray * _percentTextures;
    float * _percentTexturesTimes;
    unsigned int  _zOrderIntersectionsCount;
    NSArray * _zOrderMatches;
}

@property (nonatomic, readonly) NSArray *flattenableAnimationMatches;
@property (nonatomic, readonly) unsigned int zOrderIntersectionsCount;

- (void)dealloc;
- (id)flattenableAnimationMatches;
- (id)init;
- (id)initWithAnimationMatches:(id)arg1;
- (void)p_addFlattenableAnimationMatches:(id)arg1 toArray:(id)arg2;
- (void)p_addVisibleTexturesFromMatches:(id)arg1 toArray:(id)arg2 interpolatedPercent:(float)arg3;
- (void)p_adjustZOrdererMatchesZIndexByTextureType:(id)arg1;
- (unsigned int)p_bestZIndexForUnassignedMatch:(id)arg1 inMatchArray:(id)arg2;
- (void)p_calculateTextureArraysFromIntersections;
- (id)p_debugDescription;
- (id)p_newArrayBySortingMatches:(id)arg1 withInterpolatedPercent:(float)arg2;
- (void)p_setupZOrderMatchesWithAnimationMatches:(id)arg1;
- (unsigned int)p_zIntersectionsBetweenZOrdererMatches:(id)arg1;
- (id)texturedRectanglesAtPercent:(double)arg1;
- (unsigned int)zOrderIntersectionsCount;

@end
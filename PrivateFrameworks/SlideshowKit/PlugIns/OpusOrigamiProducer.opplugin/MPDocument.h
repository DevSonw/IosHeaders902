/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPLayerableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol MPAssetKeyDelegate;
@class MCMontage, NSArray, NSMutableDictionary, MPDocumentInternal;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {

	MCMontage* _montage;
	NSArray* _userProvidedStacks;
	NSMutableDictionary* _documentAttributes;
	NSMutableDictionary* _fileProperties;
	NSMutableDictionary* _layerGroups;
	char _preserveMedia;
	id<MPAssetKeyDelegate> _assetKeyDelegate;
	MPDocumentInternal* _internal;

}
+(id)writableTypes;
+(id)unarchiveDocumentFromData:(id)arg1 withAssetKeyDelegate:(id)arg2 andMediaProperties:(id)arg3 error:(id*)arg4 ;
+(id)unarchiveDocumentFromData:(id)arg1 error:(id*)arg2 ;
+(id)keyedUnarchiverWithData:(id)arg1 assetKeyDelegate:(id)arg2 mediaProperties:(id)arg3 error:(id*)arg4 ;
+(char)isNativeType:(id)arg1 ;
+(id)readableTypes;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)mainLayers;
-(void)upgradeDocument;
-(void)endBatchModify;
-(char)isAudioAtPath:(id)arg1 ;
-(id)allSlides:(char)arg1 ;
-(void)addAudioPath:(id)arg1 ;
-(void)removePaths:(id)arg1 ;
-(id)videoPaths;
-(void)addVideoPath:(id)arg1 ;
-(char)isImageAtPath:(id)arg1 ;
-(void)addVideoPaths:(id)arg1 ;
-(id)mediaProperties;
-(int)countOfLayers;
-(double)posterTime;
-(id)keyedLayers;
-(void)setVideoPaths:(id)arg1 ;
-(void)setLoopingMode:(unsigned)arg1 ;
-(void)removeAllLayers;
-(char)isInBatchModify;
-(void)setStyleID:(id)arg1 ;
-(id)styleID;
-(char)preserveMedia;
-(void)addAudioPaths:(id)arg1 ;
-(void)setAudioPaths:(id)arg1 ;
-(id)allSongs;
-(char)isMovieAtPath:(id)arg1 ;
-(float)volumeForPath:(id)arg1 ;
-(id)cityForPath:(id)arg1 ;
-(id)stateForPath:(id)arg1 ;
-(id)absolutePathForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(id)avAssetForAssetAtPath:(id)arg1 ;
-(id)titleEffect;
-(id)dataForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(void)setupDocumentLayerGroup;
-(void)beginBatchModify;
-(void)organizeRandomTransitions;
-(void)setSavesPathsAsAbsolute:(char)arg1 ;
-(void)removeAllVideoPaths;
-(void)removeAllAudioPaths;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(void)setupLayerGroups;
-(id)propertiesForMediaPathAndCreateIfNeeded:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
-(CGImageRef)CGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(char)arg4 now:(char)arg5 ;
-(id)flightPlanFrom:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(id)organizedRandomTransitions;
-(id)lastRandomTransition;
-(void)setMediaProperties:(id)arg1 ;
-(void)setAlwaysLookupAbsolutePaths:(char)arg1 ;
-(void)setLastRandomTransition:(id)arg1 ;
-(char)nearingEndWithOptions:(id)arg1 ;
-(double)aspectRatioDidChange:(float)arg1 atTime:(double)arg2 ;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(int)arg2 ;
-(void)removeObjectFromLayersAtIndex:(int)arg1 ;
-(void)replaceObjectInLayersAtIndex:(int)arg1 withObject:(id)arg2 ;
-(id)cachedAbsolutePathFromPath:(id)arg1 ;
-(id)cachedAbsoluteStillPathFromPath:(id)arg1 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(void)setAbsoluteStillPath:(id)arg1 forKey:(id)arg2 ;
-(char)detectFacesInBackground;
-(void)setTemporarilyCacheAbsolutePaths:(char)arg1 ;
-(id)audioPaths;
-(void)_setMediaProperties:(id)arg1 ;
-(void)setAssetKeyDelegate:(id)arg1 ;
-(id)propertiesForMediaPath:(id)arg1 ;
-(CGColorRef)backgroundCGColor;
-(id)orderedVideoPaths;
-(double)durationForPath:(id)arg1 ;
-(id)documentAttributeForKey:(id)arg1 ;
-(void)setDocumentLayerGroup:(id)arg1 ;
-(void)setDocumentAttribute:(id)arg1 forKey:(id)arg2 ;
-(CGSize)resolutionForPath:(id)arg1 ;
-(void)setAbsolutePath:(id)arg1 forKey:(id)arg2 ;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(double)startTimeForPath:(id)arg1 ;
-(double)stopTimeForPath:(id)arg1 ;
-(id)regionsOfInterestForPath:(id)arg1 detect:(char)arg2 ;
-(id)regionsOfInterestForPath:(id)arg1 ;
-(id)descriptionForRandomTransitionPresetID:(id)arg1 ;
-(char)isSupportedMovieForAssetAtPath:(id)arg1 ;
-(id)absoluteVideoPaths;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)insertLayers:(id)arg1 atIndex:(int)arg2 ;
-(void)removeLayersAtIndices:(id)arg1 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)reconnectAllTransitions;
-(id)documentLayerGroup;
-(char)layersCanPositionZIndex;
-(id)allEffectContainers;
-(id)objectInLayersAtIndex:(int)arg1 ;
-(id)assetKeyDelegate;
-(id)authoringOptionForKey:(id)arg1 ;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(char)savesPathsAsAbsolute;
-(unsigned)loopingMode;
-(id)absolutePathForAssetAtPath:(id)arg1 ;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(id)latitudeForPath:(id)arg1 ;
-(id)longitudeForPath:(id)arg1 ;
-(id)keywordsForPath:(id)arg1 ;
-(id)creationDateForPath:(id)arg1 ;
-(id)placeForPath:(id)arg1 ;
-(void)setMontage:(id)arg1 ;
-(id)montage;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(id)allSlides;
-(id)fullDebugLog;
-(id)layerForKey:(id)arg1 ;
-(void)removeAllStacks;
-(id)definedPlaceNameForPath:(id)arg1 ;
-(CGImageRef)CGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(int)mapLevelForPath:(id)arg1 ;
-(int)antialiasLevel;
-(CGPoint)latLongPointForMap:(id)arg1 withAttributes:(id)arg2 ;
-(double)fadeOutAudioDuration;
-(id)outroEffect;
-(id)tiledMapPathsForAttributes:(id)arg1 ;
-(CGImageRef)thumbnailCGImageForAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(int)mediaTypeForPath:(id)arg1 ;
-(char)readFromPath:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)setPreserveMedia:(char)arg1 ;
-(id)allElements;
-(id)areaForPath:(id)arg1 ;
-(id)captionForPath:(id)arg1 ;
-(id)attributeForAssetAtPath:(id)arg1 forKey:(id)arg2 ;
-(CGPoint)pointForMap:(id)arg1 withAttributes:(id)arg2 ;
-(id)neighborhoodForPath:(id)arg1 ;
-(void)setProperties:(id)arg1 forMediaPath:(id)arg2 ;
-(void)removePropertiesForMediaPath:(id)arg1 ;
-(id)altitudeForPath:(id)arg1 ;
-(void)addStacks:(id)arg1 ;
-(void)setStacks:(id)arg1 ;
-(id)marimbaDocument;
-(id)oceanForPath:(id)arg1 ;
-(id)stacks;
-(id)countryForPath:(id)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(char)isLive;
-(void)dump;
-(double)videoDuration;
-(float)aspectRatio;
-(id)allEffects;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(double)duration;
-(id)currentStyle;
-(id)undoManager;
-(id)title;
-(id)layers;
-(unsigned)applyStyle:(id)arg1 ;
-(id)displayName;
-(id)uuid;
-(id)fileURL;
-(void)setUndoManager:(id)arg1 ;
-(void)cleanup;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)addLayers:(id)arg1 ;
-(void)setFileURL:(id)arg1 ;
-(void)removePath:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(id)documentAttributes;
-(void)addLayer:(id)arg1 ;
@end


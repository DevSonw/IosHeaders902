/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVAssetInternal, NSArray;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVAssetInternal* _asset;

}

@property (readonly) NSArray * availableChapterLocales; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) char isProxy; 
@property (nonatomic,readonly) SCD_Struct_CM5 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) CGSize naturalSize; 
+(id)assetWithURL:(id)arg1 figPlaybackItem:(OpaqueFigPlaybackItemRef)arg2 trackIDs:(id)arg3 dynamicBehavior:(char)arg4 ;
+(id)assetWithURL:(id)arg1 ;
+(id)assetProxyWithPropertyList:(id)arg1 ;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(id)availableChapterLanguages;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(char)_mindsFragments;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(char)arg1 ;
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(char)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)trackGroups;
-(id)_firstTrackGroupWithMediaType:(id)arg1 ;
-(id)_mediaSelectionGroupDictionaries;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)tracksWithMediaCharacteristics:(id)arg1 ;
-(void)_serverHasDied;
-(char)isExportable;
-(char)isComposable;
-(char)isCompatibleWithAirPlayVideo;
-(char)canContainFragments;
-(char)containsFragments;
-(id)_weakReference;
-(id)_comparisonToken;
-(int)statusOfValueForKey:(id)arg1 ;
-(void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(char)_needsLegacyChangeNotifications;
-(unsigned)referenceRestrictions;
-(id)audioAlternatesTrackGroup;
-(id)subtitleAlternatesTrackGroup;
-(id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2 ;
-(id)preferredMediaSelection;
-(id)_ID3Metadata;
-(void)_tracksDidChange;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)compatibleTrackForCompositionTrack:(id)arg1 ;
-(char)_hasResourceLoaderDelegate;
-(void)_handleURLRequest:(id)arg1 ;
-(void)_loadChapterInfo;
-(id)_chapterDataTypeForMediaSubType:(long)arg1 ;
-(unsigned)_addChapterMetadataItem:(id)arg1 timeRange:(SCD_Struct_CM6)arg2 toChapters:(id)arg3 fromIndex:(unsigned)arg4 ;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3 ;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 ;
-(id)_chapterTracks;
-(char)_containsAtLeastOnePlayableAudioTrack;
-(char)_containsAtLeastOnePlayableVideoTrack;
-(id)_exportURL;
-(int)unusedTrackID;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)lyrics;
-(NSArray *)availableChapterLocales;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)trackReferences;
-(id)trackWithTrackID:(int)arg1 ;
-(char)_isStreaming;
-(char)hasProtectedContent;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)creationDate;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(char)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(char)isProxy;
-(unsigned)hash;
-(SCD_Struct_CM5)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(CGSize)naturalSize;
-(char)isReadable;
-(id)metadata;
-(char)isCompatibleWithSavedPhotosAlbum;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(id)propertyListForProxy;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)tracks;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVCallbackCancellation, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPropertyStorage, AVPixelBufferAttributeMediator, NSObject, AVAudioSessionMediaPlayerOnly, AVPlayerItem, NSMutableSet, NSArray, NSMutableDictionary, AVOutputContext, NSMutableArray, NSHashTable, NSError, NSString, NSDictionary;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	id<AVCallbackCancellation> currentItemSuppressesVideoLayersCallbackInvoker;
	id<AVCallbackCancellation> currentItemPreferredPixelBufferAttributesCallbackInvoker;
	AVPropertyStorage* propertyStorage;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSObject*<OS_dispatch_queue> currentItemPropertyUpdateQueue;
	NSObject*<OS_dispatch_queue> layersQ;
	OpaqueCMTimebaseRef proxyTimebase;
	char logPerformanceData;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	NSMutableSet* items;
	NSArray* queueModifications;
	char iapdExtendedModeIsActive;
	NSMutableDictionary* pendingFigPlayerProperties;
	AVOutputContext* outputContext;
	CFDictionaryRef videoLayers;
	NSMutableArray* subtitleLayers;
	NSMutableArray* closedCaptionLayers;
	NSHashTable* avPlayerLayers;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/id prerollCompletionHandler;
	OpaqueFigPlayerRef figPlayer;
	int status;
	NSError* error;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	char needsToCreateFigPlayer;
	NSString* externalPlaybackVideoGravity;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	NSArray* itemsInFigPlayQueue;
	NSArray* expectedAssetTypes;
	char reevaluateBackgroundPlayback;
	char hostApplicationInForeground;
	char hadAssociatedOnscreenPlayerLayerWhenSuspended;
	NSDictionary* vibrationPattern;
	OpaqueCMClockRef figMasterClock;
	char autoSwitchStreamVariants;
	char preparesItemsForPlaybackAsynchronously;
	char allowsOutOfBandTextTrackRendering;
	CGSize cachedDisplaySize;
	char shouldReduceResourceUsage;
	NSString* multichannelAudioStrategy;
	char usesDedicatedNotificationQueueForMediaServices;
	CGSize dimensionsOfReservedVideoMemory;
	NSArray* displaysUsedForPlayback;

}
@end


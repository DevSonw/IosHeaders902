/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject, NSError, AVAsset, AVAssetTrack, NSString, NSURL, AVAudioMix, AVVideoComposition, AVCustomVideoCompositorSession, NSArray, AVMetadataItemFilter;

@interface AVAssetExportSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSObject*<OS_dispatch_queue> readWriteQueue;
	OpaqueFigRemakerRef remaker;
	int status;
	NSError* error;
	float progress;
	AVAsset* asset;
	AVAssetTrack* firstVideoTrack;
	NSString* preset;
	NSString* preset16x9;
	NSURL* outputURL;
	NSString* outputFileType;
	NSString* actualOutputFileType;
	NSString* audioTimePitchAlgorithm;
	AVAudioMix* audioMix;
	AVVideoComposition* videoComposition;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSArray* metadata;
	AVMetadataItemFilter* metadataItemFilter;
	SCD_Struct_CM6 timeRange;
	SCD_Struct_CM5 minVideoFrameDuration;
	char canUseFastFrameRateConversion;
	NSString* videoFrameRateConversionAlgorithm;
	char waitingForFastFrameRateResponse;
	NSObject*<OS_dispatch_semaphore> canUseFastFrameRateConversionSemaphore;
	long long maxFileSize;
	/*^block*/id handler;
	char optimizeForNetworkUse;
	char useMultiPass;
	NSURL* directoryForTemporaryFiles;
	char outputFileCreatedByRemaker;
	long compatibleFileTypesDispatchOncePredicate;
	NSArray* compatibleFileTypes;
	NSObject*<OS_dispatch_queue> remakerNotificationSerializationQueue;

}
@end


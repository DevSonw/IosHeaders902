/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {

	AVAssetReaderSampleReferenceOutputInternal* _sampleReferenceOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
+(id)assetReaderSampleReferenceOutputWithTrack:(id)arg1 ;
-(char)_trimsSampleDurations;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(AVAssetTrack *)track;
-(id)mediaType;
-(id)_asset;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithTrack:(id)arg1 ;
-(void)finalize;
@end


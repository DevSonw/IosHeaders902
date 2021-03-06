/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray;

@interface AVCaptureIrisStillImageSettings : NSObject <NSCopying> {

	long long _uniqueID;
	int _irisMovieMode;
	NSURL* _irisMovieFileURL;
	NSURL* _irisMovieFileURLForEV0Image;
	NSArray* _irisMovieMetadata;
	NSArray* _irisMovieMetadataForEV0Image;
	int _flashMode;
	int _HDRMode;
	char _EV0CaptureEnabled;
	char _autoStillImageStabilizationEnabled;
	char _squareCropEnabled;
	char _previewImageEnabled;
	char _highResolutionStillEnabled;
	unsigned long _shutterSound;

}

@property (readonly) long long uniqueID;                                           //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) int irisMovieMode;                                    //@synthesize irisMovieMode=_irisMovieMode - In the implementation block
@property (nonatomic,copy) NSURL * irisMovieFileURL;                               //@synthesize irisMovieFileURL=_irisMovieFileURL - In the implementation block
@property (nonatomic,copy) NSURL * irisMovieFileURLForEV0Image;                    //@synthesize irisMovieFileURLForEV0Image=_irisMovieFileURLForEV0Image - In the implementation block
@property (nonatomic,copy) NSArray * irisMovieMetadata; 
@property (nonatomic,copy) NSArray * irisMovieMetadataForEV0Image; 
@property (assign,nonatomic) int flashMode;                                        //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,nonatomic) int HDRMode;                                          //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) char EV0CaptureEnabled;                               //@synthesize EV0CaptureEnabled=_EV0CaptureEnabled - In the implementation block
@property (assign,nonatomic) char autoStillImageStabilizationEnabled;              //@synthesize autoStillImageStabilizationEnabled=_autoStillImageStabilizationEnabled - In the implementation block
@property (assign,nonatomic) char squareCropEnabled;                               //@synthesize squareCropEnabled=_squareCropEnabled - In the implementation block
@property (assign,nonatomic) char previewImageEnabled;                             //@synthesize previewImageEnabled=_previewImageEnabled - In the implementation block
@property (assign,nonatomic) char highResolutionStillEnabled;                      //@synthesize highResolutionStillEnabled=_highResolutionStillEnabled - In the implementation block
@property (assign,nonatomic) unsigned long shutterSound;                           //@synthesize shutterSound=_shutterSound - In the implementation block
-(id)initWithUniqueID:(long long)arg1 ;
-(int)irisMovieMode;
-(NSURL *)irisMovieFileURL;
-(NSURL *)irisMovieFileURLForEV0Image;
-(NSArray *)irisMovieMetadata;
-(NSArray *)irisMovieMetadataForEV0Image;
-(char)EV0CaptureEnabled;
-(char)autoStillImageStabilizationEnabled;
-(char)previewImageEnabled;
-(char)highResolutionStillEnabled;
-(unsigned long)shutterSound;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)flashMode;
-(void)setHDRMode:(int)arg1 ;
-(void)setIrisMovieMode:(int)arg1 ;
-(void)setEV0CaptureEnabled:(char)arg1 ;
-(void)setAutoStillImageStabilizationEnabled:(char)arg1 ;
-(void)setShutterSound:(unsigned long)arg1 ;
-(void)setSquareCropEnabled:(char)arg1 ;
-(void)setPreviewImageEnabled:(char)arg1 ;
-(void)setHighResolutionStillEnabled:(char)arg1 ;
-(void)setIrisMovieFileURL:(NSURL *)arg1 ;
-(void)setIrisMovieFileURLForEV0Image:(NSURL *)arg1 ;
-(void)setIrisMovieMetadata:(NSArray *)arg1 ;
-(void)setIrisMovieMetadataForEV0Image:(NSArray *)arg1 ;
-(int)HDRMode;
-(char)squareCropEnabled;
-(long long)uniqueID;
-(void)setFlashMode:(int)arg1 ;
@end


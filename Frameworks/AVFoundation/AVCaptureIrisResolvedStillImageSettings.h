/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVCaptureIrisResolvedStillImageSettings : NSObject {

	long long _uniqueID;
	SCD_Struct_AV18 _stillImageDimensions;
	SCD_Struct_AV18 _previewDimensions;
	SCD_Struct_AV18 _irisMovieDimenions;
	char _irisMovieEnabled;
	char _flashEnabled;
	char _HDREnabled;
	char _EV0CaptureEnabled;
	char _stillImageStabilizationEnabled;
	char _squareCropEnabled;

}

@property (readonly) long long uniqueID;                                                                       //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) SCD_Struct_AV18 stillImageDimensions;                                                     //@synthesize stillImageDimensions=_stillImageDimensions - In the implementation block
@property (readonly) SCD_Struct_AV18 previewDimensions;                                                        //@synthesize previewDimensions=_previewDimensions - In the implementation block
@property (readonly) SCD_Struct_AV18 irisMovieDimensions;                                                      //@synthesize irisMovieDimenions=_irisMovieDimenions - In the implementation block
@property (getter=isIrisMovieEnabled,readonly) char irisMovieEnabled;                                          //@synthesize irisMovieEnabled=_irisMovieEnabled - In the implementation block
@property (getter=isFlashEnabled,readonly) char flashEnabled;                                                  //@synthesize flashEnabled=_flashEnabled - In the implementation block
@property (getter=isHDREnabled,readonly) char HDREnabled;                                                      //@synthesize HDREnabled=_HDREnabled - In the implementation block
@property (getter=isEV0CaptureEnabled,readonly) char EV0CaptureEnabled;                                        //@synthesize EV0CaptureEnabled=_EV0CaptureEnabled - In the implementation block
@property (getter=isStillImageStabilizationEnabled,readonly) char stillImageStabilizationEnabled;              //@synthesize stillImageStabilizationEnabled=_stillImageStabilizationEnabled - In the implementation block
@property (getter=isSquareCropEnabled,readonly) char squareCropEnabled;                                        //@synthesize squareCropEnabled=_squareCropEnabled - In the implementation block
+(id)resolvedSettingsWithUniqueID:(long long)arg1 stillImageDimensions:(SCD_Struct_AV18)arg2 previewDimensions:(SCD_Struct_AV18)arg3 irisMovieEnabled:(char)arg4 irisMovieDimensions:(SCD_Struct_AV18)arg5 flashEnabled:(char)arg6 HDREnabled:(char)arg7 EV0CaptureEnabled:(char)arg8 stillImageStabilizationEnabled:(char)arg9 squareCropEnabled:(char)arg10 ;
-(id)_initWithUniqueID:(long long)arg1 stillImageDimensions:(SCD_Struct_AV18)arg2 previewDimensions:(SCD_Struct_AV18)arg3 irisMovieEnabled:(char)arg4 irisMovieDimensions:(SCD_Struct_AV18)arg5 flashEnabled:(char)arg6 HDREnabled:(char)arg7 EV0CaptureEnabled:(char)arg8 stillImageStabilizationEnabled:(char)arg9 squareCropEnabled:(char)arg10 ;
-(SCD_Struct_AV18)stillImageDimensions;
-(SCD_Struct_AV18)previewDimensions;
-(SCD_Struct_AV18)irisMovieDimensions;
-(char)isFlashEnabled;
-(char)isHDREnabled;
-(char)isEV0CaptureEnabled;
-(char)isStillImageStabilizationEnabled;
-(char)isSquareCropEnabled;
-(id)description;
-(long long)uniqueID;
-(char)isIrisMovieEnabled;
@end


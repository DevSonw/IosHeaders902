/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@class BWFigExternalVideoCaptureDevice, BWNodeOutput, NSString, BWFigVideoCaptureDevice;

@interface BWExternalCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	/*^block*/id _videoSBufHandler;
	/*^block*/id _stillImageSBufHandler;
	SCD_Struct_BW12 _outputDimensions;
	BWFigExternalVideoCaptureDevice* _captureDevice;
	int _stillImageCaptureFormatIndex;
	int _livePreviewFormatIndex;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	char _makeCurrentConfigurationLive;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
+(void)initialize;
+(id)cameraSourceNodeWithCaptureDevice:(id)arg1 ;
-(void)dealloc;
-(BWFigVideoCaptureDevice *)captureDevice;
-(void)setOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(BWNodeOutput *)videoCaptureOutput;
-(char)start:(id*)arg1 ;
-(char)stop:(id*)arg1 ;
-(void)setDetectedFacesOutputEnabled:(char)arg1 ;
-(void)willStop;
-(char)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(void)_handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW12)outputDimensions;
-(void)_resolveSensorFormatIndex;
-(void)_updateFormatRequirements;
-(void)setStillImageCaptureFormatIndex:(int)arg1 ;
-(int)stillImageCaptureFormatIndex;
-(void)setLivePreviewFormatIndex:(int)arg1 ;
-(int)livePreviewFormatIndex;
-(BWNodeOutput *)stillImageOutput;
@end


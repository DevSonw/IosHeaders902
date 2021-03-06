/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMPanoramaProcessorDelegate;
#import <CameraUI/CameraUI-Structs.h>
@class CAMPanoramaCaptureRequest;

@interface CAMPanoramaProcessor : NSObject {

	char _capturingPanorama;
	id<CAMPanoramaProcessorDelegate> _delegate;
	CAMPanoramaCaptureRequest* _request;
	int _direction;
	OpaqueFigSampleBufferProcessorRef __processor;
	CGSize _previewSize;

}

@property (nonatomic,__weak,readonly) id<CAMPanoramaProcessorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CAMPanoramaCaptureRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CGSize previewSize;                                            //@synthesize previewSize=_previewSize - In the implementation block
@property (assign,nonatomic) int direction;                                                   //@synthesize direction=_direction - In the implementation block
@property (assign,getter=isCapturingPanorama,nonatomic) char capturingPanorama;               //@synthesize capturingPanorama=_capturingPanorama - In the implementation block
@property (nonatomic,readonly) OpaqueFigSampleBufferProcessorRef _processor;                  //@synthesize _processor=__processor - In the implementation block
-(void)_setRequest:(id)arg1 ;
-(void)dealloc;
-(id<CAMPanoramaProcessorDelegate>)delegate;
-(void)invalidate;
-(CAMPanoramaCaptureRequest *)request;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(id)initWithDelegate:(id)arg1 ;
-(char)isCapturingPanorama;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)stopPanoramaCapture;
-(OpaqueFigSampleBufferProcessorRef)_processor;
-(void)_setCapturingPanorama:(char)arg1 ;
-(void)processPanoramaCaptureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(CGSize)previewSize;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVVideoCompositing;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, AVWeakReference, NSObject, AVVideoComposition, NSError, AVVideoCompositionRenderContext;

@interface AVCustomVideoCompositorSession : NSObject {

	OpaqueFigVideoCompositorRef _figCustomCompositor;
	char _hasRegisteredFigCustomCompositorCallbacks;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	AVWeakReference* _weakSelf;
	void* _callbackContextToken;
	NSObject*<OS_dispatch_queue> _videoCompositionQ;
	AVVideoComposition* _videoComposition;
	char _videoCompositionDidChange;
	NSObject*<OS_dispatch_queue> _clientCustomCompositorQ;
	id<AVVideoCompositing> _clientCustomCompositor;
	NSObject*<OS_dispatch_queue> _clientErrorQ;
	NSError* _clientError;
	NSObject*<OS_dispatch_queue> _renderContextQ;
	AVVideoCompositionRenderContext* _renderContext;
	NSObject*<OS_dispatch_queue> _finishedRequestQ;

}
+(id)sessionWithVideoComposition:(id)arg1 recyclingSession:(id)arg2 ;
-(void)setVideoComposition:(id)arg1 ;
-(id)customVideoCompositor;
-(void)detachVideoComposition;
-(id)getAndClearClientError;
-(OpaqueFigVideoCompositorRef)_copyFigVideoCompositor;
-(void)_willDeallocOrFinalize;
-(id)initWithVideoComposition:(id)arg1 ;
-(long)_setupFigCallbacks;
-(void)_cleanupFigCallbacks;
-(void)request:(id)arg1 didFinishWithComposedPixelBuffer:(CVBufferRef)arg2 ;
-(void)request:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)requestDidCancel:(id)arg1 ;
-(long)_compositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 atTime:(SCD_Struct_CM5)arg2 requiresRenderUsingSources:(id)arg3 withInstruction:(void*)arg4 ;
-(long)_customCompositorShouldCancelPendingFrames;
-(void)_customCompositorFigPropertyDidChange;
-(void)dealloc;
-(void)finalize;
@end


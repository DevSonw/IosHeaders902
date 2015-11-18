/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:20 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FigScreenCaptureFrameHandlerDelegate;
#import <MediaToolbox/MediaToolbox-Structs.h>
@interface FigScreenCaptureController : NSObject {

	id<FigScreenCaptureFrameHandlerDelegate> _delegateWeak;
	OpaqueFigVirtualDisplaySessionRef _session;
	CGSize _size;
	SCD_Struct_Fi6 _minIntervalBetweenFrames;

}

@property (assign,nonatomic) CGSize size;                                                           //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi6 minIntervalBetweenFrames;                               //@synthesize minIntervalBetweenFrames=_minIntervalBetweenFrames - In the implementation block
@property (assign,nonatomic,__weak) id<FigScreenCaptureFrameHandlerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (assign,nonatomic) OpaqueFigVirtualDisplaySessionRef session;                             //@synthesize session=_session - In the implementation block
+(id)screenCaptureControllerWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi6)arg2 ;
-(id)initWithSize:(CGSize)arg1 minIntervalBetweenFrames:(SCD_Struct_Fi6)arg2 ;
-(void)didReceiveSampleBuffer:(opaqueCMSampleBufferRef)arg1 sourceRect:(CGRect)arg2 destRect:(CGRect)arg3 transform:(unsigned)arg4 ;
-(void)startCapture;
-(SCD_Struct_Fi6)minIntervalBetweenFrames;
-(void)setMinIntervalBetweenFrames:(SCD_Struct_Fi6)arg1 ;
-(OpaqueFigVirtualDisplaySessionRef)session;
-(CGSize)size;
-(void)setDelegate:(id<FigScreenCaptureFrameHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FigScreenCaptureFrameHandlerDelegate>)delegate;
-(void)setSize:(CGSize)arg1 ;
-(void)setSession:(OpaqueFigVirtualDisplaySessionRef)arg1 ;
-(void)stopCapture;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLCameraEffectsRendererDelegate;
#import <CameraKit/CameraKit-Structs.h>
@class EAGLContext, CIContext, NSObject, CMKEffectsFullsizeView, CMKEffectsGridView, CMKVideoPreviewView;

@interface CMKEffectsRenderer : NSObject {

	EAGLContext* _eaglContext;
	CIContext* _ciContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _isShowingGrid;
	char _gridTransitionInFlight;
	char _gridTransitionIsAnimated;
	id<PLCameraEffectsRendererDelegate> _delegate;
	double _lastReportedFrameDropTime;
	unsigned _totalFramesSinceLastReportedFrameDrop;
	unsigned _droppedFramesSinceLastReportedFrameDrop;
	char __atomicPreviewStartedNotificationNeeded;
	char _atomicMirrorFilterRendering;
	char __previewLayerEnabled;
	char __inBackground;
	CMKEffectsFullsizeView* __renderEffectsFullsizeView;
	CMKEffectsGridView* __renderGridView;
	CMKVideoPreviewView* _atomicVideoPreviewView;
	unsigned _atomicFilterIndex;
	/*^block*/id __atomicPreviewStartedBlock;
	int _atomicCameraMode;

}

@property (nonatomic,retain) CMKVideoPreviewView * videoPreviewView; 
@property (assign,nonatomic) unsigned filterIndex; 
@property (assign,getter=isShowingGrid,nonatomic) char showGrid; 
@property (assign) char mirrorFilterRendering;                                                                             //@synthesize atomicMirrorFilterRendering=_atomicMirrorFilterRendering - In the implementation block
@property (assign) int cameraMode;                                                                                         //@synthesize atomicCameraMode=_atomicCameraMode - In the implementation block
@property (assign,nonatomic) id<PLCameraEffectsRendererDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) CMKVideoPreviewView * atomicVideoPreviewView;                                                           //@synthesize atomicVideoPreviewView=_atomicVideoPreviewView - In the implementation block
@property (assign) unsigned atomicFilterIndex;                                                                             //@synthesize atomicFilterIndex=_atomicFilterIndex - In the implementation block
@property (setter=_setRenderEffectsFullsizeView:,retain) CMKEffectsFullsizeView * _renderEffectsFullsizeView;              //@synthesize _renderEffectsFullsizeView=__renderEffectsFullsizeView - In the implementation block
@property (setter=_setRenderGridView:,retain) CMKEffectsGridView * _renderGridView;                                        //@synthesize _renderGridView=__renderGridView - In the implementation block
@property (setter=_setPreviewStartedBlock:,copy) id _previewStartedBlock;                                                  //@synthesize _atomicPreviewStartedBlock=__atomicPreviewStartedBlock - In the implementation block
@property (setter=_setPreviewStartedNotificationNeeded:) char _previewStartedNotificationNeeded;                           //@synthesize _atomicPreviewStartedNotificationNeeded=__atomicPreviewStartedNotificationNeeded - In the implementation block
@property (assign,setter=_setPreviewLayerEnabled:,nonatomic) char _previewLayerEnabled;                                    //@synthesize _previewLayerEnabled=__previewLayerEnabled - In the implementation block
@property (setter=_setInBackground:,getter=_isInBackground) char _inBackground;                                            //@synthesize _inBackground=__inBackground - In the implementation block
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setDelegate:(id<PLCameraEffectsRendererDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PLCameraEffectsRendererDelegate>)delegate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(unsigned)atomicFilterIndex;
-(void)setFilterIndex:(unsigned)arg1 forceStateChange:(char)arg2 renderNotifyBlock:(/*^block*/id)arg3 ;
-(unsigned)filterIndex;
-(void)setAtomicFilterIndex:(unsigned)arg1 ;
-(void)setFilterIndex:(unsigned)arg1 ;
-(void)_resumeRendering;
-(char)_gridTransitionInFlight;
-(void)_setGridTransitionIsInFlight:(char)arg1 ;
-(CMKVideoPreviewView *)videoPreviewView;
-(void)setVideoPreviewView:(CMKVideoPreviewView *)arg1 ;
-(void)setShowGrid:(char)arg1 animated:(char)arg2 ;
-(char)isShowingGrid;
-(void)setMirrorFilterRendering:(char)arg1 ;
-(void)_setInBackground:(char)arg1 ;
-(void)_setPreviewLayerEnabled:(char)arg1 ;
-(void)_setVideoDataOutputEnabled:(char)arg1 ;
-(void)_setPreviewStartedNotificationNeeded:(char)arg1 ;
-(void)_deviceStarted:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(void)_tearDownEffectsView:(id)arg1 removeFromSuperview:(char)arg2 ;
-(CMKEffectsFullsizeView *)_renderEffectsFullsizeView;
-(CMKEffectsGridView *)_renderGridView;
-(void)_setupEffectsView:(id)arg1 ;
-(void)_updateEffectsFullsizeView;
-(void)_forceResetToFilteredRendering:(char)arg1 ;
-(void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(/*^block*/id)arg1 ;
-(id)_setupEffectsFullsizeView;
-(void)_destroyEffectsFullsizeView;
-(void)_setPreviewStartedBlock:(/*^block*/id)arg1 ;
-(CMKVideoPreviewView *)atomicVideoPreviewView;
-(void)_destroyEffectsGridView;
-(void)setAtomicVideoPreviewView:(CMKVideoPreviewView *)arg1 ;
-(id)_setupEffectsGridView;
-(void)_setRenderEffectsFullsizeView:(id)arg1 ;
-(void)_setRenderGridView:(id)arg1 ;
-(void)_createContextIfNecessary;
-(char)mirrorFilterRendering;
-(void)_notifyOfRenderIfNecessary;
-(char)_isInBackground;
-(void)_renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updateStatsForFrameWasDropped:(char)arg1 ;
-(void)_reportStatsForFrameDrops;
-(char)_previewStartedNotificationNeeded;
-(void)_handlePreviewStartedFiltered:(char)arg1 ;
-(id)_previewStartedBlock;
-(void)_transitionToGrid:(/*^block*/id)arg1 ;
-(void)_transitionFromGrid:(/*^block*/id)arg1 ;
-(id)_animatedLayerForView:(id)arg1 ;
-(CGRect)_gridFrameForCurrentFilters;
-(void)_animateToGrid:(char)arg1 layer:(id)arg2 fadeOutLayer:(id)arg3 startFrame:(CGRect)arg4 endFrame:(CGRect)arg5 completion:(/*^block*/id)arg6 ;
-(void)_animateGridLayerZoomToGrid:(char)arg1 ;
-(CGRect)_frameToZoomFromFrame:(CGRect)arg1 toFrame:(CGRect)arg2 withinFrame:(CGRect)arg3 ;
-(void)_animateLayer:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 viewTransform:(CGAffineTransform)arg4 animationDuration:(double)arg5 animationTimingFunction:(id)arg6 animationDelegate:(id)arg7 ;
-(CGRect)_zoomedFrameForRect:(CGRect)arg1 fromFullFrame:(CGRect)arg2 toZoomFrame:(CGRect)arg3 ;
-(void)renderWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)didDropSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setShowGrid:(char)arg1 ;
-(char)_previewLayerEnabled;
-(void)setCameraMode:(int)arg1 ;
-(int)cameraMode;
@end

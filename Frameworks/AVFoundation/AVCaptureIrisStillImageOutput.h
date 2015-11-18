/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVWeakReference, NSMutableArray;

@interface AVCaptureIrisStillImageOutput : AVCaptureOutput {

	AVWeakReference* _weakReference;
	long long _lastSettingsUniqueID;
	SCD_Struct_CM5 _movieDuration;
	SCD_Struct_CM5 _movieVideoFrameDuration;
	char _irisMovieCaptureEnabled;
	SCD_Struct_AV18 _irisMovieDimensions;
	char _allowsBracketedCaptureIrisMovies;
	SCD_Struct_CM5 _beginIrisMovieCaptureTime;
	SCD_Struct_CM5 _endIrisMovieCaptureTime;
	OpaqueFigSimpleMutexRef _beginEndIrisMovieCaptureMutex;
	char _SISSupported;
	char _offlineVISSupported;
	char _optimizesImagesForOfflineVideoStabilization;
	NSMutableArray* _requests;
	int _requestsLock;
	char _quadraHighResolutionCaptureEnabled;

}

@property (getter=isIrisMovieCaptureSupported,nonatomic,readonly) char irisMovieCaptureSupported; 
@property (assign,getter=isIrisMovieCaptureEnabled,nonatomic) char irisMovieCaptureEnabled; 
@property (nonatomic,readonly) SCD_Struct_CM5 movieDuration;                                                                                                             //@synthesize movieDuration=_movieDuration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CM5 movieVideoFrameDuration;                                                                                                   //@synthesize movieVideoFrameDuration=_movieVideoFrameDuration - In the implementation block
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) char stillImageStabilizationSupported; 
@property (getter=isImageOptimizationForOfflineVideoStabilizationSupported,nonatomic,readonly) char imageOptimizationForOfflineVideoStabilizationSupported; 
@property (assign,nonatomic) char optimizesImagesForOfflineVideoStabilization; 
@property (assign,getter=isQuadraHighResolutionCaptureEnabled,nonatomic) char quadraHighResolutionCaptureEnabled; 
+(SCD_Struct_AV18)maxIrisMovieDimensions;
+(unsigned long)maxIrisDataSize;
+(void)initialize;
-(SCD_Struct_AV18)irisMovieDimensions;
-(void)_dispatchFailureCallbacksForSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3 ;
-(id)_figCaptureIrisStillImageSettingsForAVCaptureIrisStillImageSettings:(id)arg1 connections:(id)arg2 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)_updateSISSupportedForSourceDevice:(id)arg1 ;
-(void)_updateOfflineVISSupportedForSourceDevice:(id)arg1 ;
-(void)_updateIrisMovieDimensionsForSourceDevice:(id)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_dispatchFailureCallbacks:(unsigned)arg1 forRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(char)arg4 ;
-(id)_sanitizedSettingsForSettings:(id)arg1 ;
-(id)_irisRequestForUniqueID:(long long)arg1 ;
-(void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2 ;
-(id)_avErrorUserInfoDictionaryForError:(long)arg1 request:(id)arg2 payload:(id)arg3 ;
-(char)optimizesImagesForOfflineVideoStabilization;
-(id)connectionMediaTypes;
-(char)canAddConnectionForMediaType:(id)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(SCD_Struct_CM5)movieDuration;
-(SCD_Struct_CM5)movieVideoFrameDuration;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isIrisMovieCaptureEnabled;
-(char)isQuadraHighResolutionCaptureEnabled;
-(void)captureStillImageWithSettings:(id)arg1 delegate:(id)arg2 ;
-(char)isIrisMovieCaptureSupported;
-(void)endIrisMovieCapture;
-(void)beginIrisMovieCapture;
-(void)removeConnection:(id)arg1 ;
-(char)isStillImageStabilizationSupported;
-(void)setQuadraHighResolutionCaptureEnabled:(char)arg1 ;
-(char)isImageOptimizationForOfflineVideoStabilizationSupported;
-(void)setOptimizesImagesForOfflineVideoStabilization:(char)arg1 ;
-(void)setIrisMovieCaptureEnabled:(char)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMCaptureConfiguration, CAMConflictingControlConfiguration;

@interface CAMUserPreferences : NSObject {

	char _didResetTorchMode;
	char _shouldShowGridView;
	char _shouldCaptureHDREV0;
	char _lockAsShutterEnabled;
	char _irisCaptureEnabled;
	char _shouldDelayRemotePersistence;
	CAMCaptureConfiguration* _captureConfiguration;
	CAMConflictingControlConfiguration* _conflictingControlConfiguration;
	int _videoConfiguration;
	int _slomoConfiguration;
	int _previewViewAspectMode;

}

@property (assign,nonatomic) char didResetTorchMode;                                                            //@synthesize didResetTorchMode=_didResetTorchMode - In the implementation block
@property (nonatomic,retain) CAMCaptureConfiguration * captureConfiguration;                                    //@synthesize captureConfiguration=_captureConfiguration - In the implementation block
@property (nonatomic,retain) CAMConflictingControlConfiguration * conflictingControlConfiguration;              //@synthesize conflictingControlConfiguration=_conflictingControlConfiguration - In the implementation block
@property (nonatomic,readonly) char shouldShowGridView;                                                         //@synthesize shouldShowGridView=_shouldShowGridView - In the implementation block
@property (nonatomic,readonly) char shouldCaptureHDREV0;                                                        //@synthesize shouldCaptureHDREV0=_shouldCaptureHDREV0 - In the implementation block
@property (nonatomic,readonly) int videoConfiguration;                                                          //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,readonly) int slomoConfiguration;                                                          //@synthesize slomoConfiguration=_slomoConfiguration - In the implementation block
@property (assign,nonatomic) int previewViewAspectMode;                                                         //@synthesize previewViewAspectMode=_previewViewAspectMode - In the implementation block
@property (getter=isLockAsShutterEnabled,nonatomic,readonly) char lockAsShutterEnabled;                         //@synthesize lockAsShutterEnabled=_lockAsShutterEnabled - In the implementation block
@property (getter=isIrisCaptureEnabled,nonatomic,readonly) char irisCaptureEnabled;                             //@synthesize irisCaptureEnabled=_irisCaptureEnabled - In the implementation block
@property (nonatomic,readonly) char shouldDelayRemotePersistence;                                               //@synthesize shouldDelayRemotePersistence=_shouldDelayRemotePersistence - In the implementation block
+(id)preferences;
+(id)_defaultCaptureConfiguration;
-(char)shouldCaptureHDREV0;
-(char)shouldDelayRemotePersistence;
-(char)isLockAsShutterEnabled;
-(char)readPreferencesWithLaunchOptions:(id)arg1 ;
-(char)shouldResetCaptureConfiguration;
-(void)_setDidResetTorchMode:(char)arg1 ;
-(int)previewViewAspectMode;
-(CAMCaptureConfiguration *)captureConfiguration;
-(CAMConflictingControlConfiguration *)conflictingControlConfiguration;
-(void)readPreferences;
-(void)writePreferences;
-(char)didResetTorchMode;
-(void)setCaptureConfiguration:(CAMCaptureConfiguration *)arg1 ;
-(void)setConflictingControlConfiguration:(CAMConflictingControlConfiguration *)arg1 ;
-(char)shouldShowGridView;
-(int)videoConfiguration;
-(int)slomoConfiguration;
-(void)setPreviewViewAspectMode:(int)arg1 ;
-(char)isIrisCaptureEnabled;
@end


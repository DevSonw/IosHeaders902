/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject {

	_UIMotionAnalyzerSettings* _settings;
	_UIViewerRelativeDevicePose* _viewerRelativeDevicePose;

}

@property (nonatomic,readonly) _UIMotionAnalyzerSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) _UIViewerRelativeDevicePose * viewerRelativeDevicePose;              //@synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose - In the implementation block
-(id)init;
-(id)description;
-(_UIMotionAnalyzerSettings *)settings;
-(void)reset;
-(id)initWithSettings:(id)arg1 ;
-(_UIViewerRelativeDevicePose *)viewerRelativeDevicePose;
-(void)updateWithEvent:(id)arg1 ;
-(char)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(char)arg3 returningShouldToggleSlowUpdates:(char*)arg4 logger:(id)arg5 ;
-(void)updateHistory;
-(void)resetHysteresis;
@end

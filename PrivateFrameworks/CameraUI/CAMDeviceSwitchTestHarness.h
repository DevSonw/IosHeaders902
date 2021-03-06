/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CAMPerformanceTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchTestHarness : CAMPerformanceTestHarness {

	CAMViewfinderViewController* _viewfinder;
	int _desiredDevice;

}
+(id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 device:(int)arg3 ;
-(void)runConfiguredTest;
-(void)ensureCaptureDevice:(int)arg1 thenPerform:(/*^block*/id)arg2 ;
-(id)initWithTestName:(id)arg1 viewfinder:(id)arg2 device:(int)arg3 ;
@end


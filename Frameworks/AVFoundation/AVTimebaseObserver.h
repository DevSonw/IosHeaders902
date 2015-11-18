/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVWeakReference;

@interface AVTimebaseObserver : NSObject {

	NSObject*<OS_dispatch_queue> _timerQueue;
	AVWeakReference* _weakReference;
	NSObject*<OS_dispatch_source> _timerSource;
	OpaqueCMTimebaseRef _timebase;
	double _lastRate;
	double _currentRate;
	char _invalid;

}

@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference;              //@synthesize weakReference=_weakReference - In the implementation block
@property (readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) char invalidated; 
-(id)_weakReference;
-(OpaqueCMTimebaseRef)timebase;
-(void)_attachTimerSourceToTimebase;
-(void)_removeTimebaseFromTimerSource;
-(void)_stopObservingTimebaseNotifications;
-(void)_startObservingTimebaseNotifications;
-(void)_effectiveRateChanged;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 queue:(id)arg2 ;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_finishInitialization;
-(void)dealloc;
-(void)invalidate;
-(char)invalidated;
-(void)finalize;
@end

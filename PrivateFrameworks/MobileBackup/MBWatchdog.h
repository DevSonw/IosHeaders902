/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface MBWatchdog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	double _interval;
	double _timeoutInterval;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _timeoutQueue;
	char _scheduled;
	char _running;

}

@property (assign) double interval;                     //@synthesize interval=_interval - In the implementation block
@property (assign) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (copy) id timeoutCallback;                    //@synthesize callback=_callback - In the implementation block
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)setTimeoutCallback:(id)arg1 ;
-(void)_cancelTimeout;
-(void)_invokeCallback;
-(void)_scheduleTest;
-(void)_scheduleTimeout;
-(id)timeoutCallback;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(void)scheduleInQueue:(id)arg1 ;
@end

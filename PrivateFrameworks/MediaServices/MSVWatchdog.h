/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSOperationQueue, NSObject, NSRunLoop;

@interface MSVWatchdog : NSObject {

	char _scheduled;
	char _running;
	/*^block*/id _timeoutCallback;
	NSString* _mode;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSRunLoop* _runLoop;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	double _interval;
	double _timeoutInterval;

}

@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                  //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy) id timeoutCallback;                                        //@synthesize timeoutCallback=_timeoutCallback - In the implementation block
@property (nonatomic,retain) NSString * mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSRunLoop * runLoop;                                     //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) char scheduled;                                          //@synthesize scheduled=_scheduled - In the implementation block
@property (assign,nonatomic) char running;                                            //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
-(NSRunLoop *)runLoop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)suspend;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
-(char)scheduled;
-(void)resume;
-(NSOperationQueue *)operationQueue;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTimeoutCallback:(id)arg1 ;
-(void)scheduleInOperationQueue:(id)arg1 ;
-(void)setRunLoop:(NSRunLoop *)arg1 ;
-(void)_cancelTimeout;
-(void)_invokeCallback;
-(void)_scheduleTest;
-(void)_scheduleTimeout;
-(id)timeoutCallback;
-(void)setScheduled:(char)arg1 ;
-(void)scheduleInDispatchQueue:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(char)running;
-(void)setRunning:(char)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
@end

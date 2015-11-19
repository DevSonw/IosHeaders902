/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FMDispatchTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;
	NSObject*<OS_dispatch_source> _timerSource;
	double _leewayTimeInterval;
	double _timeout;

}

@property (assign,nonatomic) double leewayTimeInterval;                              //@synthesize leewayTimeInterval=_leewayTimeInterval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                            //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) double timeout;                                         //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeout;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(double)leewayTimeInterval;
-(id)initWithQueue:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLeewayTimeInterval:(double)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUProgressObserver : NSObject {

	double mValueInterval;
	NSObject*<OS_dispatch_queue> mQueue;
	/*^block*/id mHandler;
	double mLastHandledValue;
	char mLastHandledIndeterminate;

}

@property (nonatomic,readonly) double valueInterval; 
-(void)dealloc;
-(id)init;
-(id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(char)arg3 ;
-(double)valueInterval;
@end

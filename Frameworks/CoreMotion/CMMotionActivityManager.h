/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:13:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSOperationQueue;

@interface CMMotionActivityManager : NSObject {

	CLConnectionClient* fLocationConnection;
	NSObject*<OS_dispatch_queue> fQueue;
	/*^block*/id fHandler;
	NSOperationQueue* fHandlerQueue;

}
+(char)isActivityAvailable;
-(void)_handleQueryResponse:(shared_ptr<CLConnectionMessage>*)arg1 onQueue:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)startActivityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopActivityUpdates;
@end

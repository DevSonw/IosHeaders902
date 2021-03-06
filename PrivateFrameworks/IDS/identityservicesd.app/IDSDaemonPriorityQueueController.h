/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSDaemonPriorityQueueController : NSObject {

	NSObject*<OS_dispatch_queue> _sync_queue;
	NSObject*<OS_dispatch_queue> _default_queue;
	NSObject*<OS_dispatch_queue> _urgent_queue;

}
+(id)sharedInstance;
-(void)performBlockUrgentPriority:(/*^block*/id)arg1 ;
-(void)performBlockDefaultPriority:(/*^block*/id)arg1 ;
-(void)performBlockSyncPriority:(/*^block*/id)arg1 ;
-(void)assertRunningOnMain;
-(void)assertRunningWithPriority:(int)arg1 ;
-(void)performBlockSYNCHRONOUSLYWithPriority:(/*^block*/id)arg1 priority:(int)arg2 ;
-(id)queueForPriority:(int)arg1 ;
-(void)performBlockMainQueue:(/*^block*/id)arg1 ;
-(void)performBlockWithPriority:(/*^block*/id)arg1 priority:(int)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 withImplicitPriority:(int)arg2 ;
-(id)_queueForImplicitPriority:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end


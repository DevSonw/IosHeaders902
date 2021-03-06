/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface AXDispatchTimer : NSObject <AXAccessQueueTimer> {

	char _active;
	char _pending;
	char _cancelled;
	char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	/*^block*/id _processBlock;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id processBlock;                                                           //@synthesize processBlock=_processBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                                            //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                             //@synthesize active=_active - In the implementation block
@property (assign,getter=isPending,nonatomic) char pending;                                           //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(void)setActive:(char)arg1 ;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)_reallyCancel;
-(char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setProcessBlock:(id)arg1 ;
-(void)setPending:(char)arg1 ;
-(id)cancelBlock;
-(id)processBlock;
-(char)isPending;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
@end


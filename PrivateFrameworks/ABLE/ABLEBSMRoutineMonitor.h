/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RTRoutineManager, NSObject, CLLocationManager, NSMutableSet, NSUserDefaults;

@interface ABLEBSMRoutineMonitor : NSObject {

	RTRoutineManager* routine;
	NSObject*<OS_dispatch_queue> syncQueue;
	CLLocationManager* manager;
	NSMutableSet* homes;
	NSMutableSet* frequentLOIs;
	double commuteDistance;
	NSUserDefaults* defaults;
	char enabled;

}

@property (readonly) char enabled; 
+(id)monitorWithDefaults:(id)arg1 ;
-(void)tryToReenable;
-(char)updateCommuteDistance:(double)arg1 ;
-(id)initWithDefaults:(id)arg1 ;
-(int)isUserAt:(int)arg1 ;
-(void)computeComputeDistance;
-(char)isUserAtHome;
-(char)isUserAtWork;
-(char)isUserTraveling;
-(char)enabled;
@end


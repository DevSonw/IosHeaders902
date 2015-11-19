/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface TRBrowser : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _services;
	unsigned _browsingCount;

}
+(id)sharedBrowser;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)stopBrowsing;
-(void)startBrowsing;
-(void)_XPCClientConnectionDidInterruptNotification:(id)arg1 ;
-(void)getServicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)TRXPCC_browserDidFindService:(id)arg1 ;
-(void)TRXPCC_browserDidRemoveService:(id)arg1 ;
@end

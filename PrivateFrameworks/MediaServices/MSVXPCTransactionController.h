/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable;

@interface MSVXPCTransactionController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMapTable* _openTransactions;
	char _inTransaction;
	NSObject*<OS_dispatch_source> _signalUSR2DispatchSource;

}

@property (getter=isInTransaction,nonatomic,readonly) char inTransaction; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)activeTransactions;
-(char)isInTransaction;
-(char)isTransactionActive:(id)arg1 ;
-(void)addActiveTransaction:(id)arg1 ;
-(void)removeActiveTransaction:(id)arg1 ;
-(void)_setupSignalHandler;
-(void)_tearDownSignalHandler;
-(void)_onQueueUpdateInternalTransactionState;
-(void)_onQueueCleanupEndedTransactions;
-(void)_saveActiveTransactionsToFile;
@end

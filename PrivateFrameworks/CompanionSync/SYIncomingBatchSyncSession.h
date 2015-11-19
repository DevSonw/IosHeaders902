/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYIncomingFullSyncSession.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableIndexSet, NSMutableArray;

@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession {

	NSObject*<OS_dispatch_source> _sessionTimer;
	NSMutableIndexSet* _receivedBatchIndices;
	char _hasReceivedEndSync;
	/*^block*/id _completion;
	os_lock_handoff_s* _queueLock;
	NSMutableArray* _incomingBatchQueue;
	char canRestart;
	char canRollback;

}
-(void)_sendEndSessionResponse:(id)arg1 ;
-(void)_continueProcessing;
-(char)canRestart;
-(void)setCanRestart:(char)arg1 ;
-(char)canRollback;
-(void)setCanRollback:(char)arg1 ;
-(void)_handleBatchChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithService:(id)arg1 ;
@end

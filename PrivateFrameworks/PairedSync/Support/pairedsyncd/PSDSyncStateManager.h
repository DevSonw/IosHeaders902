/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, PSDDeviceSyncState;

@interface PSDSyncStateManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PSDDeviceSyncState* _lastKnownSyncState;
	PSDDeviceSyncState* _syncState;
	NSObject*<OS_xpc_object> _listener;

}
+(id)sharedSyncStateManager;
-(id)_syncState;
-(void)_loadPersistentSyncState;
-(void)setupListener;
-(void)handleXPCMessage:(id)arg1 ;
-(id)syncStatePersistentURL;
-(id)_loadLegacySyncState;
-(void)_setSyncState:(id)arg1 persist:(char)arg2 ;
-(void)_postGlobalDeviceSyncState:(id)arg1 ;
-(void)setSyncState:(id)arg1 ;
-(id)init;
-(id)syncState;
-(void)unregisterForFirstKeybagUnlockNotification;
-(void)keybagStateChanged;
-(void)registerForFirstKeybagUnlockNotification;
@end


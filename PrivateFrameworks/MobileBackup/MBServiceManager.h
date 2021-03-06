/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <MobileBackup/MBManager.h>
#import <backupd/MBServiceAccountDelegate.h>
#import <backupd/MBServiceDelegate.h>
#import <backupd/MBServiceLockManagerDelegate.h>
#import <backupd/MBServiceReachabilityMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;
@class NSObject, MBStateInfo, NSMutableArray, NSMapTable, MBServiceRestoreSession, NSDictionary, MBServiceLockManager, MBServiceReachabilityMonitor, MBServiceEncryptionManager, NSString;

@interface MBServiceManager : MBManager <MBServiceAccountDelegate, MBServiceDelegate, MBServiceLockManagerDelegate, MBServiceReachabilityMonitorDelegate> {

	int _serviceState;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_group> _serviceGroup;
	MBStateInfo* _backupState;
	MBStateInfo* _restoreState;
	NSMutableArray* _engines;
	NSMapTable* _enginesByContext;
	char _scheduled;
	MBServiceRestoreSession* _restoreSession;
	NSDictionary* _restoreKeyBagsByID;
	MBServiceLockManager* _lockManager;
	int _obliterateToken;
	MBServiceReachabilityMonitor* _reachabilityMonitor;
	char _notifyDisplayWifiTimerArmed;
	NSObject*<OS_dispatch_queue> _userNotificationQueue;
	CFRunLoopTimerRef _warnTimerRef;
	NSObject*<OS_dispatch_source> _lowDiskSource;
	char _serverLoggingOverride;
	MBServiceEncryptionManager* _serviceEncryptionManager;

}

@property (nonatomic,readonly) MBServiceEncryptionManager * serviceEncryptionManager;              //@synthesize serviceEncryptionManager=_serviceEncryptionManager - In the implementation block
@property (nonatomic,readonly) MBServiceRestoreSession * restoreSession;                           //@synthesize restoreSession=_restoreSession - In the implementation block
@property (nonatomic,readonly) NSDictionary * restoreKeyBagsByID;                                  //@synthesize restoreKeyBagsByID=_restoreKeyBagsByID - In the implementation block
@property (readonly) int serviceState;                                                             //@synthesize serviceState=_serviceState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServiceManager;
-(id)_debugContext;
-(void)loadRestoreSession;
-(id)lockManagerWithAccount:(id)arg1 backupUDID:(id)arg2 type:(int)arg3 ;
-(void)_notifyRestoreCompleted;
-(void)loadBackupStateInfo;
-(char)_setBackupDisabledIfMissingFromAccount;
-(void)_notifyUserOfQuotaDepletionForContext:(id)arg1 ;
-(void)cancelEngineForContext:(id)arg1 ;
-(void)_deferDiscountingCameraRollQuota;
-(void)_clearDeferredDiscountingCameraRollQuota;
-(void)_updateLockdownKeysForAccountState:(id)arg1 ;
-(char)startBackupWithError:(id*)arg1 scheduled:(char)arg2 ;
-(void)accountChanged:(id)arg1 ;
-(void)lockManagerDidReleaseLock:(id)arg1 ;
-(void)cancelRestoreForContext:(id)arg1 ;
-(void)_finishRestore:(char)arg1 ;
-(void)_cleanupStaleState;
-(void)_obliterating;
-(void)_cancelAllBackgroundRestoreEngines;
-(id)_settingsContextForBackupUDID:(id)arg1 ;
-(MBServiceEncryptionManager *)serviceEncryptionManager;
-(id)_settingsContextForForegroundRestoreWithBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 ;
-(void)_runScanWithMode:(int)arg1 context:(id)arg2 ;
-(void)_finishedRestore;
-(void)_runBackupWithContext:(id)arg1 reason:(int)arg2 ;
-(void)_runRestoreWithSettingsContext:(id)arg1 delegateContext:(id)arg2 ;
-(id)_settingsContextForBackgroundFileRestoreWithPath:(id)arg1 ;
-(char)_startBackgroundRestoreWithSettingsContext:(id)arg1 delegateContext:(id)arg2 error:(id*)arg3 ;
-(id)_settingsContextForBackgroundAppRestoreWithBundleID:(id)arg1 errorCode:(int)arg2 ;
-(void)_clearRestoreSession;
-(void)_disableHyperLogging;
-(id)_domainInfoForName:(id)arg1 cache:(id)arg2 appManager:(id)arg3 ;
-(char)_removeDomainName:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
-(id)_deviceBackupFromCache;
-(void)_saveFailedBackupShadowState;
-(char)_coalesceSnapshotsWithService:(id)arg1 error:(id*)arg2 ;
-(void)_saveBackupStateInfo;
-(void)_cleanupRestoreDirectory;
-(void)_enableForegroundHyperLogging;
-(void)_enableBackgroundHyperLogging;
-(void)_prepareForBackgroundRestore;
-(void)_finalizeRestoreDirectory;
-(void)_alertUserOfIncompleteRestore;
-(void)_notifyDisplayWifi;
-(void)_performToolWithBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 block:(/*^block*/id)arg3 ;
-(char)_shouldEnableHyperLogging;
-(void)serviceDidHoldLock:(id)arg1 ;
-(void)lockManager:(id)arg1 failedToReleaseLockWithError:(id)arg2 ;
-(void)reachabilityMonitor:(id)arg1 didDetectWifiStatusChange:(char)arg2 ;
-(id)deviceBackup;
-(int)serviceState;
-(MBServiceRestoreSession *)restoreSession;
-(NSDictionary *)restoreKeyBagsByID;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)finishRestore;
-(char)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(char)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(id)_service;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(char)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(char)isBackupEnabled;
-(void)setBackupEnabled:(char)arg1 ;
-(void)syncBackupEnabled;
-(id)getBackupListWithFiltering:(char)arg1 error:(id*)arg2 ;
-(id)filesForSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(char)restoreFileExistsWithPath:(id)arg1 ;
-(char)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(char)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(char)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(char)restoreApplicationWithBundleID:(id)arg1 failed:(char)arg2 withQOS:(int)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)insufficientFreeSpaceToRestore;
-(void)cancelRestore;
-(char)deleteBackupUDID:(id)arg1 error:(id*)arg2 ;
-(char)startScanWithError:(id*)arg1 ;
-(unsigned long long)nextBackupSize;
-(id)domainInfoList;
-(char)removeDomainName:(id)arg1 error:(id*)arg2 ;
-(char)isBackupEnabledForDomainName:(id)arg1 ;
-(void)setBackupEnabled:(char)arg1 forDomainName:(id)arg2 ;
-(char)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6 ;
-(char)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6 ;
-(char)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(int)getLogLevel;
-(void)setAllowiTunesBackup:(char)arg1 ;
-(char)allowiTunesBackup;
-(char)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(char)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(void)keyBagIsLocking;
-(void)keyBagIsUnlocked;
-(char)deleteAccountWithError:(id*)arg1 ;
-(char)deleteSnapshotID:(unsigned)arg1 fromBackupUDID:(id)arg2 error:(id*)arg3 ;
-(char)acquireLockWithBackupUDID:(id)arg1 owner:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
-(char)releaseLockWithBackupUDID:(id)arg1 owner:(id)arg2 error:(id*)arg3 ;
-(void)repair;
-(char)countCameraRollQuota;
-(char)discountCameraRollQuota;
-(id)domainInfoForName:(id)arg1 ;
-(id)backupState;
-(id)_account;
-(id)restoreState;
@end


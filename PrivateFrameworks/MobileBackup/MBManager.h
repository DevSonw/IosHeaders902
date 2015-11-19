/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileBackup/MobileBackup-Structs.h>
@interface MBManager : NSObject {

	id _delegate;

}

@property (assign,nonatomic) NSObject*<MBManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLogLevel:(int)arg1 ;
-(void)cancel;
-(void)setDelegate:(NSObject*<MBManagerDelegate>)arg1 ;
-(id)init;
-(NSObject*<MBManagerDelegate>)delegate;
-(id)_init;
-(id)initWithDelegate:(id)arg1 ;
-(void)rebootDevice;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(void)finishRestore;
-(char)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(char)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(char)restoreApplicationWithBundleID:(id)arg1 failed:(char)arg2 context:(id)arg3 error:(id*)arg4 ;
-(char)restoreFileWithPath:(id)arg1 error:(id*)arg2 ;
-(char)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(char)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(char)isBackupEnabled;
-(void)setBackupEnabled:(char)arg1 ;
-(void)syncBackupEnabled;
-(id)backupDeviceUUID;
-(id)backupList;
-(id)getBackupListWithError:(id*)arg1 ;
-(id)getBackupListWithFiltering:(char)arg1 error:(id*)arg2 ;
-(id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(unsigned)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
-(void)startBackup;
-(char)startBackupWithError:(id*)arg1 ;
-(id)filesForSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(char)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3 ;
-(id)journalForBackupUUID:(id)arg1 error:(id*)arg2 ;
-(char)restoreFileExistsWithPath:(id)arg1 ;
-(char)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 error:(id*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(char)arg3 error:(id*)arg4 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
-(void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 ;
-(char)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(char)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)restoreFileWithPath:(id)arg1 ;
-(char)restoreApplicationWithBundleID:(id)arg1 failed:(char)arg2 error:(id*)arg3 ;
-(char)restoreApplicationWithBundleID:(id)arg1 failed:(char)arg2 withQOS:(int)arg3 context:(id)arg4 error:(id*)arg5 ;
-(char)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2 ;
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
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(id)restoreInfo;
-(void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2 ;
-(void)clearRestoreSession;
-(int)getLogLevel;
-(void)setAllowiTunesBackup:(char)arg1 ;
-(char)allowiTunesBackup;
-(char)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(char)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(char)prepareForBackgroundRestoreWithError:(id*)arg1 ;
-(char)archiveLogsTo:(id)arg1 error:(id*)arg2 ;
-(char)countCameraRollQuota;
-(char)discountCameraRollQuota;
-(id)domainInfoForName:(id)arg1 ;
-(id)backupState;
-(id)restoreState;
@end

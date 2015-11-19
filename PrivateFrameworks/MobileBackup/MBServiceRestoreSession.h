/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MBServiceRestoreSession : NSObject {

	NSString* _backupUDID;
	unsigned _snapshotID;
	NSDate* _startDate;
	char _finishing;
	char _cancelled;
	NSString* _snapshotUUID;

}

@property (nonatomic,retain) NSString * backupUDID;                           //@synthesize backupUDID=_backupUDID - In the implementation block
@property (assign,nonatomic) unsigned snapshotID;                             //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,retain) NSString * snapshotUUID;                         //@synthesize snapshotUUID=_snapshotUUID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,getter=isFinishing,nonatomic) char finishing;               //@synthesize finishing=_finishing - In the implementation block
@property (assign,getter=wasCancelled,nonatomic) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) char isMBSSession; 
+(id)restoreSessionWithPropertyList:(id)arg1 ;
+(id)currentRestoreSession;
+(void)clearCurrentRestoreSession;
-(void)setSnapshotID:(unsigned)arg1 ;
-(void)setSnapshotUUID:(NSString *)arg1 ;
-(void)setBackupUDID:(NSString *)arg1 ;
-(void)setFinishing:(char)arg1 ;
-(void)saveAtPath:(id)arg1 ;
-(char)isMBSSession;
-(char)isFinishing;
-(id)propertyList;
-(NSDate *)startDate;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setCancelled:(char)arg1 ;
-(NSString *)backupUDID;
-(unsigned)snapshotID;
-(NSString *)snapshotUUID;
-(char)wasCancelled;
-(id)initWithPropertyList:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

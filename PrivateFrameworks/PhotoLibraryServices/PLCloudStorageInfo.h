/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PLCloudStorageInfo : NSObject {

	long long _totalBytes;
	long long _availableBytes;
	long long _usedBytes;
	long long _cameraRollBackupBytes;

}

@property (assign,nonatomic) long long totalBytes;                         //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) long long availableBytes;                     //@synthesize availableBytes=_availableBytes - In the implementation block
@property (assign,nonatomic) long long usedBytes;                          //@synthesize usedBytes=_usedBytes - In the implementation block
@property (assign,nonatomic) long long cameraRollBackupBytes;              //@synthesize cameraRollBackupBytes=_cameraRollBackupBytes - In the implementation block
+(id)storageInfoWithTotal:(long long)arg1 available:(long long)arg2 used:(long long)arg3 cameraRollBackupBytes:(long long)arg4 ;
-(long long)availableBytes;
-(id)initWithTotalQuotaBytes:(long long)arg1 totalAvailableBytes:(long long)arg2 totalUsedBytes:(long long)arg3 cameraRollBackupBytes:(long long)arg4 ;
-(long long)totalBytes;
-(void)setTotalBytes:(long long)arg1 ;
-(void)setAvailableBytes:(long long)arg1 ;
-(long long)usedBytes;
-(void)setUsedBytes:(long long)arg1 ;
-(long long)cameraRollBackupBytes;
-(void)setCameraRollBackupBytes:(long long)arg1 ;
@end


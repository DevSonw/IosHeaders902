/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MBKeychain : NSObject
+(id)allPasswordItemsForServices:(id)arg1 error:(id*)arg2 ;
+(char)addAllPasswordItems:(id)arg1 error:(id*)arg2 ;
+(id)passwordItemsForService:(id)arg1 account:(id)arg2 limit:(unsigned)arg3 error:(id*)arg4 ;
+(id)allPasswordItemsForService:(id)arg1 error:(id*)arg2 ;
+(char)addPasswordItem:(id)arg1 error:(id*)arg2 ;
@end


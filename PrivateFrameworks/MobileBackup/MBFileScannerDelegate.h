/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBFileScannerDelegate
@optional
-(char)fileScanner:(id)arg1 shouldExcludeFile:(id)arg2;

@required
-(char)fileScanner:(id)arg1 isFileAddedOrModified:(id)arg2;
-(id)fileScanner:(id)arg1 didFindFile:(id)arg2;

@end

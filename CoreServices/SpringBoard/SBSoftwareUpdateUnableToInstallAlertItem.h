/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateInstallFailureAlertItem.h>

@class NSError;

@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateInstallFailureAlertItem {

	char _unableToInstallDueToInsufficientDiskSpace;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)buildUnavailableSheet;
-(void)buildDefaultSheetWithBody:(id)arg1 isLocked:(char)arg2 ;
-(NSError *)error;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(void)setError:(NSError *)arg1 ;
-(char)reappearsAfterLock;
@end

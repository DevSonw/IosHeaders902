/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBNotificationCenterSectionInfo.h>

@class SBBulletinListSection;

@interface SBBBSectionInfo : SBNotificationCenterSectionInfo

@property (nonatomic,readonly) SBBulletinListSection * representedListSection; 
-(void)populateReusableView:(id)arg1 ;
-(SBBulletinListSection *)representedListSection;
-(id)listSectionIdentifier;
-(char)shouldSuppressBulletinMessageForPrivacy:(id)arg1 ;
-(id)identifier;
@end

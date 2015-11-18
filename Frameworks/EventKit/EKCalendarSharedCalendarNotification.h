/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {

	unsigned _sharingInvitationResponse;
	unsigned _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned sharingInvitationResponse;              //@synthesize sharingInvitationResponse=_sharingInvitationResponse - In the implementation block
@property (assign,nonatomic) unsigned allowedEntityTypes;                     //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(unsigned)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned)arg1 ;
-(void)setAllowedEntityTypes:(unsigned)arg1 ;
-(id)calendarFromEventStore:(id)arg1 ;
-(unsigned)allowedEntityTypes;
-(id)initWithType:(int)arg1 ;
@end

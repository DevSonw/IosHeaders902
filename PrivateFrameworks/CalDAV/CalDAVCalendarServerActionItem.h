/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CalDAVCalendarServerUpdateItem, CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _create;
	CalDAVCalendarServerUpdateItem* _update;
	CalDAVCalendarServerCancelItem* _cancel;
	CalDAVCalendarServerReplyItem* _reply;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * create;                   //@synthesize create=_create - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerUpdateItem * update;              //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerCancelItem * cancel;              //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerReplyItem * reply;                //@synthesize reply=_reply - In the implementation block
-(CalDAVCalendarServerCancelItem *)cancel;
-(id)init;
-(CalDAVCalendarServerUpdateItem *)update;
-(void)setCancel:(CalDAVCalendarServerCancelItem *)arg1 ;
-(id)copyParseRules;
-(void)setCreate:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setReply:(CalDAVCalendarServerReplyItem *)arg1 ;
-(CalDAVCalendarServerReplyItem *)reply;
-(void)setUpdate:(CalDAVCalendarServerUpdateItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)create;
@end


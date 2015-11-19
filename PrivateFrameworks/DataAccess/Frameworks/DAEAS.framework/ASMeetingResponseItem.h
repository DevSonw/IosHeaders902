/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ASEventUID, NSDate;

@interface ASMeetingResponseItem : NSObject {

	NSString* _deliveryItemFolderId;
	NSString* _deliveryItemServerId;
	int _meetingResponse;
	ASEventUID* _eventUID;
	NSDate* _instanceDate;
	NSString* _calEventServerId;
	int _status;
	NSString* _comment;
	id _context;

}

@property (nonatomic,retain) NSString * deliveryItemFolderId;              //@synthesize deliveryItemFolderId=_deliveryItemFolderId - In the implementation block
@property (nonatomic,retain) NSString * deliveryItemServerId;              //@synthesize deliveryItemServerId=_deliveryItemServerId - In the implementation block
@property (assign,nonatomic) int meetingResponse;                          //@synthesize meetingResponse=_meetingResponse - In the implementation block
@property (nonatomic,retain) ASEventUID * eventUID;                        //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,retain) NSDate * instanceDate;                        //@synthesize instanceDate=_instanceDate - In the implementation block
@property (nonatomic,retain) NSString * calEventServerId;                  //@synthesize calEventServerId=_calEventServerId - In the implementation block
@property (assign,nonatomic) int status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * comment;                           //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain) id context;                                   //@synthesize context=_context - In the implementation block
-(ASEventUID *)eventUID;
-(void)setComment:(NSString *)arg1 ;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)initWithDeliveryItemFolderId:(id)arg1 deliveryItemServerId:(id)arg2 instanceDate:(id)arg3 meetingResponse:(int)arg4 eventUID:(id)arg5 responseComment:(id)arg6 ;
-(NSString *)deliveryItemFolderId;
-(void)setDeliveryItemFolderId:(NSString *)arg1 ;
-(NSString *)deliveryItemServerId;
-(void)setDeliveryItemServerId:(NSString *)arg1 ;
-(int)meetingResponse;
-(void)setMeetingResponse:(int)arg1 ;
-(void)setEventUID:(ASEventUID *)arg1 ;
-(NSDate *)instanceDate;
-(void)setInstanceDate:(NSDate *)arg1 ;
-(NSString *)calEventServerId;
-(void)setCalEventServerId:(NSString *)arg1 ;
-(NSString *)comment;
@end

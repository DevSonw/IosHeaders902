/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCalDAV/DADataclassLockWatcher.h>

@protocol DAEventsCalendarAvailabilityResponseConsumer;
@class NSDate, NSString, NSArray, MobileCalDAVDaemonAccount, DACoreDAVTaskManager;

@interface MobileCalDAVCalendarAvailabilityRequest : NSObject <DADataclassLockWatcher> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	id<DAEventsCalendarAvailabilityResponseConsumer> _consumer;
	MobileCalDAVDaemonAccount* _account;
	id _freeBusyLookupID;
	DACoreDAVTaskManager* _taskManager;
	char _waitingForGatekeeper;
	char _holdingGatekeeperLock;
	char _finished;

}

@property (nonatomic,readonly) id requestID; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_convertType:(int)arg1 ;
+(id)_availabilitySpansForFreeBusyComponent:(id)arg1 usingCalendar:(id)arg2 ;
+(id)_availabilitySpansForFreeBusyProperties:(id)arg1 usingCalendar:(id)arg2 ;
+(id)_normalizeSpansFromStartDate:(id)arg1 toEndDate:(id)arg2 betweenExistingSortedSpans:(id)arg3 ;
+(id)_parseResponse:(id)arg1 ;
-(id)requestID;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(void)performRequest;
-(id)waiterID;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5 account:(id)arg6 ;
-(void)_reallyPerformRequest;
-(void)_finishWithError:(id)arg1 ;
@end


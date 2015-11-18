/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {

	NSTimer* _tzSupportDayRolloverTimer;

}
-(char)todayChangedAfterInvalidation;
-(void)_setupTimeZoneTimer;
-(void)_killTimeZoneTimer;
-(void)invalidateTodayAndNotifyIfChanged;
-(void)dealloc;
-(id)init;
@end

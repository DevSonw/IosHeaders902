/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity {

	NSDate* _date;
	unsigned _view;

}

@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned view;              //@synthesize view=_view - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)view;
-(id)dictionary;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 view:(unsigned)arg2 calendar:(id)arg3 ;
-(id)initWithDate:(id)arg1 view:(unsigned)arg2 ;
@end

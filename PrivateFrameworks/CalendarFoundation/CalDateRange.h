/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <CalendarFoundation/CalDateRangeProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)rangeWithRange:(id)arg1 ;
+(id)rangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)rangeWithStartDate:(id)arg1 duration:(double)arg2 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 duration:(double)arg3 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 multiplier:(unsigned)arg3 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(int)arg2 components:(id)arg3 calendar:(id)arg4 ;
-(char)containsDate:(id)arg1 ;
-(id)midpoint;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)subtractRange:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)containsRange:(id)arg1 ;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(char)intersectsRange:(id)arg1 allowSinglePointIntersection:(char)arg2 ;
-(char)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(char)arg3 ;
-(char)intersectsRange:(id)arg1 ;
-(id)_calculateMidnightsInCalendar:(id)arg1 ;
-(id)briefDescription;
-(void)setStartDate:(id)arg1 duration:(double)arg2 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)midnightsForRangeInTimeZoneString:(id)arg1 ;
-(id)unionRange:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

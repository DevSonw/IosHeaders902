/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EKTimeZone : NSObject <NSCopying> {

	NSString* _name;
	void* _internal;
	long long _lastStart;
	long long _lastEnd;
	unsigned _lastIndex;
	double _offset;

}
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
+(id)timeZoneWithName:(id)arg1 ;
-(double)secondsFromGMT;
-(id)abbreviationForDate:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(double)secondsFromGMTForDate:(id)arg1 ;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(id)initWithOffset:(double)arg1 name:(id)arg2 ;
-(id)abbreviationForAbsoluteTime:(double)arg1 ;
-(unsigned)_indexForAbsoluteTime:(double)arg1 ;
-(id)_abbreviationForIndex:(unsigned)arg1 ;
-(id)NSTimeZone;
-(id)abbreviation;
@end

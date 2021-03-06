/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString;

@interface TSUPerformanceTest : NSObject {

	NSString* mName;
	SEL mSelector;
	id mTarget;
	double mGoalTime;
	double mPrecision;
	char mQuiet;
	TSUOpstat_s mTiming;
	char mPassed;

}

@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) TSUOpstat_s timing; 
@property (assign,nonatomic) double goalTime; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) char quiet; 
@property (nonatomic,readonly) char passed; 
+(char)wantsPerformanceTiming;
+(void)dumpStopWatch:(id)arg1 withSeconds:(double)arg2 ;
+(void)startStopWatch:(id)arg1 ;
+(id)startStopWatch;
+(void)dumpXmlToFile;
+(void)endStopWatch:(id)arg1 ;
+(void)endStopWatch:(id)arg1 withTimer:(id)arg2 ;
+(id)csvHeader;
-(void)setPrecision:(double)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)run;
-(void)report;
-(id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4 ;
-(id)csvString;
-(TSUOpstat_s)timing;
-(void)setTiming:(TSUOpstat_s)arg1 ;
-(double)goalTime;
-(void)setGoalTime:(double)arg1 ;
-(double)precision;
-(char)quiet;
-(void)setQuiet:(char)arg1 ;
-(char)passed;
@end


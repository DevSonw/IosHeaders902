/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class NSString;

@interface ChartLabelInfo : NSObject {

	NSString* _string;
	CGSize _size;
	float _position;
	char _immutable;

}

@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float position;                 //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) char immutable;               //@synthesize immutable=_immutable - In the implementation block
-(void)setImmutable:(char)arg1 ;
-(CGSize)size;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(float)arg1 ;
-(float)position;
-(void)setString:(NSString *)arg1 ;
-(void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)retainStringAndSizeFromLabelInfo:(id)arg1 ;
-(void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2 ;
-(char)immutable;
@end


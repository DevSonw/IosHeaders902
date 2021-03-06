/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:54 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSNumberFormatter, NSString;

@interface NSUnitFormatter : NSFormatter {

	NSNumberFormatter* _numberFormatter;
	int _unitStyle;
	UAMeasureFormatRef _formatter;
	UPluralRulesRef _prules;
	char _modified;
	NSString* _localeID;

}

@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) int unitStyle; 
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)stringForValue:(double)arg1 unit:(unsigned)arg2 ;
-(id)stringForValue1:(double)arg1 unit1:(unsigned)arg2 value2:(double)arg3 unit2:(unsigned)arg4 ;
-(id)unitStringFromValue:(double)arg1 unit:(unsigned)arg2 ;
-(int)unitStyle;
-(void)setUnitStyle:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end


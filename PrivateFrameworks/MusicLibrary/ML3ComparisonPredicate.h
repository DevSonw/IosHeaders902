/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {

	id _value;
	NSString* _transformFunction;
	int _comparison;
	char _caseInsensitive;
	NSString* _treatNullAsString;

}

@property (nonatomic,retain) id value;                                //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) int comparison;                          //@synthesize comparison=_comparison - In the implementation block
@property (assign,nonatomic) char caseInsensitive;                    //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,copy) NSString * treatNullAsString;              //@synthesize treatNullAsString=_treatNullAsString - In the implementation block
@property (nonatomic,copy) NSString * transformFunction;              //@synthesize transformFunction=_transformFunction - In the implementation block
@property (nonatomic,copy,readonly) NSString * operator; 
+(id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToInteger:(int)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(char)arg4 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(char)arg4 treatNullAsString:(id)arg5 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4 ;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(int)comparison;
-(char)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(void)setComparison:(int)arg1 ;
-(void)setCaseInsensitive:(char)arg1 ;
-(void)setTreatNullAsString:(NSString *)arg1 ;
-(void)setTransformFunction:(NSString *)arg1 ;
-(char)caseInsensitive;
-(NSString *)treatNullAsString;
-(NSString *)transformFunction;
-(id)valueToBindForOperation:(int)arg1 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(char)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6 ;
-(NSString *)operator;
@end

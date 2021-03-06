/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSPredicateOperator, NSExpression;

@interface NSComparisonPredicate : NSPredicate {

	void* _reserved2;
	NSPredicateOperator* _predicateOperator;
	NSExpression* _lhs;
	NSExpression* _rhs;

}

@property (readonly) unsigned predicateOperatorType; 
@property (readonly) unsigned comparisonPredicateModifier; 
@property (retain,readonly) NSExpression * leftExpression; 
@property (retain,readonly) NSExpression * rightExpression; 
@property (readonly) SEL customSelector; 
@property (readonly) unsigned options; 
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
+(id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
+(char)supportsSecureCoding;
+(id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned)arg3 type:(unsigned)arg4 options:(unsigned)arg5 ;
-(id)generateMetadataDescription;
-(unsigned)predicateOperatorType;
-(NSExpression *)leftExpression;
-(NSExpression *)rightExpression;
-(void)allowEvaluation;
-(id)predicateFormat;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned)arg3 type:(unsigned)arg4 options:(unsigned)arg5 ;
-(id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3 ;
-(id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3 ;
-(id)predicateOperator;
-(id)keyPathExpressionForString:(id)arg1 ;
-(unsigned)comparisonPredicateModifier;
-(void)acceptVisitor:(id)arg1 flags:(unsigned)arg2 ;
-(void)_acceptOperator:(id)arg1 flags:(unsigned)arg2 ;
-(void)_acceptExpressions:(id)arg1 flags:(unsigned)arg2 ;
-(SEL)customSelector;
-(void)setPredicateOperator:(id)arg1 ;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)options;
@end


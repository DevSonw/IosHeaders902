/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:22:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameplayKit/GKRule.h>

@class NSPredicate;

@interface GKNSPredicateRule : GKRule {

	NSPredicate* _predicate;

}

@property (nonatomic,retain,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(char)evaluatePredicateWithSystem:(id)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 ;
@end


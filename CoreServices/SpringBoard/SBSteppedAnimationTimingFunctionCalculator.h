/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBSteppedAnimationTimingFunctionCalculator : NSObject {

	NSMutableDictionary* _functionsByName;
	float _percentComplete;

}

@property (assign,nonatomic) float percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(float)arg3 and:(float)arg4 ;
-(void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2 ;
-(id)timingFunctionNames;
-(float)valueForFunctionWithName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)percentComplete;
-(void)setPercentComplete:(float)arg1 ;
@end


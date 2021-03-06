/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FIUIAnimatableObject : NSObject {

	NSMutableDictionary* _animatableProperties;

}
-(void)update:(double)arg1 ;
-(void)addAnimation:(id)arg1 forPropertyType:(unsigned)arg2 ;
-(id)_newAnimatablePropertyForType:(unsigned)arg1 ;
-(id)_animatablePropertyForType:(unsigned)arg1 ;
-(void)removeAllAnimationsForPropertyType:(unsigned)arg1 ;
-(char)areAnimationsInProgress;
-(id)endingValueForPropertyType:(unsigned)arg1 ;
@end


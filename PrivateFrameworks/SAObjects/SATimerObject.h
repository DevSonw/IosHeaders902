/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSNumber;

@interface SATimerObject : SADomainObject

@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSNumber * timerValue; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)_ad_setTimer:(id)arg1 ;
-(id)_ad_timerWithState:(int)arg1 ;
-(id)_ad_timer;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)timerValue;
-(void)setTimerValue:(NSNumber *)arg1 ;
@end


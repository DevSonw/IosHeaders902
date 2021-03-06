/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAAlarmAlarmAction> alarmAction; 
+(id)showAndPerformAlarmAction;
+(id)showAndPerformAlarmActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)_ad_getAlarmRequestRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_ad_alarmResponseForResponse:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(id<SAAlarmAlarmAction>)alarmAction;
-(void)setAlarmAction:(id<SAAlarmAlarmAction>)arg1 ;
@end


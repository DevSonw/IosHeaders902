/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PBBridgeAggregateReporter : NSObject
+(id)descriptionForSuccessType:(unsigned)arg1 ;
+(id)descriptionForTimingType:(unsigned)arg1 ;
+(id)descriptionForCommTimingType:(unsigned)arg1 ;
+(void)activationServerRespondedAtPage:(unsigned)arg1 ;
+(void)incrementSuccessType:(unsigned)arg1 ;
+(void)pushTimingType:(unsigned)arg1 withValue:(double)arg2 ;
+(void)pushCommunicationTimingType:(unsigned)arg1 withValue:(double)arg2 ;
@end


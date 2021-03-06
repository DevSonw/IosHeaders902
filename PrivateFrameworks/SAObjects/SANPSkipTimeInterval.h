/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SANPSkipTimeInterval : SADomainCommand

@property (nonatomic,copy) NSNumber * adjustmentInMilliseconds; 
+(id)skipTimeInterval;
+(id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSNumber *)adjustmentInMilliseconds;
-(void)setAdjustmentInMilliseconds:(NSNumber *)arg1 ;
@end


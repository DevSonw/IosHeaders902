/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingRuleEntry.h>

@class NSNumber;

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (nonatomic,readonly) NSNumber * rootNodeID; 
@property (nonatomic,readonly) NSNumber * qualificationID; 
+(void)load;
+(id)entryKey;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSNumber *)qualificationID;
-(NSNumber *)rootNodeID;
-(id)initWithRootNodeID:(id)arg1 withQualificationID:(id)arg2 withEntryDate:(id)arg3 ;
@end


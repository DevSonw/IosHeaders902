/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray, NSCondition;

@interface TSUDateParserLibrary : NSObject {

	unsigned mMaxPermittedParsers;
	unsigned mNumberOfUses;
	unsigned mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
+(id)sharedDateParserLibrary;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
@end


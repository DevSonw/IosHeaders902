/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBSApplicationTerminationAssertion : NSObject {

	NSString* _bundleID;
	NSString* _reason;
	int _assertionState;
	unsigned long long _serialNumber;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) int assertionState;                         //@synthesize assertionState=_assertionState - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
-(NSString *)bundleID;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)reason;
-(id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(/*^block*/id)arg3 ;
-(int)assertionState;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(unsigned long long)serialNumber;
@end

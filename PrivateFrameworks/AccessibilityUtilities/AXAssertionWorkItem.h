/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXAssertionWorkItem : NSObject {

	char _acquire;
	NSString* _type;
	NSString* _identifier;
	unsigned _retries;

}

@property (nonatomic,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char acquire;                       //@synthesize acquire=_acquire - In the implementation block
@property (assign,nonatomic) unsigned retries;                     //@synthesize retries=_retries - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)type;
-(id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(char)arg3 ;
-(char)acquire;
-(unsigned)retries;
-(void)setRetries:(unsigned)arg1 ;
@end

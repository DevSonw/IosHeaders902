/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFSyncInfo : NSObject <NSSecureCoding> {

	NSString* _anchor;
	NSString* _validity;
	int _count;
	NSString* _key;
	NSString* _applicationBundleIdentifier;
	NSString* _intentSlotName;

}

@property (nonatomic,copy) NSString * anchor;                                   //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;                                 //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) int count;                                         //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                                      //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * intentSlotName;                           //@synthesize intentSlotName=_intentSlotName - In the implementation block
+(char)supportsSecureCoding;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)count;
-(id)description;
-(NSString *)key;
-(void)setCount:(int)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)anchor;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
@end

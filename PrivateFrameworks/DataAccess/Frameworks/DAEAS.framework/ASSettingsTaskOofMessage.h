/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage : ASItem {

	NSNumber* _audience;
	NSNumber* _enabled;
	NSString* _replyMessage;
	NSString* _bodyType;

}

@property (nonatomic,retain) NSNumber * audience;                  //@synthesize audience=_audience - In the implementation block
@property (nonatomic,retain) NSNumber * enabled;                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * replyMessage;              //@synthesize replyMessage=_replyMessage - In the implementation block
@property (nonatomic,retain) NSString * bodyType;                  //@synthesize bodyType=_bodyType - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)enabled;
-(id)description;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSString *)bodyType;
-(NSNumber *)audience;
-(NSString *)replyMessage;
-(void)setAudience:(NSNumber *)arg1 ;
-(void)appliesToInternal:(id)arg1 ;
-(void)appliesToExternalKnown:(id)arg1 ;
-(void)appliesToExternalUnknown:(id)arg1 ;
-(void)setReplyMessage:(NSString *)arg1 ;
-(void)setBodyType:(NSString *)arg1 ;
@end

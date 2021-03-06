/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSArray, NSMutableArray;

@interface ASSettingsTaskOofGetResponse : ASItem {

	NSNumber* _oofState;
	NSString* _startTime;
	NSString* _endTime;
	NSArray* _oofMessages;
	NSMutableArray* _mOofMessages;

}

@property (nonatomic,retain) NSNumber * oofState;                        //@synthesize oofState=_oofState - In the implementation block
@property (nonatomic,retain) NSString * startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSString * endTime;                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * oofMessages;                      //@synthesize oofMessages=_oofMessages - In the implementation block
@property (nonatomic,retain) NSMutableArray * mOofMessages;              //@synthesize mOofMessages=_mOofMessages - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(void)setStartTime:(NSString *)arg1 ;
-(NSString *)startTime;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSMutableArray *)mOofMessages;
-(void)setMOofMessages:(NSMutableArray *)arg1 ;
-(NSNumber *)oofState;
-(void)setOofState:(NSNumber *)arg1 ;
-(void)addOofMessages:(id)arg1 ;
-(NSArray *)oofMessages;
-(id)convertToDAOofParams;
-(void)setOofMessages:(NSArray *)arg1 ;
-(NSString *)endTime;
-(void)setEndTime:(NSString *)arg1 ;
@end


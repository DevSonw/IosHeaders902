/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSError, NSDictionary, NSData;

@interface ATLegacyMessage : NSObject {

	unsigned _messageType;
	unsigned _messageId;
	NSString* _name;
	NSString* _dataClass;
	NSError* _result;
	NSDictionary* _params;
	NSData* _payload;
	double _timestamp;
	NSData* _sig;
	unsigned _session;

}

@property (assign,nonatomic) unsigned messageType;                   //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) unsigned messageId;                     //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * dataClass;                   //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,retain) NSError * result;                       //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) NSData * payload;                       //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSData * sig;                           //@synthesize sig=_sig - In the implementation block
@property (assign,nonatomic) unsigned sessionNumber;                 //@synthesize session=_session - In the implementation block
+(id)messageFromDictionary:(id)arg1 ;
+(id)_messageTypeString:(unsigned)arg1 ;
+(unsigned)nextSessionNumber;
+(id)messageFromHeader:(id)arg1 withParams:(id)arg2 andPayload:(id)arg3 ;
+(id)messageWithName:(id)arg1 parameters:(id)arg2 ;
+(id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned)arg3 ;
+(void)setSessionNumber:(unsigned)arg1 ;
+(unsigned)currentSessionNumber;
+(id)messageFromData:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)payload;
-(id)dictionary;
-(void)setTimestamp:(double)arg1 ;
-(id)data;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSError *)result;
-(void)setPayload:(NSData *)arg1 ;
-(id)partialResponseWithParameters:(id)arg1 ;
-(id)responseWithResultError:(id)arg1 parameters:(id)arg2 ;
-(void)setSig:(NSData *)arg1 ;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(unsigned)sessionNumber;
-(void)setSessionNumber:(unsigned)arg1 ;
-(id)parameterForKey:(id)arg1 ;
-(unsigned)messageId;
-(void)setMessageId:(unsigned)arg1 ;
-(NSData *)sig;
-(void)setMessageType:(unsigned)arg1 ;
-(unsigned)messageType;
-(void)setResult:(NSError *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {

	double _numberDoubleValue;
	long long _numberIntValue;
	double _timestamp;
	NSData* _bytesValue;
	NSString* _key;
	NSString* _stringValue;
	SCD_Struct_HD28 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNumberIntValue; 
@property (assign,nonatomic) long long numberIntValue;               //@synthesize numberIntValue=_numberIntValue - In the implementation block
@property (assign,nonatomic) char hasNumberDoubleValue; 
@property (assign,nonatomic) double numberDoubleValue;               //@synthesize numberDoubleValue=_numberDoubleValue - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) char hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                    //@synthesize bytesValue=_bytesValue - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(NSString *)key;
-(void)setTimestamp:(double)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(char)hasKey;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasStringValue;
-(void)setNumberIntValue:(long long)arg1 ;
-(void)setHasNumberIntValue:(char)arg1 ;
-(char)hasNumberIntValue;
-(void)setNumberDoubleValue:(double)arg1 ;
-(void)setHasNumberDoubleValue:(char)arg1 ;
-(char)hasNumberDoubleValue;
-(long long)numberIntValue;
-(double)numberDoubleValue;
-(id)decodedValue;
-(void)setTimestampWithDate:(id)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3 ;
-(id)decodedTimestamp;
-(char)hasBytesValue;
-(NSData *)bytesValue;
-(char)readFrom:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying> {

	SCD_Struct_HD33* _typesToReads;
	SCD_Struct_HD33* _typesToWrites;
	NSString* _appBundleIdentifier;
	NSData* _requestIdentifier;

}

@property (nonatomic,readonly) char hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasRequestIdentifier; 
@property (nonatomic,retain) NSData * requestIdentifier;                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned typesToReadsCount; 
@property (nonatomic,readonly) long long* typesToReads; 
@property (nonatomic,readonly) unsigned typesToWritesCount; 
@property (nonatomic,readonly) long long* typesToWrites; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(char)hasAppBundleIdentifier;
-(char)hasRequestIdentifier;
-(unsigned)typesToReadsCount;
-(long long)typesToReadAtIndex:(unsigned)arg1 ;
-(unsigned)typesToWritesCount;
-(long long)typesToWriteAtIndex:(unsigned)arg1 ;
-(void)addTypesToRead:(long long)arg1 ;
-(void)addTypesToWrite:(long long)arg1 ;
-(void)clearTypesToReads;
-(void)clearTypesToWrites;
-(long long*)typesToReads;
-(void)setTypesToReads:(long long*)arg1 count:(unsigned)arg2 ;
-(long long*)typesToWrites;
-(void)setTypesToWrites:(long long*)arg1 count:(unsigned)arg2 ;
-(char)readFrom:(id)arg1 ;
-(NSData *)requestIdentifier;
-(void)setRequestIdentifier:(NSData *)arg1 ;
@end


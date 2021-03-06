/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/nanoprefsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanoprefsyncd/nanoprefsyncd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPSUserDefaultsBackupMsgKey : PBCodable <NSCopying> {

	NSString* _key;
	NSData* _value;

}

@property (nonatomic,retain) NSString * key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) NSData * value;               //@synthesize value=_value - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)key;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasValue;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {

	NSString* _shieldColor;
	unsigned _shieldEnumValue;
	NSString* _shieldText;
	SCD_Struct_GE3 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@property (nonatomic,readonly) char hasShieldText; 
@property (nonatomic,retain) NSString * shieldText;                       //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) char hasShieldEnumValue; 
@property (assign,nonatomic) unsigned shieldEnumValue;                    //@synthesize shieldEnumValue=_shieldEnumValue - In the implementation block
@property (nonatomic,readonly) char hasShieldColor; 
@property (nonatomic,retain) NSString * shieldColor;                      //@synthesize shieldColor=_shieldColor - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasShieldColor;
-(void)setShieldText:(NSString *)arg1 ;
-(NSString *)shieldText;
-(char)hasShieldText;
-(void)setHasShieldEnumValue:(char)arg1 ;
-(NSString *)shieldColor;
-(void)setShieldEnumValue:(unsigned)arg1 ;
-(unsigned)shieldEnumValue;
-(void)setShieldColor:(NSString *)arg1 ;
-(char)hasShieldEnumValue;
-(long long)shieldType;
-(NSString *)shieldColorString;
-(char)readFrom:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying> {

	SCD_Struct_GE173 _screenResolution;
	int _interactionModel;
	NSString* _manufacturer;
	NSString* _model;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasInteractionModel; 
@property (assign,nonatomic) int interactionModel;                           //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,readonly) char hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) char hasModel; 
@property (nonatomic,retain) NSString * model;                               //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char hasScreenResolution; 
@property (assign,nonatomic) SCD_Struct_GE174 screenResolution;              //@synthesize screenResolution=_screenResolution - In the implementation block
+(id)carInfoWithTraits:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)interactionModel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasInteractionModel:(char)arg1 ;
-(SCD_Struct_GE174)screenResolution;
-(char)hasScreenResolution;
-(NSString *)manufacturer;
-(char)hasInteractionModel;
-(void)setHasScreenResolution:(char)arg1 ;
-(char)hasManufacturer;
-(void)setScreenResolution:(SCD_Struct_GE174)arg1 ;
-(char)hasModel;
-(void)setInteractionModel:(int)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRefinementParameters;

@interface GEOMapItemHandle : PBCodable <NSCopying> {

	int _handleType;
	GEOPDPlaceRefinementParameters* _placeRefinementParameters;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasHandleType; 
@property (assign,nonatomic) int handleType;                                                          //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,readonly) char hasPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDPlaceRefinementParameters * placeRefinementParameters;              //@synthesize placeRefinementParameters=_placeRefinementParameters - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(char)hasPlaceRefinementParameters;
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(int)handleType;
-(void)setHandleType:(int)arg1 ;
-(char)hasHandleType;
-(void)setHasHandleType:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


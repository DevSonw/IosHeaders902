/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBRequest <NSCopying> {

	double _arrivalDate;
	double _expirationDate;
	GEOMapItemStorage* _destinationLocation;
	int _transportType;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasArrivalDate; 
@property (assign,nonatomic) double arrivalDate;                                   //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) char hasDestinationLocation; 
@property (nonatomic,retain) GEOMapItemStorage * destinationLocation;              //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) char hasExpirationDate; 
@property (assign,nonatomic) double expirationDate;                                //@synthesize expirationDate=_expirationDate - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)arrivalDate;
-(void)setDestinationLocation:(GEOMapItemStorage *)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setHasArrivalDate:(char)arg1 ;
-(char)hasExpirationDate;
-(int)transportType;
-(void)setHasExpirationDate:(char)arg1 ;
-(char)hasDestinationLocation;
-(double)expirationDate;
-(void)setExpirationDate:(double)arg1 ;
-(char)hasTransportType;
-(void)setArrivalDate:(double)arg1 ;
-(GEOMapItemStorage *)destinationLocation;
-(char)hasArrivalDate;
-(void)setHasTransportType:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

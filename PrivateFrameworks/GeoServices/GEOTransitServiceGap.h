/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServiceGap.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, GEOFormattedString, NSString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {

	unsigned _absEndTime;
	unsigned _absStartTime;
	unsigned _appearsBeforeSuggestedRouteIndex;
	GEOFormattedString* _displayMessage;
	SCD_Struct_GE49 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned routeListInsertBeforeIndex; 
@property (nonatomic,readonly) id<GEOServerFormattedString> displayMessagFormatString; 
@property (assign,nonatomic) char hasAppearsBeforeSuggestedRouteIndex; 
@property (assign,nonatomic) unsigned appearsBeforeSuggestedRouteIndex;                             //@synthesize appearsBeforeSuggestedRouteIndex=_appearsBeforeSuggestedRouteIndex - In the implementation block
@property (assign,nonatomic) char hasAbsStartTime; 
@property (assign,nonatomic) unsigned absStartTime;                                                 //@synthesize absStartTime=_absStartTime - In the implementation block
@property (assign,nonatomic) char hasAbsEndTime; 
@property (assign,nonatomic) unsigned absEndTime;                                                   //@synthesize absEndTime=_absEndTime - In the implementation block
@property (nonatomic,readonly) char hasDisplayMessage; 
@property (nonatomic,retain) GEOFormattedString * displayMessage;                                   //@synthesize displayMessage=_displayMessage - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAbsStartTime:(unsigned)arg1 ;
-(char)hasAbsEndTime;
-(char)hasAppearsBeforeSuggestedRouteIndex;
-(void)setHasAbsEndTime:(char)arg1 ;
-(void)setAbsEndTime:(unsigned)arg1 ;
-(unsigned)appearsBeforeSuggestedRouteIndex;
-(unsigned)absEndTime;
-(char)hasAbsStartTime;
-(void)setHasAppearsBeforeSuggestedRouteIndex:(char)arg1 ;
-(unsigned)absStartTime;
-(GEOFormattedString *)displayMessage;
-(void)setDisplayMessage:(GEOFormattedString *)arg1 ;
-(void)setAppearsBeforeSuggestedRouteIndex:(unsigned)arg1 ;
-(void)setHasAbsStartTime:(char)arg1 ;
-(char)hasDisplayMessage;
-(unsigned)routeListInsertBeforeIndex;
-(id<GEOServerFormattedString>)displayMessagFormatString;
-(char)readFrom:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAutomobileOptions, NSString, GEOTransitOptions, GEOWalkingOptions;

@interface GEORouteAttributes : PBCodable <NSCopying> {

	SCD_Struct_GE1* _additionalTransportTypes;
	SCD_Struct_GE61 _timepoint;
	SCD_Struct_GE1* _uiContexts;
	GEOAutomobileOptions* _automobileOptions;
	int _basicPointsToBeIncluded;
	int _mainTransportType;
	NSString* _phoneticLocaleIdentifier;
	int _trafficType;
	GEOTransitOptions* _transitOptions;
	unsigned _walkingLimitMeters;
	GEOWalkingOptions* _walkingOptions;
	char _includeContingencyRoutes;
	char _includeHistoricTravelTime;
	char _includeLaneGuidance;
	char _includeManeuverIcons;
	char _includePhonetics;
	char _includeSubsteps;
	char _includeTrafficAlongRoute;
	char _includeTrafficIncidents;
	char _includeZilchPoints;
	SCD_Struct_GE58 _has;

}

@property (assign,nonatomic) char hasMainTransportType; 
@property (assign,nonatomic) int mainTransportType;                                 //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (assign,nonatomic) char hasIncludePhonetics; 
@property (assign,nonatomic) char includePhonetics;                                 //@synthesize includePhonetics=_includePhonetics - In the implementation block
@property (assign,nonatomic) char hasIncludeManeuverIcons; 
@property (assign,nonatomic) char includeManeuverIcons;                             //@synthesize includeManeuverIcons=_includeManeuverIcons - In the implementation block
@property (assign,nonatomic) char hasIncludeZilchPoints; 
@property (assign,nonatomic) char includeZilchPoints;                               //@synthesize includeZilchPoints=_includeZilchPoints - In the implementation block
@property (assign,nonatomic) char hasIncludeContingencyRoutes; 
@property (assign,nonatomic) char includeContingencyRoutes;                         //@synthesize includeContingencyRoutes=_includeContingencyRoutes - In the implementation block
@property (assign,nonatomic) char hasIncludeLaneGuidance; 
@property (assign,nonatomic) char includeLaneGuidance;                              //@synthesize includeLaneGuidance=_includeLaneGuidance - In the implementation block
@property (assign,nonatomic) char hasBasicPointsToBeIncluded; 
@property (assign,nonatomic) int basicPointsToBeIncluded;                           //@synthesize basicPointsToBeIncluded=_basicPointsToBeIncluded - In the implementation block
@property (assign,nonatomic) char hasTrafficType; 
@property (assign,nonatomic) int trafficType;                                       //@synthesize trafficType=_trafficType - In the implementation block
@property (nonatomic,readonly) char hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                   //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (assign,nonatomic) char hasIncludeTrafficAlongRoute; 
@property (assign,nonatomic) char includeTrafficAlongRoute;                         //@synthesize includeTrafficAlongRoute=_includeTrafficAlongRoute - In the implementation block
@property (assign,nonatomic) char hasTimepoint; 
@property (assign,nonatomic) SCD_Struct_GE64 timepoint;                             //@synthesize timepoint=_timepoint - In the implementation block
@property (assign,nonatomic) char hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) char includeHistoricTravelTime;                        //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) char hasIncludeSubsteps; 
@property (assign,nonatomic) char includeSubsteps;                                  //@synthesize includeSubsteps=_includeSubsteps - In the implementation block
@property (assign,nonatomic) char hasIncludeTrafficIncidents; 
@property (assign,nonatomic) char includeTrafficIncidents;                          //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (assign,nonatomic) char hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters;                           //@synthesize walkingLimitMeters=_walkingLimitMeters - In the implementation block
@property (nonatomic,readonly) unsigned additionalTransportTypesCount; 
@property (nonatomic,readonly) int* additionalTransportTypes; 
@property (nonatomic,readonly) char hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) char hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                    //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) char hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                    //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) unsigned uiContextsCount; 
@property (nonatomic,readonly) int* uiContexts; 
+(id)defaultRouteAttributes;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)phoneticLocaleIdentifier;
-(char)hasPhoneticLocaleIdentifier;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)setIncludePhonetics:(char)arg1 ;
-(void)setHasIncludePhonetics:(char)arg1 ;
-(char)hasIncludePhonetics;
-(char)includePhonetics;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setHasIncludeHistoricTravelTime:(char)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(SCD_Struct_GE64)timepoint;
-(void)setIncludeHistoricTravelTime:(char)arg1 ;
-(char)hasWalkingOptions;
-(void)setTimepoint:(SCD_Struct_GE64)arg1 ;
-(char)hasIncludeHistoricTravelTime;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(char)includeHistoricTravelTime;
-(char)hasTimepoint;
-(void)setHasTimepoint:(char)arg1 ;
-(GEOWalkingOptions *)walkingOptions;
-(char)hasTransitOptions;
-(char)hasAutomobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(char)hasIncludeZilchPoints;
-(unsigned)walkingLimitMeters;
-(int)trafficType;
-(void)clearUiContexts;
-(char)hasIncludeTrafficIncidents;
-(void)setHasIncludeZilchPoints:(char)arg1 ;
-(char)hasMainTransportType;
-(void)setTrafficType:(int)arg1 ;
-(void)setHasBasicPointsToBeIncluded:(char)arg1 ;
-(char)includeContingencyRoutes;
-(char)hasBasicPointsToBeIncluded;
-(unsigned)additionalTransportTypesCount;
-(void)setHasIncludeTrafficIncidents:(char)arg1 ;
-(char)hasTrafficType;
-(void)setHasIncludeContingencyRoutes:(char)arg1 ;
-(void)setUiContexts:(int*)arg1 count:(unsigned)arg2 ;
-(int)additionalTransportTypeAtIndex:(unsigned)arg1 ;
-(void)addUiContext:(int)arg1 ;
-(void)setHasWalkingLimitMeters:(char)arg1 ;
-(unsigned)uiContextsCount;
-(void)setIncludeContingencyRoutes:(char)arg1 ;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(int*)uiContexts;
-(void)setHasTrafficType:(char)arg1 ;
-(void)addAdditionalTransportType:(int)arg1 ;
-(void)clearAdditionalTransportTypes;
-(char)hasIncludeContingencyRoutes;
-(void)setIncludeLaneGuidance:(char)arg1 ;
-(void)setIncludeManeuverIcons:(char)arg1 ;
-(void)setIncludeTrafficAlongRoute:(char)arg1 ;
-(void)setIncludeSubsteps:(char)arg1 ;
-(int)mainTransportType;
-(void)setHasIncludeSubsteps:(char)arg1 ;
-(int)uiContextAtIndex:(unsigned)arg1 ;
-(int*)additionalTransportTypes;
-(char)includeManeuverIcons;
-(char)includeLaneGuidance;
-(char)includeSubsteps;
-(char)hasWalkingLimitMeters;
-(void)setHasIncludeManeuverIcons:(char)arg1 ;
-(void)setHasIncludeLaneGuidance:(char)arg1 ;
-(char)includeTrafficAlongRoute;
-(int)basicPointsToBeIncluded;
-(void)setMainTransportType:(int)arg1 ;
-(char)includeZilchPoints;
-(char)includeTrafficIncidents;
-(void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned)arg2 ;
-(char)hasIncludeLaneGuidance;
-(void)setIncludeTrafficIncidents:(char)arg1 ;
-(char)hasIncludeManeuverIcons;
-(char)hasIncludeSubsteps;
-(void)setHasIncludeTrafficAlongRoute:(char)arg1 ;
-(void)setHasMainTransportType:(char)arg1 ;
-(void)setBasicPointsToBeIncluded:(int)arg1 ;
-(void)setIncludeZilchPoints:(char)arg1 ;
-(char)hasIncludeTrafficAlongRoute;
-(char)readFrom:(id)arg1 ;
@end


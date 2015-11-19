/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, NSString;

@interface GEORoute : PBCodable <NSCopying> {

	SCD_Struct_GE1* _advisorys;
	SCD_Struct_GE52* _incidentEndOffsetsInRoutes;
	SCD_Struct_GE52* _incidentIndices;
	SCD_Struct_GE52* _trafficColorOffsets;
	SCD_Struct_GE52* _trafficColors;
	NSMutableArray* _advisoryNotices;
	NSData* _arrivalRouteID;
	unsigned _arrivalStepID;
	NSData* _basicPoints;
	NSData* _departureRouteID;
	unsigned _departureStepID;
	unsigned _distance;
	int _drivingSide;
	unsigned _expectedTime;
	unsigned _historicTravelTime;
	NSString* _name;
	NSString* _phoneticName;
	NSData* _routeID;
	NSMutableArray* _routeNames;
	int _routeType;
	NSMutableArray* _steps;
	int _transportType;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	NSData* _unpackedLatLngVertices;
	NSData* _zilchPoints;
	SCD_Struct_GE66 _has;

}

@property (readonly) unsigned pointCount; 
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                                       //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                  //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                                 //@synthesize phoneticName=_phoneticName - In the implementation block
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance;                                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) char hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                   //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) char hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                        //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) char hasRouteType; 
@property (assign,nonatomic) int routeType;                                           //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) char hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                    //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) char hasDrivingSide; 
@property (assign,nonatomic) int drivingSide;                                         //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) char hasDepartureRouteID; 
@property (nonatomic,retain) NSData * departureRouteID;                               //@synthesize departureRouteID=_departureRouteID - In the implementation block
@property (assign,nonatomic) char hasDepartureStepID; 
@property (assign,nonatomic) unsigned departureStepID;                                //@synthesize departureStepID=_departureStepID - In the implementation block
@property (nonatomic,readonly) char hasArrivalRouteID; 
@property (nonatomic,retain) NSData * arrivalRouteID;                                 //@synthesize arrivalRouteID=_arrivalRouteID - In the implementation block
@property (assign,nonatomic) char hasArrivalStepID; 
@property (assign,nonatomic) unsigned arrivalStepID;                                  //@synthesize arrivalStepID=_arrivalStepID - In the implementation block
@property (nonatomic,readonly) char hasBasicPoints; 
@property (nonatomic,retain) NSData * basicPoints;                                    //@synthesize basicPoints=_basicPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * advisoryNotices;                        //@synthesize advisoryNotices=_advisoryNotices - In the implementation block
@property (nonatomic,readonly) unsigned trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * routeNames;                             //@synthesize routeNames=_routeNames - In the implementation block
@property (assign,nonatomic) char hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                             //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned advisorysCount; 
@property (nonatomic,readonly) int* advisorys; 
@property (assign,nonatomic) char hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                   //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) char hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;                 //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
@property (nonatomic,readonly) char hasUnpackedLatLngVertices; 
@property (nonatomic,retain) NSData * unpackedLatLngVertices;                         //@synthesize unpackedLatLngVertices=_unpackedLatLngVertices - In the implementation block
@property (nonatomic,readonly) unsigned incidentIndicesCount; 
@property (nonatomic,readonly) unsigned* incidentIndices; 
@property (nonatomic,readonly) unsigned incidentEndOffsetsInRoutesCount; 
@property (nonatomic,readonly) unsigned* incidentEndOffsetsInRoutes; 
-(id)maneuverImageForStep:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 ;
-(id)instructionsForStep:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)debugDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasZilchPoints;
-(char)hasRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(int)drivingSide;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(char)hasTransportType;
-(void)setHasTransportType:(char)arg1 ;
-(NSString *)phoneticName;
-(char)hasPhoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(char)hasName;
-(int*)advisorys;
-(char)hasDrivingSide;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)addAdvisoryNotice:(id)arg1 ;
-(unsigned)incidentEndOffsetsInRouteAtIndex:(unsigned)arg1 ;
-(unsigned)advisorysCount;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(char)hasDistance;
-(NSMutableArray *)advisoryNotices;
-(void)setHasDrivingSide:(char)arg1 ;
-(unsigned)incidentEndOffsetsInRoutesCount;
-(int)advisoryAtIndex:(unsigned)arg1 ;
-(unsigned*)incidentIndices;
-(unsigned)routeNamesCount;
-(char)hasUnpackedLatLngVertices;
-(void)setHasExpectedTime:(char)arg1 ;
-(id)routeNameAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)routeNames;
-(void)addAdvisory:(int)arg1 ;
-(char)hasDepartureRouteID;
-(void)addTrafficColor:(unsigned)arg1 ;
-(unsigned*)trafficColors;
-(char)hasHistoricTravelTime;
-(void)clearTrafficColors;
-(void)setAdvisoryNotices:(NSMutableArray *)arg1 ;
-(void)clearIncidentIndices;
-(void)setHasDepartureStepID:(char)arg1 ;
-(void)setHasArrivalStepID:(char)arg1 ;
-(NSData *)arrivalRouteID;
-(char)hasExpectedTime;
-(void)setAdvisorys:(int*)arg1 count:(unsigned)arg2 ;
-(void)setDepartureStepID:(unsigned)arg1 ;
-(unsigned*)incidentEndOffsetsInRoutes;
-(void)addIncidentIndices:(unsigned)arg1 ;
-(int)routeType;
-(void)setIncidentIndices:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)arrivalStepID;
-(unsigned)advisoryNoticesCount;
-(void)addRouteName:(id)arg1 ;
-(char)hasDepartureStepID;
-(id)advisoryNoticeAtIndex:(unsigned)arg1 ;
-(NSData *)basicPoints;
-(void)clearRouteNames;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)setDepartureRouteID:(NSData *)arg1 ;
-(void)setUnpackedLatLngVertices:(NSData *)arg1 ;
-(NSMutableArray *)steps;
-(unsigned)incidentIndicesAtIndex:(unsigned)arg1 ;
-(unsigned)incidentIndicesCount;
-(void)setHasRouteType:(char)arg1 ;
-(char)hasTravelTimeAggressiveEstimate;
-(NSData *)unpackedLatLngVertices;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(char)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(NSData *)departureRouteID;
-(void)setRouteType:(int)arg1 ;
-(void)clearSteps;
-(void)setIncidentEndOffsetsInRoutes:(unsigned*)arg1 count:(unsigned)arg2 ;
-(char)hasArrivalRouteID;
-(char)hasRouteType;
-(void)addStep:(id)arg1 ;
-(unsigned)trafficColorOffsetsCount;
-(unsigned)trafficColorOffsetAtIndex:(unsigned)arg1 ;
-(void)clearAdvisoryNotices;
-(unsigned*)trafficColorOffsets;
-(void)setArrivalStepID:(unsigned)arg1 ;
-(unsigned)departureStepID;
-(void)setArrivalRouteID:(NSData *)arg1 ;
-(char)hasBasicPoints;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setBasicPoints:(NSData *)arg1 ;
-(unsigned)trafficColorAtIndex:(unsigned)arg1 ;
-(void)clearIncidentEndOffsetsInRoutes;
-(unsigned)historicTravelTime;
-(char)hasTravelTimeConservativeEstimate;
-(unsigned)travelTimeAggressiveEstimate;
-(void)setHasTravelTimeConservativeEstimate:(char)arg1 ;
-(void)setHasHistoricTravelTime:(char)arg1 ;
-(void)setRouteNames:(NSMutableArray *)arg1 ;
-(void)clearAdvisorys;
-(unsigned)expectedTime;
-(void)setHasDistance:(char)arg1 ;
-(void)addIncidentEndOffsetsInRoute:(unsigned)arg1 ;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(unsigned)travelTimeConservativeEstimate;
-(void)clearTrafficColorOffsets;
-(id)stepAtIndex:(unsigned)arg1 ;
-(unsigned)stepsCount;
-(char)hasArrivalStepID;
-(void)setDrivingSide:(int)arg1 ;
-(unsigned)trafficColorsCount;
-(SCD_Struct_GE16)pointAt:(unsigned)arg1 ;
-(int)transportTypeForStep:(id)arg1 ;
-(void*)controlPoints;
-(unsigned)stepIndexForPointIndex:(unsigned)arg1 ;
-(id)newETARoute;
-(unsigned)indexForStepID:(unsigned)arg1 ;
-(char)unpackZilchPoints;
-(id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(char)arg2 uniquePointRange:(NSRange*)arg3 ;
-(id)simplifiedDescription;
-(id)newETARouteFromStepIndex:(unsigned)arg1 stepPercentRemaining:(double)arg2 ;
-(unsigned)distanceFromStepIndex:(unsigned)arg1 toStepIndex:(unsigned)arg2 ;
-(char)unpackBasicPoints;
-(char)isContingentRouteFor:(id)arg1 afterPoint:(unsigned)arg2 mainRoutes:(id)arg3 ;
-(char)unpackLatLngVertices;
-(unsigned)pointCount;
-(unsigned)distance;
-(void)setDistance:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

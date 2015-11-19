/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface GEOTrafficTile : PBCodable <NSCopying> {

	NSMutableArray* _trafficIncidents;
	NSMutableArray* _trafficSegments;
	NSData* _vertices;

}

@property (nonatomic,readonly) char hasVertices; 
@property (nonatomic,retain) NSData * vertices;                              //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficSegments;               //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficIncidents;              //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTrafficIncidents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trafficIncidents;
-(unsigned)trafficSegmentsCount;
-(void)setTrafficSegments:(NSMutableArray *)arg1 ;
-(void)addTrafficIncident:(id)arg1 ;
-(NSMutableArray *)trafficSegments;
-(NSData *)vertices;
-(void)clearTrafficIncidents;
-(void)clearTrafficSegments;
-(void)setVertices:(NSData *)arg1 ;
-(id)trafficIncidentAtIndex:(unsigned)arg1 ;
-(void)addTrafficSegment:(id)arg1 ;
-(unsigned)trafficIncidentsCount;
-(id)trafficSegmentAtIndex:(unsigned)arg1 ;
-(char)hasVertices;
-(SCD_Struct_GE94*)createUnpackedVerticesWithGutterSize:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

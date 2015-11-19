/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject {

	SCD_Struct_GE94* _vertices;
	NSMutableArray* _trafficSegments;
	NSArray* _trafficIncidents;
	double _expirationTime;

}

@property (assign,nonatomic) SCD_Struct_GE94* vertices;                     //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficSegments;              //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidents;                  //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
@property (assign,nonatomic) double expirationTime;                         //@synthesize expirationTime=_expirationTime - In the implementation block
+(id)createWithData:(id)arg1 tileKey:(const GEOTileKey*)arg2 ;
+(double)expirationTimeInterval;
-(void)dealloc;
-(NSArray *)trafficIncidents;
-(void)setTrafficSegments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trafficSegments;
-(SCD_Struct_GE94*)vertices;
-(void)setVertices:(SCD_Struct_GE94*)arg1 ;
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(id)initWithData:(id)arg1 tileKey:(const GEOTileKey*)arg2 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSSecureCoding, NSCopying> {

	MKMapCamera* _camera;
	SCD_Struct_MK2 _mapRect;
	SCD_Struct_MK2 _region;
	unsigned _mapType;
	int _mode;
	char _showsPointsOfInterest;
	char _showsBuildings;
	char _rendersInBackground;
	char _useSnapshotService;
	CGSize _size;
	float _scale;
	char _usingRect;

}

@property (nonatomic,copy) MKMapCamera * camera;                                                                                //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 mapRect;                                                                            //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 region;                                                                             //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned mapType;                                                                                  //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) char showsPointsOfInterest;                                                                        //@synthesize showsPointsOfInterest=_showsPointsOfInterest - In the implementation block
@property (assign,nonatomic) char showsBuildings;                                                                               //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float scale;                                                                                       //@synthesize scale=_scale - In the implementation block
@property (assign,setter=_setRendersInBackground:,getter=_rendersInBackground,nonatomic) char rendersInBackground;              //@synthesize rendersInBackground=_rendersInBackground - In the implementation block
@property (assign,setter=_setUseSnapshotService:,getter=_useSnapshotService,nonatomic) char useSnapshotService;                 //@synthesize useSnapshotService=_useSnapshotService - In the implementation block
@property (nonatomic,readonly) char usingRect;                                                                                  //@synthesize usingRect=_usingRect - In the implementation block
+(char)supportsSecureCoding;
-(void)setShowsPointsOfInterest:(char)arg1 ;
-(void)setShowsBuildings:(char)arg1 ;
-(char)showsPointsOfInterest;
-(char)showsBuildings;
-(char)_rendersInBackground;
-(void)_setUseSnapshotService:(char)arg1 ;
-(char)usingRect;
-(char)_useSnapshotService;
-(SCD_Struct_MK2)mapRect;
-(void)_setRendersInBackground:(char)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setRegion:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)region;
-(void)setMapRect:(SCD_Struct_MK2)arg1 ;
-(unsigned)mapType;
-(void)setMapType:(unsigned)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(MKMapCamera *)camera;
@end

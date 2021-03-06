/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSData, GEOMapRegion, GEORoute;

@interface GEORouteBuilder : NSObject {

	char _usesZilch;
	NSMutableArray* _steps;
	NSMutableArray* _legs;
	NSData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEORoute* _route;

}
-(void)dealloc;
-(id)initWithRoute:(id)arg1 ;
-(id)_composedRouteLegForSteps:(id)arg1 route:(id)arg2 ;
-(void)_buildPointSectionsForRoute:(id)arg1 ;
-(id)_composedRouteStepForStep:(id)arg1 route:(id)arg2 ;
-(void)buildRoute:(id)arg1 ;
@end


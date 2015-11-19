/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject {

	NSMutableData* _trafficColors;
	NSMutableData* _trafficOffsets;
	unsigned _trafficDistance;

}
-(void)dealloc;
-(id)init;
-(void)addTrafficFromRoute:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)_removeDuplicateTraffic;
-(void)addTrafficFromETARoute:(id)arg1 ;
-(void)addTrafficFromRoute:(id)arg1 withStepRange:(NSRange)arg2 ;
-(void)copyTrafficToRoute:(id)arg1 ;
@end

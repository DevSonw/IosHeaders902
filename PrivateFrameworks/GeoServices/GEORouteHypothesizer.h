/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOPlannedDestination, GEORouteHypothesis, NSString;

@interface GEORouteHypothesizer : NSObject {

	GEOPlannedDestination* _plannedDestination;
	unsigned _state;
	GEORouteHypothesis* _currentHypothesis;
	/*^block*/id _updateHandler;
	NSString* _activityIdentifier;

}

@property (nonatomic,readonly) GEOPlannedDestination * plannedDestination;              //@synthesize plannedDestination=_plannedDestination - In the implementation block
@property (assign,nonatomic) unsigned state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEORouteHypothesis * currentHypothesis;                  //@synthesize currentHypothesis=_currentHypothesis - In the implementation block
@property (nonatomic,readonly) double willBeginHypothesizingInterval; 
@property (nonatomic,readonly) double willEndHypothesizingInterval; 
+(id)hypothesizerForPlannedDestination:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(GEORouteHypothesis *)currentHypothesis;
-(char)_wontHypothesizeAgain;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)didPostUINotification:(unsigned)arg1 ;
-(double)willBeginHypothesizingInterval;
-(void)delayStarting;
-(double)willEndHypothesizingInterval;
-(void)stopHypothesizing;
-(GEOPlannedDestination *)plannedDestination;
-(id)initWithPlannedDestination:(id)arg1 ;
@end

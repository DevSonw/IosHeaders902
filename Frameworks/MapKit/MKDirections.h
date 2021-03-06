/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKLocationManagerOperation, OS_dispatch_group;
@class MKDirectionsRequest, GEODirectionsRouteRequest, GEOQuickETARequest, GEOQuickETARequester, NSObject;

@interface MKDirections : NSObject {

	MKDirectionsRequest* _request;
	GEODirectionsRouteRequest* _geoRequest;
	GEOQuickETARequest* _etaRequest;
	GEOQuickETARequester* _etaRequester;
	id<MKLocationManagerOperation> _locationOperation;
	NSObject*<OS_dispatch_group> _waypointsDispatchGroup;

}

@property (getter=isCalculating,nonatomic,readonly) char calculating; 
-(void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(char)arg1 traits:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_calculateETAWithTraits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)calculateDirectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_establishCurrentLocationAndThen:(/*^block*/id)arg1 ;
-(void)calculateETAWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cleanupLocationOperation;
-(char)isCalculating;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)initWithRequest:(id)arg1 ;
@end


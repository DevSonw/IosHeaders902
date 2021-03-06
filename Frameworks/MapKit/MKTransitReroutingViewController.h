/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>

@protocol MKTransitReroutingViewDelegate, GEOTransitNamedItem;
@class GEORouteGenerator, GEOComposedWaypoint, NSTimeZone, NSDate, NSTimer, NSArray, NSString;

@interface MKTransitReroutingViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {

	id<MKTransitReroutingViewDelegate> _delegate;
	GEORouteGenerator* _routeGenerator;
	unsigned long long _muid;
	GEOComposedWaypoint* _origin;
	id<GEOTransitNamedItem> _stationHallStop;
	NSTimeZone* _timezone;
	NSDate* _countdownReferenceDate;
	NSTimer* _cellRefreshTimer;
	NSArray* _suggestedRoutes;

}

@property (assign,nonatomic,__weak) id<MKTransitReroutingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresPreferredContentSizeInStackingView; 
-(char)requiresPreferredContentSizeInStackingView;
-(void)loadAlternateRoutes;
-(void)_refresh;
-(id)initWithRouteGenerator:(id)arg1 withMapItem:(id)arg2 ;
-(id)_findTimezone;
-(void)setDelegate:(id<MKTransitReroutingViewDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<MKTransitReroutingViewDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end


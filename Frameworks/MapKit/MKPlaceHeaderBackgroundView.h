/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKPlaceHeaderViewCinematics.h>

@protocol MKPlaceHeaderBackgroundViewDelegate;
@class MKMapItem, NSString;

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics> {

	int _backgroundType;
	MKMapItem* _mapItem;
	id<MKPlaceHeaderBackgroundViewDelegate> _delegate;
	int _preparationState;

}

@property (assign,nonatomic,__weak) id<MKPlaceHeaderBackgroundViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int backgroundType;                                                   //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) int preparationState;                                                 //@synthesize preparationState=_preparationState - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)backgroundTypeForMapItem:(id)arg1 ;
+(Class)classForBackgroundType:(int)arg1 ;
+(id)backgroundViewForBackgroundType:(int)arg1 mapItem:(id)arg2 headerView:(id)arg3 ;
+(id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(int)preparationState;
-(void)setPreparationState:(int)arg1 ;
-(void)prepareForPresentation;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MKPlaceHeaderBackgroundViewDelegate>)arg1 ;
-(id<MKPlaceHeaderBackgroundViewDelegate>)delegate;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(int)backgroundType;
-(void)setBackgroundType:(int)arg1 ;
@end


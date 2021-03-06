/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKUserLocationView.h>

@class CALayer;

@interface _MKGemUserLocationView : MKUserLocationView {

	CALayer* _gemLayer;

}
-(void)_setMapType:(unsigned)arg1 ;
-(UIImage*)normalImage;
-(id)_pulseLayer;
-(UIImage*)staleImage;
-(id)_pulseAnimation;
-(void)_updateLayers;
-(id)_baseLayer;
-(void)_setupLayers;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end


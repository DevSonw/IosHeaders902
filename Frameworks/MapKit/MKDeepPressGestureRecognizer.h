/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface MKDeepPressGestureRecognizer : UIGestureRecognizer {

	UITouch* _touch;
	CGPoint _downLocation;
	float _allowableMovementBeforePressure;
	float _requiredForce;

}

@property (assign,nonatomic) float allowableMovementBeforePressure;              //@synthesize allowableMovementBeforePressure=_allowableMovementBeforePressure - In the implementation block
@property (assign,nonatomic) float requiredForce;                                //@synthesize requiredForce=_requiredForce - In the implementation block
@property (nonatomic,readonly) CGPoint downLocation; 
-(void)setAllowableMovementBeforePressure:(float)arg1 ;
-(float)allowableMovementBeforePressure;
-(void)setRequiredForce:(float)arg1 ;
-(float)requiredForce;
-(CGPoint)downLocation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(id)touch;
@end


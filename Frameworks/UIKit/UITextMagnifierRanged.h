/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextMagnifier.h>

@interface UITextMagnifierRanged : UITextMagnifier {

	float _touchOffsetFromMagnificationPoint;
	float _magnifierOffsetFromTouch;
	char _isHorizontal;
	char _isAnimating;
	int _delayedAnimationType;

}

@property (assign,nonatomic) char isHorizontal;              //@synthesize isHorizontal=_isHorizontal - In the implementation block
+(id)sharedRangedMagnifier;
-(void)stopMagnifying:(char)arg1 ;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(char)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)setIsHorizontal:(char)arg1 ;
-(char)terminalPointPlacedCarefully;
-(int)horizontalMovement;
-(void)setAutoscrollDirections:(int)arg1 ;
-(id)initWithFrame;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)remove;
-(void)zoomUpAnimation;
-(void)zoomDownAnimation;
-(char)isHorizontal;
-(float)offsetFromMagnificationPoint;
-(CGPoint)snappedPoint:(CGPoint)arg1 ;
-(void)updateFrame;
-(CGPoint)clipPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(CGRect)caretRectClosestToPoint:(CGPoint)arg1 ;
-(int)horizontalMovementAtTime:(double)arg1 ;
-(char)wasPlacedCarefullyAtTime:(double)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBackdropView.h>

@interface _SBSearchBackdropView : _UIBackdropView {

	float _transitionProgress;
	float _finalScale;
	float _scale;
	float _factor;

}

@property (assign) float scale;               //@synthesize scale=_scale - In the implementation block
@property (assign) float factor;              //@synthesize factor=_factor - In the implementation block
-(void)setScale:(float)arg1 ;
-(float)scale;
-(void)applySettings:(id)arg1 ;
-(void)transitionComplete;
-(void)transitionIncrementallyToPrivateStyle:(int)arg1 weighting:(float)arg2 ;
-(void)setFactor:(float)arg1 ;
-(float)factor;
@end

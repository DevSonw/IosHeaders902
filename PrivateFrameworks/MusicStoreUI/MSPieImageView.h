/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIBezierPath;

@interface MSPieImageView : UIView {

	UIImage* _backgroundImage;
	UIBezierPath* _clipPath;
	UIImage* _foregroundImage;
	float _pieFraction;
	float _pieRadius;

}

@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * foregroundImage;              //@synthesize foregroundImage=_foregroundImage - In the implementation block
@property (assign,nonatomic) float pieFraction;                      //@synthesize pieFraction=_pieFraction - In the implementation block
@property (assign,nonatomic) float pieRadius;                        //@synthesize pieRadius=_pieRadius - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setPieFraction:(float)arg1 ;
-(void)setForegroundImage:(UIImage *)arg1 ;
-(void)_reloadClipPath;
-(UIImage *)foregroundImage;
-(float)pieFraction;
-(float)pieRadius;
-(void)setPieRadius:(float)arg1 ;
@end


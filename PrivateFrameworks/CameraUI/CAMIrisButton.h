/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, NSArray;

@interface CAMIrisButton : UIButton {

	int _irisMode;
	UIImage* __baseImage;
	NSArray* __enablingAnimationImages;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) int irisMode;                                                                      //@synthesize irisMode=_irisMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                   //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIImage * _baseImage;                                                            //@synthesize _baseImage=__baseImage - In the implementation block
@property (setter=_setEnablingAnimationImages:,nonatomic,copy) NSArray * _enablingAnimationImages;              //@synthesize _enablingAnimationImages=__enablingAnimationImages - In the implementation block
+(id)irisButton;
+(double)enablingAnimationDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(UIImage *)_baseImage;
-(void)setIrisMode:(int)arg1 ;
-(int)irisMode;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)interruptEnablingAnimation;
-(void)preloadEnablingAnimation;
-(void)performEnablingAnimation;
-(void)_updateTintColorForMode:(int)arg1 ;
-(void)_commonCAMIrisButtonConfiguration;
-(char)_shouldLoadEnablingAnimationImages;
-(id)_actuallyLoadEnablingAnimationImagesForScale:(float)arg1 ;
-(void)_setEnablingAnimationImages:(id)arg1 ;
-(NSArray *)_enablingAnimationImages;
-(void)_ensureEnablingAnimationImages;
@end


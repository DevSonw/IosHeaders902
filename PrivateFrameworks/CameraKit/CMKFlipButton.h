/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIButton.h>

@interface CMKFlipButton : UIButton {

	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)flipButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)_commonCMKFlipButtonInitialization;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_flipImage;
-(UIEdgeInsets)tappableEdgeInsets;
@end


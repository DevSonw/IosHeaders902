/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBIconImageView, UILabel, UIView;

@interface SBSceneViewAppIconView : UIView {

	char _showsAppIconBorder;
	SBIconImageView* _imageView;
	UILabel* _label;
	UIView* _iconBorderView;

}

@property (assign,nonatomic) char showsAppIconBorder;                    //@synthesize showsAppIconBorder=_showsAppIconBorder - In the implementation block
@property (nonatomic,readonly) SBIconImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * iconBorderView;                    //@synthesize iconBorderView=_iconBorderView - In the implementation block
-(id)initWithIcon:(id)arg1 ;
-(UIView *)iconBorderView;
-(void)setIconBorderView:(UIView *)arg1 ;
-(void)setShowsAppIconBorder:(char)arg1 ;
-(char)showsAppIconBorder;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SBIconImageView *)imageView;
-(UILabel *)label;
@end


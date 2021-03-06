/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIButton, UIImage, UILabel;

@interface BFFPaneHeaderView : UIView {

	UIImageView* _iconView;
	UIButton* _linkButton;
	/*^block*/id _linkHandler;
	UIImage* _icon;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	float _flexibleHeight;

}

@property (nonatomic,retain) UIImage * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailTextLabel;              //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (assign,nonatomic) float flexibleHeight;                     //@synthesize flexibleHeight=_flexibleHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(void)_linkButtonPressed;
-(float)_detailLabelBaselineOffsetFromTop;
-(void)setLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(float)flexibleHeight;
-(void)setFlexibleHeight:(float)arg1 ;
@end


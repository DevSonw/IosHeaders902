/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIButton, UIView;

@interface SKUIStackedBarCell : UIButton {

	char _expanded;
	UILabel* _expandedLabel;
	UIButton* _backButton;
	UIView* _separator;

}

@property (assign,nonatomic) char expanded;                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UIButton * backButton;              //@synthesize backButton=_backButton - In the implementation block
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(UIButton *)backButton;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class PKPass, UIButton, UIView, PKPaymentPass;

@interface PKPassFooterContentView : UIView {

	char _isVisibleAsFooter;
	char _isPassAuthorized;
	int _style;
	PKPass* _pass;
	UIButton* _infoButton;
	UIView* _bottomRule;

}

@property (nonatomic,readonly) int style;                                //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) PKPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) UIButton * infoButton;                    //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIView * bottomRule;                      //@synthesize bottomRule=_bottomRule - In the implementation block
@property (nonatomic,readonly) char isVisibleAsFooter;                   //@synthesize isVisibleAsFooter=_isVisibleAsFooter - In the implementation block
@property (nonatomic,readonly) char isPassAuthorized;                    //@synthesize isPassAuthorized=_isPassAuthorized - In the implementation block
-(PKPaymentPass *)paymentPass;
-(char)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(char)arg1 ;
-(void)willBecomeHiddenAnimated:(char)arg1 ;
-(void)didBecomeVisibleAnimated:(char)arg1 ;
-(void)didBecomeHiddenAnimated:(char)arg1 ;
-(id)initWithStyle:(int)arg1 pass:(id)arg2 ;
-(UIView *)bottomRule;
-(void)_infoButtonPressed:(id)arg1 ;
-(char)isVisibleAsFooter;
-(void)dealloc;
-(void)layoutSubviews;
-(int)style;
-(UIButton *)infoButton;
-(PKPass *)pass;
@end

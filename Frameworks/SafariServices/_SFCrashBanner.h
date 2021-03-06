/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:39 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIImageView, UILabel, UIView, UIButton;

@interface _SFCrashBanner : UIView {

	_UIBackdropView* _backdrop;
	UIImageView* _closeButtonOverlayImageView;
	UILabel* _label;
	UIView* _separator;
	UIView* _separatorOverlay;
	CGSize _cachedLabelLayoutSize;
	char _usesLightControls;
	UIButton* _closeButton;

}

@property (nonatomic,readonly) char usesLightControls;              //@synthesize usesLightControls=_usesLightControls - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                //@synthesize closeButton=_closeButton - In the implementation block
-(void)_layoutCloseButton;
-(char)_shouldUseManuallyWrappedCrashMessageForWidth:(float)arg1 ;
-(CGSize)_labelLayoutSizeForWidth:(float)arg1 ;
-(id)initUsingLightControls:(char)arg1 ;
-(char)usesLightControls;
-(void)setCloseButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)closeButton;
@end


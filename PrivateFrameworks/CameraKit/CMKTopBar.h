/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CMKExpandableMenuButtonDelegate.h>

@protocol CMKTopBarDelegate;
@class CMKFlashButton, CMKElapsedTimeView, CMKHDRButton, CMKFlipButton, CMKTimerButton, UIView, NSMutableArray, CMKExpandableMenuButton;

@interface CMKTopBar : UIView <CMKExpandableMenuButtonDelegate> {

	char __flashButtonExpanded;
	char __HDRButtonExpanded;
	char __timerButtonExpanded;
	int _style;
	int _backgroundStyle;
	id<CMKTopBarDelegate> _delegate;
	CMKFlashButton* _flashButton;
	CMKElapsedTimeView* _elapsedTimeView;
	CMKHDRButton* _HDRButton;
	CMKFlipButton* _flipButton;
	CMKTimerButton* _timerButton;
	int _orientation;
	UIView* __backgroundView;
	NSMutableArray* __allowedControls;
	CMKExpandableMenuButton* __expandedMenuButton;
	UIView* __flipButtonTopLayoutSpacer;
	UIEdgeInsets __expandedMenuButtonTappableInsets;

}

@property (assign,nonatomic) int style;                                                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int backgroundStyle;                                                                                      //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) id<CMKTopBarDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CMKFlashButton * flashButton;                                                                             //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CMKElapsedTimeView * elapsedTimeView;                                                                     //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CMKHDRButton * HDRButton;                                                                                 //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CMKFlipButton * flipButton;                                                                               //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CMKTimerButton * timerButton;                                                                             //@synthesize timerButton=_timerButton - In the implementation block
@property (assign,nonatomic) int orientation;                                                                                          //@synthesize orientation=_orientation - In the implementation block
@property (getter=isFloating,nonatomic,readonly) char floating; 
@property (nonatomic,readonly) UIView * _backgroundView;                                                                               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _allowedControls;                                                                      //@synthesize _allowedControls=__allowedControls - In the implementation block
@property (assign,setter=_setFlashButtonExpanded:,getter=_isFlashButtonExpanded,nonatomic) char _flashButtonExpanded;                  //@synthesize _flashButtonExpanded=__flashButtonExpanded - In the implementation block
@property (assign,setter=_setHDRButtonExpanded:,getter=_isHDRButtonExpanded,nonatomic) char _HDRButtonExpanded;                        //@synthesize _HDRButtonExpanded=__HDRButtonExpanded - In the implementation block
@property (assign,setter=_setTimerButtonExpanded:,getter=_isTimerButtonExpanded,nonatomic) char _timerButtonExpanded;                  //@synthesize _timerButtonExpanded=__timerButtonExpanded - In the implementation block
@property (setter=_setExpandedMenuButton:,nonatomic,retain) CMKExpandableMenuButton * _expandedMenuButton;                             //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (assign,setter=_setExpandedMenuButtonTappableInsets:,nonatomic) UIEdgeInsets _expandedMenuButtonTappableInsets;              //@synthesize _expandedMenuButtonTappableInsets=__expandedMenuButtonTappableInsets - In the implementation block
@property (nonatomic,readonly) UIView * _flipButtonTopLayoutSpacer;                                                                    //@synthesize _flipButtonTopLayoutSpacer=__flipButtonTopLayoutSpacer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CMKTopBarDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CMKTopBarDelegate>)delegate;
-(UIView *)_backgroundView;
-(void)setOrientation:(int)arg1 ;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 ;
-(int)orientation;
-(int)style;
-(CGSize)intrinsicContentSize;
-(void)setStyle:(int)arg1 ;
-(void)setStyle:(int)arg1 animated:(char)arg2 ;
-(void)setBackgroundStyle:(int)arg1 animated:(char)arg2 ;
-(void)_updateBackgroundStyleAnimated:(char)arg1 ;
-(void)_updateHiddenViewsForButtonExpansionAnimated:(char)arg1 ;
-(char)_shouldHideElapsedTimeView;
-(char)_shouldHideHDRButton;
-(char)_shouldHideFlipButton;
-(char)_shouldHideTimerButton;
-(char)_isTimerButtonExpanded;
-(char)_isHDRButtonExpanded;
-(void)_setTimerButtonExpanded:(char)arg1 ;
-(void)_setHDRButtonExpanded:(char)arg1 ;
-(void)_commonCMKTopBarInitialization;
-(void)_updateStyleAnimated:(char)arg1 ;
-(char)_shouldHideFlashButton;
-(char)_isFlashButtonExpanded;
-(char)_buttonsExpandHorizontally;
-(UIView *)_flipButtonTopLayoutSpacer;
-(void)_setupDefaultBackgroundConstraints;
-(void)_setupDefaultFlipButtonConstraints;
-(void)_setupDefaultElapsedTimeViewConstraints;
-(void)_setupFloatingBackgroundConstraints;
-(void)_setupFloatingFlipButtonConstraints;
-(void)_setupFloatingRecordingBackgroundConstraints;
-(void)_setupFloatingRecordingElapsedTimeViewConstraints;
-(void)_setFlashButtonExpanded:(char)arg1 ;
-(void)_setupConstraintsForDefaultStyle;
-(void)_setupConstraintsForFloatingStyle;
-(void)_setupConstraintsForFloatingRecordingStyle;
-(CMKElapsedTimeView *)elapsedTimeView;
-(CMKFlipButton *)flipButton;
-(CMKExpandableMenuButton *)_expandedMenuButton;
-(CGRect)expandedFrameForMenuButton:(id)arg1 ;
-(CMKHDRButton *)HDRButton;
-(CMKTimerButton *)timerButton;
-(CGRect)collapsedFrameForMenuButton:(id)arg1 ;
-(void)_setExpandedMenuButton:(id)arg1 ;
-(void)collapseMenuButton:(id)arg1 animated:(char)arg2 ;
-(void)expandMenuButton:(id)arg1 animated:(char)arg2 ;
-(void)setFlipButton:(CMKFlipButton *)arg1 ;
-(void)setFlashButton:(CMKFlashButton *)arg1 ;
-(void)setElapsedTimeView:(CMKElapsedTimeView *)arg1 ;
-(void)setHDRButton:(CMKHDRButton *)arg1 ;
-(void)setTimerButton:(CMKTimerButton *)arg1 ;
-(CMKFlashButton *)flashButton;
-(void)configureForMode:(int)arg1 ;
-(NSMutableArray *)_allowedControls;
-(void)_layoutControls:(id)arg1 apply:(char)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(id)_allowedControlsForStillImageMode;
-(id)_allowedControlsForVideoMode;
-(id)_allowedControlsForPanoramaMode;
-(id)_allowedControlsForTimelapseMode;
-(UIEdgeInsets)_expandedMenuButtonTappableInsets;
-(void)_setExpandedMenuButtonTappableInsets:(UIEdgeInsets)arg1 ;
-(char)isFloating;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBSceneDimmingView, SBChevronView, SBLayoutElementPinResizeGrabberView;

@interface SBLayoutElementAdornmentView : UIView {

	SBSceneDimmingView* _dimmingView;
	int _dimmingLevel;
	int _sideSwitcherGrabberStyle;
	SBChevronView* _sideSwitcherGrabberView;
	SBLayoutElementPinResizeGrabberView* _pinResizeGrabberView;
	float _pinResizeGrabberHorizontalOffset;
	float _pinResizeGrabberVerticalOffset;
	char _sideSwitcherGrabberPressed;

}

@property (assign,nonatomic) int dimmingLevel;                                                                 //@synthesize dimmingLevel=_dimmingLevel - In the implementation block
@property (assign,nonatomic) int sideSwitcherGrabberStyle;                                                     //@synthesize sideSwitcherGrabberStyle=_sideSwitcherGrabberStyle - In the implementation block
@property (assign,getter=isSideSwitcherGrabberPressed,nonatomic) char sideSwitcherGrabberPressed;              //@synthesize sideSwitcherGrabberPressed=_sideSwitcherGrabberPressed - In the implementation block
@property (assign,nonatomic) char wantsPinResizeGrabber; 
@property (nonatomic,readonly) CGRect pinResizeGrabberFrame; 
@property (assign,nonatomic) float pinResizeGrabberHorizontalOffset;                                           //@synthesize pinResizeGrabberHorizontalOffset=_pinResizeGrabberHorizontalOffset - In the implementation block
@property (assign,nonatomic) float pinResizeGrabberVerticalOffset;                                             //@synthesize pinResizeGrabberVerticalOffset=_pinResizeGrabberVerticalOffset - In the implementation block
@property (nonatomic,retain,readonly) SBSceneDimmingView * dimmingView;                                        //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementPinResizeGrabberView * pinResizeGrabberView;              //@synthesize pinResizeGrabberView=_pinResizeGrabberView - In the implementation block
+(id)sideSwitcherGrabberView;
-(void)setWantsPinResizeGrabber:(char)arg1 withPercent:(float)arg2 ;
-(void)setWantsPinResizeGrabber:(char)arg1 ;
-(int)dimmingLevel;
-(void)setDimmingLevel:(int)arg1 ;
-(void)setDimmingLevel:(int)arg1 withPercent:(float)arg2 ;
-(int)sideSwitcherGrabberStyle;
-(void)setSideSwitcherGrabberStyle:(int)arg1 ;
-(char)isSideSwitcherGrabberPressed;
-(void)setSideSwitcherGrabberPressed:(char)arg1 ;
-(char)wantsPinResizeGrabber;
-(void)setPinResizeGrabberHorizontalOffset:(float)arg1 ;
-(CGRect)pinResizeGrabberFrame;
-(void)setPinResizeGrabberVerticalOffset:(float)arg1 ;
-(SBLayoutElementPinResizeGrabberView *)pinResizeGrabberView;
-(float)pinResizeGrabberHorizontalOffset;
-(void)_updateGrabberColorAndVisibility;
-(float)pinResizeGrabberVerticalOffset;
-(CGRect)_pinResizeGrabberHitTestFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(SBSceneDimmingView *)dimmingView;
@end

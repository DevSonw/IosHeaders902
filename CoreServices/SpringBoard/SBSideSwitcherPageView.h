/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppSwitcherPageView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SBIconViewMap, SBIconView, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface SBSideSwitcherPageView : SBAppSwitcherPageView <UIGestureRecognizerDelegate> {

	char _shouldShowAppIconAsOverlay;
	char _isShowingAppIconAsOverlay;
	char _isActivating;
	SBIconViewMap* _iconViewMap;
	SBIconView* _iconViewSetAsOverlay;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UILongPressGestureRecognizer* _pressDownGestureRecognizer;

}

@property (assign,nonatomic) id<SBSideSwitcherPageViewDelegate> delegate; 
@property (assign,nonatomic) char shouldShowAppIconAsOverlay;                          //@synthesize shouldShowAppIconAsOverlay=_shouldShowAppIconAsOverlay - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGAffineTransform)_overlayTransform;
-(void)prepareToBecomeVisibleIfNecessary;
-(void)respondToBecomingInvisibleIfNecessary;
-(void)_handlePressDownGesture:(id)arg1 ;
-(void)_configureAppIconAsOverlayIfNecessary;
-(void)_removeAppIconAsOverlayIfNecessary;
-(void)_squishAfterDelay:(double)arg1 ;
-(void)_unsquishAfterDelay:(double)arg1 ;
-(char)shouldShowAppIconAsOverlay;
-(void)setShouldShowAppIconAsOverlay:(char)arg1 ;
-(void)_handleLongPressGesture:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBSideSwitcherPageViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<SBSideSwitcherPageViewDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)invalidate;
-(void)_handleTapGesture:(id)arg1 ;
@end


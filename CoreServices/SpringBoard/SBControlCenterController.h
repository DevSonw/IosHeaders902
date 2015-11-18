/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBControlCenterViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate.h>
#import <SpringBoard/SBCoordinatedPresenting.h>

@class SBWindow, SBControlCenterRootView, SBControlCenterViewController, UIImageView, UIView, _UIBackdropView, SBChevronView, SBScreenEdgePanGestureRecognizer, FBUIApplicationSceneDeactivationAssertion, FBDisplayLayoutElement, NSMutableSet, NSHashTable, _UIDynamicValueAnimation, UIDynamicAnimator, NSString, NSSet;

@interface SBControlCenterController : UIViewController <SBControlCenterViewControllerDelegate, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBCoordinatedPresenting> {

	SBWindow* _window;
	SBControlCenterRootView* _rootView;
	SBControlCenterViewController* _viewController;
	UIImageView* _coveredContentSnapshot;
	UIView* _fullScreenGrabberContainer;
	_UIBackdropView* _fullScreenGrabberBackdrop;
	SBChevronView* _fullScreenChevron;
	SBScreenEdgePanGestureRecognizer* _controlCenterGestureRecognizer;
	double _controlCenterGestureStartTime;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	FBDisplayLayoutElement* _displayLayoutElement;
	NSMutableSet* _preventDismissalOnLockReasons;
	char _uiLocked;
	NSHashTable* _observers;
	int _orientation;
	char _animatingInitialPresentation;
	char _gotFirstBackdropUpdate;
	char _completingTransitionOpen;
	_UIDynamicValueAnimation* _bounceAnimation;
	UIDynamicAnimator* _animator;
	unsigned _animatorStopCount;
	CGRect _animatorStopFrame;
	char _presented;
	char _inGrabberOnlyMode;
	char _transitioning;
	char _fullyRevealed;
	float _backgroundBrightness;
	float _ambiguousActivationMargin;

}

@property (assign,getter=isPresented,nonatomic) char presented;                                              //@synthesize presented=_presented - In the implementation block
@property (assign,nonatomic) char inGrabberOnlyMode;                                                         //@synthesize inGrabberOnlyMode=_inGrabberOnlyMode - In the implementation block
@property (assign,getter=isUILocked,nonatomic) char UILocked;                                                //@synthesize uiLocked=_uiLocked - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) char transitioning;                                      //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isFullyRevealed,nonatomic) char fullyRevealed;                                      //@synthesize fullyRevealed=_fullyRevealed - In the implementation block
@property (assign,nonatomic) float backgroundBrightness;                                                     //@synthesize backgroundBrightness=_backgroundBrightness - In the implementation block
@property (assign,getter=_ambiguousActivationMargin,nonatomic) float ambiguousActivationMargin;              //@synthesize ambiguousActivationMargin=_ambiguousActivationMargin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) float hintDisplacement; 
@property (nonatomic,readonly) unsigned hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
+(void)notifyControlCenterControl:(id)arg1 didActivate:(char)arg2 ;
+(double)transitionAnimationDuration;
+(id)_sharedInstanceCreatingIfNeeded:(char)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(char)isUILocked;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 presentationBegunHandler:(/*^block*/id)arg2 ;
-(char)isGrabberVisible;
-(void)setAmbiguousActivationMargin:(float)arg1 forApp:(id)arg2 ;
-(char)isAvailableWhileLocked;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)presentAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissOnLock;
-(char)isPresentingControllerTransitioning;
-(void)abortAnimatedTransition;
-(int)coordinatedPresentingControllerIdentifier;
-(float)hintDisplacement;
-(unsigned)hintEdge;
-(void)dismissAnimated:(char)arg1 withAdditionalAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_lockStateChangedNotification:(id)arg1 ;
-(void)_uiRelockedNotification:(id)arg1 ;
-(void)setUILocked:(char)arg1 ;
-(void)_handleShowControlCenterGesture:(id)arg1 ;
-(void)_enumerateObservers:(/*^block*/id)arg1 ;
-(void)_updateCoveredContentSnapshot;
-(void)_clearCoveredContentSnapshot;
-(char)inGrabberOnlyMode;
-(float)_ambiguousActivationMargin;
-(float)_yValueForOpen;
-(float)_yValueForClosed;
-(void)_updateRevealPercentage:(float)arg1 ;
-(void)_updateGrabberVisibility;
-(void)hideGrabberAnimated:(char)arg1 ;
-(void)_showControlCenterGestureBeganWithGestureRecognizer:(id)arg1 ;
-(void)_showControlCenterGestureChangedWithGestureRecognizer:(id)arg1 ;
-(void)_showControlCenterGestureEndedWithGestureRecognizer:(id)arg1 ;
-(void)_showControlCenterGestureCancelled;
-(void)_showControlCenterGestureFailed;
-(char)_shouldShowGrabberOnFirstSwipe;
-(void)showGrabberAnimated:(char)arg1 ;
-(char)_shouldUseControlCenterRevealConfirmation;
-(void)_beginSystemGesturePresentationWithGestureRecognizer:(id)arg1 ;
-(void)_setupViewForPresentation;
-(void)_updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_hideGrabberForSystemGesture;
-(void)_endPresentation;
-(void)_beginTransitionWithTouchLocation:(CGPoint)arg1 ;
-(char)_allowShowTransitionSystemGesture;
-(id)_controlCenterWindow;
-(void)setPresented:(char)arg1 ;
-(void)_revealSlidingViewToHeight:(float)arg1 ;
-(void)_cleanupAnimator;
-(void)setInGrabberOnlyMode:(char)arg1 ;
-(void)_beginPresentation;
-(void)_doSetupBeforeBeginTransition;
-(float)_controlCenterHeightForTouchLocation:(CGPoint)arg1 ;
-(void)_setLockHUDHidden:(char)arg1 ;
-(void)_finishPresenting:(char)arg1 completion:(/*^block*/id)arg2 ;
-(float)_verticalPercentageMovedOnScreenForY:(float)arg1 stopY:(float)arg2 ;
-(id)_newDynamicAnimationForShow:(char)arg1 currentValue:(double)arg2 velocity:(double)arg3 unitSize:(double)arg4 ;
-(char)isFullyRevealed;
-(void)_dismissWithDuration:(double)arg1 additionalAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFullyRevealed:(char)arg1 ;
-(void)_resetControlAlpha;
-(void)hideGrabberAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateShouldShowGrabberOnFirstSwipe;
-(char)allowShowTransitionSystemGesture;
-(void)_endTransitionWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackgroundBrightness:(float)arg1 ;
-(void)_updateControlAlphaForBrightness:(float)arg1 ;
-(void)controlCenterViewControllerWantsDismissal:(id)arg1 ;
-(char)controlCenterViewController:(id)arg1 canHandleGestureRecognizer:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 handleTap:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 handlePan:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 backdropViewDidUpdate:(id)arg2 ;
-(void)preventDismissalOnLock:(char)arg1 forReason:(id)arg2 ;
-(char)allowHideTransition;
-(void)beginTransitionWithTouchLocation:(CGPoint)arg1 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(float)backgroundBrightness;
-(void)setAmbiguousActivationMargin:(float)arg1 ;
-(void)setTransitioning:(char)arg1 ;
-(void)presentAnimated:(char)arg1 ;
-(void)_cancelTransition;
-(void)dealloc;
-(id)init;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(char)shouldAutorotate;
-(void)loadView;
-(void)removeObserver:(id)arg1 ;
-(char)wantsFullScreenLayout;
-(char)isTransitioning;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(char)isVisible;
-(void)dismissAnimated:(char)arg1 ;
-(char)isPresented;
-(void)_presentWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(char)allowShowTransition;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)handleMenuButtonTap;
@end

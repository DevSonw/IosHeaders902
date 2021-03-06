/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHostDelegate.h>
#import <SpringBoard/SBBannerButtonViewControllerDelegate.h>
#import <SpringBoard/NCNotificationActionTextInputDelegate.h>
#import <SpringBoard/NCBannerAccessoryHostViewControllerDelegate.h>
#import <SpringBoard/SBMotionGestureObserver.h>
#import <SpringBoard/SBBulletinWindowClient.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol NCInteractiveNotificationHost, OS_dispatch_group, SBBannerContextViewControllerDelegate;
@class UIViewController, NCBannerAccessoryHostViewController, NCContentHostViewController, SBBannerButtonViewController, SBUIBannerContext, SBBannerContainerView, SBBannerContextView, FBUIApplicationSceneDeactivationAssertion, UIView, NSObject, UIImage, NSString;

@interface SBBannerContainerViewController : UIViewController <NCInteractiveNotificationHostDelegate, SBBannerButtonViewControllerDelegate, NCNotificationActionTextInputDelegate, NCBannerAccessoryHostViewControllerDelegate, SBMotionGestureObserver, SBBulletinWindowClient, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	UIViewController*<NCInteractiveNotificationHost> _interactiveViewController;
	NCBannerAccessoryHostViewController* _accessoryViewController;
	NCContentHostViewController* _secondaryContentViewController;
	NCContentHostViewController* _inlayContentViewController;
	SBBannerButtonViewController* _buttonViewController;
	char _notifiedAppeared;
	char _manualDismissalEnabled;
	SBUIBannerContext* _bannerContext;
	SBBannerContainerView* _containerView;
	SBBannerContextView* _bannerContextView;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	UIView* _backgroundView;
	CGRect _keyboardFrame;
	float _maximumBannerHeight;
	NSObject*<OS_dispatch_group> _remoteLoadingGroup;
	char _pulledDown;
	id<SBBannerContextViewControllerDelegate> _delegate;
	UIImage* _backgroundImage;

}

@property (assign,nonatomic) id<SBBannerContextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain,readonly) SBBannerContextView * bannerContextView;                //@synthesize bannerContextView=_bannerContextView - In the implementation block
@property (nonatomic,retain,readonly) UIView * backgroundView;                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) char canPullDown; 
@property (getter=isPulledDown,nonatomic,readonly) char pulledDown;                           //@synthesize pulledDown=_pulledDown - In the implementation block
@property (nonatomic,readonly) char showsKeyboard; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonViewController:(id)arg1 didSelectButtonAtIndex:(unsigned)arg2 ;
-(SBBannerContextView *)bannerContextView;
-(char)requiresKeyWindow;
-(char)isPulledDown;
-(void)setBannerContext:(id)arg1 withReplaceReason:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)transitionToActionWithIdentifier:(id)arg1 ;
-(void)setBannerPullPercentage:(float)arg1 ;
-(id)_bannerItem;
-(void)setBannerPullDisplacement:(float)arg1 ;
-(id)_bulletin;
-(void)_keyboardWillChange:(id)arg1 ;
-(void)_removeInteractiveViewController;
-(void)_removeButtonViewController;
-(void)_removeAccessoryViewController;
-(void)_removeSecondaryContentViewController;
-(void)_removeInlayContentViewController;
-(id)_bannerViewCreatingIfNecessary;
-(void)_updateMaximumHeights;
-(void)_loadRemoteViewControllersWithCompletion:(/*^block*/id)arg1 ;
-(void)_setInlayContentViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_setPullDownViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_setAccessoryViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_setSecondaryContentViewWithCompletion:(/*^block*/id)arg1 ;
-(char)canPullDown;
-(void)_noteDidPullDown;
-(float)_bannerContentHeight;
-(float)_preferredPullDownViewHeight;
-(char)_hasActions;
-(void)_updateMotionGestureObservation;
-(void)_handleBannerTapGesture:(id)arg1 ;
-(id)_newBackgroundViewWithFrame:(CGRect)arg1 ;
-(void)_handleBannerContainerTapGesture:(id)arg1 ;
-(CGRect)_bannerFrameForOrientation:(int)arg1 ;
-(void)_updateMaximumHeightsWithOrientation:(int)arg1 ;
-(void)_handleBannerTapGesture:(id)arg1 withActionContext:(id)arg2 ;
-(void)_setInteractiveViewController:(id)arg1 ;
-(id)_newButtonViewController;
-(void)_setButtonViewController:(id)arg1 ;
-(float)_miniumBannerContentHeight;
-(void)_updateMaximumContainerHeightForOrientation:(int)arg1 ;
-(void)_updateMaximumPullDownViewHeight;
-(void)_updateMaximumBannerHeight;
-(float)preferredMaximumHeight;
-(float)_pullDownViewHeight;
-(float)_maximumPullDownViewHeight;
-(float)_pullDownBottomOverhangHeight;
-(void)_addChildViewController:(id)arg1 withTransition:(/*^block*/id)arg2 ;
-(void)_removeChildViewController:(id)arg1 withTransition:(/*^block*/id)arg2 ;
-(void)_setSecondaryContentViewController:(id)arg1 ;
-(void)_setInlayContentViewController:(id)arg1 ;
-(void)_setInteractiveViewController:(id)arg1 animated:(char)arg2 ;
-(void)_addChildPullDownViewController:(id)arg1 ;
-(void)_removeChildPullDownViewController:(id)arg1 ;
-(void)transitionToAction:(id)arg1 ;
-(CGRect)_bannerFrame;
-(void)didReceiveRaiseGesture;
-(float)_percentDismissed;
-(void)setDelegate:(id<SBBannerContextViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBBannerContextViewControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)invalidate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(UIImage *)backgroundImage;
-(UIView *)backgroundView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(char)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(char)showsKeyboard;
-(void)_setAccessoryViewController:(id)arg1 ;
-(void)hostViewControllerDidChangePreferredContentSize:(id)arg1 ;
-(void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2 ;
-(void)hostViewController:(id)arg1 serviceRequestedDismissalEnabled:(char)arg2 ;
-(void)hostViewControllerDidRequestDismissal:(id)arg1 ;
-(void)hostViewControllerDidRequestSticky:(id)arg1 ;
-(void)hostViewController:(id)arg1 didRequestSticky:(char)arg2 ;
-(void)willPresentFromActionIdentifier:(id)arg1 ;
-(void)textInputViewController:(id)arg1 didSendTypedText:(id)arg2 ;
@end


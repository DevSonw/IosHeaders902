/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAlertAdapter.h>
#import <SpringBoard/_SBRemoteAlertHostViewControllerDelegate.h>

@protocol SBRemoteAlertAdapterDelegate;
@class _SBRemoteAlertHostViewController, NSString, NSMutableSet;

@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate> {

	_SBRemoteAlertHostViewController* _remoteAlertHostViewController;
	id<SBRemoteAlertAdapterDelegate> _remoteAlertAdapterDelegate;
	NSString* _impersonatedApplicationBundleID;
	char _dismissWithHomeButton;
	char _userRequestedHomeButtonDismissal;
	int _desiredButtonEvents;
	char _wantsWallpaperTunnel;
	char _hasTranslucentBackground;
	int _requestedBackgroundStyle;
	char _allowsAlertStacking;
	int _dismissalAnimationStyle;
	char _disableFadeInAnimation;
	NSMutableSet* _idleTimerDisabledReasons;
	double _requestedAutoLockTime;
	char _hasCustomStatusBarStyle;
	int _customStatusBarStyle;
	int _desiredStatusBarStyleOverrides;
	char _wantsToShowStatusBar;
	char _wantsToManageStatusBarAtActivation;
	char _canManageStatusBarVisibility;
	char _suppressesSiri;
	char _dismissOnUILock;
	int _desiredLaunchingInterfaceOrientation;
	char _dontCancelStatusBarStyleOverrides;
	/*^block*/id _lockUIAndDismissActions;
	/*^block*/id _clientActivationHandler;
	/*^block*/id _clientDeactivationHandler;
	char _beingPresentedObscured;

}

@property (nonatomic,readonly) int dismissalAnimationStyle;                                                                                                                       //@synthesize dismissalAnimationStyle=_dismissalAnimationStyle - In the implementation block
@property (nonatomic,readonly) char userRequestedHomeButtonDismissal;                                                                                                             //@synthesize userRequestedHomeButtonDismissal=_userRequestedHomeButtonDismissal - In the implementation block
@property (nonatomic,readonly) char wantsWallpaperTunnel;                                                                                                                         //@synthesize wantsWallpaperTunnel=_wantsWallpaperTunnel - In the implementation block
@property (assign,nonatomic) int requestedBackgroundStyle;                                                                                                                        //@synthesize requestedBackgroundStyle=_requestedBackgroundStyle - In the implementation block
@property (nonatomic,readonly) char dismissOnUILock;                                                                                                                              //@synthesize dismissOnUILock=_dismissOnUILock - In the implementation block
@property (nonatomic,readonly) char disablesFadeInAnimation;                                                                                                                      //@synthesize disableFadeInAnimation=_disableFadeInAnimation - In the implementation block
@property (nonatomic,readonly) NSString * serviceBundleIdentifier; 
@property (assign,getter=isBeingPresentedObscured,nonatomic) char beingPresentedObscured;                                                                                         //@synthesize beingPresentedObscured=_beingPresentedObscured - In the implementation block
@property (assign,setter=_setRemoteAlertAdapterDelegate:,getter=_remoteAlertAdapterDelegate,nonatomic) id<SBRemoteAlertAdapterDelegate> _remoteAlertAdapterDelegate;              //@synthesize remoteAlertAdapterDelegate=_remoteAlertAdapterDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestRemoteViewService:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)requestWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_requestWithServiceName:(id)arg1 serviceClass:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(int)dismissalAnimationStyle;
-(char)matchesInCallUIService;
-(void)setLockUIAndDismissActions:(/*^block*/id)arg1 ;
-(id)_impersonatesApplicationWithBundleID;
-(void)setActivationHandler:(/*^block*/id)arg1 deactivationHandler:(/*^block*/id)arg2 ;
-(void)setBeingPresentedObscured:(char)arg1 ;
-(char)matchesRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(char)matchesAnyInCallService;
-(char)userRequestedHomeButtonDismissal;
-(double)autoLockTime;
-(char)_shouldDismissSwitcherOnActivation;
-(int)statusBarStyleOverridesToCancel;
-(char)managesOwnStatusBarAtActivation;
-(char)showsSpringBoardStatusBar;
-(id)_displayLayoutElementIdentifier;
-(char)suppressesNotificationCenter;
-(char)suppressesControlCenter;
-(char)allowsStackingOfAlert:(id)arg1 ;
-(char)suppressesSiri;
-(int)requestedBackgroundStyle;
-(char)isBeingPresentedObscured;
-(void)setWantsToManageStatusBarAtActivation:(char)arg1 ;
-(void)setCanManageStatusBarVisibility:(char)arg1 ;
-(char)disablesFadeInAnimation;
-(char)wantsWallpaperTunnel;
-(char)dismissOnUILock;
-(void)_setRemoteAlertAdapterDelegate:(id)arg1 ;
-(void)_terminate;
-(void)noteShouldStopDisablingStatusBarOverrides;
-(void)remoteAlertWantsToAllowBanners:(char)arg1 ;
-(void)remoteAlertDidRequestDismissal;
-(void)remoteAlertWantsToLockUIAndDismiss;
-(void)remoteAlertWantsToUpdateAllowedHardwareButtonEvents:(int)arg1 ;
-(void)remoteAlertWantsWallpaperTunnelActive:(char)arg1 ;
-(void)remoteAlertWantsToSetBackgroundStyle:(int)arg1 withDuration:(double)arg2 ;
-(void)remoteAlertWantsMenuButtonDismissal:(char)arg1 ;
-(void)remoteAlertWantsToAllowAlertStacking:(char)arg1 ;
-(void)remoteAlertWantstoSetDismissalAnimationStyle:(int)arg1 ;
-(void)remoteAlertWantsToSetDesiredStatusBarStyleOverrides:(int)arg1 ;
-(void)remoteAlertWantsToSetIdleTimerDisabled:(char)arg1 forReason:(id)arg2 ;
-(void)remoteAlertWantsToSetAutoLockDuration:(double)arg1 ;
-(void)remoteAlertWantsToSetStatusBarHidden:(char)arg1 withDuration:(double)arg2 ;
-(void)remoteAlertWantsToDismissOnUILock:(char)arg1 ;
-(void)remoteAlertWantsToDisableFadeInAnimation:(char)arg1 ;
-(void)remoteAlertDidTerminateWithError:(id)arg1 ;
-(id)_initWithRemoteAlertHostViewController:(id)arg1 ;
-(void)_cleanupIdleTimerDisabledReasons;
-(void)_setImpersonatedApplicationBundleID:(id)arg1 ;
-(void)_setDismissWithHomeButton:(char)arg1 ;
-(void)_setWantsWallpaperTunnel:(char)arg1 immediately:(char)arg2 ;
-(void)_setDismissalAnimationStyle:(int)arg1 ;
-(void)_setLaunchingInterfaceOrientation:(int)arg1 ;
-(void)setRequestedBackgroundStyle:(int)arg1 ;
-(void)_setHasTranslucentBackground:(char)arg1 ;
-(void)_setSuppressesSiri:(char)arg1 ;
-(void)_setCustomStatusBarStyle:(int)arg1 ;
-(void)_setShouldDisableFadeInAnimation:(char)arg1 ;
-(void)_didTerminateWithError:(id)arg1 ;
-(id<SBRemoteAlertAdapterDelegate>)_remoteAlertAdapterDelegate;
-(char)handleLockButtonPressed;
-(void)dealloc;
-(int)statusBarStyle;
-(void)deactivate;
-(int)preferredInterfaceOrientationForPresentation;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)activate;
-(id)initWithViewController:(id)arg1 ;
-(void)synchronizeAnimationsInActions:(/*^block*/id)arg1 ;
-(NSString *)serviceBundleIdentifier;
-(char)isRemote;
-(char)handleMenuButtonTap;
-(char)hasTranslucentBackground;
-(char)handleVolumeUpButtonPressed;
-(char)handleVolumeDownButtonPressed;
-(char)handleHeadsetButtonPressed:(char)arg1 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1 ;
-(void)noteActivatedForCustomReason:(id)arg1 ;
@end

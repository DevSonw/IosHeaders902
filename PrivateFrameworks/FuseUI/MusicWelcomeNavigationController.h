/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicNavigationController.h>
#import <libobjc.A.dylib/MusicJSWelcomeNativeViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@protocol MusicWelcomeNavigationControllerDisappearanceObserver;
@class NSMutableArray, MusicWelcomePlaceholderView, MusicClientContext, NSString, SKUIClientContext;

@interface MusicWelcomeNavigationController : MusicNavigationController <MusicJSWelcomeNativeViewControllerDelegate, MusicJSNativeViewControllerFactory, MusicClientContextConsuming> {

	NSMutableArray* _queuedNativeViewEventTypes;
	char _registeredWithModalNavigationStackRegistry;
	MusicWelcomePlaceholderView* _welcomePlaceholderView;
	MusicClientContext* _clientContext;
	id<MusicWelcomeNavigationControllerDisappearanceObserver> _disappearanceObserver;

}

@property (assign,nonatomic,__weak) id<MusicWelcomeNavigationControllerDisappearanceObserver> disappearanceObserver;              //@synthesize disappearanceObserver=_disappearanceObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(char)automaticallyInstallAccountBarButtonItem;
+(char)automaticallyInstallSearchBarButtonItem;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)jsDidCloseWelcomeNativeViewController:(id)arg1 withOptions:(id)arg2 ;
-(void)jsWelcomeNativeViewController:(id)arg1 setWelcomeDocument:(id)arg2 options:(id)arg3 ;
-(void)_setRegisteredWithModalNavigationStackRegistry:(char)arg1 ;
-(void)_handleClientDidLoadNotification:(id)arg1 ;
-(void)_dispatchNativeViewEventOfType:(int)arg1 ;
-(id<MusicWelcomeNavigationControllerDisappearanceObserver>)disappearanceObserver;
-(void)setDisappearanceObserver:(id<MusicWelcomeNavigationControllerDisappearanceObserver>)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

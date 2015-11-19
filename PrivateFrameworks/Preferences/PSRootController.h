/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/PSController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class PSSpecifier, NSMutableSet, PSStackPushAnimationController, NSString;

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {

	PSSpecifier* _specifier;
	NSMutableSet* _tasks;
	char _deallocating;
	PSStackPushAnimationController* _stackAnimationController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
+(id)readPreferenceValue:(id)arg1 ;
+(void)writePreference:(id)arg1 ;
+(char)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5 ;
-(void)setParentController:(id)arg1 ;
-(id)parentController;
-(char)canBeShownFromSuspendedState;
-(id)specifiers;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)popViewControllerAnimated:(char)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)suspend;
-(void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(void)_setNavigationBarHidden:(char)arg1 edge:(unsigned)arg2 duration:(double)arg3 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
-(void)addTask:(id)arg1 ;
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(id)rootController;
-(id)aggregateDictionaryPath;
-(void)setRootController:(id)arg1 ;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(char)arg2 ;
-(void)handleURL:(id)arg1 ;
-(void)pushControllersAsStack:(id)arg1 ;
-(void)pushController:(id)arg1 animate:(char)arg2 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(float)arg1 ;
-(void)pushController:(id)arg1 ;
-(void)sendWillBecomeActive;
-(void)sendWillResignActive;
-(void)statusBarWillChangeHeight:(id)arg1 ;
-(char)busy;
-(void)_delayedControllerReleaseAfterPop:(id)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 ;
-(id)tasksDescription;
-(char)taskIsRunning:(id)arg1 ;
-(void)taskFinished:(id)arg1 ;
-(id)contentViewForTopController;
-(char)deallocating;
-(void)willDismissPopupView;
-(void)didDismissPopupView;
-(void)willDismissFormSheetView;
-(void)didDismissFormSheetView;
@end

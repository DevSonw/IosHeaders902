/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutState.h>
#import <SpringBoard/SBMainDisplayLayoutContext.h>

@class SBMainDisplaySceneManager, SBLockStateAggregator, SpringBoard, SBSideAppState, SBBreadcrumbState, NSString;

@interface SBMainDisplayLayoutState : SBLayoutState <SBMainDisplayLayoutContext> {

	SBMainDisplaySceneManager* _sceneManager;
	SBLockStateAggregator* _lockStateAggregator;
	SpringBoard* _sbApp;
	SBSideAppState* _sideAppState;
	SBSideAppState* _externallyManagedSideAppState;
	SBBreadcrumbState* _breadcrumbState;

}

@property (nonatomic,retain,readonly) SBBreadcrumbState * breadcrumbState;                         //@synthesize breadcrumbState=_breadcrumbState - In the implementation block
@property (nonatomic,retain,readonly) SBSideAppState * sideAppState;                               //@synthesize sideAppState=_sideAppState - In the implementation block
@property (nonatomic,retain,readonly) SBSideAppState * externallyManagedSideAppState;              //@synthesize externallyManagedSideAppState=_externallyManagedSideAppState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int interfaceOrientation; 
@property (nonatomic,readonly) int sideAppPresentationStyle; 
@property (nonatomic,readonly) int sideAppWidth; 
@property (nonatomic,readonly) int externallyManagedSideAppPresentationStyle; 
@property (nonatomic,readonly) int externallyManagedSideAppWidth; 
+(int)_defaultOrientation;
-(SBSideAppState *)sideAppState;
-(int)wallpaperMode;
-(int)sideAppPresentationStyle;
-(char)isEqualToLayoutState:(id)arg1 ;
-(id)_layoutStateForTransitionContext:(id)arg1 ;
-(id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(int)arg5 ;
-(SBBreadcrumbState *)breadcrumbState;
-(id)_stateWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(int)arg5 ;
-(int)wallpaperModeForLayoutRole:(int)arg1 ;
-(char)includesStatusBarForLayoutRole:(int)arg1 ;
-(int)sideAppWidth;
-(int)externallyManagedSideAppPresentationStyle;
-(int)externallyManagedSideAppWidth;
-(id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(int)arg5 sceneManager:(id)arg6 applicationController:(id)arg7 lockStateAggregator:(id)arg8 sbApp:(id)arg9 ;
-(SBSideAppState *)externallyManagedSideAppState;
-(id)transitionContextForResizingSideAppToWidth:(int)arg1 ;
-(id)transitionContextForSuspendingPrimaryApp;
-(id)transitionContextForSuspendingSideApp;
-(id)transitionContextForSettingSideAppPinned:(char)arg1 ;
-(void)dealloc;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithElements:(id)arg1 ;
@end

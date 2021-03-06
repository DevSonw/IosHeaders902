/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlertManager, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeHomeToPluginAlert : SBUIMainScreenAnimationController {

	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _alert;
	char _alertIsTransparent;
	char _alertViewIsAnimatingItself;
	char _finishedPrimaryFadeAnimation;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end


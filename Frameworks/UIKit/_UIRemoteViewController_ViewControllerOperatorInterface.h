/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIRemoteViewController_ViewControllerOperatorInterface
@required
-(void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
-(void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(char)arg2;
-(void)__viewServiceDidPromoteFirstResponder;
-(void)__viewServiceDidRegisterScrollToTopView;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(void)__setSupportedInterfaceOrientations:(id)arg1;
-(void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
-(void)__showServiceForText:(id)arg1 type:(int)arg2 fromRectValue:(id)arg3 replyHandler:(/*^block*/id)arg4;
-(void)__dismissTextServiceSessionAnimated:(char)arg1;
-(void)__setViewServiceIsDisplayingPopover:(char)arg1;
-(void)__viewServicePopoverDidChangeContentSize:(CGSize)arg1 animated:(char)arg2 fence:(id)arg3 withReplyHandler:(/*^block*/id)arg4;
-(void)__viewServicePopoverDidSetUseToolbarShine:(char)arg1;
-(void)__viewServicePreferredContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
-(void)__viewServiceInstrinsicContentSizeDidChange:(CGSize)arg1 fence:(id)arg2;
-(void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 hidden:(char)arg2 updateAnimation:(int)arg3;
-(void)__setServiceMaxFrameSize:(CGSize)arg1;
-(void)__trampolineButtonPressData:(id)arg1 canceled:(char)arg2;

@end

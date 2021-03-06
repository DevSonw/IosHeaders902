/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView, UIViewController, UIInputViewSetPlacement;


@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource>
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) char isChangingPlacement; 
@property (nonatomic,readonly) float positionConstraintConstant; 
@property (nonatomic,retain,readonly) UIViewController * _inputViewController; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placement; 
@required
-(UIView *)view;
-(char)isChangingPlacement;
-(UIInputViewSetPlacement *)placement;
-(void)setInterfaceAutorotationDisabled:(char)arg1;
-(float)positionConstraintConstant;
-(id)constructNotificationInfoForScrollWithMode:(unsigned)arg1;
-(UIViewController *)_inputViewController;

@end


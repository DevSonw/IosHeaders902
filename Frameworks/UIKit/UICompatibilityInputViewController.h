/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIInputViewController.h>
#import <UIKit/_UIKBDelegateAwareInputController.h>

@class UIKeyboardInputMode, UIKeyboard, UIViewController, UIView, NSString;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {

	UIKeyboardInputMode* _inputMode;
	UIKeyboard* _deferredSystemView;
	UIKeyboardInputMode* _incomingExtensionInputMode;
	double _incomingExtensionInputModeTime;
	char _shouldRegenerateSizingConstraints;
	char _shouldSuppressRemoteInputController;
	UIViewController* _inputController;
	UIView* _inputControllerSnapshot;

}

@property (nonatomic,retain) UIViewController * inputController;              //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) UIView * inputControllerSnapshot;                //@synthesize inputControllerSnapshot=_inputControllerSnapshot - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inputViewControllerWithView:(id)arg1 ;
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
+(char)_requiresProxyInterface;
-(void)dealloc;
-(UIViewController *)inputController;
-(void)setInputController:(UIViewController *)arg1 ;
-(void)loadView;
-(id)preferredFocusedItem;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setInputMode:(id)arg1 ;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(id)_compatibilityController;
-(id)_keyboard;
-(void)didSuspend:(id)arg1 ;
-(void)willResume:(id)arg1 ;
-(void)switchToCurrentSystemInputMode;
-(void)rebuildChildConstraints;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(id)_initAsDeferredController;
-(void)tearDownInputController;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)removeSnapshotView;
-(id)_compatView;
-(UIView *)inputControllerSnapshot;
-(void)setInputControllerSnapshot:(UIView *)arg1 ;
-(void)snapshotCurrentDisplay;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
-(id)childCompatibilityController;
-(id)_keyboardForThisViewController;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(char)arg1 ;
-(void)didFinishTranslation;
@end


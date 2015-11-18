/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SBBannerButtonViewControllerDelegate;
@class NSArray;

@interface SBBannerButtonViewController : UIViewController {

	NSArray* _buttons;
	id<SBBannerButtonViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBBannerButtonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_buttonForActionTitle:(id)arg1 ;
-(id)_buttonView;
-(void)setDelegate:(id<SBBannerButtonViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBBannerButtonViewControllerDelegate>)delegate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)setButtonTitles:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
@end

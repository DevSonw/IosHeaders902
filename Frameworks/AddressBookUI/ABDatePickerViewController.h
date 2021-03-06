/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol ABDatePickerViewControllerDismissDelegate;
@class UIDatePicker;

@interface ABDatePickerViewController : UIViewController {

	void* _context;
	UIDatePicker* _datePicker;
	id<ABDatePickerViewControllerDismissDelegate> _dismissDelegate;

}

@property (assign,nonatomic) void* context;                                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIDatePicker * datePicker;                                                  //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic) id<ABDatePickerViewControllerDismissDelegate> dismissDelegate;              //@synthesize dismissDelegate=_dismissDelegate - In the implementation block
+(CGSize)datePickerSize;
-(float)ab_heightToFitForViewInPopoverView;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
-(void)dealloc;
-(void)loadView;
-(void*)context;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setContext:(void*)arg1 ;
-(id<ABDatePickerViewControllerDismissDelegate>)dismissDelegate;
-(void)setDismissDelegate:(id<ABDatePickerViewControllerDismissDelegate>)arg1 ;
@end


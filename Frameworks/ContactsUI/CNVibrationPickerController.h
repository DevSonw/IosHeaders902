/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:05 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class TKVibrationPickerViewController;

@interface CNVibrationPickerController : UINavigationController {

	TKVibrationPickerViewController* _vibrationPicker;

}

@property (assign,nonatomic,__weak) id<CNPickerControllerDelegate> delegate; 
@property (nonatomic,readonly) TKVibrationPickerViewController * vibrationPicker;              //@synthesize vibrationPicker=_vibrationPicker - In the implementation block
-(id)initWithAlertType:(int)arg1 selectedToneIdentifier:(id)arg2 selectedVibrationIdentifier:(id)arg3 ;
-(void)doneButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(TKVibrationPickerViewController *)vibrationPicker;
@end


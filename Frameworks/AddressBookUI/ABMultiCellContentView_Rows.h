/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSMutableArray, NSString;

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate> {

	NSMutableArray* _entryFields;
	NSMutableArray* _horizontalDividers;
	char _isAttemptingFirstResponder;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(char)arg6 ;
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(char)arg6 includeRows:(char)arg7 ;
+(CGRect)zerothHorizontalDividerFrameForValueViewRect:(CGRect)arg1 ;
+(unsigned)rowsForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1 ;
-(void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(char)arg1 ;
-(CGRect)rectForView:(id)arg1 ;
-(id)viewForFirstResponder;
-(CGRect)backgroundRectForView:(id)arg1 ;
-(id)hitTestForTouches:(id)arg1 withEvent:(id)arg2 ;
-(char)tabToNextResponder:(char)arg1 fromView:(id)arg2 ;
-(void)entryField:(id)arg1 didEndEditingForKey:(id)arg2 ;
-(id)keyboardSettingsForKey:(id)arg1 ;
-(void)reloadFromModelIncludingRows:(char)arg1 ;
-(void)reloadIncludingRows:(char)arg1 ;
-(id)entryFieldForRow:(unsigned)arg1 ;
-(void)dealloc;
-(void)reload;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
@end

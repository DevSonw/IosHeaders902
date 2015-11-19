/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>

@class HKMedicalIDEditorPickerCell, _HKMedicalIDMultilineStringCell, _HKCustomInsetCellLayoutManager;

@interface HKEmergencyCardBloodTypeTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {

	HKMedicalIDEditorPickerCell* _editableCell;
	_HKMedicalIDMultilineStringCell* _displayCell;
	_HKCustomInsetCellLayoutManager* _layoutManager;

}
-(id)title;
-(char)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2 ;
-(char)shouldHighlightRowAtIndex:(int)arg1 ;
-(char)canEditRowAtIndex:(int)arg1 ;
-(int)editingStyleForRowAtIndex:(int)arg1 ;
-(int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2 ;
-(void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)_createEditableCell;
-(id)_displayCell;
@end

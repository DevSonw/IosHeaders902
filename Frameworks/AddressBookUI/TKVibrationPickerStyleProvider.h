/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIFont, UIColor;


@protocol TKVibrationPickerStyleProvider <NSObject>
@property (nonatomic,readonly) char vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) int vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) char wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * vibrationPickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) int vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) char vibrationPickerHeaderTextShouldBeUppercase; 
@optional
-(char)vibrationPickerHeaderTextShouldBeUppercase;
-(UIColor *)vibrationPickerCustomTableSeparatorColor;
-(int)vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;

@required
-(char)vibrationPickerUsesOpaqueBackground;
-(int)vibrationPickerTableViewSeparatorStyle;
-(UIFont *)vibrationPickerCellTextFont;
-(UIColor *)vibrationPickerCellTextColor;
-(UIColor *)vibrationPickerCellHighlightedTextColor;
-(UIColor *)vibrationPickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(char)arg1;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(char)wantsCustomVibrationPickerHeaderView;
-(UIFont *)vibrationPickerHeaderTextFont;
-(UIColor *)vibrationPickerHeaderTextColor;
-(UIColor *)vibrationPickerHeaderTextShadowColor;
-(UIOffset)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;

@end

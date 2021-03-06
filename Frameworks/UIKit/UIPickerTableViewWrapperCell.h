/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPickerTableViewCell.h>

@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {

	UIView* _wrappedView;
	UIView* _wrappedViewContainer;
	CGSize _wrappedViewSize;

}

@property (nonatomic,retain) UIView * wrappedView; 
-(UIView *)wrappedView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWrappedView:(UIView *)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)_setIsCenterCell:(char)arg1 shouldModifyAlphaOfView:(char)arg2 ;
-(void)_updateWrappedViewFrame;
-(void)_updateWrappedView;
-(id)_anyDateLabel;
@end


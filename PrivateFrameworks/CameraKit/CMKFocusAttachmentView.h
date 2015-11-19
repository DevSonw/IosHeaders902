/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CMKFocusAttachmentView : UIView {

	UILabel* __label;
	UIEdgeInsets _textInsets;

}

@property (assign,nonatomic) UIEdgeInsets textInsets;              //@synthesize textInsets=_textInsets - In the implementation block
@property (nonatomic,retain) UILabel * _label;                     //@synthesize _label=__label - In the implementation block
-(UILabel *)_label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(void)set_label:(UILabel *)arg1 ;
-(UIEdgeInsets)textInsets;
@end

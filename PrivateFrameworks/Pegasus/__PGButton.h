/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKit/UIButton.h>

@class _UIBackdropView, UIImageView, UIImage;

@interface __PGButton : UIButton {

	_UIBackdropView* _backdropView;
	UIImageView* _highlightImageView;
	UIImage* _backgroundImage;
	UIImageView* _foregroundImageView;
	int _buttonStyle;

}

@property (nonatomic,readonly) int buttonStyle;              //@synthesize buttonStyle=_buttonStyle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)initWithButtonStyle:(int)arg1 ;
-(int)buttonStyle;
-(void)_updateHighlightImageView;
@end


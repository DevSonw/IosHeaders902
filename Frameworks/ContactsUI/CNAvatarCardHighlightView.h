/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface CNAvatarCardHighlightView : UIView {

	CALayer* _highlightLayer;

}

@property (nonatomic,retain) CALayer * highlightLayer;              //@synthesize highlightLayer=_highlightLayer - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor; 
@property (nonatomic,readonly) char highlighted; 
-(void)setHighlightLayer:(CALayer *)arg1 ;
-(CALayer *)highlightLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_commonInit;
-(void)awakeFromNib;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(char)highlighted;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <UIKit/UIButton.h>

@class NSString;

@interface ACUILinkButton : UIButton {

	NSString* _acui_titleString;

}

@property (retain) NSString * acui_titleString;              //@synthesize acui_titleString=_acui_titleString - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setAcui_titleString:(NSString *)arg1 ;
-(id)_normalStringAttributes;
-(id)_highlightedStringAttributes;
-(NSString *)acui_titleString;
-(id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end


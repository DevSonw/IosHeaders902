/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UITextView, NSString;

@interface CalendarNotesCell : EKUIConstrainedFontsTableViewCell {

	UITextView* _textView;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain,readonly) UITextView * textView; 
@property (nonatomic,retain) NSString * placeholder; 
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(UITextView *)textView;
@end

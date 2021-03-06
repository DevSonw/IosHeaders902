/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITextView.h>

@class NSString, UILabel, NSAttributedString;

@interface CKMessageEntryTextView : UITextView {

	char _showingDictationPlaceholder;
	NSString* _autocorrectionContext;
	NSString* _responseContext;
	UILabel* _placeholderLabel;

}

@property (nonatomic,copy) NSAttributedString * compositionText; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (getter=isSingleLine,nonatomic,readonly) char singleLine; 
@property (assign,getter=isShowingDictationPlaceholder,nonatomic) char showingDictationPlaceholder;              //@synthesize showingDictationPlaceholder=_showingDictationPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * autocorrectionContext;                                                     //@synthesize autocorrectionContext=_autocorrectionContext - In the implementation block
@property (nonatomic,copy) NSString * responseContext;                                                           //@synthesize responseContext=_responseContext - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                                         //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(char)arg2 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)autocorrectionContext;
-(NSString *)responseContext;
-(void)setResponseContext:(NSString *)arg1 ;
-(void)setAutocorrectionContext:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(char)isSingleLine;
-(NSAttributedString *)compositionText;
-(char)isShowingDictationPlaceholder;
-(void)setCompositionText:(NSAttributedString *)arg1 ;
-(void)updateTextView;
-(void)setShowingDictationPlaceholder:(char)arg1 ;
@end


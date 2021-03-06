/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SKUIComposeReviewHeaderDelegate.h>
#import <UIKit/UITextContentViewDelegate.h>

@protocol SKUIComposeReviewViewDelegate;
@class SKUIComposeReviewHeaderView, SULoadingView, SKUIReviewMetadata, UIScrollView, SUTextContentView, NSString;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate> {

	int _currentBodyLength;
	id<SKUIComposeReviewViewDelegate> _delegate;
	SKUIComposeReviewHeaderView* _headerView;
	CGRect _keyboardFrame;
	unsigned _loading : 1;
	SULoadingView* _loadingView;
	SKUIReviewMetadata* _review;
	UIScrollView* _scrollView;
	int _style;
	SUTextContentView* _textContentView;

}

@property (nonatomic,readonly) int composeReviewStyle;                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeReviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading; 
@property (assign,nonatomic) float rating; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIComposeReviewViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<SKUIComposeReviewViewDelegate>)delegate;
-(char)isValid;
-(void)_updateContentSize;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(char)isLoading;
-(char)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(char)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(char)textContentView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)setReview:(id)arg1 ;
-(void)setLoading:(char)arg1 ;
-(id)_body;
-(id)copyReview;
-(void)composeHeaderViewValidityDidChange:(id)arg1 ;
-(void)composeHeaderViewValuesDidChange:(id)arg1 ;
-(int)composeReviewStyle;
-(void)_showComposeView;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg1 ;
-(void)_layoutLoadingView;
-(void)_layoutComposeView;
-(void)_showLoadingView;
-(id)_reviewPlaceholder;
-(void)_delayedUpdateReviewLength;
-(char)_isReviewTextOptional;
@end


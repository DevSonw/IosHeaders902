/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UILabel, MFHeaderLabelView, NSString;

@interface MFComposeMultiView : MFComposeHeaderView {

	UILabel* _accountLabel;
	MFHeaderLabelView* _imageSizeHeaderLabelView;
	UILabel* _imageSizeLabel;
	UILabel* _placeholderImageSizeLabel;
	char _imageSizeShown;
	NSString* _accountDescription;
	char _accountHasUnsafeDomain;
	char _accountAutoselected;

}

@property (assign,getter=isAccountAutoselected,nonatomic) char accountAutoselected;              //@synthesize accountAutoselected=_accountAutoselected - In the implementation block
@property (assign,nonatomic) char accountHasUnsafeDomain;                                        //@synthesize accountHasUnsafeDomain=_accountHasUnsafeDomain - In the implementation block
-(void)refreshPreferredContentSize;
-(void)setAccountDescription:(id)arg1 ;
-(void)setImageSizeDescription:(id)arg1 ;
-(void)setShowsImageSize:(char)arg1 ;
-(void)setAccountHasUnsafeDomain:(char)arg1 ;
-(void)setAccountAutoselected:(char)arg1 ;
-(char)accountHasUnsafeDomain;
-(id)accountLabel;
-(id)_accountDescriptionAttributedString;
-(id)imageSizeLabel;
-(id)imageSizeHeaderLabelView;
-(id)placeholderImageSizeLabel;
-(char)isAccountAutoselected;
-(id)labelColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end


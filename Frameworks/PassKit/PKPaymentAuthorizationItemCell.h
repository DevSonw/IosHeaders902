/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKTableViewCell.h>

@class PKPaymentAuthorizationLayout, UILabel, NSMutableArray, UIView, UIImageView, NSString;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {

	PKPaymentAuthorizationLayout* _layout;
	UILabel* _labelView;
	NSMutableArray* _valueViews;
	UIView* _separatorView;
	UIImageView* _arrowView;
	UIImageView* _alertView;
	NSMutableArray* _constraints;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * value;              //@synthesize value=_value - In the implementation block
-(void)_createSubviews;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)addValue:(id)arg1 isPlaceholder:(char)arg2 ;
-(void)setValue:(id)arg1 isPlaceholder:(char)arg2 ;
-(id)_itemCellLabelAttributedStringWithString:(id)arg1 color:(id)arg2 ;
-(id)_createValueView;
-(void)dealloc;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

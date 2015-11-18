/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, NSString, UIColor;

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {

	UILabel* _emojiSectionHeader;

}

@property (nonatomic,copy) NSString * headerName; 
@property (nonatomic,copy) UIColor * headerTextColor; 
@property (assign,nonatomic) float headerFontSize; 
@property (assign,nonatomic) float headerOpacity; 
@property (assign,nonatomic) char useVibrantBlend; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHeaderName:(NSString *)arg1 ;
-(void)setHeaderFontSize:(float)arg1 ;
-(void)setHeaderTextColor:(UIColor *)arg1 ;
-(void)setHeaderOpacity:(float)arg1 ;
-(void)setUseVibrantBlend:(char)arg1 ;
-(NSString *)headerName;
-(UIColor *)headerTextColor;
-(float)headerFontSize;
-(float)headerOpacity;
-(char)useVibrantBlend;
@end

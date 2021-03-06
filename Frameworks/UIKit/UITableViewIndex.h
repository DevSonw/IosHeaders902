/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray, UIFont, UIColor, NSString;

@interface UITableViewIndex : UIControl {

	NSArray* _titles;
	UIFont* _font;
	int _selectedSection;
	char _pastTop;
	char _pastBottom;
	CGSize _cachedSize;
	CGSize _cachedSizeToFit;
	UIColor* _indexColor;
	UIColor* _indexBackgroundColor;
	UIColor* _indexTrackingBackgroundColor;
	float _topPadding;
	float _bottomPadding;
	float _verticalTextHeightEstimate;
	NSArray* _entries;
	int _idiom;

}

@property (nonatomic,retain) NSArray * titles; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * indexColor; 
@property (nonatomic,retain) UIColor * indexBackgroundColor; 
@property (nonatomic,retain) UIColor * indexTrackingBackgroundColor; 
@property (nonatomic,readonly) int selectedSection;                               //@synthesize selectedSection=_selectedSection - In the implementation block
@property (nonatomic,readonly) NSString * selectedSectionTitle; 
@property (nonatomic,readonly) char pastTop;                                      //@synthesize pastTop=_pastTop - In the implementation block
@property (nonatomic,readonly) char pastBottom;                                   //@synthesize pastBottom=_pastBottom - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2 ;
-(char)canBecomeFocused;
-(void)tintColorDidChange;
-(UIFont *)font;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setIndexColor:(UIColor *)arg1 ;
-(void)setIndexBackgroundColor:(UIColor *)arg1 ;
-(void)setIndexTrackingBackgroundColor:(UIColor *)arg1 ;
-(int)selectedSection;
-(char)pastTop;
-(char)pastBottom;
-(NSString *)selectedSectionTitle;
-(unsigned)maximumNumberOfTitlesWithoutTruncationForHeight:(float)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)titles;
-(id)_fontForIdiom:(int)arg1 ;
-(void)_cacheAndMeasureTitles;
-(void)_setIdiom:(int)arg1 ;
-(int)_idiom;
-(float)_minLineSpacingForIdiom:(int)arg1 ;
-(id)_displayTitles;
-(id)_dotImage;
-(CGRect)_visibleBoundsForRect:(CGRect)arg1 stride:(float*)arg2 ;
-(UIColor *)indexColor;
-(void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_externalDotImage;
-(UIColor *)indexTrackingBackgroundColor;
-(UIColor *)indexBackgroundColor;
@end


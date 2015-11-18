/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIDatePickerView, NSDate, UIColor, NSLocale, NSCalendar, NSTimeZone;

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding> {

	_UIDatePickerView* _pickerView;
	char _useCurrentDateDuringDecoding;

}

@property (assign,setter=_setUsesBlackChrome:,getter=_usesBlackChrome,nonatomic) char usesBlackChrome; 
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic) char drawsBackground; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) char allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) char allowsZeroTimeInterval; 
@property (getter=_dateUnderSelectionBar,nonatomic,readonly) NSDate * dateUnderSelectionBar; 
@property (getter=_contentWidth,nonatomic,readonly) float contentWidth; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) char isTimeIntervalMode; 
@property (assign,setter=_setUseCurrentDateDuringDecoding:,getter=_useCurrentDateDuringDecoding,nonatomic) char useCurrentDateDuringDecoding; 
@property (assign,setter=_setUsesModernStyle:,getter=_usesModernStyle,nonatomic) char _usesModernStyle; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (assign,nonatomic) double timeInterval; 
@property (assign,nonatomic) int datePickerMode; 
@property (nonatomic,retain) NSLocale * locale; 
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSDate * minimumDate; 
@property (nonatomic,retain) NSDate * maximumDate; 
@property (assign,nonatomic) double countDownDuration; 
@property (assign,nonatomic) int minuteInterval; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(char)_drawsBackground;
-(char)_usesModernStyle;
-(void)setBounds:(CGRect)arg1 ;
-(id)_textColor;
-(void)_performScrollTest:(id)arg1 withIterations:(int)arg2 rowsToScroll:(int)arg3 inComponent:(int)arg4 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setDrawsBackground:(char)arg1 ;
-(void)_setUsesModernStyle:(char)arg1 ;
-(id)_highlightColor;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(void)awakeFromNib;
-(float)_contentWidth;
-(void)setDate:(NSDate *)arg1 ;
-(double)timeInterval;
-(void)setLocale:(NSLocale *)arg1 ;
-(int)hour;
-(void)setTimeInterval:(double)arg1 ;
-(void)_installPickerView:(id)arg1 ;
-(void)_setUpInitialValues;
-(void)setDatePickerMode:(int)arg1 ;
-(void)_setLocale:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setMinuteInterval:(int)arg1 ;
-(char)_isTimeIntervalMode;
-(void)setMinimumDate:(NSDate *)arg1 ;
-(void)setMaximumDate:(NSDate *)arg1 ;
-(void)_setUseCurrentDateDuringDecoding:(char)arg1 ;
-(char)_useCurrentDateDuringDecoding;
-(int)datePickerMode;
-(id)_locale;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(int)minuteInterval;
-(void)setDate:(id)arg1 animated:(char)arg2 ;
-(NSLocale *)locale;
-(double)countDownDuration;
-(void)setCountDownDuration:(double)arg1 ;
-(id)dateComponents;
-(void)setDateComponents:(id)arg1 ;
-(void)setStaggerTimeIntervals:(char)arg1 ;
-(void)setHighlightsToday:(char)arg1 ;
-(int)minute;
-(int)second;
-(void)setDate:(id)arg1 animate:(char)arg2 ;
-(void)_setHidesLabels:(char)arg1 ;
-(void)_setUsesBlackChrome:(char)arg1 ;
-(char)_usesBlackChrome;
-(char)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(char)arg1 ;
-(char)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(char)arg1 ;
-(void)_setHighlightsToday:(char)arg1 ;
-(id)_dateUnderSelectionBar;
-(id)_selectedTextForCalendarUnit:(unsigned)arg1 ;
-(id)_labelTextForCalendarUnit:(unsigned)arg1 ;
@end

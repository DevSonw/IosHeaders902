/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol HKCalendarMonthTitleFormatting, HKCalendarWeekViewDelegate;
@class NSMutableArray, HKDateCache, UIView, CALayer, NSDate, HKCalendarDayCell, NSArray;

@interface HKCalendarWeekView : UIView {

	NSMutableArray* _dayCells;
	HKDateCache* _dateCache;
	UIView*<HKCalendarMonthTitleFormatting> _monthTitleView;
	CALayer* _topBorderLine;
	float _dateTopMargin;
	float _dateBottomMargin;
	float _leftMargin;
	float _monthTitleTopMargin;
	float _dateDiameter;
	NSDate* _monthWeekStart;
	id<HKCalendarWeekViewDelegate> _delegate;
	int _firstDayOfMonthCellIndex;
	int _pressedDayOfWeek;
	HKCalendarDayCell* _pressedDayCell;

}

@property (nonatomic,retain) UIView*<HKCalendarMonthTitleFormatting> monthTitleView;              //@synthesize monthTitleView=_monthTitleView - In the implementation block
@property (nonatomic,retain) CALayer * topBorderLine;                                             //@synthesize topBorderLine=_topBorderLine - In the implementation block
@property (assign,nonatomic) float dateTopMargin;                                                 //@synthesize dateTopMargin=_dateTopMargin - In the implementation block
@property (assign,nonatomic) float dateBottomMargin;                                              //@synthesize dateBottomMargin=_dateBottomMargin - In the implementation block
@property (assign,nonatomic) float leftMargin;                                                    //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) float monthTitleTopMargin;                                           //@synthesize monthTitleTopMargin=_monthTitleTopMargin - In the implementation block
@property (assign,nonatomic) float dateDiameter;                                                  //@synthesize dateDiameter=_dateDiameter - In the implementation block
@property (nonatomic,retain) NSDate * monthWeekStart;                                             //@synthesize monthWeekStart=_monthWeekStart - In the implementation block
@property (assign,nonatomic,__weak) id<HKCalendarWeekViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * dayCells;                                                //@synthesize dayCells=_dayCells - In the implementation block
@property (assign,nonatomic) int firstDayOfMonthCellIndex;                                        //@synthesize firstDayOfMonthCellIndex=_firstDayOfMonthCellIndex - In the implementation block
@property (assign,nonatomic) int pressedDayOfWeek;                                                //@synthesize pressedDayOfWeek=_pressedDayOfWeek - In the implementation block
@property (nonatomic,retain) HKCalendarDayCell * pressedDayCell;                                  //@synthesize pressedDayCell=_pressedDayCell - In the implementation block
-(char)containsDate:(id)arg1 ;
-(void)setDelegate:(id<HKCalendarWeekViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)description;
-(id<HKCalendarWeekViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(Class)cellClass;
-(float)preferredHeight;
-(id)initWithDateCache:(id)arg1 ;
-(Class)monthTitleClass;
-(void)setMonthTitleView:(UIView*<HKCalendarMonthTitleFormatting>)arg1 ;
-(UIView*<HKCalendarMonthTitleFormatting>)monthTitleView;
-(void)didUpdateCell:(id)arg1 atIndex:(unsigned)arg2 ;
-(char)containsMonthTitle;
-(void)setMonthWeekStart:(NSDate *)arg1 ;
-(float)dateTopMargin;
-(float)dateDiameter;
-(float)dateBottomMargin;
-(float)monthTitleTopMargin;
-(float)_widthForTopBorderLine;
-(id)currentWeekStartDate;
-(id)_getDayCellWithTouches:(id)arg1 ;
-(void)pressedOnCalendarDay:(int)arg1 cell:(id)arg2 down:(char)arg3 ;
-(void)selectedCalendarDay:(id)arg1 ;
-(void)reloadCells;
-(CGRect)frameForDayCell:(id)arg1 ;
-(id)previousWeekStartDate;
-(id)nextWeekStartDate;
-(CALayer *)topBorderLine;
-(void)setTopBorderLine:(CALayer *)arg1 ;
-(void)setDateTopMargin:(float)arg1 ;
-(void)setDateBottomMargin:(float)arg1 ;
-(void)setMonthTitleTopMargin:(float)arg1 ;
-(void)setDateDiameter:(float)arg1 ;
-(NSDate *)monthWeekStart;
-(NSArray *)dayCells;
-(int)firstDayOfMonthCellIndex;
-(void)setFirstDayOfMonthCellIndex:(int)arg1 ;
-(int)pressedDayOfWeek;
-(void)setPressedDayOfWeek:(int)arg1 ;
-(HKCalendarDayCell *)pressedDayCell;
-(void)setPressedDayCell:(HKCalendarDayCell *)arg1 ;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
@end

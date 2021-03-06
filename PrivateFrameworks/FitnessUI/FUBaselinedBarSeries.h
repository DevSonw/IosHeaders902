/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FUChartSeries.h>

@class UIColor, NSArray, NSNumber;

@interface FUBaselinedBarSeries : FUChartSeries {

	char _hideBarsBelowThreshold;
	float _barWidth;
	UIColor* _barColor;
	float _baselineValue;
	float _baselineGraphHeightPercent;
	NSArray* _plotPoints;
	NSArray* _barViews;
	NSNumber* _baselineAbsoluteYPos;

}

@property (assign,nonatomic) float barWidth;                                //@synthesize barWidth=_barWidth - In the implementation block
@property (nonatomic,retain) UIColor * barColor;                            //@synthesize barColor=_barColor - In the implementation block
@property (assign,nonatomic) float baselineValue;                           //@synthesize baselineValue=_baselineValue - In the implementation block
@property (assign,nonatomic) float baselineGraphHeightPercent;              //@synthesize baselineGraphHeightPercent=_baselineGraphHeightPercent - In the implementation block
@property (assign,nonatomic) char hideBarsBelowThreshold;                   //@synthesize hideBarsBelowThreshold=_hideBarsBelowThreshold - In the implementation block
@property (nonatomic,retain) NSArray * plotPoints;                          //@synthesize plotPoints=_plotPoints - In the implementation block
@property (nonatomic,retain) NSArray * barViews;                            //@synthesize barViews=_barViews - In the implementation block
@property (nonatomic,retain) NSNumber * baselineAbsoluteYPos;               //@synthesize baselineAbsoluteYPos=_baselineAbsoluteYPos - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setBarWidth:(float)arg1 ;
-(float)barWidth;
-(NSArray *)plotPoints;
-(void)setPlotPoints:(NSArray *)arg1 ;
-(float)_getBarHeightForPointValue:(id)arg1 ;
-(id)_getAbsoluteBaselineYPosition;
-(CGRect)_baselinedRectBoundsForYValue:(float)arg1 ;
-(float)_getBaselinedMinYValueForYPlaneValue:(float)arg1 ;
-(float)_getBaselinedMaxYValueForYPlaneValue:(float)arg1 ;
-(float)_getYValueForPointFromChartPointValue:(id)arg1 ;
-(UIColor *)barColor;
-(void)setBarColor:(UIColor *)arg1 ;
-(float)baselineValue;
-(void)setBaselineValue:(float)arg1 ;
-(float)baselineGraphHeightPercent;
-(void)setBaselineGraphHeightPercent:(float)arg1 ;
-(char)hideBarsBelowThreshold;
-(void)setHideBarsBelowThreshold:(char)arg1 ;
-(NSArray *)barViews;
-(void)setBarViews:(NSArray *)arg1 ;
-(NSNumber *)baselineAbsoluteYPos;
-(void)setBaselineAbsoluteYPos:(NSNumber *)arg1 ;
@end


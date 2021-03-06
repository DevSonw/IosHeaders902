/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MRCAMLBezierData : NSObject {

	double ax;
	double bx;
	double cx;
	double ay;
	double by;
	double cy;

}
-(double)sample_y:(double)arg1 ;
-(double)sample_x:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 ;
-(double)evaluate_inverseAtTime:(double)arg1 ;
-(double)evaluatAtTime:(double)arg1 ;
-(id)initWithControlPoints:(const double*)arg1 ;
-(double)sample_x_derivative:(double)arg1 ;
-(double)sample_y_derivative:(double)arg1 ;
-(double)solve_x:(double)arg1 epsilon:(double)arg2 ;
-(double)solve_y:(double)arg1 epsilon:(double)arg2 ;
@end


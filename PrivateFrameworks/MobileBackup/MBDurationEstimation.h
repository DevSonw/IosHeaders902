/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MBDurationEstimation : NSObject {

	double _timeBegan;
	double _currentEstimate;
	float _currentProgress;
	double _estimateAtLastUpdate;
	float _progressAtLastUpdate;
	double _estimationHysteresis;
	float _progressHysteresis;

}

@property (assign,nonatomic) double estimationHysteresis;              //@synthesize estimationHysteresis=_estimationHysteresis - In the implementation block
@property (assign,nonatomic) float progressHysteresis;                 //@synthesize progressHysteresis=_progressHysteresis - In the implementation block
-(char)shouldUpdateWithProgress:(float)arg1 ;
-(unsigned)minutesRemaining;
-(double)timeRemainingWithProgress:(float)arg1 ;
-(double)estimationHysteresis;
-(void)setEstimationHysteresis:(double)arg1 ;
-(float)progressHysteresis;
-(void)setProgressHysteresis:(float)arg1 ;
-(id)init;
-(void)reset;
-(double)timeRemaining;
@end

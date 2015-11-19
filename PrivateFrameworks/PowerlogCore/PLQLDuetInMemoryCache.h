/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface PLQLDuetInMemoryCache : NSObject {

	NSDictionary* _startArgs;
	NSDictionary* _stopArgs;
	int _refCount;
	double _startTime;
	double _stopTime;
	double _cellIn;
	double _cellOut;
	double _wifiIn;
	double _wifiOut;

}

@property (retain) NSDictionary * startArgs;              //@synthesize startArgs=_startArgs - In the implementation block
@property (retain) NSDictionary * stopArgs;               //@synthesize stopArgs=_stopArgs - In the implementation block
@property (assign) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (assign) double stopTime;                       //@synthesize stopTime=_stopTime - In the implementation block
@property (assign) double cellIn;                         //@synthesize cellIn=_cellIn - In the implementation block
@property (assign) double cellOut;                        //@synthesize cellOut=_cellOut - In the implementation block
@property (assign) double wifiIn;                         //@synthesize wifiIn=_wifiIn - In the implementation block
@property (assign) double wifiOut;                        //@synthesize wifiOut=_wifiOut - In the implementation block
@property (assign) int refCount;                          //@synthesize refCount=_refCount - In the implementation block
-(double)stopTime;
-(void)setStopTime:(double)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(int)refCount;
-(void)setRefCount:(int)arg1 ;
-(void)setStopArgs:(NSDictionary *)arg1 ;
-(void)setStartArgs:(NSDictionary *)arg1 ;
-(void)updateDataStats:(id)arg1 ;
-(id)initWithStartTime:(double)arg1 withStartargs:(id)arg2 ;
-(void)clearStop;
-(char)isStartPresent;
-(char)isStopPresent;
-(void)addDataWithCellIn:(double)arg1 withCellOut:(double)arg2 withWifiIn:(double)arg3 withWifiOut:(double)arg4 ;
-(void)addStartEvent:(double)arg1 withArgs:(id)arg2 ;
-(void)addStopEvent:(double)arg1 withArgs:(id)arg2 ;
-(NSDictionary *)startArgs;
-(NSDictionary *)stopArgs;
-(void)setWifiIn:(double)arg1 ;
-(void)setWifiOut:(double)arg1 ;
-(void)setCellIn:(double)arg1 ;
-(void)setCellOut:(double)arg1 ;
-(double)wifiIn;
-(double)wifiOut;
-(double)cellIn;
-(double)cellOut;
@end

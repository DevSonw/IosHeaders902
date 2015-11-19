/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol ChartUpdaterDelegate;
@class Stock, StockChartData;

@interface ChartUpdater : YQLRequest {

	Stock* _stock;
	int _interval;
	StockChartData* _currentChartData;
	/*^block*/id _updateCompletionHandler;
	id<ChartUpdaterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ChartUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_rangeStringForInterval:(int)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<ChartUpdaterDelegate>)arg1 ;
-(id<ChartUpdaterDelegate>)delegate;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(char)updateChartForStock:(id)arg1 interval:(int)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)parseDataSeriesDictionary:(id)arg1 ;
-(char)updateChartForStock:(id)arg1 interval:(int)arg2 ;
-(id)dataSeries;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEOABExperimentResponse;


@protocol GEOExperimentServerProxy <NSObject>
@property (assign,nonatomic) id<GEOExperimentServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOABExperimentResponse * experimentsInfo; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(id)initWithDelegate:(id)arg1;
-(void)forceUpdate;
-(GEOABExperimentResponse *)experimentsInfo;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(int)arg2 dispatcherRequestType:(int)arg3;

@end


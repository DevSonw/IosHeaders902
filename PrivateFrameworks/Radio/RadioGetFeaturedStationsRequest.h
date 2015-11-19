/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest;

@interface RadioGetFeaturedStationsRequest : RadioRequest {

	NSObject*<OS_dispatch_queue> _artworkQueue;
	SSURLConnectionRequest* _request;
	unsigned _stationCount;
	char _disableArtworkLoading;
	char _disableCachedResponses;

}

@property (assign,nonatomic) char disableArtworkLoading;               //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) char disableCachedResponses;              //@synthesize disableCachedResponses=_disableCachedResponses - In the implementation block
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDisableArtworkLoading:(char)arg1 ;
-(char)disableArtworkLoading;
-(id)initWithStationCount:(unsigned)arg1 ;
-(id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(char)arg3 ;
-(void)startWithFeaturedStationsCompletionHandler:(/*^block*/id)arg1 ;
-(id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id*)arg2 ;
-(char)disableCachedResponses;
-(void)setDisableCachedResponses:(char)arg1 ;
@end

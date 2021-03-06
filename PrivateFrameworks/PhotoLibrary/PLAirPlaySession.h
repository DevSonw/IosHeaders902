/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAirPlaySessionDataSource;
@class NSMutableArray, NSDictionary;

@interface PLAirPlaySession : NSObject {

	id<PLAirPlaySessionDataSource> _dataSource;
	NSMutableArray* _streamedPhotoUuids;
	NSDictionary* _pickedRoute;
	char _streamingPhotos;
	char _streamingRemoteSlideshow;
	char _streamingLocalSlideShow;
	char _sentPhoto;
	char _supportsPhotoCaching;

}

@property (assign,nonatomic) char streamingLocalSlideShow;                           //@synthesize streamingLocalSlideShow=_streamingLocalSlideShow - In the implementation block
@property (assign,nonatomic) id<PLAirPlaySessionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(char)canDisplayMedia:(id)arg1 ;
+(void)endNetworkAssertion;
+(void)beginNetworkAssertion;
-(void)setDataSource:(id<PLAirPlaySessionDataSource>)arg1 ;
-(void)dealloc;
-(id<PLAirPlaySessionDataSource>)dataSource;
-(id)pickedRouteID;
-(char)supportsRemoteSlideshow;
-(id)pickedRouteName;
-(void)invalidatePhotoCache;
-(void)streamPhoto:(id)arg1 withTransition:(id)arg2 ;
-(void)stopStreaming;
-(void)setStreamingLocalSlideShow:(char)arg1 ;
-(id)initWithPickedRoute:(id)arg1 mediaControlClient:(id)arg2 airplayRemoteSlideshow:(id)arg3 ;
-(char)_shouldCachePhotos;
-(void)startRemoteSlideshowWithTheme:(id)arg1 remoteSlideshowDelegate:(id)arg2 ;
-(void)stopRemoteSlideshow;
-(char)streamingLocalSlideShow;
@end


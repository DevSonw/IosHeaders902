/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAVRoutingControllerDelegate;
@class NSArray, MPAVRoute, NSMutableArray, NSString;

@interface MPAVRoutingController : NSObject {

	NSArray* _cachedRoutes;
	MPAVRoute* _cachedPickedRoute;
	NSMutableArray* _asyncFetchingCompletionHandlers;
	char _asyncFetchingRoutes;
	int _externalScreenType;
	char _hasExternalScreenType;
	char _scheduledSendDelegateRoutesChanged;
	char _pickedRouteHasVolumeControl;
	char _hasVolumeControlInfoForPickedRoute;
	int _deviceAvailabilityNotifyToken;
	char _deviceAvailabilityOverrideState;
	id<MPAVRoutingControllerDelegate> _delegate;
	NSString* _name;
	int _discoveryMode;
	NSString* _category;

}

@property (assign,nonatomic,__weak) id<MPAVRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int discoveryMode;                                              //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) int externalScreenType; 
@property (nonatomic,copy,readonly) NSArray * availableRoutes; 
@property (nonatomic,copy) NSString * category;                                              //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) MPAVRoute * pickedRoute; 
@property (nonatomic,readonly) char volumeControlIsAvailable; 
-(char)pickBestDeviceRoute;
-(char)volumeControlIsAvailable;
-(MPAVRoute *)pickedRoute;
-(void)clearCachedRoutes;
-(int)externalScreenType;
-(NSArray *)availableRoutes;
-(char)airtunesRouteIsPicked;
-(char)wirelessDisplayRouteIsPicked;
-(char)routeOtherThanHandsetAndSpeakerAvailable;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(char)routeOtherThanHandsetAvailable;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_scheduleSendDelegateRoutesChanged;
-(void)_setExternalScreenType:(int)arg1 ;
-(void)_updateCachedRoutes;
-(id)_parseAVRouteDescriptions:(id)arg1 ;
-(char)pickRoute:(id)arg1 withPassword:(id)arg2 ;
-(char)pickRoute:(id)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(void)_externalScreenTypeDidChangeNotification:(id)arg1 ;
-(void)_activeAudioRouteDidChangeNotification:(id)arg1 ;
-(void)_mediaServerDiedNotification:(id)arg1 ;
-(id)videoRouteForRoute:(id)arg1 ;
-(char)pickHandsetRoute;
-(char)pickSpeakerRoute;
-(char)speakerRouteIsPicked;
-(char)handsetRouteIsPicked;
-(char)receiverRouteIsPicked;
-(char)wirelessDisplayRoutesAvailable;
-(void)logCurrentRoutes;
-(int)discoveryMode;
-(void)setDelegate:(id<MPAVRoutingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<MPAVRoutingControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)initWithName:(id)arg1 ;
-(void)setDiscoveryMode:(int)arg1 ;
@end


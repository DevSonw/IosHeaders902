/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/AVAudioSessionDelegateMediaPlayerOnly.h>
#import <libobjc.A.dylib/MPAVPlaylistManagerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVErrorResolverDelegate.h>

@protocol OS_dispatch_source;
@class NSDate, MPAVPlaylistManager, MPAVRoutingController, MPAVRoute, MPAVErrorResolver, AVPlayerLayer, MPVideoView, MPAVItem, NSArray, NSMutableArray, NSMapTable, NSNotification, NSObject, MPAVControllerToAggregateDCommunicator, NSString, NSMutableSet, AVPictureInPictureController, MPQueueFeeder, MPQueuePlayer, MPMediaItem, MPMediaQuery, AVAudioSessionMediaPlayerOnly;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate, MPAVErrorResolverDelegate> {

	char _currentItemDidLoad;
	char _currentItemStartedAsCloudItem;
	char _didResolveError;
	char _disallowsAMRAudio;
	char _disableAirPlayMirroringDuringPlayback;
	NSDate* _itemDidChangeDate;
	char _shouldPreventStateChangesForRateChange;
	unsigned _stallBackgroundTaskIdentifier;
	char _usesAudioOnlyModeForExternalPlayback;
	MPAVPlaylistManager* _playlistManager;
	int _playbackMode;
	char _valid;
	MPAVRoutingController* _routingController;
	MPAVRoute* _pickedRoute;
	MPAVErrorResolver* _itemErrorResolver;
	AVPlayerLayer* _videoLayer;
	unsigned _videoLayerUsageCount;
	MPVideoView* _videoView;
	unsigned _tickTimerEnabled;
	CFRunLoopTimerRef _tickTimer;
	double _tickInterval;
	CFRunLoopTimerRef _currentItemBookkeepingTimer;
	int _indexChangeDirection;
	unsigned _itemIndexAtDeath;
	int _lastDisconnectReason;
	double _lastKnownTimeBeforeDeath;
	double _lastPlaybackIndexChangeTime;
	double _lastSetTime;
	double _lastSetTimeChangeTime;
	unsigned _hasDelayedCurrentTimeToSet : 1;
	unsigned _forceDelayedCurrentTimeToSet : 1;
	double _delayedCurrentTimeToSet;
	int _delayedCurrentTimeOptions;
	unsigned _lastSetTimeMarker;
	double _temporaryChapterTime;
	unsigned _autoPlayWhenLikelyToKeepUp : 1;
	unsigned _autoplayDisabledForCurrentItem : 1;
	double _nextFadeOutDuration;
	char _hasPendingRate;
	MPAVItem* _pendingRateItem;
	float _pendingRate;
	char _pendingChangeForScanning;
	id _boundaryTimeObserver;
	NSArray* _boundaryTimes;
	unsigned _boundaryTimeIndexLastPosted;
	NSMutableArray* _observerInfos;
	NSMapTable* _observerInfoToCoreMediaObserver;
	float _rateBeforeSeek;
	float _inflightSeekRate;
	unsigned _scanLevel;
	int _scanDirection;
	int _resetRateAfterSeekingUpdateDisabled;
	int _seeklessState;
	unsigned _isSeekingOrScrubbing : 1;
	unsigned _resetRateAfterSeeking : 1;
	unsigned _activeRewindHoldingAtStart : 1;
	double _lastSeekableEnd;
	double _whenSawSeekableEnd;
	double _maxSeekableFwd;
	double _seekFwdSlop;
	double _lastSeekableStart;
	double _whenSawSeekableStart;
	double _maxSeekableRev;
	double _seekRevSlop;
	unsigned _canSeekRev : 1;
	unsigned _canSeekFwd : 1;
	unsigned _alwaysPlayWheneverPossible : 1;
	unsigned _stopAtEnd : 1;
	unsigned _didReachEnd : 1;
	unsigned _pausedDuringInterruption : 1;
	unsigned _resumePlaybackWhenActive : 1;
	unsigned _useApplicationAudioSession : 1;
	unsigned _playInBackgroundUserDefaultEnabled : 1;
	unsigned _canPlayFastForward : 1;
	unsigned _canPlayFastReverse : 1;
	unsigned _shouldAutoclearDisplayOverride : 1;
	int _state;
	int _displayOverridePlaybackState;
	unsigned _bufferingState;
	NSNotification* _delayedPlaybackStateNotification;
	NSObject*<OS_dispatch_source> _stallTimerSource;
	char _isConnectingPlayer;
	MPAVControllerToAggregateDCommunicator* _aggregateDCommunicator;
	double _itemInitialBookmarkTime;
	float _rateBeforeResignActive;
	int _ubiquitousBookkeepingDisabledCount;
	double _secondsSinceUbiquitousCheckpoint;
	Class _videoViewClass;
	NSString* _audioSessionModeOverride;
	double _lastInterruptionEnd;
	char _shouldEnforceHDCP;
	NSMutableSet* _clientsWantingExternalPlayback;
	double _lastLoadedTime;
	long long _currentItemRevisionID;
	unsigned _numberOfErrorsSinceLastPlay;
	char _shouldSkipToNextTrackOnResumeFromInterruption;
	char _muted;
	char _useAirPlayMusicMode;
	char _managesAirPlayBehaviors;
	char _wantsPictureInPicture;
	AVPictureInPictureController* _pictureInPictureController;

}

@property (nonatomic,readonly) MPQueueFeeder * feeder; 
@property (nonatomic,readonly) MPAVItem * currentItem; 
@property (nonatomic,readonly) MPAVRoutingController * routingController; 
@property (nonatomic,readonly) MPQueuePlayer * avPlayer; 
@property (assign,nonatomic) char shouldSkipToNextTrackOnResumeFromInterruption;                                           //@synthesize shouldSkipToNextTrackOnResumeFromInterruption=_shouldSkipToNextTrackOnResumeFromInterruption - In the implementation block
@property (getter=isTickTimerEnabled,nonatomic,readonly) char tickTimerEnabled; 
@property (nonatomic,readonly) unsigned activeRepeatType; 
@property (nonatomic,readonly) unsigned activeShuffleType; 
@property (assign,nonatomic) unsigned repeatType; 
@property (assign,nonatomic) unsigned shuffleType; 
@property (getter=isShuffled,nonatomic,readonly) char shuffled; 
@property (assign,nonatomic) char autoPlayWhenLikelyToKeepUp; 
@property (assign,nonatomic) char closedCaptioningEnabled; 
@property (assign,nonatomic) double nextFadeOutDuration;                                                                   //@synthesize nextFadeOutDuration=_nextFadeOutDuration - In the implementation block
@property (nonatomic,readonly) char hasVolumeControl; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,readonly) char muted;                                                                                 //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) NSString * routeNameForVolumeControl; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) double currentMonotonousTime; 
@property (nonatomic,readonly) double durationOfCurrentItemIfAvailable; 
@property (nonatomic,readonly) double playableDurationOfCurrentItemIfAvailable; 
@property (nonatomic,readonly) unsigned bufferingState; 
@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (getter=isRewindHoldingAtStart,nonatomic,readonly) char rewindHoldingAtStart; 
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (assign,nonatomic) char alwaysPlayWheneverPossible; 
@property (assign,nonatomic) int playbackMode;                                                                             //@synthesize playbackMode=_playbackMode - In the implementation block
@property (assign,nonatomic) char stopAtEnd; 
@property (assign,nonatomic) char useApplicationAudioSession; 
@property (nonatomic,readonly) char isCurrentItemReady; 
@property (nonatomic,readonly) MPMediaItem * currentMediaItem; 
@property (nonatomic,readonly) MPMediaQuery * currentMediaQuery; 
@property (assign,nonatomic) int displayOverridePlaybackState;                                                             //@synthesize displayOverridePlaybackState=_displayOverridePlaybackState - In the implementation block
@property (assign,nonatomic) int state;                                                                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char ubiquitousBookkeepingEnabled; 
@property (nonatomic,readonly) char isExternalPlaybackActive; 
@property (assign,nonatomic) char disableAirPlayMirroringDuringPlayback; 
@property (assign,nonatomic) char shouldEnforceHDCP;                                                                       //@synthesize shouldEnforceHDCP=_shouldEnforceHDCP - In the implementation block
@property (nonatomic,retain) NSString * audioSessionModeOverride;                                                          //@synthesize audioSessionModeOverride=_audioSessionModeOverride - In the implementation block
@property (getter=_playlistManager,nonatomic,retain) MPAVPlaylistManager * playlistManager; 
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (nonatomic,readonly) AVPlayerLayer * videoLayer; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (nonatomic,readonly) int externalPlaybackType; 
@property (assign,nonatomic) char usesAudioOnlyModeForExternalPlayback; 
@property (assign,setter=setDestinationIsTVOut:,getter=destinationIsTVOut,nonatomic) char destinationIsTVOut; 
@property (nonatomic,readonly) char showPlaybackStateOverlaysOnTVOut; 
@property (nonatomic,readonly) float _playerRate; 
@property (nonatomic,readonly) int _displayPlaybackState; 
@property (nonatomic,readonly) char currentItemIsRental; 
@property (assign,nonatomic) char useAirPlayMusicMode;                                                                     //@synthesize useAirPlayMusicMode=_useAirPlayMusicMode - In the implementation block
@property (assign,nonatomic) char managesAirPlayBehaviors;                                                                 //@synthesize managesAirPlayBehaviors=_managesAirPlayBehaviors - In the implementation block
@property (nonatomic,readonly) AVAudioSessionMediaPlayerOnly * _playerAVAudioSession; 
@property (nonatomic,readonly) float rate; 
@property (assign,nonatomic) char disallowsAMRAudio; 
@property (assign,nonatomic) char wantsPictureInPicture;                                                                   //@synthesize wantsPictureInPicture=_wantsPictureInPicture - In the implementation block
@property (nonatomic,readonly) AVPictureInPictureController * pictureInPictureController;                                  //@synthesize pictureInPictureController=_pictureInPictureController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)outputSupportsAC3;
+(char)isNetworkSupportedPath:(id)arg1 ;
+(id)_playerKeysToObserve;
+(Class)playlistManagerClass;
+(id)_itemKeysToObserve;
+(void)initialize;
-(char)showPlaybackStateOverlaysOnTVOut;
-(void)setStopAtEnd:(char)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(unsigned)bufferingState;
-(void)setAutoPlayWhenLikelyToKeepUp:(char)arg1 ;
-(char)isExternalPlaybackActive;
-(void)beginSeek:(int)arg1 ;
-(void)endSeek;
-(void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ;
-(void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(char)arg3 ;
-(int)playbackMode;
-(void)setPlaybackMode:(int)arg1 ;
-(void)beginUsingVideoLayer;
-(void)changePlaybackIndexBy:(int)arg1 ;
-(void)setCurrentTime:(double)arg1 options:(int)arg2 ;
-(NSString *)audioSessionModeOverride;
-(char)disallowsAMRAudio;
-(double)timeOfPlayableEnd;
-(double)timeOfPlayableStart;
-(double)timeOfSeekableEnd;
-(double)timeOfSeekableStart;
-(void)setAudioSessionModeOverride:(NSString *)arg1 ;
-(void)setDisplayOverridePlaybackState:(int)arg1 ;
-(void)setDisallowsAMRAudio:(char)arg1 ;
-(void)setShouldEnforceHDCP:(char)arg1 ;
-(char)shouldEnforceHDCP;
-(void)endPlayback;
-(void)setPlaybackIndex:(int)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 ;
-(void)setUseApplicationAudioSession:(char)arg1 ;
-(void)setNextFadeOutDuration:(double)arg1 ;
-(void)endUsingVideoLayer;
-(char)useApplicationAudioSession;
-(char)closedCaptioningEnabled;
-(void)setClosedCaptioningEnabled:(char)arg1 ;
-(char)isLiveStreaming;
-(double)durationOfCurrentItemIfAvailable;
-(double)playableDurationOfCurrentItemIfAvailable;
-(char)stopAtEnd;
-(char)muted;
-(void)disableAutoplayForCurrentItem;
-(MPAVRoutingController *)routingController;
-(void)togglePlaybackWithOptions:(unsigned)arg1 ;
-(void)enableAutoplayForCurrentItem;
-(void)_volumeDidChangeNotification:(id)arg1 ;
-(void)setDestinationIsTVOut:(char)arg1 ;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyAVPlayerItemWillChange:(id)arg1 ;
-(void)notifyAVPlayerItemDidChange:(id)arg1 ;
-(char)allowsExternalPlayback;
-(unsigned)repeatType;
-(unsigned)shuffleType;
-(void)setRepeatType:(unsigned)arg1 ;
-(void)setShuffleType:(unsigned)arg1 ;
-(unsigned)activeShuffleType;
-(void)_resetInternalState;
-(void)_itemTimeMarkersAvailableNotification:(id)arg1 ;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1 ;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_networkChangedNotification:(id)arg1 ;
-(void)_cancelStallTimer;
-(void)_cancelUpdateCurrentItemBookkeepingTimer;
-(void)_unregisterForPlayer:(id)arg1 ;
-(void)_unregisterForAVItemNotifications:(id)arg1 ;
-(void)_unregisterForPlaylistManager:(id)arg1 ;
-(id)_playlistManager;
-(void)setUbiquitousBookkeepingEnabled:(char)arg1 ;
-(void)_pauseWithFadeout:(float)arg1 forScanning:(char)arg2 ;
-(char)currentItemIsRental;
-(AVAudioSessionMediaPlayerOnly *)_playerAVAudioSession;
-(void)_updateScanningRate;
-(void)_setLastSetTime:(double)arg1 ;
-(void)updateBookkeepingNow;
-(void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)arg1 withItemIndex:(int)arg2 ;
-(void)setPlaybackIndex:(int)arg1 selectionDirection:(int)arg2 ;
-(void)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(char)arg3 allowSkippingUnskippableContent:(char)arg4 ;
-(char)changePlaybackIndexBy:(int)arg1 deltaType:(int)arg2 ignoreElapsedTime:(char)arg3 allowSkippingUnskippableContent:(char)arg4 error:(id*)arg5 ;
-(void)_delayedPlaybackIndexChange;
-(char)_changeChapterTimeMarkerIndexBy:(int)arg1 ;
-(void)_endSeekAndChangeRate:(char)arg1 ;
-(char)isCurrentItemReady;
-(double)_currentTimeWithPreloadedPlayerTime:(char)arg1 value:(SCD_Struct_MP9)arg2 ;
-(char)_setRate:(float)arg1 forScanning:(char)arg2 withItem:(id)arg3 ;
-(void)_setItemErrorResolver:(id)arg1 ;
-(void)pauseWithFadeout:(float)arg1 ;
-(char)_setRate:(float)arg1 forScanning:(char)arg2 ;
-(void)playWithOptions:(unsigned)arg1 ;
-(void)_playWithOptions:(unsigned)arg1 allowsEnablingAutoPlay:(char)arg2 ;
-(void)_delayedSetCurrentTime;
-(char)_hasEnoughDataToPlay;
-(char)_canPlayItem:(id)arg1 ;
-(void)_rateDidChange:(id)arg1 ;
-(void)playItemAtIndex:(unsigned)arg1 forceRestart:(char)arg2 ;
-(void)playItemAtIndex:(unsigned)arg1 withOptions:(unsigned)arg2 ;
-(void)playChapterTimeMarkerAtIndex:(unsigned)arg1 withOptions:(unsigned)arg2 ;
-(void)_attemptAutoPlay;
-(char)alwaysPlayWheneverPossible;
-(void)_addObserverInfo:(id)arg1 forCoreMediaObserver:(id)arg2 forInitialCreation:(char)arg3 ;
-(void)endTickTimer;
-(void)setClient:(id)arg1 wantsToAllowExternalPlayback:(char)arg2 shouldIgnorePlaybackQueueTransactions:(char)arg3 ;
-(char)_showsPlayingWhenInState:(int)arg1 ;
-(int)_displayPlaybackState;
-(void)setDisableAirPlayMirroringDuringPlayback:(char)arg1 shouldIgnorePlaybackQueueTransactions:(char)arg2 ;
-(void)applyRepeatSettings;
-(void)applyShuffleSettings;
-(void)_setActionAtEndAttributeForState:(int)arg1 ;
-(void)_applyAirPlayMusicMode;
-(void)_connectAVPlayer;
-(void)setClient:(id)arg1 wantsToAllowExternalPlayback:(char)arg2 ;
-(void)setDisableAirPlayMirroringDuringPlayback:(char)arg1 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(char)arg1 ;
-(void)_disconnectAVPlayerWithReason:(int)arg1 ;
-(void)_setVideoLayerAttachedToPlayer:(char)arg1 force:(char)arg2 pauseIfNecessary:(char)arg3 ;
-(void)_clearVideoLayer:(char)arg1 ;
-(int)externalPlaybackType;
-(NSString *)externalPlaybackVideoGravity;
-(void)setExternalPlaybackVideoGravity:(NSString *)arg1 ;
-(void)_clearSeekingIntervalsForStreaming;
-(id)_pickedRoute;
-(void)setUsesAudioOnlyModeForExternalPlayback:(char)arg1 shouldIgnorePlaybackQueueTransactions:(char)arg2 ;
-(char)usesAudioOnlyModeForExternalPlayback;
-(void)_playbackFailedWithError:(id)arg1 canResolve:(char)arg2 ;
-(id)_playerFailedToQueueNotification:(id)arg1 ;
-(double)currentTimeForBookmarking;
-(void)_applyAirPlayMusicModeForItem:(id)arg1 shouldIgnorePlaybackQueueTransactions:(char)arg2 ;
-(void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(char)arg1 ;
-(void)_registerForAVItemNotifications:(id)arg1 ;
-(void)_reloadTimeMarkerObservationsForItem:(id)arg1 ;
-(char)_isChangingPlayerProperties;
-(void)_itemFailedToPlayToEnd:(id)arg1 ;
-(void)airPlayVideoEnded;
-(void)_delayedUpdateScanningRate;
-(void)_verifyDisplayProtection;
-(void)_setValid:(char)arg1 ;
-(void)_setBufferingState:(unsigned)arg1 ;
-(char)canPlayFastReverse;
-(void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1 ;
-(void)_updatePlaybackModeForItem:(id)arg1 ;
-(void)_delayedUpdateTimeMarker;
-(void)_prepareToPlayItem:(id)arg1 ;
-(void)skipToSeekableEnd;
-(void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(char)arg1 ;
-(void)_clearLastSetTimeIfPlayerTimeIsValid;
-(id)_expectedAssetTypesForPlaybackMode:(int)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(char)wantsPictureInPicture;
-(void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1 ;
-(void)_checkForBoundaryTimeCrossing;
-(id)_extractImageFromMetadata:(id)arg1 ;
-(void)_updateTypeForItem:(id)arg1 ;
-(void)_itemWillChange:(id)arg1 ;
-(void)_itemDidChange:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_serverConnectionDidDie:(id)arg1 ;
-(void)_streamRanDry:(id)arg1 ;
-(void)_streamBufferFull:(id)arg1 ;
-(void)_streamLikelyToKeepUp:(id)arg1 ;
-(void)_streamUnlikelyToKeepUp:(id)arg1 ;
-(void)_sizeDidChange:(id)arg1 ;
-(void)_itemReadyToPlay:(id)arg1 ;
-(void)_timedMetadataAvailable:(id)arg1 ;
-(void)_tracksDidChange:(id)arg1 ;
-(void)_durationDidChange:(id)arg1 ;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(void)_pausePlaybackIfNecessary;
-(char)_itemIsRestricted:(id)arg1 ;
-(void)_resumePlaybackIfNecessary;
-(void)_pauseTickTimer;
-(void)_pauseBookkeepingTimer;
-(void)_resumeTickTimer;
-(void)_resumeBookkeepingTimer;
-(void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;
-(unsigned)_currentIndexInBoundaryCMTimes:(id)arg1 ;
-(void)setPlaylistManager:(MPAVPlaylistManager *)arg1 ;
-(void)_registerForPlaylistManager:(id)arg1 ;
-(void)_configureAVPlaylistManager;
-(id)embeddedDataTimesForItem:(id)arg1 ;
-(void)_itemFailedToPlayToEndNotification:(id)arg1 ;
-(void)_timeHasJumpedNotification:(id)arg1 ;
-(void)_itemAssetIsLoadedNotification:(id)arg1 ;
-(void)_itemTypeAvailableNotification:(id)arg1 ;
-(void)_itemPlaybackModeAvailableNotification:(id)arg1 ;
-(char)autoPlayWhenLikelyToKeepUp;
-(char)shouldHaveNoActionAtEndForState:(int)arg1 ;
-(void)_delayedPostPlaybackStateChangedNotification;
-(void)autoclearDisplayOverride;
-(void)_postPlaybackStateChangedNotificationWithOriginalState:(int)arg1 newState:(int)arg2 delayable:(char)arg3 ;
-(void)_scheduleUpdateCurrentItemBookkeepingTimer;
-(void)_clearResetRateAfterSeeking;
-(int)_seeklessStateForState:(int)arg1 ;
-(void)_configureUpdateCurrentItemBookkeepingTimer;
-(AVPlayerLayer *)videoLayer;
-(void)_updateSeekingIntervalsForStreaming;
-(void)tickTimerFired;
-(void)setRateForScanning:(float)arg1 ;
-(char)destinationIsTVOut;
-(char)useAirPlayMusicMode;
-(char)_isVideoLayerAttachedToPlayer;
-(void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned)arg3 ;
-(void)beginInterruption;
-(void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2 ;
-(void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2 ;
-(void)playlistManager:(id)arg1 queueCoordinator:(id)arg2 willInsertItem:(id)arg3 afterItem:(id)arg4 ;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1 ;
-(void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(int)arg3 ;
-(char)isSeekingOrScrubbing;
-(char)isRewindHoldingAtStart;
-(double)currentMonotonousTime;
-(void)playItemAtIndex:(unsigned)arg1 ;
-(void)playChapterTimeMarkerAtIndex:(unsigned)arg1 ;
-(void)togglePlayback;
-(char)forceRestartPlaybackIfNecessary;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)beginTickTimerWithInterval:(double)arg1 ;
-(char)isTickTimerEnabled;
-(unsigned)activeRepeatType;
-(MPMediaQuery *)currentMediaQuery;
-(char)isShuffled;
-(void)setAlwaysPlayWheneverPossible:(char)arg1 ;
-(float)_playerRate;
-(char)disableAirPlayMirroringDuringPlayback;
-(char)hasVolumeControl;
-(NSString *)routeNameForVolumeControl;
-(void)setUseAirPlayMusicMode:(char)arg1 ;
-(void)setWantsPictureInPicture:(char)arg1 ;
-(void)setManagesAirPlayBehaviors:(char)arg1 ;
-(void)finalizeBookkeepingNow;
-(char)canSeekBackwards;
-(char)canSeekForwards;
-(char)canSkipToSeekableEnd;
-(void)skipToSeekableStart;
-(char)ubiquitousBookkeepingEnabled;
-(void)_updateCurrentItemBookkeepingForTimerCallback;
-(void)setAutoclearingDisplayOverridePlaybackState:(int)arg1 ;
-(void)_updateProgress:(CFRunLoopTimerRef)arg1 ;
-(int)displayOverridePlaybackState;
-(char)shouldSkipToNextTrackOnResumeFromInterruption;
-(void)setShouldSkipToNextTrackOnResumeFromInterruption:(char)arg1 ;
-(double)nextFadeOutDuration;
-(char)managesAirPlayBehaviors;
-(AVPictureInPictureController *)pictureInPictureController;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(MPQueuePlayer *)avPlayer;
-(void)removeTimeObserver:(id)arg1 ;
-(float)rate;
-(void)play;
-(MPMediaItem *)currentMediaItem;
-(MPVideoView *)videoView;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)isValid;
-(void)setActive:(char)arg1 ;
-(MPAVItem *)currentItem;
-(id)preferredLanguages;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setState:(int)arg1 ;
-(void)pause;
-(float)volume;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(char)setRate:(float)arg1 ;
-(char)shouldDisplayAsPlaying;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(MPQueueFeeder *)feeder;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/ISPlaybackStateTransitionManagerDelegate.h>
#import <libobjc.A.dylib/ISAVPlayerControllerDelegate.h>

@class ISPlaybackSpec, AVPlayerItem, NSError, ISReuseQueue, NSHashTable, ISAVPlayerController, ISPlaybackStateTransitionManager, AVPlayer, NSSet, NSString;

@interface ISPlaybackController : NSObject <ISPlaybackStateTransitionManagerDelegate, ISAVPlayerControllerDelegate> {

	char _videoVisible;
	ISPlaybackSpec* _playbackSpec;
	float _volume;
	AVPlayerItem* _videoPlayerItem;
	AVPlayerItem* _audioPlayerItem;
	float _timeOffset;
	float _vitalityPlayRate;
	float _vitalityHintPlayRate;
	float _hintProgress;
	int _playbackState;
	float _playRate;
	/*^block*/id _playbackEndHandler;
	int _audioPlayerStatus;
	int _videoPlayerStatus;
	NSError* _videoPlayerError;
	NSError* _audioPlayerError;
	ISReuseQueue* __playerReuseQueue;
	NSHashTable* __outputs;
	int __currentTransitionRequestID;
	ISAVPlayerController* __avPlayerController;
	ISPlaybackStateTransitionManager* __transitionManager;
	int __previousPlaybackState;
	id __videoTimeObserver;
	AVPlayer* __videoPlayer;
	id __videoPlayerPerformanceDiagnosticsTimeObserver;
	AVPlayer* __audioPlayer;
	int __currentPlaybackID;
	int __hasStartedVideoForCurrentPlayback;
	float __lastHintProgress;
	double _maximumVideoTransitionDelay;
	double __videoPlaybackRequestTime;
	SCD_Struct_IS1 _idleTime;
	SCD_Struct_IS1 __videoDuration;

}

@property (nonatomic,retain) ISPlaybackSpec * playbackSpec;                                                                     //@synthesize playbackSpec=_playbackSpec - In the implementation block
@property (assign,nonatomic) float volume;                                                                                      //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) AVPlayerItem * videoPlayerItem;                                                                    //@synthesize videoPlayerItem=_videoPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayerItem * audioPlayerItem;                                                                    //@synthesize audioPlayerItem=_audioPlayerItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_IS1 idleTime;                                                                           //@synthesize idleTime=_idleTime - In the implementation block
@property (assign,nonatomic) double maximumVideoTransitionDelay;                                                                //@synthesize maximumVideoTransitionDelay=_maximumVideoTransitionDelay - In the implementation block
@property (assign,nonatomic) float timeOffset;                                                                                  //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) float vitalityPlayRate;                                                                            //@synthesize vitalityPlayRate=_vitalityPlayRate - In the implementation block
@property (assign,nonatomic) float vitalityHintPlayRate;                                                                        //@synthesize vitalityHintPlayRate=_vitalityHintPlayRate - In the implementation block
@property (assign,nonatomic) float hintProgress;                                                                                //@synthesize hintProgress=_hintProgress - In the implementation block
@property (assign,nonatomic) int playbackState;                                                                                 //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) float playRate;                                                                                    //@synthesize playRate=_playRate - In the implementation block
@property (nonatomic,copy) id playbackEndHandler;                                                                               //@synthesize playbackEndHandler=_playbackEndHandler - In the implementation block
@property (nonatomic,readonly) NSSet * outputs; 
@property (assign,nonatomic) int audioPlayerStatus;                                                                             //@synthesize audioPlayerStatus=_audioPlayerStatus - In the implementation block
@property (assign,nonatomic) int videoPlayerStatus;                                                                             //@synthesize videoPlayerStatus=_videoPlayerStatus - In the implementation block
@property (nonatomic,retain) NSError * videoPlayerError;                                                                        //@synthesize videoPlayerError=_videoPlayerError - In the implementation block
@property (nonatomic,retain) NSError * audioPlayerError;                                                                        //@synthesize audioPlayerError=_audioPlayerError - In the implementation block
@property (nonatomic,readonly) ISReuseQueue * _playerReuseQueue;                                                                //@synthesize _playerReuseQueue=__playerReuseQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * _outputs;                                                                          //@synthesize _outputs=__outputs - In the implementation block
@property (assign,setter=_setCurrentTransitionRequestID:,nonatomic) int _currentTransitionRequestID;                            //@synthesize _currentTransitionRequestID=__currentTransitionRequestID - In the implementation block
@property (nonatomic,readonly) ISAVPlayerController * _avPlayerController;                                                      //@synthesize _avPlayerController=__avPlayerController - In the implementation block
@property (nonatomic,readonly) ISPlaybackStateTransitionManager * _transitionManager;                                           //@synthesize _transitionManager=__transitionManager - In the implementation block
@property (assign,setter=_setPreviousPlaybackState:,nonatomic) int _previousPlaybackState;                                      //@synthesize _previousPlaybackState=__previousPlaybackState - In the implementation block
@property (setter=_setVideoTimeObserver:,nonatomic,retain) id _videoTimeObserver;                                               //@synthesize _videoTimeObserver=__videoTimeObserver - In the implementation block
@property (nonatomic,readonly) AVPlayer * _videoPlayer;                                                                         //@synthesize _videoPlayer=__videoPlayer - In the implementation block
@property (nonatomic,readonly) id _videoPlayerPerformanceDiagnosticsTimeObserver;                                               //@synthesize _videoPlayerPerformanceDiagnosticsTimeObserver=__videoPlayerPerformanceDiagnosticsTimeObserver - In the implementation block
@property (nonatomic,readonly) AVPlayer * _audioPlayer;                                                                         //@synthesize _audioPlayer=__audioPlayer - In the implementation block
@property (assign,setter=_setCurrentPlaybackID:,nonatomic) int _currentPlaybackID;                                              //@synthesize _currentPlaybackID=__currentPlaybackID - In the implementation block
@property (assign,setter=_setHasStartedVideoForCurrentPlayback:,nonatomic) int _hasStartedVideoForCurrentPlayback;              //@synthesize _hasStartedVideoForCurrentPlayback=__hasStartedVideoForCurrentPlayback - In the implementation block
@property (assign,setter=_setVideoPlaybackRequestTime:,nonatomic) double _videoPlaybackRequestTime;                             //@synthesize _videoPlaybackRequestTime=__videoPlaybackRequestTime - In the implementation block
@property (assign,setter=_setLastHintProgress:,nonatomic) float _lastHintProgress;                                              //@synthesize _lastHintProgress=__lastHintProgress - In the implementation block
@property (setter=_setVideoDuration:) SCD_Struct_IS1 _videoDuration;                                                            //@synthesize _videoDuration=__videoDuration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)resetPlayerCache;
+(id)_sharedPlayerReuseQueue;
+(id)avfQueue;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(void)_setVideoDuration:(SCD_Struct_IS1)arg1 ;
-(SCD_Struct_IS1)_videoDuration;
-(int)playbackState;
-(AVPlayer *)_videoPlayer;
-(void)setPlaybackSpec:(ISPlaybackSpec *)arg1 ;
-(void)setVolume:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(float)timeOffset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSSet *)outputs;
-(SCD_Struct_IS1)idleTime;
-(void)setIdleTime:(SCD_Struct_IS1)arg1 ;
-(float)volume;
-(void)_setPlaybackState:(int)arg1 ;
-(void)_updateStatus;
-(AVPlayerItem *)videoPlayerItem;
-(NSHashTable *)_outputs;
-(void)_configureOutput:(id)arg1 ;
-(AVPlayer *)_audioPlayer;
-(void)_updatePlayerController;
-(void)_updatePlayerControllerVolume;
-(void)_setPreviousPlaybackState:(int)arg1 ;
-(void)_setTimeOffset:(float)arg1 ;
-(void)_setVitalityPlayRate:(float)arg1 ;
-(void)_setHintProgress:(float)arg1 ;
-(void)_setPlayRate:(float)arg1 ;
-(void)_handleMediaServiceResetIfNecessaryWithError:(id)arg1 ;
-(void)_setVideoPlayerError:(id)arg1 ;
-(void)_setAudioPlayerError:(id)arg1 ;
-(void)_setAudioPlayerStatus:(int)arg1 ;
-(void)_setVideoPlayerStatus:(int)arg1 ;
-(ISAVPlayerController *)_avPlayerController;
-(int)_previousPlaybackState;
-(ISPlaybackSpec *)playbackSpec;
-(int)_currentPlaybackID;
-(void)_setCurrentPlaybackID:(int)arg1 ;
-(void)_performBeginPlaybackTransition;
-(float)playRate;
-(float)hintProgress;
-(void)_startVideoPlaybackWithPlaybackID:(int)arg1 ;
-(float)vitalityPlayRate;
-(float)vitalityHintPlayRate;
-(ISPlaybackStateTransitionManager *)_transitionManager;
-(void)_setLastHintProgress:(float)arg1 ;
-(void)_setCurrentTransitionRequestID:(int)arg1 ;
-(SCD_Struct_IS1)_playbackStartTime;
-(float)_lastHintProgress;
-(void)_setHasStartedVideoForCurrentPlayback:(int)arg1 ;
-(int)_hasStartedVideoForCurrentPlayback;
-(SCD_Struct_IS1)_playbackEndTime;
-(id)_videoTimeObserver;
-(void)_videoDidPlayToEndTime;
-(void)_setVideoTimeObserver:(id)arg1 ;
-(void)_setVideoPlaybackRequestTime:(double)arg1 ;
-(int)_currentTransitionRequestID;
-(void)_didEndTransitionToPlaybackState:(int)arg1 forTransitionRequestID:(int)arg2 finished:(char)arg3 ;
-(double)_videoPlaybackRequestTime;
-(void)_callPlaybackEndHandler;
-(id)playbackEndHandler;
-(void)setPlaybackEndHandler:(id)arg1 ;
-(void)transitionManager:(id)arg1 didEndTransitionToPlaybackState:(int)arg2 forRequestID:(int)arg3 finished:(char)arg4 ;
-(void)avPlayerControllerDidBeginPlaying:(id)arg1 ;
-(void)avPlayerControllerWillEndPlaying:(id)arg1 ;
-(void)avPlayerControllerDidEndPlaying:(id)arg1 ;
-(void)avPlayerControllerDidEndSeeking:(id)arg1 seekTime:(SCD_Struct_IS1)arg2 didFinish:(char)arg3 ;
-(SCD_Struct_IS1)cachedDuration;
-(void)setVideoPlayerItem:(AVPlayerItem *)arg1 ;
-(void)setAudioPlayerItem:(AVPlayerItem *)arg1 ;
-(void)transitionToPlaybackState:(int)arg1 playRate:(float)arg2 withTimeOffset:(float)arg3 vitalityPlayRate:(float)arg4 hintProgress:(float)arg5 ;
-(AVPlayerItem *)audioPlayerItem;
-(double)maximumVideoTransitionDelay;
-(void)setMaximumVideoTransitionDelay:(double)arg1 ;
-(void)setVitalityHintPlayRate:(float)arg1 ;
-(int)audioPlayerStatus;
-(int)videoPlayerStatus;
-(NSError *)videoPlayerError;
-(NSError *)audioPlayerError;
-(ISReuseQueue *)_playerReuseQueue;
-(id)_videoPlayerPerformanceDiagnosticsTimeObserver;
@end


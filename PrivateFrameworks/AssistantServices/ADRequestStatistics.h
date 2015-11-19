/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADAudioStackTracking.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSMutableArray, NSString, NSMutableDictionary, NSArray, NSError;

@interface ADRequestStatistics : NSObject <ADAudioStackTracking> {

	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _baselineTime;
	NSMutableArray* _addViewsReceivedTimes;
	NSNumber* _launchAppTime;
	NSNumber* _requestCompletedTime;
	NSMutableArray* _partialRecognitionTimes;
	NSNumber* _speechRecognizedTime;
	NSMutableArray* _localPartialRecognitionTimes;
	NSNumber* _localSpeechStartedTime;
	NSNumber* _localFinalSpeechRecognition;
	NSString* _localSpeechModelInfo;
	NSNumber* _startedRecordingTime;
	NSNumber* _activationEventTime;
	NSNumber* _expectedActivationEventTime;
	int _activationEvent;
	NSMutableDictionary* _requestTimestamps;
	NSString* _connectionPolicyId;
	NSString* _connectionRouteId;
	double _connectionDelay;
	NSNumber* _recordingWillStartTime;
	char _usedBluetooth;
	char _aggressivelyPrewarmed;
	NSArray* _enabledLogging;
	NSString* _requestId;
	char _isFailure;
	NSError* _failureError;
	char _isCancelled;
	char _usedMotionUpGesture;
	char _musicWasDetected;
	char _endpointWasExtendedDueToMusicClassifier;
	char _partialResultAcousticIdTimerScheduled;
	char _partialResultAcousticIdTimerFired;
	NSNumber* _useNonBlockingHaptics;
	double _defrostXPCMessageToProcessLaunchDuration;
	double _audioStackInitDuration;
	double _audioStackConfigureDuration;
	double _audioStackPrewarmDuration;
	double _audioStackPrepareDuration;
	double _audioStackStartCaptureDuration;
	char _usedManualEndpointing;
	NSNumber* _homeButtonUpFromBeep;
	double _processLaunchTime;

}

@property (nonatomic,copy) NSNumber * recordingWillStartTime;              //@synthesize recordingWillStartTime=_recordingWillStartTime - In the implementation block
@property (assign,nonatomic) char usedBluetooth;                           //@synthesize usedBluetooth=_usedBluetooth - In the implementation block
@property (assign,nonatomic) char aggressivelyPrewarmed;                   //@synthesize aggressivelyPrewarmed=_aggressivelyPrewarmed - In the implementation block
@property (nonatomic,copy) NSArray * enabledLogging;                       //@synthesize enabledLogging=_enabledLogging - In the implementation block
@property (nonatomic,copy) NSString * requestId;                           //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) NSNumber * homeButtonUpFromBeep;              //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (assign,nonatomic) char usedManualEndpointing;                   //@synthesize usedManualEndpointing=_usedManualEndpointing - In the implementation block
@property (assign,nonatomic) char isFailure;                               //@synthesize isFailure=_isFailure - In the implementation block
@property (nonatomic,copy) NSError * failureError;                         //@synthesize failureError=_failureError - In the implementation block
@property (assign,nonatomic) char isCancelled;                             //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) double processLaunchTime;                     //@synthesize processLaunchTime=_processLaunchTime - In the implementation block
@property (assign,nonatomic) char usedMotionUpGesture;                     //@synthesize usedMotionUpGesture=_usedMotionUpGesture - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestIndifferentMetrics;
-(double)processLaunchTime;
-(void)recordDefrostXPCMessageToProcessLaunchDuration:(double)arg1 ;
-(void)setMusicWasDetected;
-(void)setPartialResultAcousticIdTimerScheduled;
-(void)setPartialResultAcousticIdTimerFired;
-(void)markBaselineTime;
-(void)markAddViewsReceived;
-(void)markLaunchApp;
-(void)markSpeechRecognized;
-(void)markPartialSpeechRecognition;
-(void)markRequestCompleted;
-(id)requestDuration;
-(char)hasValidTimingsForCompletedRequest;
-(void)setConnectionPolicyId:(id)arg1 routeId:(id)arg2 connectionDelay:(double)arg3 ;
-(void)setRecordingWillStartTime:(NSNumber *)arg1 ;
-(void)markStartedRecordingWithSystemUptime:(double)arg1 ;
-(void)setUsedBluetooth:(char)arg1 ;
-(void)setEndpointWasExtendedDueToMusicClassifier;
-(char)hasSpeechRecognized;
-(void)markLocalSpeechStarted;
-(id)localSpeechStartedDelaySinceRecordingStarted;
-(void)setLocalSpeechModelInfo:(id)arg1 ;
-(void)markLocalPartialSpeechRecognition;
-(void)markLocalFinalSpeechRecognition;
-(id)localFinalSpeechRecognitionDelaySinceBaseline;
-(void)setIsFailure:(char)arg1 ;
-(void)setFailureError:(NSError *)arg1 ;
-(void)setValuesForSpeechRequestOptions:(id)arg1 ;
-(void)setUsedMotionUpGesture:(char)arg1 ;
-(void)setUsedManualEndpointing:(char)arg1 ;
-(void)trackAudioStackInitDuration:(double)arg1 ;
-(void)trackAudioStackConfigureDuration:(double)arg1 ;
-(void)trackAudioStackPrepareDuration:(double)arg1 ;
-(void)trackAudioStackPrewarmDuration:(double)arg1 ;
-(void)trackAudioStackStartCaptureDuration:(double)arg1 ;
-(void)setEnabledLogging:(NSArray *)arg1 ;
-(void)setActivationEventTime:(double)arg1 expectedActivationEventTime:(double)arg2 forEvent:(int)arg3 ;
-(double)_systemUptime;
-(NSNumber *)recordingWillStartTime;
-(char)usedBluetooth;
-(char)aggressivelyPrewarmed;
-(void)setAggressivelyPrewarmed:(char)arg1 ;
-(NSArray *)enabledLogging;
-(char)usedManualEndpointing;
-(char)isFailure;
-(void)setProcessLaunchTime:(double)arg1 ;
-(char)usedMotionUpGesture;
-(NSError *)failureError;
-(id)init;
-(void)reset;
-(char)isCancelled;
-(id)metrics;
-(NSNumber *)homeButtonUpFromBeep;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2 ;
-(void)setIsCancelled:(char)arg1 ;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
@end

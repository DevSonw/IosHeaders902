/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue;

@interface NFMDataLogger : NSObject {

	char _recordingTelemetry;
	NSOperationQueue* _activityQueue;
	NSOperationQueue* _accelerationQueue;

}

@property (assign,nonatomic) char recordingTelemetry;                           //@synthesize recordingTelemetry=_recordingTelemetry - In the implementation block
@property (nonatomic,retain) NSOperationQueue * activityQueue;                  //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accelerationQueue;              //@synthesize accelerationQueue=_accelerationQueue - In the implementation block
+(id)sharedLogger;
-(void)setActivityQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)activityQueue;
-(void)beginRecordingTelemetry;
-(void)endRecordingTelemetry;
-(void)recordRSSIStrength:(float)arg1 ;
-(void)recordRequestedUserResponse;
-(void)recordUserResponse:(int)arg1 ;
-(void)recordLeashed;
-(void)recordLeashBroke;
-(char)recordingTelemetry;
-(void)setRecordingTelemetry:(char)arg1 ;
-(NSOperationQueue *)accelerationQueue;
-(void)setAccelerationQueue:(NSOperationQueue *)arg1 ;
@end

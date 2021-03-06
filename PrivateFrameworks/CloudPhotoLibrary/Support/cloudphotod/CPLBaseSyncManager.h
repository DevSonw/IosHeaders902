/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <cloudphotod/CPLEngineSyncManagerImplementation.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject, NSProgress, NSString;

@interface CPLBaseSyncManager : CPLPlatformObject <CPLEngineSyncManagerImplementation> {

	NSCountedSet* _activities;
	unsigned _indicatorAge;
	double _startShowingIndicatorTime;
	NSObject*<OS_dispatch_queue> _indicatorQueue;
	char _foreground;
	NSProgress* _progress;
	unsigned _currentState;
	char _closed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_shouldShowIndicator;
-(void)_actuallyStartShowingIndicatorLocked;
-(void)_emitActivityStateLog;
-(void)_actuallyStopShowingIndicatorLocked;
-(void)_startShowingIndicator:(id)arg1 ;
-(long long)_baseProgressForState:(unsigned)arg1 totalUnits:(long long*)arg2 ;
-(void)_stopShowingIndicator:(id)arg1 ;
-(void)setSyncSessionShouldBeForeground:(char)arg1 ;
-(void)syncSessionDidFailWithError:(id)arg1 ;
-(void)syncSessionDidSucceed;
-(void)didFinishSyncSession;
-(void)didMoveToState:(unsigned)arg1 ;
-(void)willStartSyncSession;
-(void)didProgress:(float)arg1 userInfo:(id)arg2 forState:(unsigned)arg3 ;
-(void)prepareForClose;
-(void)beginClientWork:(id)arg1 ;
-(void)endClientWork:(id)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
@end


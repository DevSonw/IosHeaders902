/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HSMediaLibraryImportObserverDelegate;
@class NSTimer;

@interface HSMediaLibraryImportObserver : NSObject {

	NSTimer* _updateTimer;
	unsigned _consecutiveUpdateFailures;
	char _stopped;
	char _updating;
	id<HSMediaLibraryImportObserverDelegate> _delegate;
	double _updateInterval;

}

@property (assign,nonatomic) id<HSMediaLibraryImportObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isUpdating,nonatomic,readonly) char updating;                              //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) double updateInterval;                                          //@synthesize updateInterval=_updateInterval - In the implementation block
-(char)isUpdating;
-(void)setDelegate:(id<HSMediaLibraryImportObserverDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HSMediaLibraryImportObserverDelegate>)delegate;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)_updateImportStatus:(id)arg1 ;
-(void)beginUpdating;
-(void)stopUpdating;
@end

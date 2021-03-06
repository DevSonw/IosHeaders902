/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYProgressObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PSYProgressObserver, PSYWatchSyncState, NPSDomainAccessor, NPSManager, NSString;

@interface PSDWatchSyncStateObserver : NSObject <PSYProgressObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	PSYProgressObserver* _progressObserver;
	PSYWatchSyncState* _syncState;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _preferencesManager;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_watchSyncStateFromProgressObserver:(id)arg1 ;
-(void)_updateWithState:(id)arg1 ;
-(void)_updateStateFromProgressObserver;
-(void)dealloc;
-(id)init;
-(void)progressObserverDidChangeState:(id)arg1 ;
-(void)progressObserverDidChangeProgress:(id)arg1 ;
-(void)progressObserver:(id)arg1 didFinishActivity:(id)arg2 withError:(id)arg3 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, CalPersistentLRUCacheItem, NSMutableDictionary, NSDate, NSObject, CalLimitingQueue, CalFileSensor;

@interface CalPersistentLRUCache : NSObject {

	NSString* _path;
	unsigned _capacity;
	CalPersistentLRUCacheItem* _firstCacheItem;
	CalPersistentLRUCacheItem* _lastCacheItem;
	unsigned _numItems;
	NSMutableDictionary* _cacheItemsByKey;
	double _expirationInterval;
	NSDate* _expirationDate;
	NSObject*<OS_dispatch_queue> _queue;
	CalLimitingQueue* _saveQueue;
	NSObject*<OS_dispatch_source> _expirationSource;
	CalFileSensor* _fileSensor;
	id _systemClockObserver;

}
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)initWithPath:(id)arg1 capacity:(unsigned)arg2 expirationInterval:(double)arg3 ;
-(void)_expire;
-(void)_writeToFile;
-(void)_readFromFile;
-(void)_resetExpirationTimer;
-(void)_removeCacheItem:(id)arg1 ;
-(void)_addCacheItem:(id)arg1 ;
-(void)_pruneIfNeeded;
-(void)_promoteCacheItem:(id)arg1 ;
-(void)_dataChanged;
-(id)cachedObjectForKey:(id)arg1 ;
@end

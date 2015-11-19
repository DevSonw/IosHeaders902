/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray, WBSHistorySessionIntervalCache;

@interface WBSHistorySessionController : NSObject {

	NSObject*<OS_dispatch_queue> _sessionCacheAccessQueue;
	NSMutableDictionary* _itemsBySession;
	NSArray* _orderedSessions;
	WBSHistorySessionIntervalCache* _intervalCache;

}
+(id)sharedSessionController;
-(void)dealloc;
-(id)init;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyItemsWereAdded:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)_loadSessionCache;
-(char)_getKey:(id*)arg1 forDate:(double)arg2 ;
-(id)_orderedSessionKeys;
-(void)_insertItem:(id)arg1 withSessionKey:(id)arg2 ;
-(void)_addItemToSessionCache:(id)arg1 ;
-(void)_dispatchHistorySessionsDidChangeNotification;
-(void)_removeItemFromSessionCache:(id)arg1 ;
-(void)_clearSessionCache;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)numberOfSessions;
-(unsigned)numberOfItemsVisitedInSession:(id)arg1 ;
-(id)itemsLastVisitedInSession:(id)arg1 ;
-(id)orderedSessions;
-(id)sessionForItem:(id)arg1 ;
@end

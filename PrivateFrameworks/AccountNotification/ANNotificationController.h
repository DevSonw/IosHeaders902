/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/and
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <and/ANBulletinBoardSectionProviderDelegate.h>
#import <and/ANBulletinBoardSectionProviderDataSource.h>
#import <libobjc.A.dylib/ANDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class ANNotificationStore, BBDataProviderConnection, NSObject, NSMutableDictionary, NSString;

@interface ANNotificationController : NSObject <ANBulletinBoardSectionProviderDelegate, ANBulletinBoardSectionProviderDataSource, ANDaemonProtocol> {

	ANNotificationStore* _notificationStore;
	BBDataProviderConnection* _bulletinBoardConnection;
	NSObject*<OS_dispatch_queue> _bulletinBoardQueue;
	NSMutableDictionary* _sectionDataProvidersByID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pendingNotificationsForSectionProvider:(id)arg1 withMaximumCount:(unsigned)arg2 ;
-(void)bulletinBoardProviderDidClearSection:(id)arg1 ;
-(void)bulletinBoardProvider:(id)arg1 didClearNotificationsWithIdentifiers:(id)arg2 ;
-(void)bulletinBoardProvider:(id)arg1 didActivateNotificationWithIdentifier:(id)arg2 ;
-(void)bulletinBoardProvider:(id)arg1 didDismissNotificationWithIdentifier:(id)arg2 ;
-(id)_createSectionDataProviderForAccountTypeID:(id)arg1 ;
-(void)_unsafe_removeNotification:(id)arg1 ;
-(id)_clientSideNotifierWithMachServiceName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addNotification:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeNotificationWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeNotificationsWithEventID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

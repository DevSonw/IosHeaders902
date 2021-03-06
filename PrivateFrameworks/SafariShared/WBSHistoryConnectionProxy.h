/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistoryClientProtocol.h>
#import <libobjc.A.dylib/WBSHistoryConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface WBSHistoryConnectionProxy : NSObject <WBSHistoryClientProtocol, WBSHistoryConnectionProtocol> {

	NSXPCConnection* _connection;
	char _registeredForHistoryNotifications;
	NSObject*<OS_dispatch_queue> _connectionProxyQueue;

}

@property (getter=isRegisteredForHistoryNotifications,nonatomic,readonly) char registeredForHistoryNotifications;              //@synthesize registeredForHistoryNotifications=_registeredForHistoryNotifications - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> connectionProxyQueue;                                              //@synthesize connectionProxyQueue=_connectionProxyQueue - In the implementation block
-(void)dealloc;
-(id)init;
-(void)clearHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginURLCompletionSession:(/*^block*/id)arg1 ;
-(void)getVisitedLinksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)groupVisitsIntoSessionsBetweenStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)recordVisitToURL:(id)arg1 title:(id)arg2 wasHTTPNonGet:(char)arg3 visitWasFailure:(char)arg4 increaseVisitCount:(char)arg5 origin:(int)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)recordRedirectFromVisitWithUUID:(id)arg1 destinationURL:(id)arg2 origin:(int)arg3 date:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)updateTitle:(id)arg1 forVisitWithUUID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)clearHistoryVisitsAddedAfterDate:(id)arg1 endDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeItemsWithURLsInResponseToUserAction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)makePermanentAllTestDriveHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllTestDriveHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)debugGetDatabaseURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionProxyQueue;
-(char)isRegisteredForHistoryNotifications;
-(void)_registerForHistoryNotifications;
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(void)processRemoteHistoryNotification:(id)arg1 ;
-(void)registerForHistoryNotifications;
-(void)unregisterForHistoryNotifications;
-(void)killService;
@end


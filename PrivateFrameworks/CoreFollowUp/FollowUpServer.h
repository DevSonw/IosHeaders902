/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/followupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <followupd/ClientInterfaceDelegate.h>

@class NSXPCListener, NSLock, NSMutableDictionary, NSString;

@interface FollowUpServer : NSObject <NSXPCListenerDelegate, ClientInterfaceDelegate> {

	NSXPCListener* _listener;
	NSLock* _clientLock;
	NSMutableDictionary* _clientsByUniqueIdentifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clientInterface:(id)arg1 wasInvalidatedWithError:(id)arg2 ;
-(id)init;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

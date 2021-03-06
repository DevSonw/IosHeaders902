/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDaemonConnection.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSXPCConnection, HMDProcessInfo, NSString, HMMessageDispatcher, NSMutableSet, NSObject, NSDictionary, HMDApplicationRegistry, NSSet;

@interface HMDConnectionProxy : NSObject <HMDaemonConnection> {

	char _entitledForAPIAccess;
	char _entitledForSPIAccess;
	char _entitledForBackgroundMode;
	char _ready;
	char _activated;
	NSXPCConnection* _xpcConnection;
	HMDProcessInfo* _processInfo;
	NSString* _clientName;
	HMMessageDispatcher* _recvDispatcher;
	NSMutableSet* _pendingRequests;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_group> _activeMessageTracker;
	unsigned _activeMessageCount;
	NSDictionary* _privateAccessEntitlement;
	HMDApplicationRegistry* _appRegistry;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int clientPid; 
@property (nonatomic,readonly) id remoteProxy; 
@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSSet * activeRequests; 
@property (assign,nonatomic,__weak) HMDProcessInfo * processInfo;                                                  //@synthesize processInfo=_processInfo - In the implementation block
@property (getter=isAuthorizedForHomeDataAccess,nonatomic,readonly) char authorizedForHomeDataAccess; 
@property (getter=isEntitledForAPIAccess,nonatomic,readonly) char entitledForAPIAccess;                            //@synthesize entitledForAPIAccess=_entitledForAPIAccess - In the implementation block
@property (getter=isEntitledForSPIAccess,nonatomic,readonly) char entitledForSPIAccess;                            //@synthesize entitledForSPIAccess=_entitledForSPIAccess - In the implementation block
@property (getter=isAuthorizedForLocationAccess,nonatomic,readonly) char authorizedForLocationAccess; 
@property (getter=isEntitledForBackgroundMode,nonatomic,readonly) char entitledForBackgroundMode;                  //@synthesize entitledForBackgroundMode=_entitledForBackgroundMode - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSString * companionAppBundleIdentifier; 
@property (nonatomic,readonly) NSString * teamIdentifier; 
@property (nonatomic,readonly) NSString * effectiveLocationBundleIdentifier; 
@property (nonatomic,retain) NSString * clientName;                                                                //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * recvDispatcher;                                                 //@synthesize recvDispatcher=_recvDispatcher - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingRequests;                                                       //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                               //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) char ready;                                                                           //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic) char activated;                                                                       //@synthesize activated=_activated - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> activeMessageTracker;                                    //@synthesize activeMessageTracker=_activeMessageTracker - In the implementation block
@property (assign,nonatomic) unsigned activeMessageCount;                                                          //@synthesize activeMessageCount=_activeMessageCount - In the implementation block
@property (nonatomic,retain) NSDictionary * privateAccessEntitlement;                                              //@synthesize privateAccessEntitlement=_privateAccessEntitlement - In the implementation block
@property (assign,nonatomic,__weak) HMDApplicationRegistry * appRegistry;                                          //@synthesize appRegistry=_appRegistry - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(HMDProcessInfo *)processInfo;
-(void)deactivate;
-(void)activate;
-(char)activated;
-(void)setActivated:(char)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDApplicationRegistry *)appRegistry;
-(char)isAuthorizedForLocationAccess;
-(char)isEntitledForSPIAccess;
-(void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)recheckinWithName:(id)arg1 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_group>)activeMessageTracker;
-(HMMessageDispatcher *)recvDispatcher;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4 appRegistry:(id)arg5 ;
-(char)shouldSendResponseForMessageIdentifier:(id)arg1 ;
-(id)remoteProxy;
-(NSSet *)activeRequests;
-(void)setAppRegistry:(HMDApplicationRegistry *)arg1 ;
-(void)setActiveMessageTracker:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRecvDispatcher:(HMMessageDispatcher *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(NSString *)effectiveLocationBundleIdentifier;
-(NSString *)applicationBundleIdentifier;
-(unsigned)activeMessageCount;
-(void)setActiveMessageCount:(unsigned)arg1 ;
-(id)_displayName;
-(int)clientPid;
-(NSString *)clientName;
-(NSString *)companionAppBundleIdentifier;
-(NSString *)teamIdentifier;
-(NSDictionary *)privateAccessEntitlement;
-(NSMutableSet *)pendingRequests;
-(void)setClientName:(NSString *)arg1 ;
-(void)setReady:(char)arg1 ;
-(char)isAuthorizedForHomeDataAccess;
-(id)extractTeamIdentifier;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setProcessInfo:(HMDProcessInfo *)arg1 ;
-(char)isEntitledForAPIAccess;
-(char)isEntitledForBackgroundMode;
-(void)setPendingRequests:(NSMutableSet *)arg1 ;
-(char)ready;
-(void)setPrivateAccessEntitlement:(NSDictionary *)arg1 ;
@end


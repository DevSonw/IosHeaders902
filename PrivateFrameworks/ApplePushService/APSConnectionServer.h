/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <apsd/APSOutgoingMessageOriginator.h>

@protocol APSConnectionServerDelegate, OS_xpc_object;
@class NSString, NSData, NSSet, NSObject, NSOperationQueue, APSTokenState;

@interface APSConnectionServer : NSObject <APSOutgoingMessageOriginator> {

	id<APSConnectionServerDelegate> _delegate;
	NSString* _environmentName;
	NSData* _publicToken;
	unsigned _connectionMachPort;
	NSString* _connectionPortName;
	NSSet* _enabledTopics;
	NSSet* _ignoredTopics;
	NSSet* _opportunisticTopics;
	unsigned _messageSize;
	unsigned _largeMessageSize;
	char _enableCriticalReliability;
	char _usesAppLaunchStats;
	char _enableStatusChangeNotifications;
	int _clientPID;
	NSObject*<OS_xpc_object> _connection;
	NSOperationQueue* _queue;
	APSTokenState* _tokenState;

}

@property (assign,nonatomic) id<APSConnectionServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSSet * enabledTopics;                        //@synthesize enabledTopics=_enabledTopics - In the implementation block
@property (nonatomic,retain,readonly) NSSet * ignoredTopics;                        //@synthesize ignoredTopics=_ignoredTopics - In the implementation block
@property (nonatomic,retain,readonly) NSSet * opportunisticTopics;                  //@synthesize opportunisticTopics=_opportunisticTopics - In the implementation block
@property (nonatomic,readonly) char hasIdentity; 
@property (nonatomic,readonly) char isConnected; 
@property (assign,nonatomic) NSObject*<OS_xpc_object> connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain,readonly) NSString * environmentName;                   //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,retain,readonly) NSString * processName; 
@property (nonatomic,copy) NSData * publicToken;                                    //@synthesize publicToken=_publicToken - In the implementation block
@property (assign,nonatomic) unsigned messageSize;                                  //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) unsigned largeMessageSize;                             //@synthesize largeMessageSize=_largeMessageSize - In the implementation block
@property (assign,nonatomic) char enableCriticalReliability;                        //@synthesize enableCriticalReliability=_enableCriticalReliability - In the implementation block
@property (assign,nonatomic) char enableStatusChangeNotifications;                  //@synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications - In the implementation block
@property (assign,nonatomic) char usesAppLaunchStats;                               //@synthesize usesAppLaunchStats=_usesAppLaunchStats - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * tokenName; 
+(id)serverEnvironmentNames;
+(id)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2 ;
-(void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2 ;
-(void)handleReceivedPerAppToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(id)connectionPortName;
-(void)handleConnectionStatusChanged:(char)arg1 ;
-(void)handleReceivedMessage:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 environmentName:(id)arg2 connectionPortName:(id)arg3 connection:(id)arg4 ;
-(NSString *)tokenName;
-(void)setEnableStatusChangeNotifications:(char)arg1 ;
-(void)_initiateConnectionIfNecessary;
-(void)_lookUpMachPort;
-(void)_suspendQueue;
-(id)processNameWithLabels:(char)arg1 ;
-(void)_resumeQueue;
-(void)_enqueueXPCMessage:(/*^block*/id)arg1 wakingClient:(char)arg2 highPriority:(char)arg3 ;
-(void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned)arg2 ;
-(void)_requestMissingPerAppTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)saveAndUpdateDelegate;
-(void)_savePersistentConnectionTopics;
-(void)connectionHandshakeDidComplete;
-(void)handleSendOutgoingMessage:(id)arg1 ;
-(void)handleCancelOutgoingMessageWithID:(unsigned)arg1 ;
-(void)handleFakeMessage:(id)arg1 ;
-(void)handleRequestPerAppTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)handleInvalidatePerAppTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)handleAckIncomingMessageWithGuid:(id)arg1 ;
-(char)enableStatusChangeNotifications;
-(void)setDelegate:(id<APSConnectionServerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(id<APSConnectionServerDelegate>)delegate;
-(NSString *)processName;
-(void)close;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)connectionInvalidated;
-(void)setLargeMessageSize:(unsigned)arg1 ;
-(NSSet *)ignoredTopics;
-(NSSet *)opportunisticTopics;
-(char)usesAppLaunchStats;
-(char)hasIdentity;
-(char)isConnected;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 ;
-(void)setPublicToken:(NSData *)arg1 ;
-(NSData *)publicToken;
-(NSSet *)enabledTopics;
-(char)enableCriticalReliability;
-(unsigned)largeMessageSize;
-(void)setMessageSize:(unsigned)arg1 ;
-(unsigned)messageSize;
-(void)setEnableCriticalReliability:(char)arg1 ;
-(NSString *)environmentName;
-(void)setUsesAppLaunchStats:(char)arg1 ;
@end

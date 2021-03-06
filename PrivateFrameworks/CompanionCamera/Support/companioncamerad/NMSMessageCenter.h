/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol NMSMessageCenterDelegate, OS_dispatch_queue;
@class NSString, IDSService, NSMutableDictionary, NSObject;

@interface NMSMessageCenter : NSObject <IDSServiceDelegate> {

	NSString* _serviceIdentifier;
	IDSService* _service;
	NSMutableDictionary* _requestHandlers;
	NSMutableDictionary* _pendingRequests;
	NSMutableDictionary* _pendingResponses;
	NSMutableDictionary* _pbMapping;
	char _previouslyConnected;
	double _lastDataReceived;
	id<NMSMessageCenterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<NMSMessageCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * idsService; 
@property (getter=isConnected,nonatomic,readonly) char connected; 
@property (nonatomic,readonly) double timeSinceLastDataReceived; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> actionQ; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addTarget:(id)arg1 action:(SEL)arg2 forMessageID:(unsigned short)arg3 ;
-(double)timeSinceLastDataReceived;
-(void)_checkConnected;
-(void)_handleError:(id)arg1 forRequest:(id)arg2 ;
-(void)_handleError:(id)arg1 forResponse:(id)arg2 ;
-(id)_findPendingRequestByIdentifier:(id)arg1 ;
-(void)_invalidateOutgoingRequest:(id)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<NMSMessageCenterDelegate>)arg1 ;
-(NSString *)description;
-(id<NMSMessageCenterDelegate>)delegate;
-(void)resume;
-(id)_queue;
-(char)isConnected;
-(id)initWithIDSServiceIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)actionQ;
-(void)dropExtantMessages;
-(void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3 ;
-(id)_pbMappingForMessageID:(unsigned short)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(void)_sendResponse:(id)arg1 ;
@end


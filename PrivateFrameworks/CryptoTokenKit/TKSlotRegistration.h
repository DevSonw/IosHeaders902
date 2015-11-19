/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/ctkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolSlotRegistry.h>

@class NSXPCConnection, TKSlotServer, NSString, NSXPCListenerEndpoint;

@interface TKSlotRegistration : NSObject <TKProtocolSlotRegistry> {

	NSXPCConnection* _connection;
	TKSlotServer* _server;
	NSString* _slotName;
	NSString* _slotType;
	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,copy) NSString * slotName;                               //@synthesize slotName=_slotName - In the implementation block
@property (nonatomic,readonly) NSString * slotType;                           //@synthesize slotType=_slotType - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(char)handleConnection:(id)arg1 server:(id)arg2 ;
-(id)initWithConnection:(id)arg1 server:(id)arg2 ;
-(void)setSlotName:(NSString *)arg1 ;
-(NSString *)slotType;
-(NSString *)slotName;
-(NSXPCListenerEndpoint *)endpoint;
-(void)addSlotWithEndpoint:(id)arg1 name:(id)arg2 type:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

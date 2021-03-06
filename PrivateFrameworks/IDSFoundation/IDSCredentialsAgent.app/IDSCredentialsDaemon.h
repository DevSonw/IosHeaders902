/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSCredentialsAgent.app/IDSCredentialsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IDSCredentialsDaemon : NSObject {

	NSMutableDictionary* _uniqueIDToCredentialLoaderMap;
	void* _transaction;
	id _stateMonitor;

}
+(id)sharedInstance;
-(void)logState;
-(void)_pidSuspended:(int)arg1 ;
-(void)_terminate;
-(void)addCredentialLoader:(id)arg1 ;
-(void)removeCredentialLoaderForUniqueID:(id)arg1 ;
-(id)credentialLoaderForUniqueID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)shutdown;
@end


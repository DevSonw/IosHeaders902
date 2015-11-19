/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistant_service/AFServiceHelper.h>
#import <assistant_service/AFProviderService.h>

@protocol AFProviderServiceDelegate;
@class NSString;

@interface ASServiceClient : NSObject <AFServiceHelper, AFProviderService> {

	id<AFProviderServiceDelegate> _providerServiceDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isDeviceLockedWithPasscode;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProviderServiceDelegate:(id)arg1 ;
-(void)dismissAssistant;
-(oneway void)doCommandForServicePath:(id)arg1 className:(id)arg2 infoDictionary:(id)arg3 reply:(/*^block*/id)arg4 ;
-(oneway void)beginSyncForServicePath:(id)arg1 className:(id)arg2 info:(id)arg3 reply:(/*^block*/id)arg4 ;
-(oneway void)clearDomainObjectsForServicePath:(id)arg1 className:(id)arg2 ;
-(oneway void)preheatBundleForServicePath:(id)arg1 ;
-(char)_classInstancesSufficientlyRespondToSyncSelectors:(Class)arg1 ;
-(char)openSensitiveURL:(id)arg1 ;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
@end

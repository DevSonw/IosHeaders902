/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSynapseSyncService.h>

@class NSString;

@interface ADSynapseSyncConnection : NSObject <AFSynapseSyncService>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)askForSync;
-(oneway void)syncForBundleID:(id)arg1 ;
@end


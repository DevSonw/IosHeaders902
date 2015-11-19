/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFManagedStorageService.h>

@class NSString;

@interface ADManagedStorageConnection : NSObject <AFManagedStorageService>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)setManagedStoreObject:(id)arg1 forKey:(id)arg2 ;
-(oneway void)fetchManagedStoreObjectForKey:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

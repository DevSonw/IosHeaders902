/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineIDMappingImplementation.h>

@class NSString;

@interface CPLPrequeliteIDMapping : CPLPrequeliteStorage <CPLEngineIDMappingImplementation>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)removeMappingForLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)status;
-(char)resetWithError:(id*)arg1 ;
-(char)resetAllFinalCloudIdentifiersWithError:(id*)arg1 ;
-(id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(char*)arg2 ;
-(char)markAllPendingIdentifiersAsFinalWithError:(id*)arg1 ;
-(id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(char*)arg2 ;
-(char)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(char)arg3 error:(id*)arg4 ;
-(char)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)hasPendingIdentifiers;
-(char)removeMappingForCloudIdentifier:(id)arg1 error:(id*)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/DCCachedItem.h>
@class DCRelativePath, DCFullPath, NSData, NSDictionary, NSDate;


@protocol DCCachedItem
@property (retain,readonly) DCRelativePath * relativePath; 
@property (retain,readonly) DCFullPath * fullPath; 
@property (retain,readonly) NSData * documentIdentifier; 
@property (retain,readonly) NSData * versionIdentifier; 
@property (retain,readonly) NSDictionary * localMetadata; 
@property (retain,readonly) NSDictionary * otherMetadata; 
@property (retain,readonly) NSDictionary * remoteMetadata; 
@property (retain,readonly) NSDictionary * parentContentsMetadata; 
@property (readonly) char existsOnDisk; 
@property (readonly) char isRoot; 
@property (readonly) char isUpToDate; 
@property (readonly) char isRemoteMetadataUpToDate; 
@property (readonly) char isContentsUpToDate; 
@property (retain,readonly) NSDictionary * remoteMetadataFromDisk; 
@property (retain,readonly) NSDate * lastRemoteMetadataUpdate; 
@property (retain,readonly) NSData * lastRemoteMetadataVersionIdentifier; 
@property (retain) NSDate * lastUploadDate; 
@property (retain) NSDate * lastDownloadDate; 
@required
-(char)hasBeenDownloaded;
-(NSData *)versionIdentifier;
-(char)needsUpload;
-(id)parent;
-(DCRelativePath *)relativePath;
-(DCFullPath *)fullPath;
-(NSData *)documentIdentifier;
-(NSDictionary *)remoteMetadata;
-(unsigned)relativeAge;
-(NSDictionary *)localMetadata;
-(NSDate *)lastRemoteMetadataUpdate;
-(NSDictionary *)otherMetadata;
-(char)updateDocumentIdentifier:(id)arg1;
-(void)setLastDownloadDate:(id)arg1;
-(void)updateItemFromResponseContainer:(id)arg1;
-(NSDictionary *)parentContentsMetadata;
-(char)isUpToDate;
-(char)needsDownload;
-(char)needsInitialUpload;
-(char)needsInitialSynchronization;
-(void)setLastUploadDate:(id)arg1;
-(char)needsInitialDownload;
-(char)existsOnDisk;
-(NSDictionary *)remoteMetadataFromDisk;
-(NSData *)lastRemoteMetadataVersionIdentifier;
-(NSDate *)lastUploadDate;
-(char)hasBeenUploaded;
-(NSDate *)lastDownloadDate;
-(char)existsOnServer;
-(char)hasBeenRemoved;
-(void)setHasBeenRemoved:(char)arg1;
-(void)clearRemoteMetadata;
-(void)renameRelativePath:(id)arg1;
-(char)isRemoteMetadataUpToDate;
-(char)isContentsUpToDate;
-(char)isRoot;

@end


@class DCRelativePath, DCFullPath, NSData, NSDictionary, NSDate, DCService;

@interface DCCachedItem : NSObject <DCCachedItem> {

	DCRelativePath* _path;
	NSData* _documentIdentifier;
	char _hasBeenRemoved;
	DCService* _service;

}

@property (nonatomic,retain) DCService * service;                                      //@synthesize service=_service - In the implementation block
@property (retain,readonly) DCRelativePath * relativePath;                             //@synthesize path=_path - In the implementation block
@property (retain,readonly) DCFullPath * fullPath; 
@property (retain,readonly) NSData * documentIdentifier; 
@property (retain,readonly) NSData * versionIdentifier; 
@property (retain,readonly) NSDictionary * localMetadata; 
@property (retain,readonly) NSDictionary * otherMetadata; 
@property (retain,readonly) NSDictionary * remoteMetadata; 
@property (retain,readonly) NSDictionary * parentContentsMetadata; 
@property (readonly) char existsOnDisk; 
@property (readonly) char isRoot; 
@property (readonly) char isUpToDate; 
@property (readonly) char isRemoteMetadataUpToDate; 
@property (readonly) char isContentsUpToDate; 
@property (retain,readonly) NSDictionary * remoteMetadataFromDisk; 
@property (retain,readonly) NSDate * lastRemoteMetadataUpdate; 
@property (retain,readonly) NSData * lastRemoteMetadataVersionIdentifier; 
@property (retain) NSDate * lastUploadDate; 
@property (retain) NSDate * lastDownloadDate; 
-(char)hasBeenDownloaded;
-(NSData *)versionIdentifier;
-(id)description;
-(id)debugDescription;
-(DCService *)service;
-(id)initWithRelativePath:(id)arg1 ;
-(char)needsUpload;
-(id)parent;
-(DCRelativePath *)relativePath;
-(DCFullPath *)fullPath;
-(NSData *)documentIdentifier;
-(NSDictionary *)remoteMetadata;
-(unsigned)relativeAge;
-(NSDictionary *)localMetadata;
-(NSDate *)lastRemoteMetadataUpdate;
-(NSDictionary *)otherMetadata;
-(char)updateDocumentIdentifier:(id)arg1 ;
-(void)setLastDownloadDate:(NSDate *)arg1 ;
-(void)updateItemFromResponseContainer:(id)arg1 ;
-(NSDictionary *)parentContentsMetadata;
-(char)isUpToDate;
-(char)needsDownload;
-(char)needsInitialUpload;
-(char)needsInitialSynchronization;
-(void)setLastUploadDate:(NSDate *)arg1 ;
-(char)needsInitialDownload;
-(char)existsOnDisk;
-(NSDictionary *)remoteMetadataFromDisk;
-(id)_pathsKeyString;
-(id)_dataKey;
-(id)_storedLocalMetadataWithoutNeedingLocking;
-(id)_contentsFullPath;
-(id)_fileSystemMetadataWithoutNeedingLocking;
-(void)_setLastRemoteMetadataVersionIdentifier:(id)arg1 ;
-(void)_setLastRemoteMetadataUpdate:(id)arg1 ;
-(void)_clearRemoteMetadataWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 ;
-(void)_clearRemoteMetadataOnDiskWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 ;
-(id)managedOtherMetadata;
-(id)_otherMetadataWithoutNeedingLocking;
-(NSData *)lastRemoteMetadataVersionIdentifier;
-(NSDate *)lastUploadDate;
-(id)_localGenerationIdentifierFullPath;
-(id)_localGenerationIdentifier;
-(void)_saveRemoteMetadataOnDisk:(id)arg1 documentIdentifier:(id)arg2 previousVersionIdentifier:(id)arg3 ;
-(void)_saveRootDocumentIdentifierOnDisk:(id)arg1 ;
-(void)_setRemoteMetadataWithoutNeedingLocking:(id)arg1 error:(id*)arg2 ;
-(char)_replaceFileWithURL:(id)arg1 error:(id*)arg2 ;
-(void)_setOtherMetadataWithoutNeedingLocking:(id)arg1 ;
-(void)_setStoredLocalMetadataWithoutNeedingLocking:(id)arg1 ;
-(void)_saveLastUpdateGenerationIdentifier;
-(char)hasBeenUploaded;
-(char)_replaceFileAtURL:(id)arg1 withData:(id)arg2 error:(id*)arg3 ;
-(void)_saveDictionary:(id)arg1 toPath:(id)arg2 previousVersionPath:(id)arg3 ;
-(NSDate *)lastDownloadDate;
-(char)_isUpToDateWithoutNeedingLocking;
-(char)existsOnServer;
-(char)hasBeenRemoved;
-(void)setHasBeenRemoved:(char)arg1 ;
-(void)clearRemoteMetadata;
-(void)renameRelativePath:(id)arg1 ;
-(char)isRemoteMetadataUpToDate;
-(char)isContentsUpToDate;
-(id)_storedLocalMetadata;
-(id)_storedLocalMetadataObjectForKey:(id)arg1 ;
-(id)_fileSystemMetadata;
-(id)_contents;
-(id)_readDictionaryFromPath:(id)arg1 ;
-(id)database;
-(char)isRoot;
-(void)setService:(DCService *)arg1 ;
@end

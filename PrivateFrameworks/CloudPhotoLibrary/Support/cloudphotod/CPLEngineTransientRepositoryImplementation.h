/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineTransientRepositoryImplementation <CPLEngineStorageImplementation>
@required
-(char)prepareForMinglingWithError:(id*)arg1;
-(id)transientSyncAnchor;
-(id)recordWithIdentifier:(id)arg1;
-(char)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2;
-(char)hasRecordWithIdentifier:(id)arg1;
-(unsigned)countOfAssetChanges;
-(char)appendBatch:(id)arg1 alreadyMingled:(char)arg2 error:(id*)arg3;
-(char)popChangeBatchOfDeletedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned)arg3 error:(id*)arg4;
-(char)popChangeBatchOfChangedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned)arg3 error:(id*)arg4;
-(char)popChangeBatchOfRemappedRecords:(id*)arg1 maximumCount:(unsigned)arg2 error:(id*)arg3;
-(char)resetMingledRecordsWithError:(id*)arg1;
-(char)deleteMingledRecordsWithError:(id*)arg1;
-(unsigned)countOfUnmingledRecords;
-(char)deleteAllRecordsWithError:(id*)arg1;

@end


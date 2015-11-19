/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceUploadQueueImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceUploadQueue : CPLPrequeliteStorage <CPLEngineResourceUploadQueueImplementation> {

	CPLPrequeliteVariable* _nextPosition;
	char _countOfOriginalsIsCached;
	unsigned _countOfOriginalImages;
	unsigned _countOfOriginalVideos;
	unsigned _countOfOriginalOthers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_getNextPosition:(unsigned*)arg1 andBumpWithError:(id*)arg2 ;
-(char)_enqueueResource:(id)arg1 error:(id*)arg2 ;
-(char)_deleteEnqueuedResource:(id)arg1 error:(id*)arg2 ;
-(id)_enqueuedResourceForResource:(id)arg1 ;
-(void)_cacheCountOfOriginalsIfNecessary;
-(id)status;
-(char)openWithError:(id*)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(unsigned)countOfOriginalImages;
-(unsigned)countOfOriginalVideos;
-(unsigned)countOfOriginalOthers;
-(id)queuedResourceForResource:(id)arg1 pendingCount:(unsigned*)arg2 ;
-(char)enqueueResource:(id)arg1 discardedResource:(id*)arg2 error:(id*)arg3 ;
-(char)discardResource:(id)arg1 discardedResource:(id*)arg2 error:(id*)arg3 ;
-(id)enumeratorForResourcesWithItemIdentifier:(id)arg1 includePending:(char)arg2 ;
-(char)makeResourceAsStale:(id)arg1 error:(id*)arg2 ;
-(char)discardResource:(id)arg1 currentlyStoredResource:(id*)arg2 lastReference:(char*)arg3 error:(id*)arg4 ;
-(char)reenqueueResource:(id)arg1 bumpRetryCount:(char)arg2 error:(id*)arg3 ;
-(char)markResourceReadyForBackgroundUpload:(id)arg1 error:(id*)arg2 ;
-(char)dequeueNextBackgroundUploadTask:(id*)arg1 resourceType:(unsigned)arg2 error:(id*)arg3 ;
-(char)resetDequeuedBackgroundUploadTasksWithError:(id*)arg1 ;
-(unsigned)countOfQueuedUploadTasks;
-(char)reenqueueUploadingResourcesWithError:(id*)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
@end

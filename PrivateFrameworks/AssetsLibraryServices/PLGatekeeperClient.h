/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSObject, NSArray;

@interface PLGatekeeperClient : NSObject {

	NSObject*<OS_dispatch_queue> _serialReplyQueue;
	NSArray* _previewRenderedContentURLs;
	NSObject*<OS_xpc_object> connection;
	NSArray* _previewAssetLocalIdentifiers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> replyQueue; 
@property (nonatomic,readonly) unsigned previewRenderedContentURLCount; 
@property (nonatomic,retain) NSArray * previewAssetLocalIdentifiers;                 //@synthesize previewAssetLocalIdentifiers=_previewAssetLocalIdentifiers - In the implementation block
@property (assign,nonatomic) NSObject*<OS_xpc_object> connection; 
+(id)sharedInstance;
+(id)securityPolicyErrorForMissingEntitlement:(id)arg1 ;
-(id)sendQueue;
-(void)computeFingerPrintsOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)sandboxExtensionForAssetResourcePath:(id)arg1 ;
-(void)setPreviewRenderedContentURLs:(id)arg1 ;
-(void)setPreviewAssetLocalIdentifiers:(NSArray *)arg1 ;
-(void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned)arg2 highPriority:(char)arg3 trackCPLDownload:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelCPLDownloadWithContext:(id)arg1 ;
-(void)updateStatusOfCPLDownloadWithContext:(id)arg1 ;
-(void)getSandboxExtensionForPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(char)arg3 streamingAllowed:(char)arg4 trackCPLDownload:(char)arg5 handler:(/*^block*/id)arg6 ;
-(void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addLogMark:(id)arg1 ;
-(void)reloadMomentGenerationOptions;
-(void)rebuildMomentsIncremental:(char)arg1 ;
-(void)waitForSearchIndexExistence;
-(void)setSearchIndexPaused:(char)arg1 synchronously:(char)arg2 reason:(id)arg3 ;
-(void)dropSearchIndexWithCompletion:(/*^block*/id)arg1 ;
-(void)getSearchIndexProgress:(/*^block*/id)arg1 ;
-(void)setPhotosXPCEndpointForEndpoint:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(id)fileURLForAssetURL:(id)arg1 withAdjustments:(char)arg2 ;
-(void)getPhotosAndVideosCountWithHandler:(/*^block*/id)arg1 ;
-(void)dataMigrationWillFinish;
-(void)getLibrarySizes:(/*^block*/id)arg1 ;
-(int)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(char)arg2 outFileExtension:(id*)arg3 ;
-(id)deviceSpecificReplyQueue;
-(int)fileDescriptorForAssetURL:(id)arg1 ;
-(void)revertToOriginalForAsset:(id)arg1 ;
-(void)addGroupWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deleteAssetWithURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setExternalUsageIntent:(unsigned)arg1 forAssetWithURL:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)finalizeOTARestoreRecreatingAlbums:(char)arg1 ;
-(void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 ;
-(void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2 ;
-(void)clearChangeStore;
-(id)getCurrentBulletins;
-(int)getCurrentApplicationBadgeCount;
-(id)getThumbnailImageDataForBulletinWithRecordID:(unsigned)arg1 ;
-(void)clearAllBulletinsWithLastClearedRecordID:(unsigned)arg1 ;
-(void)rebuildMomentLists;
-(void)analyzeAllMoments;
-(id)dumpMetadataForMomentsWithOutputPath:(id)arg1 ;
-(id)allMomentsMetadataWithOutputPath:(id)arg1 ;
-(void)rebuildCloudFeed;
-(void)rebuildAllThumbnails;
-(void)enableCloudPhotos:(char)arg1 ;
-(void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned)arg2 highPriority:(char)arg3 ;
-(id)cacheDeleteDebug:(id)arg1 ;
-(unsigned)previewRenderedContentURLCount;
-(id)previewRenderedContentURLAtIndex:(unsigned)arg1 ;
-(NSArray *)previewAssetLocalIdentifiers;
-(id)getStatus;
-(id)getXPCTransactionStatus;
-(void)getCPLRemainingUploadCountsWithHandler:(/*^block*/id)arg1 ;
-(void)updateLocationDataForAssetUUID:(id)arg1 ;
-(void)requestMasterThumbnailForAssetUUID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)runPeriodicMaintenanceTasks;
-(void)purgeExpiredOutboundSharingAssets;
-(void)pauseCloudPhotos;
-(void)unpauseCloudPhotos;
-(void)launchAssetsd;
-(void)importFileSystemAssetsWaitingForReply:(char)arg1 ;
-(void)enablePhotostreamsWithStreamID:(id)arg1 ;
-(void)updateModelAfterOTARestore;
-(void)repairSingletonObjects;
-(void)createPhotoLibraryDatabase;
-(char)hasCompletedRestorePostProcessing;
-(char)isReadyForCloudPhotoLibrary;
-(id)incompleteRestoreProcesses;
-(char)hasCompletedMomentAnalysis;
-(void)recoverFromCrashIfNeeded;
-(void)cleanupForStoreDemoMode;
-(void)requestAccessWithHandler:(/*^block*/id)arg1 ;
-(id)fileURLForNewAssetWithType:(unsigned)arg1 extension:(id)arg2 ;
-(id)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(char)arg3 wantURLOnly:(char)arg4 networkAccessAllowed:(char)arg5 trackCPLDownload:(char)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8 ;
-(void)requestImageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(char)arg3 wantURLOnly:(char)arg4 networkAccessAllowed:(char)arg5 trackCPLDownload:(char)arg6 handler:(/*^block*/id)arg7 ;
-(void)batchSaveAssetsWithJobDictionaries:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)waitUntilConnectionSendsAllMessages;
-(void)saveAssetWithJobDictionary:(id)arg1 handler:(/*^block*/id)arg2 imageSurface:(IOSurfaceRef)arg3 previewImageSurface:(IOSurfaceRef)arg4 ;
-(void)updateThumbnailsForPhotos:(id)arg1 waitForReply:(char)arg2 assignNewIndex:(char)arg3 forceRefresh:(char)arg4 ;
-(void)resetDupesAnalysis;
-(void)syncWithCloudPhotoLibrary;
-(id)getCPLState;
-(void)createPhotostreamAlbumWithStreamID:(id)arg1 ;
-(void)automaticallyDeleteEmptyAlbum:(id)arg1 ;
-(void)updateCameraPreviewWellImage:(id)arg1 ;
-(int)getCurrentModelVersion;
-(void)cleanupModelForDataMigration;
-(void)repairPotentialModelCorruption;
-(void)dumpCloudPhotosStatusIncludingDaemon:(char)arg1 ;
-(void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned)arg2 highPriority:(char)arg3 ;
-(void)softResetSyncStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeLocalDuplicates;
-(long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 ;
-(id)dictionaryWithContentsOfMediaFilePath:(id)arg1 ;
-(id)personInfoDictionaryForPersonID:(id)arg1 ;
-(void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2 ;
-(id)getKeywordsForAssetWithUUID:(id)arg1 ;
-(char)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2 ;
-(void)invalidateLocationShift;
-(id)locationShiftStatus;
-(id)momentAnalysisStatus;
-(void)sendDaemonJob:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)updateSharedAlbumsCachedServerConfigurationLimits;
-(void)downloadAsset:(id)arg1 withCloudPlaceholderKind:(unsigned)arg2 shouldPrioritize:(char)arg3 shouldExtendTimer:(char)arg4 ;
-(unsigned long long)attemptToPurgeSharedAssetsExceptForRecentlyViewedAssets;
-(unsigned long long)purgeableSharedAssetsSpace;
-(unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1 ;
-(id)emailAddressForKey:(int)arg1 ;
-(int)keyForEmailAddress:(id)arg1 ;
-(void)requestAdjustmentDataForAsset:(id)arg1 withDataBlob:(char)arg2 networkAccessAllowed:(char)arg3 trackCPLDownload:(char)arg4 handler:(/*^block*/id)arg5 ;
-(id)getPhotosXPCEndpoint;
-(void)getCurrentTransferProgress:(/*^block*/id)arg1 ;
-(void)getCurrentTransferTotalSize:(/*^block*/id)arg1 ;
-(void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(int)arg2 doneTokens:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)analyzeMomentID:(id)arg1 ;
-(void)analyzeMomentListID:(id)arg1 ;
-(id)momentGenerationStatus;
-(void)clearUserInfluencedMoments;
@end

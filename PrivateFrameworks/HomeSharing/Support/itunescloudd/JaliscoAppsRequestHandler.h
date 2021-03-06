/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSNumber, SSAppPurchaseHistoryDatabase, JaliscoAppsUpdateOperation, NSObject, JaliscoAppLibrary, HSConnectionConfiguration;

@interface JaliscoAppsRequestHandler : NSObject {

	NSMutableArray* _completionHandlers;
	NSNumber* _familyStoreID;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;
	JaliscoAppsUpdateOperation* _updateOperation;
	NSObject*<OS_dispatch_queue> _serialQueue;
	JaliscoAppLibrary* _library;
	HSConnectionConfiguration* _configuration;

}

@property (nonatomic,copy) HSConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)daapQueryFilterPercentEscaped:(char)arg1 ;
+(int)localDatabaseRevisionForAccountUniqueIdentifier:(id)arg1 ;
+(char)setLocalDatabaseRevision:(int)arg1 forAccountUniqueIdentifier:(id)arg2 ;
+(id)handler;
+(id)currentAccountUniqueIdentifier;
+(char)setCurrentAccountUniqueIdentifier:(id)arg1 ;
-(void)updateWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)purchaseHistoryDatabase;
-(void)searchLibraryMatchingTerm:(id)arg1 location:(id)arg2 searchColumns:(id)arg3 includeHidden:(char)arg4 includeUnsupported:(char)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)imageDataForStoreID:(id)arg1 error:(id*)arg2 ;
-(id)purchaseForStoreID:(id)arg1 error:(id*)arg2 ;
-(char)setHidden:(char)arg1 forStoreID:(id)arg2 error:(id*)arg3 ;
-(char)unhideAll:(id*)arg1 ;
-(void)updateForFamilyStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_libraryWithReason:(long long)arg1 ;
-(void)accountDidChange;
-(void)_resetLibrary;
-(void)_addUpdateOperationWithReason:(long long)arg1 forFamilyMemberStoreID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_escapedSearchTermFromSearchTerm:(id)arg1 locationString:(id)arg2 ;
-(id)_validatedSearchColumnsFromSearchColumns:(id)arg1 ;
-(id)_searchMatching:(id)arg1 inColumns:(id)arg2 includingUnsupported:(char)arg3 includingHidden:(char)arg4 ;
-(id)selectProperties:(id)arg1 forStoreID:(id)arg2 error:(id*)arg3 ;
-(char)_isBundleIdentifierInstalled:(id)arg1 ;
-(void)_appUpdateOperationDidComplete:(id)arg1 withLibrary:(id)arg2 ;
-(id)init;
-(void)setConfiguration:(HSConnectionConfiguration *)arg1 ;
-(HSConnectionConfiguration *)configuration;
-(float)updateProgress;
-(int)_deviceClass;
@end


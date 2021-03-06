/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSString, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore;

@interface ACDDatabase : NSObject {

	NSString* _path;
	NSManagedObjectContext* _context;
	NSManagedObjectModel* _model;
	NSPersistentStore* _store;
	id _contextDidSaveNotificationObserver;

}

@property (nonatomic,readonly) NSString * path;                                            //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (assign,nonatomic) int version; 
+(id)_managedObjectModel;
+(CFStringRef)_copyRootPath;
+(id)_optionsForOpeningPersistentStore;
+(id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1 ;
+(char)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
+(char)_isUnrecoverableDatabaseError:(id)arg1 ;
+(void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2 ;
+(void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2 ;
+(void)_resetPeristentStoreCoordinator;
+(id)defaultPath;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(NSManagedObjectContext *)managedObjectContext;
-(id)fetchObjectsForEntityNamed:(id)arg1 ;
-(char)saveWithError:(id*)arg1 ;
-(unsigned)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2 ;
-(id)existingObjectWithURI:(id)arg1 ;
-(id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3 ;
-(void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3 ;
-(char)saveWithError:(id*)arg1 rollbackOnFailure:(char)arg2 ;
-(id)managedObjectIDForURI:(id)arg1 ;
-(id)objectForObjectURI:(id)arg1 ;
-(id)initWithDefaultPath;
-(void)_setupManagedObjectContext;
-(void)_handleManagedObjectContextDidSaveNotification:(id)arg1 ;
-(id)_store;
-(id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2 ;
-(id)initWithTimeMachineHomeFolderPath:(id)arg1 ;
-(char)_databaseFileExists;
@end


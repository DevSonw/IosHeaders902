/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLConnection, NSSQLCore, NSSQLEntity, NSMutableArray, NSManagedObjectContext;

@interface NSSQLChannel : NSObject {

	NSSQLConnection* _connection;
	NSSQLCore* _sqlCore;
	NSSQLEntity* _currentEntity;
	NSMutableArray* _fetchProperties;
	NSManagedObjectContext* _currentMOCon;

}
-(id)sqlCore;
-(id)initWithSQLCore:(id)arg1 ;
-(void)endFetch;
-(char)isFetchInProgress;
-(void)bindTempTablesForStatementIfNecessary:(id)arg1 ;
-(void)endFetchAndRecycleStatement:(char)arg1 ;
-(int)rowsChangedByLastStatement;
-(void)setCurrentEntity:(id)arg1 ;
-(id)_propertiesToFetch;
-(void)selectRowsWithFetchRequest:(id)arg1 ;
-(void)selectRowsWithStatement:(id)arg1 ;
-(void)selectRowsWithCachedStatement:(id)arg1 ;
-(char)selectCountWithFetchRequest:(id)arg1 ;
-(void)_openChannel;
-(void)_closeChannel;
-(void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)arg1 ;
-(void)dealloc;
-(id)connection;
-(void)setCurrentContext:(id)arg1 ;
-(void)finalize;
-(char)prepareAndExecuteStatement:(id)arg1 ;
-(id)currentContext;
@end

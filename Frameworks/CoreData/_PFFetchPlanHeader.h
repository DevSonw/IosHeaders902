/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSFetchRequest, NSSQLStatement, NSPersistentStore, NSSQLModel, NSSQLEntity, NSManagedObjectContext, NSSQLRowCache;

@interface _PFFetchPlanHeader : NSObject {

	NSFetchRequest* fetch_request;
	NSSQLStatement* cached_sql_statement;
	unsigned requested_batch_size;
	NSPersistentStore* sql_core;
	NSSQLModel* sql_model;
	NSSQLEntity* statement_entity;
	NSManagedObjectContext* current_context;
	NSSQLRowCache* row_cache;
	/*function pointer*/void* entity_for_ek_funptr;
	struct {
		unsigned principal_entity_has_subentities : 1;
		unsigned fetch_only_primary_keys : 1;
		unsigned fetch_results_style : 3;
		unsigned use_clean_memory : 1;
		unsigned _reserved : 26;
	}  flags;

}
@end

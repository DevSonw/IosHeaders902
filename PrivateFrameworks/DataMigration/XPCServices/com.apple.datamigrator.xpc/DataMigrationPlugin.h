/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/XPCServices/com.apple.datamigrator.xpc/com.apple.datamigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DataClassMigrator, NSString, NSBundle;

@interface DataMigrationPlugin : NSObject {

	DataClassMigrator* _migrator;
	NSString* _path;
	NSBundle* _bundle;

}
-(char)shouldRunLast;
-(id)dataClassMigratorWithContext:(id)arg1 ;
-(id)dependencies;
-(id)identifier;
-(id)path;
-(id)initWithPath:(id)arg1 ;
@end


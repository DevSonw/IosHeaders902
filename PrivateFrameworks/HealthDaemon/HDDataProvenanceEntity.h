/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDDataProvenanceEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(int)protectionClass;
+(id)uniquedColumns;
+(id)insertOrLookupDataProvenanceForSyncProvenance:(int)arg1 originDevice:(id)arg2 originBuild:(id)arg3 localDevice:(id)arg4 localBuild:(id)arg5 sourceID:(id)arg6 deviceID:(id)arg7 sourceVersion:(id)arg8 database:(id)arg9 error:(id*)arg10 ;
+(id)originProvenanceForPersistentID:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
@end

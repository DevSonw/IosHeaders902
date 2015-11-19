/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDCorrelationSampleEntity : HDSampleEntity
+(Class)_associatedDataObjectClass;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2 ;
+(char)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)createTableSQL;
+(char)acceptsObject:(id)arg1 ;
+(char)isBackedByTable;
+(Class)propertyApplierClass;
+(id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1 ;
+(id)_objectsWithIDs:(id)arg1 healthDaemon:(id)arg2 ;
-(char)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
@end

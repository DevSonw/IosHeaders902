/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDSyncChange.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying> {

	long long _endAnchor;
	long long _startAnchor;
	NSMutableArray* _objectDatas;
	int _objectType;
	NSMutableArray* _requiredAnchors;
	SCD_Struct_HD28 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HDSyncAnchorRange syncAnchorRange; 
@property (assign,nonatomic) char hasObjectType; 
@property (assign,nonatomic) int objectType;                                   //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) char hasStartAnchor; 
@property (assign,nonatomic) long long startAnchor;                            //@synthesize startAnchor=_startAnchor - In the implementation block
@property (assign,nonatomic) char hasEndAnchor; 
@property (assign,nonatomic) long long endAnchor;                              //@synthesize endAnchor=_endAnchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectDatas;                     //@synthesize objectDatas=_objectDatas - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredAnchors;                 //@synthesize requiredAnchors=_requiredAnchors - In the implementation block
+(id)changeWithNanoSyncEntityClass:(Class)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)nanoSyncDescription;
-(id)decodedObjects;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(char)arg1 ;
-(char)hasObjectType;
-(int)objectType;
-(void)addObjectData:(id)arg1 ;
-(void)addRequiredAnchors:(id)arg1 ;
-(unsigned)objectDatasCount;
-(void)clearObjectDatas;
-(id)objectDataAtIndex:(unsigned)arg1 ;
-(unsigned)requiredAnchorsCount;
-(void)clearRequiredAnchors;
-(id)requiredAnchorsAtIndex:(unsigned)arg1 ;
-(void)setStartAnchor:(long long)arg1 ;
-(void)setHasStartAnchor:(char)arg1 ;
-(char)hasStartAnchor;
-(void)setEndAnchor:(long long)arg1 ;
-(void)setHasEndAnchor:(char)arg1 ;
-(char)hasEndAnchor;
-(long long)startAnchor;
-(long long)endAnchor;
-(NSMutableArray *)objectDatas;
-(void)setObjectDatas:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requiredAnchors;
-(void)setRequiredAnchors:(NSMutableArray *)arg1 ;
-(Class)syncEntityClass;
-(void)setObjects:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3 ;
-(HDSyncAnchorRange)syncAnchorRange;
-(id)requiredAnchorMapWithError:(id*)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


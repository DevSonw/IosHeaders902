/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying> {

	NSMutableArray* _names;
	NSMutableArray* _usages;

}

@property (nonatomic,retain) NSMutableArray * names;               //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * usages;              //@synthesize usages=_usages - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addName:(id)arg1 ;
-(unsigned)namesCount;
-(id)nameAtIndex:(unsigned)arg1 ;
-(void)clearNames;
-(void)setNames:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(NSMutableArray *)names;
-(void)setUsages:(NSMutableArray *)arg1 ;
-(void)addUsage:(id)arg1 ;
-(unsigned)usagesCount;
-(void)clearUsages;
-(id)usageAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)usages;
@end


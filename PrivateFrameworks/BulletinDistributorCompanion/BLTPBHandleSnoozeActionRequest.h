/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBActionInformation, NSString;

@interface BLTPBHandleSnoozeActionRequest : PBRequest <NSCopying> {

	BLTPBActionInformation* _actionInfo;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) char hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;                   //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) char hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) char hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) char hasActionInfo; 
@property (nonatomic,retain) BLTPBActionInformation * actionInfo;              //@synthesize actionInfo=_actionInfo - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)publisherBulletinID;
-(char)hasPublisherBulletinID;
-(char)hasRecordID;
-(char)hasSectionID;
-(void)setActionInfo:(BLTPBActionInformation *)arg1 ;
-(char)hasActionInfo;
-(BLTPBActionInformation *)actionInfo;
-(NSString *)sectionID;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
@end


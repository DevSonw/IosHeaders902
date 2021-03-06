/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanosystemsettingsd/nanosystemsettingsd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSSProfilesInfoRespMsgProfileInfo;

@interface NSSProfilesInfoRespMsg : PBCodable <NSCopying> {

	NSMutableArray* _configProfiles;
	NSSProfilesInfoRespMsgProfileInfo* _mdmProfile;

}

@property (nonatomic,readonly) char hasMdmProfile; 
@property (nonatomic,retain) NSSProfilesInfoRespMsgProfileInfo * mdmProfile;              //@synthesize mdmProfile=_mdmProfile - In the implementation block
@property (nonatomic,retain) NSMutableArray * configProfiles;                             //@synthesize configProfiles=_configProfiles - In the implementation block
-(char)hasMdmProfile;
-(NSSProfilesInfoRespMsgProfileInfo *)mdmProfile;
-(unsigned)configProfilesCount;
-(NSMutableArray *)configProfiles;
-(void)addConfigProfile:(id)arg1 ;
-(void)setMdmProfile:(NSSProfilesInfoRespMsgProfileInfo *)arg1 ;
-(void)clearConfigProfiles;
-(id)configProfileAtIndex:(unsigned)arg1 ;
-(void)setConfigProfiles:(NSMutableArray *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


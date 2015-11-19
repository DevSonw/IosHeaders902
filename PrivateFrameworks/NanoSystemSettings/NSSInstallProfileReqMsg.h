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

@class NSData;

@interface NSSInstallProfileReqMsg : PBCodable <NSCopying> {

	NSData* _profileData;

}

@property (nonatomic,readonly) char hasProfileData; 
@property (nonatomic,retain) NSData * profileData;               //@synthesize profileData=_profileData - In the implementation block
-(char)hasProfileData;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setProfileData:(NSData *)arg1 ;
-(NSData *)profileData;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

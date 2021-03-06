/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, GEORPProblemContext, GEORPProblemCorrections, NSString;

@interface GEOCMTicketSubmission : PBCodable <NSCopying> {

	SCD_Struct_GE1* _userPaths;
	NSData* _devicePushToken;
	GEORPProblemContext* _problemContext;
	GEORPProblemCorrections* _problemCorrections;
	int _problemType;
	NSString* _userEmail;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) unsigned userPathsCount; 
@property (nonatomic,readonly) int* userPaths; 
@property (assign,nonatomic) char hasProblemType; 
@property (assign,nonatomic) int problemType;                                           //@synthesize problemType=_problemType - In the implementation block
@property (nonatomic,readonly) char hasProblemCorrections; 
@property (nonatomic,retain) GEORPProblemCorrections * problemCorrections;              //@synthesize problemCorrections=_problemCorrections - In the implementation block
@property (nonatomic,readonly) char hasProblemContext; 
@property (nonatomic,retain) GEORPProblemContext * problemContext;                      //@synthesize problemContext=_problemContext - In the implementation block
@property (nonatomic,readonly) char hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                                  //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) char hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail;                                      //@synthesize userEmail=_userEmail - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addUserPath:(int)arg1 ;
-(void)setUserPaths:(int*)arg1 count:(unsigned)arg2 ;
-(char)hasProblemCorrections;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(GEORPProblemCorrections *)problemCorrections;
-(void)setProblemCorrections:(GEORPProblemCorrections *)arg1 ;
-(char)hasProblemContext;
-(int*)userPaths;
-(unsigned)userPathsCount;
-(GEORPProblemContext *)problemContext;
-(void)setProblemType:(int)arg1 ;
-(void)setHasProblemType:(char)arg1 ;
-(void)setProblemContext:(GEORPProblemContext *)arg1 ;
-(char)hasUserEmail;
-(char)hasDevicePushToken;
-(int)problemType;
-(NSData *)devicePushToken;
-(int)userPathAtIndex:(unsigned)arg1 ;
-(void)clearUserPaths;
-(char)hasProblemType;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(char)readFrom:(id)arg1 ;
@end


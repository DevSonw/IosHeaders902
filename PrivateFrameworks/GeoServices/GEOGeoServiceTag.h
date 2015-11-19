/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOGeoServiceTag : PBCodable <NSCopying> {

	int _serviceType;
	NSString* _tag;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasServiceType; 
@property (assign,nonatomic) int serviceType;                  //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * tag;                   //@synthesize tag=_tag - In the implementation block
+(id)defaultTag;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasServiceType;
-(void)setServiceType:(int)arg1 ;
-(void)setHasServiceType:(char)arg1 ;
-(int)serviceType;
-(char)readFrom:(id)arg1 ;
@end

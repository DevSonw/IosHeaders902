/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanosystemsettingsd/nanosystemsettingsd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSSUsageRespMsgAppUsage : PBCodable <NSCopying> {

	unsigned long long _dynamicSizeInBytes;
	unsigned long long _staticSizeInBytes;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) unsigned long long staticSizeInBytes;               //@synthesize staticSizeInBytes=_staticSizeInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long dynamicSizeInBytes;              //@synthesize dynamicSizeInBytes=_dynamicSizeInBytes - In the implementation block
-(unsigned long long)staticSizeInBytes;
-(unsigned long long)dynamicSizeInBytes;
-(void)setStaticSizeInBytes:(unsigned long long)arg1 ;
-(void)setDynamicSizeInBytes:(unsigned long long)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


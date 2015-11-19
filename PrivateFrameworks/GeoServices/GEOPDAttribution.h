/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOPDAttribution : PBCodable <NSCopying> {

	NSString* _actionUrlComponent;
	NSMutableArray* _attributionUrls;
	NSString* _externalComponentId;
	NSString* _externalItemId;
	NSString* _vendorId;

}

@property (nonatomic,readonly) char hasVendorId; 
@property (nonatomic,retain) NSString * vendorId;                           //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) char hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId;                     //@synthesize externalItemId=_externalItemId - In the implementation block
@property (nonatomic,readonly) char hasExternalComponentId; 
@property (nonatomic,retain) NSString * externalComponentId;                //@synthesize externalComponentId=_externalComponentId - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionUrls;              //@synthesize attributionUrls=_attributionUrls - In the implementation block
@property (nonatomic,readonly) char hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent;                 //@synthesize actionUrlComponent=_actionUrlComponent - In the implementation block
+(id)attributionForPlaceDataReview:(id)arg1 ;
+(id)attributionForPlaceDataPhotos:(id)arg1 ;
+(id)attributionForPlaceDataEncyclopedia:(id)arg1 ;
+(id)attributionForPlaceDataEntity:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)_isYelp;
-(id)_attributionKey;
-(void)setVendorId:(NSString *)arg1 ;
-(NSString *)externalComponentId;
-(char)hasExternalComponentId;
-(void)clearAttributionUrls;
-(void)setExternalComponentId:(NSString *)arg1 ;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(NSString *)externalItemId;
-(NSString *)actionUrlComponent;
-(void)addAttributionUrl:(id)arg1 ;
-(char)hasVendorId;
-(void)setExternalItemId:(NSString *)arg1 ;
-(unsigned)attributionUrlsCount;
-(NSString *)vendorId;
-(id)attributionUrlAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)attributionUrls;
-(char)hasExternalItemId;
-(void)setAttributionUrls:(NSMutableArray *)arg1 ;
-(char)hasActionUrlComponent;
-(char)readFrom:(id)arg1 ;
@end

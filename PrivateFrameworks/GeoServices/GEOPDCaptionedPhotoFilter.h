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

@interface GEOPDCaptionedPhotoFilter : PBCodable <NSCopying> {

	SCD_Struct_GE51* _photoSizeFilters;
	unsigned _photoSizeFiltersCount;
	unsigned _photoSizeFiltersSpace;

}

@property (nonatomic,readonly) unsigned photoSizeFiltersCount; 
@property (nonatomic,readonly) SCD_Struct_GE51* photoSizeFilters; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addPhotoSizeFilter:(SCD_Struct_GE51)arg1 ;
-(SCD_Struct_GE51*)photoSizeFilters;
-(unsigned)photoSizeFiltersCount;
-(void)setPhotoSizeFilters:(SCD_Struct_GE51*)arg1 count:(unsigned)arg2 ;
-(void)clearPhotoSizeFilters;
-(SCD_Struct_GE51)photoSizeFilterAtIndex:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end


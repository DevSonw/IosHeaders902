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

@class GEOPDViewportInfo;

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying> {

	double _requestLocalTimestamp;
	GEOPDViewportInfo* _viewportInfo;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;              //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (assign,nonatomic) char hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp;                  //@synthesize requestLocalTimestamp=_requestLocalTimestamp - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDViewportInfo *)viewportInfo;
-(char)hasViewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)setHasRequestLocalTimestamp:(char)arg1 ;
-(double)requestLocalTimestamp;
-(char)hasRequestLocalTimestamp;
-(char)readFrom:(id)arg1 ;
@end

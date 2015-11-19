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

@interface GEORouteSummaryAttributes : PBCodable <NSCopying> {

	char _excludeGuidance;
	char _includeTravelTimeAggressive;
	char _includeTravelTimeConservative;
	char _includeTravelTimeEstimate;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasIncludeTravelTimeAggressive; 
@property (assign,nonatomic) char includeTravelTimeAggressive;                   //@synthesize includeTravelTimeAggressive=_includeTravelTimeAggressive - In the implementation block
@property (assign,nonatomic) char hasIncludeTravelTimeEstimate; 
@property (assign,nonatomic) char includeTravelTimeEstimate;                     //@synthesize includeTravelTimeEstimate=_includeTravelTimeEstimate - In the implementation block
@property (assign,nonatomic) char hasIncludeTravelTimeConservative; 
@property (assign,nonatomic) char includeTravelTimeConservative;                 //@synthesize includeTravelTimeConservative=_includeTravelTimeConservative - In the implementation block
@property (assign,nonatomic) char hasExcludeGuidance; 
@property (assign,nonatomic) char excludeGuidance;                               //@synthesize excludeGuidance=_excludeGuidance - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIncludeTravelTimeConservative:(char)arg1 ;
-(char)hasIncludeTravelTimeAggressive;
-(void)setIncludeTravelTimeConservative:(char)arg1 ;
-(char)includeTravelTimeConservative;
-(char)excludeGuidance;
-(char)hasExcludeGuidance;
-(char)includeTravelTimeEstimate;
-(char)hasIncludeTravelTimeConservative;
-(void)setHasExcludeGuidance:(char)arg1 ;
-(void)setIncludeTravelTimeAggressive:(char)arg1 ;
-(char)includeTravelTimeAggressive;
-(void)setIncludeTravelTimeEstimate:(char)arg1 ;
-(char)hasIncludeTravelTimeEstimate;
-(void)setHasIncludeTravelTimeAggressive:(char)arg1 ;
-(void)setExcludeGuidance:(char)arg1 ;
-(void)setHasIncludeTravelTimeEstimate:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

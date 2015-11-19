/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying> {

	int _failedPrecondition;
	NSMutableArray* _passIDs;

}

@property (assign,nonatomic) int failedPrecondition;                //@synthesize failedPrecondition=_failedPrecondition - In the implementation block
@property (nonatomic,retain) NSMutableArray * passIDs;              //@synthesize passIDs=_passIDs - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)failedPrecondition;
-(NSMutableArray *)passIDs;
-(void)addPassIDs:(id)arg1 ;
-(unsigned)passIDsCount;
-(void)clearPassIDs;
-(id)passIDsAtIndex:(unsigned)arg1 ;
-(void)setFailedPrecondition:(int)arg1 ;
-(void)setPassIDs:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

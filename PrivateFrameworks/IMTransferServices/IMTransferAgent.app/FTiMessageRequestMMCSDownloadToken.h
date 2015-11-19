/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferAgent.app/IMTransferAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMTransferAgent/IMTransferAgent-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying> {

	NSString* _owner;
	NSString* _responseAuthToken;
	NSData* _signature;
	NSString* _responseRequestorID;

}

@property (copy) NSString * owner;                            //@synthesize owner=_owner - In the implementation block
@property (copy) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * responseAuthToken;                //@synthesize responseAuthToken=_responseAuthToken - In the implementation block
@property (copy) NSString * responseRequestorID;              //@synthesize responseRequestorID=_responseRequestorID - In the implementation block
-(NSString *)responseAuthToken;
-(NSString *)responseRequestorID;
-(void)setResponseAuthToken:(NSString *)arg1 ;
-(void)setResponseRequestorID:(NSString *)arg1 ;
-(int)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(int)responseCommand;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setOwner:(NSString *)arg1 ;
-(NSString *)owner;
-(id)requiredKeys;
-(id)messageBody;
@end

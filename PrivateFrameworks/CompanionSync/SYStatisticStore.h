/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSObject;

@interface SYStatisticStore : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _insertIncoming;
	sqlite3_stmtRef _addProcessingTimeIncoming;
	sqlite3_stmtRef _addErrorIncoming;
	sqlite3_stmtRef _markCompleteIncoming;
	sqlite3_stmtRef _insertOutgoing;
	sqlite3_stmtRef _updateOutgoingIdentifier;
	sqlite3_stmtRef _updateOutgoing;
	sqlite3_stmtRef _timestampForID;
	sqlite3_stmtRef _reserveRowID;
	sqlite3_stmtRef _responseReceived;
	sqlite3_stmtRef _requestAcked;
	long long _lastIncomingRowID;
	NSObject*<OS_dispatch_queue> _operations_queue;

}
+(id)sharedInstance;
+(id)unpackMessageData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)recordIncomingMessage:(id)arg1 forService:(id)arg2 ;
-(void)recordOutgoingMessage:(id)arg1 forService:(id)arg2 ;
-(void)updateOutgoingMessageWithIdentifier:(id)arg1 forService:(id)arg2 sentSuccessfully:(char)arg3 sendError:(id)arg4 ;
-(void)updateOutgoingMessageWithIdentifier:(id)arg1 didReceiveResponse:(char)arg2 error:(id)arg3 ;
-(void)updateLastIncomingMessageWithError:(id)arg1 ;
-(void)updateLastIncomingMessageWithProcessingTime:(double)arg1 ;
-(void)assignIdentifier:(id)arg1 toOutgoingMessage:(id)arg2 ;
-(void)confirmDeliveryOfOutgoingMessage:(id)arg1 ;
-(int)_getSchemaVersion;
-(sqlite3Ref)dbRef;
-(void)recordOutgoingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 error:(id)arg4 ;
-(void)setIdentifier:(id)arg1 forOutgoingMessagesWithRowIDs:(id)arg2 ;
-(unsigned long long)rowIDForPartialMessage:(id)arg1 ;
-(void)_ensureCorrectFileOwnership:(id)arg1 ;
-(char)_openDBFile:(char)arg1 ;
-(id)_keySetForMessageLogTable;
-(void)_unpackPBRequest:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3 ;
-(void)_unpackPBResponse:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3 ;
-(id)_unpackMessageData:(id)arg1 ;
-(double)_getMachTimestamp;
-(char)_tableEmpty:(id)arg1 ;
-(void)markLastIncomingMessageComplete;
-(void)recordIncomingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 ;
-(void)updateOutgoingFileTransferWithIdentifier:(id)arg1 sentSuccessfully:(char)arg2 error:(id)arg3 ;
-(void)confirmDeliveryOfOutgoingFileTransfer:(id)arg1 ;
-(id)operationQ;
-(void)_openDB;
@end


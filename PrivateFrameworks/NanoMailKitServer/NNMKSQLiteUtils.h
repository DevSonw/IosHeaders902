/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@interface NNMKSQLiteUtils : NSObject
+(void)bindBool:(char)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindDate:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindUnsignedInteger:(unsigned)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindString:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(void)bindDouble:(double)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(char)isResponseOkFromPreparedStatementExecution:(int)arg1 ;
+(void)closeExecutedPreparedStatement:(sqlite3_stmtRef)arg1 ;
+(id)dateFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(unsigned)unsignedIntegerFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(id)stringFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(void)bindInteger:(int)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(unsigned)integerFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(char)boolFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(double)doubleFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
+(void)bindData:(id)arg1 intoStatement:(sqlite3_stmtRef)arg2 paramIndex:(int)arg3 ;
+(id)dataFromStatement:(sqlite3_stmtRef)arg1 columnIndex:(int)arg2 ;
@end


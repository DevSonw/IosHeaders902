/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3DatabaseBlob : NSObject {

	sqlite3_blobRef _sqliteHandle;

}
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(id)data;
-(int)readData:(id)arg1 numberOfBytes:(unsigned)arg2 offset:(unsigned)arg3 ;
-(id)initWithSQLiteHandle:(sqlite3_blobRef)arg1 ;
-(int)writeData:(id)arg1 numberOfBytes:(unsigned)arg2 offset:(unsigned)arg3 ;
@end


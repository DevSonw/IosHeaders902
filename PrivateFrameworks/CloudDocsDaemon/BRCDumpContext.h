/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCTermDumper, PQLConnection, NSString;

@interface BRCDumpContext : NSObject {

	int _indentation;
	BRCTermDumper* _termDumper;
	char _liveDaemon;
	char _onlyActiveStuff;
	_sFILE* _fp;
	PQLConnection* _db;
	NSString* _indentationBaseString;

}

@property (nonatomic,readonly) PQLConnection * db;                          //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) _sFILE* fp;                                  //@synthesize fp=_fp - In the implementation block
@property (nonatomic,retain) NSString * indentationBaseString;              //@synthesize indentationBaseString=_indentationBaseString - In the implementation block
@property (assign,nonatomic) char liveDaemon;                               //@synthesize liveDaemon=_liveDaemon - In the implementation block
@property (assign,nonatomic) char onlyActiveStuff;                          //@synthesize onlyActiveStuff=_onlyActiveStuff - In the implementation block
+(id)highlightedString:(id)arg1 type:(int)arg2 context:(id)arg3 ;
+(id)stringFromOperationUUID:(unsigned char)arg1 context:(id)arg2 ;
+(id)stringFromDueDate:(id)arg1 now:(id)arg2 allowsPast:(char)arg3 context:(id)arg4 ;
+(id)stringFromBackoff:(double)arg1 context:(id)arg2 ;
+(id)stringFromError:(id)arg1 context:(id)arg2 ;
+(id)stringFromItemID:(id)arg1 context:(id)arg2 ;
+(id)stringFromByteCount:(long long)arg1 context:(id)arg2 ;
+(id)stringFromErrorString:(id)arg1 context:(id)arg2 ;
+(id)stringFromThrottleState:(int)arg1 context:(id)arg2 ;
+(id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 allowsPast:(char)arg3 context:(id)arg4 ;
+(id)stringFromByteCount:(long long)arg1 showActualByteCount:(char)arg2 suffix:(id)arg3 context:(id)arg4 ;
+(id)stringFromItemAsString:(id)arg1 context:(id)arg2 ;
-(void)writeLineWithFormat:(id)arg1 ;
-(id)highlightedString:(id)arg1 type:(int)arg2 ;
-(void)pushIndentation;
-(void)popIndentation;
-(char)liveDaemon;
-(id)initWithFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)setLiveDaemon:(char)arg1 ;
-(void)setOnlyActiveStuff:(char)arg1 ;
-(char)onlyActiveStuff;
-(_sFILE*)fp;
-(NSString *)indentationBaseString;
-(void)setIndentationBaseString:(NSString *)arg1 ;
-(PQLConnection *)db;
@end

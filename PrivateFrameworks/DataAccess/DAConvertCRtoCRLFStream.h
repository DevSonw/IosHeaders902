/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DataAccess-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSData, ASTrafficLogger;

@interface DAConvertCRtoCRLFStream : NSInputStream {

	NSData* _mimeData;
	NSData* _preflightData;
	NSData* _postflightData;
	unsigned _totalLength;
	unsigned _readOffset;
	char _lastByteCopiedWasCR;
	char _openEventSent;
	unsigned _streamStatus;
	char _intendToStream;
	id _delegate;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_DA4* _clientContext;
	ASTrafficLogger* _trafficLogger;

}
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_DA4*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(void)close;
-(id)initWithMIMEData:(id)arg1 preflightData:(id)arg2 postflightData:(id)arg3 intendToStream:(char)arg4 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
@end

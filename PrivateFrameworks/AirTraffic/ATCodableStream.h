/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class MSVStreamReader, MSVStreamWriter, NSObject, NSInputStream, NSFileHandle;

@interface ATCodableStream : NSObject <NSSecureCoding> {

	MSVStreamReader* _reader;
	MSVStreamWriter* _writer;
	NSObject*<OS_dispatch_queue> _queue;
	NSInputStream* _inputStream;
	NSFileHandle* _fileHandleForReading;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                      //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandleForReading;              //@synthesize fileHandleForReading=_fileHandleForReading - In the implementation block
+(char)supportsSecureCoding;
-(NSFileHandle *)fileHandleForReading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithInputStream:(id)arg1 ;
-(NSInputStream *)inputStream;
@end


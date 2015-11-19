/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <assistantd/assistantd-Structs.h>
@class NSObject, NSURL, NSString, NSFileHandle, NSError;

@interface ADAudioFileWriter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _type;
	NSURL* _url;
	NSString* _path;
	OpaqueExtAudioFileRef _audioFile;
	AudioStreamBasicDescription _asbd;
	NSFileHandle* _fileHandle;
	NSError* _underlyingError;

}
+(id)_savedAudioFilesDirectory;
+(id)_generateTemporaryFileURL;
-(id)initWithType:(int)arg1 fileHandle:(id)arg2 priority:(unsigned)arg3 ;
-(id)initWithType:(int)arg1 path:(id)arg2 priority:(unsigned)arg3 ;
-(void)configureWithAudioStreamBasicDescription:(const AudioStreamBasicDescription*)arg1 ;
-(id)_initWithType:(int)arg1 path:(id)arg2 xorFileHandle:(id)arg3 priority:(unsigned)arg4 ;
-(void)_delete;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)_close;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)appendAudioData:(id)arg1 ;
@end

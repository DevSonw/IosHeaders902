/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface SFUCryptor : NSObject {

	int mOperation;
	CCCryptorRef mCryptor;
	unsigned long mBlockSize;
	char mFinished;
	char* mDecryptionInputBuffer;
	char* mOutputBuffer;
	char* mOutputBufferPos;
	unsigned long mOutputBufferAvailable;

}
-(void)dealloc;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long)arg4 ;
-(char)cryptDataFromStream:(id)arg1 toBuffer:(char*)arg2 length:(unsigned long)arg3 bytesRead:(unsigned*)arg4 error:(id*)arg5 ;
-(char)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(char)arg4 crc32:(unsigned*)arg5 error:(id*)arg6 ;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long)arg4 usePKCS7Padding:(char)arg5 ;
-(char)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(char)arg4 error:(id*)arg5 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CSIRenditionBlockData : NSObject {

	unsigned _dataPixelFormat;
	int _pixelFormat;
	char* _data;
	unsigned _nrows;
	unsigned long _rowbytes;
	char _name[128];
	unsigned char _imageBlockReleaseCount;
	unsigned _mmappedData : 1;
	unsigned long _sourceRowbytes;
	unsigned _allocateMemory : 1;

}
+(id)sharedCache;
-(void)dealloc;
-(const char*)bytes;
-(int)pixelFormat;
-(unsigned long)rowbytes;
-(void)_allocateImageBytes;
-(void)_freeImageBytes;
-(void)_makeReadOnly;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 sourceRowbytes:(unsigned long)arg3 pixelFormat:(int)arg4 ;
-(id)initWithBytes:(void*)arg1 pixelWidth:(unsigned)arg2 pixelHeight:(unsigned)arg3 sourceRowbytes:(unsigned long)arg4 pixelFormat:(int)arg5 ;
-(void)updateFromCSIHeader:(const csiheader*)arg1 ;
-(unsigned)nrows;
-(char)wasUsedTransiently;
-(void)tallyImageBlockRelease;
-(void)expandCSIBitmapData:(csibitmap*)arg1 fromSlice:(slice)arg2 makeReadOnly:(char)arg3 ;
@end

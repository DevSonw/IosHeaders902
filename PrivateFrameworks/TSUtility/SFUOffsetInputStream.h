/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@protocol SFUInputStream;
@class NSString;

@interface SFUOffsetInputStream : NSObject <SFUInputStream> {

	id<SFUInputStream> mInputStream;
	long long mInitialOffset;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(char)canSeek;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithInputStream:(id)arg1 ;
@end

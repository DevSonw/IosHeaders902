/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SFUOutputStream <SFUSimpleOutputStream>
@required
-(long long)offset;
-(void)close;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2;
-(char)canCreateInputStream;
-(char)canSeek;
-(id)closeLocalStream;
-(id)inputStream;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingInfoClient.h>

@interface MRDLocalNowPlayingInfoClient : MRDNowPlayingInfoClient {

	char _isSystemApp;
	char _systemAppFlagInitialized;
	int _pid;

}

@property (nonatomic,readonly) int pid;                       //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) char isSystemApp; 
-(char)isSystemApp;
-(id)initWithPID:(int)arg1 ;
-(int)pid;
@end


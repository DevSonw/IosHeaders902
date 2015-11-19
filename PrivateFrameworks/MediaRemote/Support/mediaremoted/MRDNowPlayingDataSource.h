/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MRDNowPlayingDataSourceDelegate;
#import <mediaremoted/mediaremoted-Structs.h>
@class NSString;

@interface MRDNowPlayingDataSource : NSObject {

	char _nowPlayingApplicationIsPlaying;
	id<MRDNowPlayingDataSourceDelegate> _delegate;
	NSString* _nowPlayingApplicationDisplayID;
	int _nowPlayingApplicationPID;

}

@property (assign,nonatomic) id<MRDNowPlayingDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * nowPlayingApplicationDisplayID;               //@synthesize nowPlayingApplicationDisplayID=_nowPlayingApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) int nowPlayingApplicationPID;                            //@synthesize nowPlayingApplicationPID=_nowPlayingApplicationPID - In the implementation block
@property (nonatomic,readonly) char nowPlayingApplicationIsPlaying;                     //@synthesize nowPlayingApplicationIsPlaying=_nowPlayingApplicationIsPlaying - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)shouldSendCommand:(id)arg1 ;
-(NSString *)nowPlayingApplicationDisplayID;
-(int)nowPlayingApplicationPID;
-(char)nowPlayingApplicationIsPlaying;
-(void)setDelegate:(id<MRDNowPlayingDataSourceDelegate>)arg1 ;
-(id<MRDNowPlayingDataSourceDelegate>)delegate;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDataSource <NSObject>
@optional
-(unsigned)shuffleTypeForNowPlayingViewController:(id)arg1;
-(id)shuffleStringForNowPlayingViewController:(id)arg1;
-(unsigned)repeatTypeForNowPlayingViewController:(id)arg1;
-(char)likedForNowPlayingViewController:(id)arg1;

@required
-(id)artistTextForNowPlayingController:(id)arg1;
-(id)albumTextForNowPlayingController:(id)arg1;
-(id)titleForNowPlayingController:(id)arg1;
-(id)backgroundArtForNowPlayingController:(id)arg1;
-(char)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
-(double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double*)arg2;
-(char)nowPlayingViewControllerIsPlaying:(id)arg1;

@end


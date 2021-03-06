/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicJSNativeViewController.h>
#import <libobjc.A.dylib/MusicJSNowPlayingViewController.h>

@protocol MusicJSNowPlayingNativeViewControllerDelegate;
@class IKJSNavigationDocument;

@interface MusicJSNowPlayingNativeViewController : MusicJSNativeViewController <MusicJSNowPlayingViewController> {

	id<MusicJSNowPlayingNativeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicJSNowPlayingNativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
-(void)setDelegate:(id<MusicJSNowPlayingNativeViewControllerDelegate>)arg1 ;
-(id<MusicJSNowPlayingNativeViewControllerDelegate>)delegate;
-(id)nativeViewIdentifier;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBWallpaperEffectView, UIView, _UIBackdropView;

@interface SBAppResizingBlurContainerView : UIView {

	SBWallpaperEffectView* _wallpaperEffectView;
	UIView* _appSnapshotView;
	_UIBackdropView* _blurView;

}

@property (nonatomic,retain) SBWallpaperEffectView * wallpaperEffectView;              //@synthesize wallpaperEffectView=_wallpaperEffectView - In the implementation block
@property (nonatomic,retain) UIView * appSnapshotView;                                 //@synthesize appSnapshotView=_appSnapshotView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * blurView;                               //@synthesize blurView=_blurView - In the implementation block
-(SBWallpaperEffectView *)wallpaperEffectView;
-(void)setWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)setAppSnapshotView:(UIView *)arg1 ;
-(UIView *)appSnapshotView;
-(void)dealloc;
-(void)layoutSubviews;
-(_UIBackdropView *)blurView;
-(void)setBlurView:(_UIBackdropView *)arg1 ;
@end


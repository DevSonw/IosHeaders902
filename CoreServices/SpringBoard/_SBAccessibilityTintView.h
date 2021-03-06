/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <SpringBoard/_SBFakeBlur.h>
#import <SpringBoard/SBWallpaperObserver.h>

@protocol _SBFakeBlurObserver;
@class NSString;

@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver> {

	int _variant;
	char _fullscreen;
	id<_SBFakeBlurObserver> _observer;

}

@property (assign,nonatomic) id<_SBFakeBlurObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) char fullscreen;                               //@synthesize fullscreen=_fullscreen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(int)effectiveStyle;
-(char)fullscreen;
-(void)setFullscreen:(char)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(void)_updateBackgroundColor;
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id<_SBFakeBlurObserver>)arg1 ;
-(void)requestStyle:(int)arg1 ;
-(id)initWithVariant:(int)arg1 ;
@end


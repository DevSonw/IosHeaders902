/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class UIImageView, UIButton, UIActivityIndicatorView, NSMutableDictionary;

@interface _MKUserTrackingButtonController : NSObject {

	id<MKUserTrackingButtonTarget> _target;
	id<MKUserTrackingView> _userTrackingView;
	int _state;
	UIImageView* _imageView;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;
	NSMutableDictionary* _skipModeDictionary;

}

@property (nonatomic,retain) id<MKUserTrackingView> userTrackingView;               //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * skipModeDictionary;              //@synthesize skipModeDictionary=_skipModeDictionary - In the implementation block
-(id)_shrinkAnimation;
-(void)setSkipModeDictionary:(NSMutableDictionary *)arg1 ;
-(void)_goToNextMode:(id)arg1 ;
-(id)_expandAnimation;
-(id)_activityIndicatorView;
-(NSMutableDictionary *)skipModeDictionary;
-(id)_contentAnimation;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(id)_imageForState:(int)arg1 controlState:(unsigned)arg2 ;
-(id<MKUserTrackingView>)userTrackingView;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(void)_reloadState;
-(void)_updateLoading;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(char)_shouldAnimateFromState:(int)arg1 toState:(int)arg2 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UIImageView *)imageView;
-(void)_updateState;
@end


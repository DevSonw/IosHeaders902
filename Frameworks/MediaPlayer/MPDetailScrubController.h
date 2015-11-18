/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPDetailedScrubbing, MPDetailScrubControllerDelegate;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIControl;

@interface MPDetailScrubController : NSObject {

	char _didBeginTracking;
	char _needsCommit;
	float _accumulatedDelta;
	CGPoint _previousLocationInView;
	CGPoint _beginLocationInView;
	CGPoint _lastCommittedLocationInView;
	float _currentValue;
	char _detailedScrubbingEnabled;
	char _isTracking;
	UIControl*<MPDetailedScrubbing> _scrubbingControl;
	id<MPDetailScrubControllerDelegate> _delegate;
	float _scrubbingVerticalRange;
	int _currentScrubSpeed;
	double _duration;

}

@property (assign,nonatomic,__weak) UIControl*<MPDetailedScrubbing> scrubbingControl;              //@synthesize scrubbingControl=_scrubbingControl - In the implementation block
@property (assign,nonatomic,__weak) id<MPDetailScrubControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double duration;                                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float scrubbingVerticalRange;                                         //@synthesize scrubbingVerticalRange=_scrubbingVerticalRange - In the implementation block
@property (assign,nonatomic) char detailedScrubbingEnabled;                                        //@synthesize detailedScrubbingEnabled=_detailedScrubbingEnabled - In the implementation block
@property (nonatomic,readonly) char durationAllowsForDetailedScrubbing; 
@property (nonatomic,readonly) char isTracking;                                                    //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) int currentScrubSpeed;                                              //@synthesize currentScrubSpeed=_currentScrubSpeed - In the implementation block
-(id)initWithScrubbingControl:(id)arg1 ;
-(void)setDetailedScrubbingEnabled:(char)arg1 ;
-(char)detailedScrubbingEnabled;
-(char)durationAllowsForDetailedScrubbing;
-(float)scaleForVerticalPosition:(float)arg1 ;
-(int)currentScrubSpeed;
-(void)_beginScrubbing;
-(float)_minimumScale;
-(float)_scaleForIdealValueForVerticalPosition:(float)arg1 ;
-(void)_commitValue:(float)arg1 ;
-(UIControl*<MPDetailedScrubbing>)scrubbingControl;
-(void)setScrubbingControl:(UIControl*<MPDetailedScrubbing>)arg1 ;
-(float)scrubbingVerticalRange;
-(void)setScrubbingVerticalRange:(float)arg1 ;
-(void)_endScrubbing;
-(void)setDelegate:(id<MPDetailScrubControllerDelegate>)arg1 ;
-(id)init;
-(id<MPDetailScrubControllerDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)isTracking;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

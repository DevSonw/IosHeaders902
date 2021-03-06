/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBSceneResizeSnakebiteGestureRecognizerDelegate <SBSystemGestureRecognizerDelegate>
@required
-(float)locationOfDividerForSceneResizeGestureRecognizer:(id)arg1;
-(float)sceneResizeGestureRecognizer:(id)arg1 locationForViewOffset:(float)arg2;
-(float)sceneResizeGestureRecognizer:(id)arg1 viewOffsetForLocation:(float)arg2;
-(float)heightOfSingleTapAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;
-(float)heightOfPinningAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;
-(int)interfaceOrientationForSceneResizeGestureRecognizer:(id)arg1;
-(double)minimumDurationForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;
-(float)minimumDistanceForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;
-(float)verticalCenterOfSingleTouchRegionForSceneResizeGestureRecognizer:(id)arg1;
-(char)sceneResizeGestureRecognizer:(id)arg1 shouldWaitForInvalidSingleTouchToBecomeValidWithDistanceFromDivider:(float)arg2;
-(char)sceneResizeGestureRecognizerShouldOnlyRecognizeForSingleTouch:(id)arg1;

@end


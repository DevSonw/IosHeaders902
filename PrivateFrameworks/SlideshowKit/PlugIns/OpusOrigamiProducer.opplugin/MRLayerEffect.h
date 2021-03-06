/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRLayer.h>

@class MREffect, NSString, NSMutableDictionary, NSArray, MRSlideProvider, MCContainerEffect, NSDictionary;

@interface MRLayerEffect : MRLayer {

	MREffect* mEffect;
	NSString* mEffectID;
	NSMutableDictionary* mSlideProvidersForElementIDs;
	NSArray* mSlideProviders;
	NSMutableDictionary* mSlideShowTimeScripts;
	NSMutableDictionary* mTextsForElementIDs;
	MRSlideProvider* mMultiImageModelInput;
	unsigned long mIndexOfFirstMultiImageInput;
	NSRange mMultiImageSlideRange;
	char mNeedsToUpdateEffect;
	char mNeedsToUpdateTiming;
	char mNeedsToUpdateSlides;
	char mNeedsToUpdateTexts;
	char mNeedsToUpdateEffectAttributes;
	char mNeedsToUpdateEffectLiveAttributes;
	char mSlidesAreReadonly;
	char mHasRequestedMoreSlides;
	NSString* _panoramaPanningSlideID;
	float _panoramaPanningPreviousDelta;
	char _panoramaPanningIsLandscape;
	char _ignoresNextTimeSynchronization;
	double _previouslyRenderedContainerTime;
	char _isInInteractiveMode;
	NSString* mTargetedElement;
	NSString* mEditedElement;
	MCContainerEffect* mContainer;

}

@property (readonly) MCContainerEffect * container; 
@property (readonly) NSDictionary * slideProvidersForElementIDs; 
@property (readonly) NSDictionary * textsForElementIDs; 
@property (nonatomic,copy) NSString * targetedElement; 
@property (nonatomic,copy) NSString * editedElement; 
@property (readonly) MREffect * effect; 
@property (setter=suspendAsynchronousOperations:) char asynchronousOperationsAreSuspended; 
@property (assign,nonatomic) char isInInteractiveMode;                                                  //@synthesize isInInteractiveMode=_isInInteractiveMode - In the implementation block
-(CGSize)_rendererSize;
-(void)_updateTexts;
-(double)pzrEnd:(id)arg1 ;
-(void)_updateSlides;
-(char)_isNative3D;
-(void)_rebuildEffect;
-(void)_observePlug;
-(void)_updateTiming;
-(double)pzrCancel:(id)arg1 ;
-(NSString *)editedElement;
-(void)setTargetedElement:(NSString *)arg1 ;
-(void)setTime:(double)arg1 ofSlide:(id)arg2 ;
-(NSString *)targetedElement;
-(char)isLoadedForTime:(double)arg1 ;
-(double)pzrStart:(id)arg1 ;
-(double)pzrUpdate:(id)arg1 ;
-(char)asynchronousOperationsAreSuspended;
-(void)suspendAsynchronousOperations:(char)arg1 ;
-(void)_cleanupProviders;
-(void)_updateEffectAttributes;
-(char)supportsDynamicExpansion;
-(void)_requestRendering;
-(void)_removeAudioDucker:(id)arg1 ;
-(void)_addAudioDucker:(id)arg1 ;
-(char)_hideTextWhileEditing;
-(NSDictionary *)textsForElementIDs;
-(id)_effectAttributes;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 andInitialSpeed:(CGSize)arg4 ;
-(void)beginMorphingToAspectRatio:(float)arg1 withDuration:(double)arg2 ;
-(NSDictionary *)slideProvidersForElementIDs;
-(char)isInInteractiveMode;
-(void)setIsInInteractiveMode:(char)arg1 ;
-(char)getStartTime:(double*)arg1 andDuration:(double*)arg2 forMovingToElementID:(id)arg3 backwards:(char)arg4 ;
-(char)hasMoreSlidesFromTime:(double)arg1 backwards:(char)arg2 startTime:(double*)arg3 duration:(double*)arg4 ;
-(double)interestingTimeForTime:(double)arg1 ;
-(void)getLazyDuration:(double*)arg1 lazyFactor:(double*)arg2 animationDuration:(double*)arg3 fromInterestingTime:(double)arg4 ;
-(void)setPlayerHint:(id)arg1 ofSlide:(id)arg2 ;
-(void)animateCenterOfSlide:(id)arg1 to:(CGPoint)arg2 withDuration:(double)arg3 ;
-(void)animateScaleOfSlide:(id)arg1 to:(float)arg2 withDuration:(double)arg3 ;
-(void)animateRotationOfSlide:(id)arg1 to:(float)arg2 withDuration:(double)arg3 ;
-(id)currentSlideInfos;
-(id)_dumpLayerWithOptions:(unsigned)arg1 ;
-(double)interestingTimeForElement:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 andParameters:(id)arg2 ;
-(void)setKenBurnsType:(int)arg1 ofSlide:(id)arg2 ;
-(char)isAlphaFriendly;
-(char)getVerticesCoordinates:(CGPoint*)arg1 forElement:(id)arg2 ;
-(int)_maxLinesForTextElement:(id)arg1 ;
-(void)setEditedElement:(NSString *)arg1 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(void)setAssetPath:(id)arg1 ofSlide:(id)arg2 ;
-(void)setCenter:(CGPoint)arg1 ofSlide:(id)arg2 ;
-(void)setScale:(float)arg1 ofSlide:(id)arg2 ;
-(void)setMaxScale:(float)arg1 ofSlide:(id)arg2 ;
-(void)setRotation:(float)arg1 ofSlide:(id)arg2 ;
-(id)currentSlideInfoForElement:(id)arg1 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 localPoint:(CGPoint*)arg2 ;
-(double)panoramaPanningStart:(id)arg1 ;
-(double)panoramaPanningUpdate:(id)arg1 ;
-(double)panoramaPanningEnd:(id)arg1 ;
-(double)panoramaPanningCancel:(id)arg1 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasSlides;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_unobservePlugOnDepreactivate;
-(void)_observePlugOnPreactivate;
-(void)_unobservePlug;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)hasSomethingToRender;
-(char)_setStateValue:(id)arg1 forKey:(id)arg2 ;
-(void)resumeOrPause:(char)arg1 ;
-(void)endMorphing;
-(void)_stallRenderer;
-(void)_effectTriggeredStop;
-(void)preactivate;
-(void)synchronizeTime;
-(void)setDuration:(double)arg1 ;
-(MCContainerEffect *)container;
-(char)isOpaque;
-(void)activate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MREffect *)effect;
-(void)cleanup;
-(char)hasAudio;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)unload;
@end


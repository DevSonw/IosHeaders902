/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MPEffectSupport
@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming; 
@required
-(double)mainDuration;
-(void)setEffectID:(id)arg1;
-(void)removeAllTexts;
-(NSObject*<MZEffectTiming>)effectTiming;
-(void)addTexts:(id)arg1;
-(NSArray *)texts;
-(NSString *)presetID;
-(id)secondarySlides;
-(void)setRandomSeed:(int)arg1;
-(NSString *)effectID;
-(void)addSlides:(id)arg1;
-(void)setPresetID:(id)arg1;
-(void)addSecondarySlide:(id)arg1;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(int)arg2;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(int)arg2;
-(id)effectAttributes;
-(id)effectAttributeForKey:(id)arg1;
-(void)insertTexts:(id)arg1 atIndex:(int)arg2;
-(void)setEffectAttributes:(id)arg1;
-(void)addSecondarySlides:(id)arg1;
-(void)removeAllSecondarySlides;
-(void)insertSlides:(id)arg1 atIndex:(int)arg2;
-(void)insertSecondarySlides:(id)arg1 atIndex:(int)arg2;
-(void)removeSecondarySlidesAtIndices:(id)arg1;
-(void)removeSlidesAtIndices:(id)arg1;
-(void)removeTextsAtIndices:(id)arg1;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(NSArray *)slides;
-(void)removeAllSlides;
-(void)addText:(id)arg1;
-(int)randomSeed;
-(void)addSlide:(id)arg1;

@end


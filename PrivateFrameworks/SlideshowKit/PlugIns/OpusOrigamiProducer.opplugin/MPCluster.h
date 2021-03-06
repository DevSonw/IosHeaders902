/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSString, NSMutableDictionary;

@interface MPCluster : NSObject {

	NSMutableArray* mSlides;
	NSMutableSet* mPathsInCluster;
	NSString* mName;
	float mRating;
	NSMutableDictionary* mUsageCounterPerLayer;

}

@property (retain) NSMutableArray * items; 
@property (copy) NSString * name; 
@property (assign) float rating; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
-(void)setUsageCountForLayer:(id)arg1 to:(float)arg2 ;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
-(id)usageCountDescription;
-(void)resetAllUsageCounters;
-(char)clusterContainsSlideAtPath:(id)arg1 ;
-(id)allSlidesSortedChronologically;
-(id)allSlides;
-(NSMutableDictionary *)usageCounterPerLayer;
-(float)usageCountForLayer:(id)arg1 ;
-(id)allSlidesSortedByUser;
-(void)removeAllSlides;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)detailedDescription;
-(float)rating;
-(void)setRating:(float)arg1 ;
-(void)addSlide:(id)arg1 ;
-(int)slideCount;
@end


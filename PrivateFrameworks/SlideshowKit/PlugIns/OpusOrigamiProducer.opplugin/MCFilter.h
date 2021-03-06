/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSSet, NSDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {

	NSMutableDictionary* mAttributes;
	NSMutableSet* mAnimationPaths;
	unsigned mIndex;
	NSString* mFilterID;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned countOfAnimationPaths; 
@property (copy) NSString * filterID; 
@property (copy) NSDictionary * attributes; 
@property (assign,nonatomic) unsigned index; 
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)demolish;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(unsigned)countOfAnimationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(NSSet *)animationPaths;
-(void)removeAllAnimationPaths;
-(id)attributeForKey:(id)arg1 ;
-(unsigned)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(void)setFilterID:(NSString *)arg1 ;
-(NSString *)filterID;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)imprint;
@end


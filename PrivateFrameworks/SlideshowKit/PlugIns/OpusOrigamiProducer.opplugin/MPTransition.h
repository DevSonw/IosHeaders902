/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface MPTransition : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	id _parent;
	NSString* _transitionID;
	NSString* _presetID;
	double _duration;
	char _isRandom;
	int _randomSeed;

}

@property (nonatomic,copy) NSString * transitionID;              //@synthesize transitionID=_transitionID - In the implementation block
@property (nonatomic,copy) NSString * presetID;                  //@synthesize presetID=_presetID - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
+(id)transitionWithTransitionID:(id)arg1 ;
-(void)setIsRandom:(char)arg1 ;
-(void)copyAttribures:(id)arg1 ;
-(char)isRandom;
-(NSString *)presetID;
-(void)setRandomSeed:(int)arg1 ;
-(double)findMaxDuration;
-(void)setPresetID:(NSString *)arg1 ;
-(void)copyVars:(id)arg1 ;
-(id)transitionAttributeForKey:(id)arg1 ;
-(void)setTransitionAttributes:(id)arg1 ;
-(void)setTransitionID:(NSString *)arg1 ;
-(id)_transitionAttributes;
-(id)transitionPresetID;
-(id)convertMPAttributeToMCAttribute:(id)arg1 withKey:(id)arg2 ;
-(id)formattedAttributes;
-(void)applyFormattedAttributes;
-(id)initWithTransitionID:(id)arg1 ;
-(id)transitionAttributes;
-(id)parentDocument;
-(NSString *)transitionID;
-(id)fullDebugLog;
-(void)setTransitionAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)parentContainer;
-(void)dump;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)randomSeed;
-(id)parent;
-(void)setParent:(id)arg1 ;
@end

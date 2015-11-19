/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDAchievementDataStore.h>

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface HDTransientAchievementDataStore : HDAchievementDataStore {

	NSMutableArray* _achievements;
	NSMutableSet* _addedAchievements;
	NSMutableSet* _unalertedAchievements;
	NSMutableDictionary* _dict;
	NSMutableArray* _commitExpects;

}

@property (nonatomic,retain) NSMutableArray * achievements;                     //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedAchievements;                  //@synthesize addedAchievements=_addedAchievements - In the implementation block
@property (nonatomic,retain) NSMutableSet * unalertedAchievements;              //@synthesize unalertedAchievements=_unalertedAchievements - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dict;                        //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) NSMutableArray * commitExpects;                    //@synthesize commitExpects=_commitExpects - In the implementation block
-(double)doubleForKey:(id)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(NSMutableSet *)addedAchievements;
-(id)allAchievements;
-(void)clearAddedAchievements;
-(void)expectCommitWithCompletion:(/*^block*/id)arg1 ;
-(void)addAchievement:(id)arg1 ;
-(id)uncommittedAchievements;
-(char)commit:(id*)arg1 ;
-(unsigned)countOfUnalertedAchievements;
-(NSMutableSet *)unalertedAchievements;
-(void)markAchievementAlerted:(id)arg1 ;
-(unsigned)unsignedIntegerForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(void)setUnsignedInteger:(unsigned)arg1 forKey:(id)arg2 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(NSMutableArray *)achievements;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(void)setAddedAchievements:(NSMutableSet *)arg1 ;
-(void)setUnalertedAchievements:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)dict;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)commitExpects;
-(void)setCommitExpects:(NSMutableArray *)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
@end

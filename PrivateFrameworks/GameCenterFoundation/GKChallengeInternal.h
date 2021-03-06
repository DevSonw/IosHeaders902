/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDate, NSOrderedSet, GKGameInternal, GKPlayerInternal;

@interface GKChallengeInternal : GKInternalRepresentation {

	NSString* _challengeID;
	NSString* _message;
	NSDate* _issueDate;
	NSDate* _completionDate;
	NSOrderedSet* _compatibleBundleIDs;
	GKGameInternal* _game;
	GKPlayerInternal* _issuingPlayer;
	GKPlayerInternal* _receivingPlayer;
	int _state;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * challengeID;                          //@synthesize challengeID=_challengeID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSDate * issueDate;                              //@synthesize issueDate=_issueDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                         //@synthesize completionDate=_completionDate - In the implementation block
@property (assign,nonatomic) int state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSOrderedSet * compatibleBundleIDs;              //@synthesize compatibleBundleIDs=_compatibleBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) GKGameInternal * game;                           //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * issuingPlayer;                //@synthesize issuingPlayer=_issuingPlayer - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * receivingPlayer;              //@synthesize receivingPlayer=_receivingPlayer - In the implementation block
@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * subtitleText; 
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
-(NSString *)bundleID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)state;
-(void)setState:(int)arg1 ;
-(unsigned)type;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(NSDate *)issueDate;
-(GKPlayerInternal *)issuingPlayer;
-(NSDate *)completionDate;
-(GKPlayerInternal *)receivingPlayer;
-(void)setIssuingPlayer:(GKPlayerInternal *)arg1 ;
-(NSString *)challengeID;
-(id)serverRepresentationForReceivingPlayer:(id)arg1 ;
-(id)findLocalGameBundleID;
-(void)setChallengeID:(NSString *)arg1 ;
-(void)setReceivingPlayer:(GKPlayerInternal *)arg1 ;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSOrderedSet *)compatibleBundleIDs;
-(void)setCompatibleBundleIDs:(NSOrderedSet *)arg1 ;
-(void)setIssueDate:(NSDate *)arg1 ;
-(void)setGame:(GKGameInternal *)arg1 ;
-(GKGameInternal *)game;
-(NSString *)titleText;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)subtitleText;
@end


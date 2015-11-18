/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface SLOpenGraphNode : NSObject {

	char _likedByMe;
	unsigned _numberOfLikes;
	unsigned _numberOfFriendLikes;
	NSURL* _URL;
	NSArray* _likedByFriends;
	int _fetchState;

}

@property (readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (readonly) char likedByMe; 
@property (readonly) unsigned globalLikeCount; 
@property (readonly) unsigned friendLikeCount; 
@property (readonly) NSArray * likedByFriends;              //@synthesize likedByFriends=_likedByFriends - In the implementation block
@property (assign,nonatomic) int fetchState;                //@synthesize fetchState=_fetchState - In the implementation block
-(void)_startUpdateIfNeeded;
-(char)likedByMe;
-(void)likeWithCompletion:(/*^block*/id)arg1 ;
-(void)unlikeWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)likedByFriends;
-(int)fetchState;
-(void)setFetchState:(int)arg1 ;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)cache;
-(unsigned)friendLikeCount;
-(unsigned)globalLikeCount;
@end

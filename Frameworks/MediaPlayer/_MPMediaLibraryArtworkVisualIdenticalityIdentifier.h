/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <NSCopying> {

	int _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;

}

@property (nonatomic,readonly) int artworkType;                               //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken;              //@synthesize availableArtworkToken=_availableArtworkToken - In the implementation block
@property (nonatomic,readonly) NSString * fetchableArtworkToken;              //@synthesize fetchableArtworkToken=_fetchableArtworkToken - In the implementation block
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(id)initWithArtworkType:(int)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)artworkType;
@end

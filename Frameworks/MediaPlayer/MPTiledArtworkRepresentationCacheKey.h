/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPTiledArtworkRepresentationCacheKey : NSObject <NSCopying> {

	id _entityIdentifier;
	id _namespaceIdentifier;
	unsigned _numberOfColumns;
	unsigned _numberOfRows;
	id _revisionIdentifier;
	CGSize _scaledFittingSize;
	float _tileSpacing;

}
-(id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


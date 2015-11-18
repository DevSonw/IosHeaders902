/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:20:07 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsFilterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)allPhotos;
+(id)allVideos;
+(id)allAssets;
-(void)_setFilter:(int)arg1 ;
-(int)_filter;
-(void)dealloc;
-(id)init;
-(void)setInternal:(ALAssetsFilterInternal *)arg1 ;
-(ALAssetsFilterInternal *)internal;
@end

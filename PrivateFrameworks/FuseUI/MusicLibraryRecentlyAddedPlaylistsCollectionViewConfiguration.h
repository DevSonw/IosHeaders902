/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class MusicLibraryPlaylistsViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {

	unsigned _entityLimit;
	MusicLibraryPlaylistsViewConfiguration* _playlistsViewConfiguration;

}

@property (nonatomic,readonly) unsigned entityLimit;                                                           //@synthesize entityLimit=_entityLimit - In the implementation block
@property (nonatomic,retain) MusicLibraryPlaylistsViewConfiguration * playlistsViewConfiguration;              //@synthesize playlistsViewConfiguration=_playlistsViewConfiguration - In the implementation block
+(unsigned)defaultEntityLimit;
-(unsigned)entityLimit;
-(id)init;
-(id)loadEntityViewDescriptor;
-(int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithEntityLimit:(unsigned)arg1 ;
-(char)canPreviewEntityValueContext:(id)arg1 ;
-(id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2 ;
-(MusicLibraryPlaylistsViewConfiguration *)playlistsViewConfiguration;
-(void)setPlaylistsViewConfiguration:(MusicLibraryPlaylistsViewConfiguration *)arg1 ;
@end

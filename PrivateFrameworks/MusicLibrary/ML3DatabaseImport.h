/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSFileHandle;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _libraryPath;
	NSData* _trackData;
	NSData* _playlistData;
	NSFileHandle* _fileHandle;
	NSString* _syncAnchor;
	char _resetSync;
	char _sagaEnabled;
	long long _storeAccountID;
	long long _preferredVideoQuality;
	unsigned _homeSharingBasePlaylistID;
	char _tracksAreLibraryOwnedContent;
	char _playlistsAreLibraryOwnedContent;
	char _pendingMatch;
	char _isServerImport;
	NSString* _syncLibraryID;

}

@property (nonatomic,readonly) NSString * libraryPath;                               //@synthesize libraryPath=_libraryPath - In the implementation block
@property (nonatomic,readonly) NSData * trackData;                                   //@synthesize trackData=_trackData - In the implementation block
@property (nonatomic,readonly) NSData * playlistData;                                //@synthesize playlistData=_playlistData - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;                            //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,readonly) NSString * syncAnchor;                                //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (getter=isResetSync,nonatomic,readonly) char resetSync;                    //@synthesize resetSync=_resetSync - In the implementation block
@property (getter=isSagaEnabled,nonatomic,readonly) char sagaEnabled;                //@synthesize sagaEnabled=_sagaEnabled - In the implementation block
@property (nonatomic,readonly) long long storeAccountID;                             //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,readonly) long long preferredVideoQuality;                      //@synthesize preferredVideoQuality=_preferredVideoQuality - In the implementation block
@property (nonatomic,readonly) unsigned homeSharingBasePlaylistID;                   //@synthesize homeSharingBasePlaylistID=_homeSharingBasePlaylistID - In the implementation block
@property (nonatomic,readonly) char tracksAreLibraryOwnedContent;                    //@synthesize tracksAreLibraryOwnedContent=_tracksAreLibraryOwnedContent - In the implementation block
@property (nonatomic,readonly) char playlistsAreLibraryOwnedContent;                 //@synthesize playlistsAreLibraryOwnedContent=_playlistsAreLibraryOwnedContent - In the implementation block
@property (getter=isPendingMatch,nonatomic,readonly) char pendingMatch;              //@synthesize pendingMatch=_pendingMatch - In the implementation block
@property (nonatomic,readonly) char isServerImport;                                  //@synthesize isServerImport=_isServerImport - In the implementation block
@property (nonatomic,readonly) NSString * syncLibraryID;                             //@synthesize syncLibraryID=_syncLibraryID - In the implementation block
+(char)supportsSecureCoding;
-(long long)storeAccountID;
-(NSData *)trackData;
-(id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3 ;
-(NSData *)playlistData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSFileHandle *)fileHandle;
-(NSString *)syncLibraryID;
-(NSString *)libraryPath;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(char)isResetSync;
-(char)isSagaEnabled;
-(long long)preferredVideoQuality;
-(unsigned)homeSharingBasePlaylistID;
-(char)tracksAreLibraryOwnedContent;
-(char)playlistsAreLibraryOwnedContent;
-(char)isPendingMatch;
-(char)isServerImport;
-(NSString *)syncAnchor;
@end

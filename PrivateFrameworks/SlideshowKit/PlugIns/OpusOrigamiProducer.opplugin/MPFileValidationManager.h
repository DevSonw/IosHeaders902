/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPFileValidationManager : NSObject
+(char)validateFilesForImages:(id)arg1 extensionsOnly:(char)arg2 ;
+(id)resolveAliasPath:(id)arg1 ;
+(char)validateFilesForAudio:(id)arg1 extensionsOnly:(char)arg2 ;
+(char)validateFiles:(id)arg1 allowAudio:(char)arg2 allowImages:(char)arg3 allowMovies:(char)arg4 extensionsOnly:(char)arg5 ;
+(void)checkFileExtension:(id)arg1 isAudio:(char*)arg2 isImage:(char*)arg3 isVideo:(char*)arg4 ;
+(char)validateFilesForMovies:(id)arg1 extensionsOnly:(char)arg2 ;
@end


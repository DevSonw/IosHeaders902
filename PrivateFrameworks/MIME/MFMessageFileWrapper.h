/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData, NSMutableDictionary;

@interface MFMessageFileWrapper : NSObject {

	NSString* _path;
	NSString* _filename;
	NSString* _preferredFilename;
	NSData* _data;
	NSMutableDictionary* _attributes;
	NSString* _linkDestination;
	NSString* _url;
	int _type;

}
+(id)supportedArchivedClassNames;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isDirectory;
-(id)initRegularFileWithContents:(id)arg1 ;
-(void)setPreferredFilename:(id)arg1 ;
-(id)fileWrappers;
-(char)isSymbolicLink;
-(void)setFileAttributes:(id)arg1 ;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(char)isPDFFile;
-(id)meetingStorePersistentID;
-(void)setMeetingStorePersistentID:(id)arg1 ;
-(id)inferredMimeType;
-(char)isImageFile;
-(id)icsRepresentation;
-(void)dealloc;
-(id)description;
-(void)setType:(unsigned long)arg1 ;
-(unsigned long)type;
-(id)path;
-(id)URL;
-(void)setPath:(id)arg1 ;
-(id)mimeType;
-(void)setURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)regularFileContents;
-(id)preferredFilename;
-(char)isRegularFile;
-(id)messageID;
-(void)setMimeType:(id)arg1 ;
-(void)setMessageID:(id)arg1 ;
-(void)_isImage:(char*)arg1 orPDFFile:(char*)arg2 ;
-(void)setFileProtection:(id)arg1 ;
-(void)setCreator:(unsigned long)arg1 ;
-(void)setFinderFlags:(unsigned short)arg1 ;
-(unsigned short)finderFlags;
-(void)setEventUniqueID:(id)arg1 ;
-(id)eventUniqueID;
-(void)setICSRepresentation:(id)arg1 ;
-(id)fileProtection;
-(char)isUnzippableFile;
-(id)initSymbolicLinkWithDestination:(id)arg1 ;
-(id)symbolicLinkDestination;
-(unsigned)fileSize;
-(id)fileAttributes;
-(unsigned long)creator;
-(id)filename;
-(void)setFilename:(id)arg1 ;
-(char)isPlaceholder;
@end


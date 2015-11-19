/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;

}
+(id)copyNewMimeBoundary;
+(id)versionString;
-(int)numberOfAlternatives;
-(id)topLevelPart;
-(void)setPreferredAlternative:(int)arg1 ;
-(unsigned)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(char*)arg1 encrypted:(char*)arg2 ;
-(char)isHTML;
-(id)attachmentURLs;
-(id)preferredBodyPart;
-(void)dealloc;
-(id)init;
-(id)mimeType;
-(id)attachments;
-(char)isRich;
-(int)preferredAlternative;
-(id)mimeSubtype;
-(id)firstPartPassingTest:(/*^block*/id)arg1 ;
-(void)setTopLevelPart:(id)arg1 ;
-(id)textHtmlPart;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 asHTML:(char)arg3 isComplete:(char*)arg4 ;
-(id)partWithNumber:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSMutableString;

@interface WDCharacterRun : WDRun {

	WDCharacterProperties* mProperties;
	NSMutableString* mString;
	char mBinaryWriterContentFlag;

}
-(void)dealloc;
-(id)description;
-(void)appendString:(id)arg1 ;
-(char)isEmpty;
-(id)string;
-(void)setString:(id)arg1 ;
-(id)properties;
-(int)runType;
-(char)binaryWriterContentFlag;
-(void)setBinaryWriterContentFlag:(char)arg1 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)copyPropertiesFrom:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)setPropertiesForDocument;
-(void)clearString;
-(id)initWithParagraph:(id)arg1 string:(id)arg2 ;
-(void)clearProperties;
@end

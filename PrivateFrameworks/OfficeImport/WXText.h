/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WXText : NSObject
+(void)readFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readFrom:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)updateTextBoxIdsFromState:(id)arg1 ;
+(void)createChildren:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)createChildrenFromStream:(xmlTextReaderRef)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromString:(id)arg1 to:(id)arg2 ;
+(id)addNewSectionTo:(id)arg1 state:(id)arg2 ;
+(void)readFromParagraph:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
+(void)readFromTable:(xmlNode*)arg1 baseStyle:(id)arg2 to:(id)arg3 state:(id)arg4 ;
@end

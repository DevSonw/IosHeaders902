/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTextCharPropertyBag : NSObject
+(void)readCharacterProperties:(xmlNode*)arg1 characterProperties:(id)arg2 drawingState:(id)arg3 ;
+(unsigned char)readUnderlineType:(id)arg1 ;
+(void)readFormatting:(xmlNode*)arg1 characterProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readFont:(xmlNode*)arg1 characterProperties:(id)arg2 ;
+(id)stringWithCapsType:(unsigned char)arg1 ;
+(id)stringWithStrikeThroughType:(unsigned char)arg1 ;
+(id)stringWithUnderlineType:(unsigned char)arg1 ;
@end

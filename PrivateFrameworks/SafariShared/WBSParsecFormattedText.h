/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString, WBSParsecImageRepresentation, NSNumber;

@interface WBSParsecFormattedText : WBSParsecModel {

	char _emphasized;
	NSString* _text;
	WBSParsecImageRepresentation* _glyphRepresentation;
	NSNumber* _spaceBeforeInPoints;
	NSNumber* _spaceAfterInPoints;

}

@property (nonatomic,copy,readonly) NSString * text;                                            //@synthesize text=_text - In the implementation block
@property (getter=isEmphasized,nonatomic,readonly) char emphasized;                             //@synthesize emphasized=_emphasized - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * glyphRepresentation;              //@synthesize glyphRepresentation=_glyphRepresentation - In the implementation block
@property (nonatomic,readonly) NSNumber * spaceBeforeInPoints;                                  //@synthesize spaceBeforeInPoints=_spaceBeforeInPoints - In the implementation block
@property (nonatomic,readonly) NSNumber * spaceAfterInPoints;                                   //@synthesize spaceAfterInPoints=_spaceAfterInPoints - In the implementation block
+(id)schema;
-(char)isEmphasized;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(NSNumber *)spaceAfterInPoints;
-(NSNumber *)spaceBeforeInPoints;
-(id)glyphWithSession:(id)arg1 ;
-(WBSParsecImageRepresentation *)glyphRepresentation;
@end


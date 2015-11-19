/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSGlyphInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSCIDGlyphInfo : NSGlyphInfo <NSSecureCoding> {

	unsigned short _cid;
	unsigned _collection;

}
+(char)supportsSecureCoding;
+(void)initialize;
+(id)glyphInfoWithCharacterIdentifier:(unsigned)arg1 collection:(unsigned)arg2 baseString:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(unsigned)characterIdentifier;
-(unsigned)characterCollection;
-(id)initWithCharacterIdentifier:(unsigned)arg1 collection:(unsigned)arg2 baseString:(id)arg3 ;
@end

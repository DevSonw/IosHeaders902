/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:54 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSimpleCString.h>

@interface NSConstantString : NSSimpleCString
-(unsigned)fastestEncoding;
-(unsigned)smallestEncoding;
-(char)canBeConvertedToEncoding:(unsigned)arg1 ;
-(const char*)_fastCStringContents:(char)arg1 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned)arg2 ;
-(unsigned)cStringLength;
-(const char*)lossyCString;
-(void)dealloc;
-(char)isEqualToString:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)copy;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_isDeallocating;
-(int)compare:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(char)_tryRetain;
-(const char*)cString;
-(void)finalize;
@end


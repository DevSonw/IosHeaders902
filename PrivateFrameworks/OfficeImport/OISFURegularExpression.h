/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface OISFURegularExpression : NSObject <NSCopying, NSCoding> {

	NSString* _expressionString;
	void* _reserved;

}
+(void)initialize;
+(id)regularExpressionWithString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithExpressionString:(id)arg1 ;
-(id)initWithExpressionString:(id)arg1 options:(unsigned)arg2 ;
-(id)expressionString;
-(unsigned long)numberOfSubexpressions;
-(NSRange)matchedRangeForCString:(const char*)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(NSRange)matchedRangeForString:(id)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(const char*)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2 ;
@end


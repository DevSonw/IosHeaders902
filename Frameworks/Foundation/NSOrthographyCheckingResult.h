/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:57 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSOrthography* _orthography;

}
-(id)resultByAdjustingRangesWithOffset:(int)arg1 ;
-(char)_adjustRangesWithOffset:(int)arg1 ;
-(id)orthography;
-(id)initWithRange:(NSRange)arg1 orthography:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSRange)range;
-(unsigned long long)resultType;
@end


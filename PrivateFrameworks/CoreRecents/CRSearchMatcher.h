/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSData;

@interface CRSearchMatcher : NSObject {

	int _options;
	NSArray* _components;
	NSArray* _asciiComponents;
	NSData* _wholeSearchStringData;
	NSData* _context;

}
-(char)matches:(id)arg1 ;
-(void)dealloc;
-(char)matchesASCIIString:(const char*)arg1 matchType:(int)arg2 ;
-(char)matches:(id)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 options:(int)arg2 ;
-(char)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 ;
-(char)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SPMatcher : NSObject {

	void* _matcher;

}
+(id)transcriptionForString:(id)arg1 withLanguage:(id)arg2 ;
-(char)matches:(id)arg1 ;
-(void)dealloc;
-(unsigned)wordCount;
-(char)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned)arg3 ;
-(char)matches:(id)arg1 outMatchBits:(unsigned long long*)arg2 ;
-(char)matchesUTF8String:(const char*)arg1 outMatchBits:(unsigned long long*)arg2 ;
@end


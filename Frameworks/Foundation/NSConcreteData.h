/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:54 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConcreteData : NSData {

	unsigned _isInline : 1;
	unsigned _retainCount : 31;
	unsigned _length;
	unsigned _capacity;
	void* _bytes;
	SCD_Union_NS10 _u;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(char)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(char)arg3 freeWhenDone:(char)arg4 bytesAreVM:(char)arg5 ;
-(char)_isCompact;
-(char)_copyWillRetain;
-(void)getBytes:(void*)arg1 ;
-(id)_createDispatchData;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)finalize;
@end


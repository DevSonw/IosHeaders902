/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, NSString, NSLocale;

@interface AVMetadataEnumerator : NSEnumerator {

	OpaqueFigMetadataReaderRef _reader;
	NSEnumerator* _arrayEnumerator;
	id _key;
	NSString* _keySpace;
	NSLocale* _locale;
	long _count;
	long _index;

}
+(id)metadataEnumeratorWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
+(id)metadataEnumeratorWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(id)initWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 array:(id)arg2 key:(id)arg3 keySpace:(id)arg4 locale:(id)arg5 ;
-(void)_setMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(void)_setArrayEnumerator:(id)arg1 ;
-(void)_setKeySpace:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(void)_setLocale:(id)arg1 ;
-(void)finalize;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OFLRUCache;

@interface OFMetadataMemoryCache : NSObject {

	OFLRUCache* _memoryCache;
	char _allowCleanupOnMemoryWarnings;
	char _allowCleanupOnEnteringBackground;
	unsigned _hasChanges;

}

@property (assign,nonatomic) char allowCleanupOnMemoryWarnings;                  //@synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings - In the implementation block
@property (assign,nonatomic) char allowCleanupOnEnteringBackground;              //@synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground - In the implementation block
-(char)hasChanges;
-(char)writeToURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(char)loadFromURL:(id)arg1 ;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(id)_metadataForIdentifier:(id)arg1 ;
-(void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setNumberOfMemorySlots:(unsigned)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(id)valueForKey:(id)arg1 andIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setAttributes:(id)arg1 forIdentifier:(id)arg2 ;
-(char)allowCleanupOnMemoryWarnings;
-(void)setAllowCleanupOnMemoryWarnings:(char)arg1 ;
-(char)allowCleanupOnEnteringBackground;
-(void)setAllowCleanupOnEnteringBackground:(char)arg1 ;
-(void)resetChanges;
-(unsigned)numberOfMemorySlots;
-(unsigned)numberOfUsedMemorySlots;
-(void)invalidateForIdentifier:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary, OFLRUCache;

@interface OFMetadataFileCache : NSObject {

	NSObject*<OS_dispatch_queue> _serialDiskSaveQueue;
	NSString* _diskCacheDirectory;
	NSMutableDictionary* _diskCacheFilePathForIdentifiers;
	OFLRUCache* _memoryCache;
	char _useMemoryCache;
	char _useDiskCache;
	char _useAsynchronousSerialDiskSaveQueue;
	char _allowCleanupOnMemoryWarnings;
	char _allowCleanupOnEnteringBackground;

}

@property (assign,nonatomic) char useMemoryCache;                                  //@synthesize useMemoryCache=_useMemoryCache - In the implementation block
@property (assign,nonatomic) char useDiskCache;                                    //@synthesize useDiskCache=_useDiskCache - In the implementation block
@property (assign,nonatomic) char useAsynchronousSerialDiskSaveQueue;              //@synthesize useAsynchronousSerialDiskSaveQueue=_useAsynchronousSerialDiskSaveQueue - In the implementation block
@property (assign,nonatomic) char allowCleanupOnMemoryWarnings;                    //@synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings - In the implementation block
@property (assign,nonatomic) char allowCleanupOnEnteringBackground;                //@synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(void)invalidateMemoryCaches;
-(id)initWithDiskCacheDirectory:(id)arg1 ;
-(void)invalidateDiskCaches;
-(void)purgeDiskCache:(unsigned)arg1 progressBlock:(/*^block*/id)arg2 ;
-(char)useAsynchronousSerialDiskSaveQueue;
-(void)setUseAsynchronousSerialDiskSaveQueue:(char)arg1 ;
-(id)_diskCacheFilePathForIdentifier:(id)arg1 ;
-(id)_metadataForIdentifier:(id)arg1 ;
-(void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setUseDiskCache:(char)arg1 ;
-(void)setUseMemoryCache:(char)arg1 ;
-(void)invalidateMemoryCacheForIdentifier:(id)arg1 ;
-(void)invalidateDiskCacheForIdentifier:(id)arg1 ;
-(void)setNumberOfMemorySlots:(unsigned)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(id)valueForKey:(id)arg1 andIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setAttributes:(id)arg1 forIdentifier:(id)arg2 ;
-(char)useMemoryCache;
-(char)useDiskCache;
-(char)allowCleanupOnMemoryWarnings;
-(void)setAllowCleanupOnMemoryWarnings:(char)arg1 ;
-(char)allowCleanupOnEnteringBackground;
-(void)setAllowCleanupOnEnteringBackground:(char)arg1 ;
@end

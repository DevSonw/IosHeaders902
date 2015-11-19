/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OKMediaManagerDelegate;
#import <OpusKit/OpusKit-Structs.h>
@class NSMutableDictionary;

@interface OKMediaManager : NSObject {

	id<OKMediaManagerDelegate> _delegate;
	NSMutableDictionary* _mediaSourcesByScheme;

}

@property (assign,nonatomic) id<OKMediaManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultManager;
-(void)setDelegate:(id<OKMediaManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<OKMediaManagerDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mediaItemForURL:(id)arg1 ;
-(id)mediaURLsForMediaObjects:(id)arg1 ;
-(id)mediaURLForMediaObject:(id)arg1 ;
-(id)mediaItemsForURLs:(id)arg1 ;
-(void)addMediaItemClass:(Class)arg1 ;
-(Class)mediaItemClassForURL:(id)arg1 ;
-(void)removeMediaItemClass:(Class)arg1 ;
@end

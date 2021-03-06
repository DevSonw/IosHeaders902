/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {

	char _allowsInlineMediaPlayback;
	char _mediaPlaybackRequiresUserAction;
	char _mediaPlaybackAllowsAirPlay;
	char _suppressesIncrementalRendering;
	unsigned _dataDetectorTypes;
	NSString* _customUserAgent;

}

@property (assign,nonatomic) unsigned dataDetectorTypes;                        //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (assign,nonatomic) char allowsInlineMediaPlayback;                    //@synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback - In the implementation block
@property (assign,nonatomic) char mediaPlaybackRequiresUserAction;              //@synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction - In the implementation block
@property (assign,nonatomic) char mediaPlaybackAllowsAirPlay;                   //@synthesize mediaPlaybackAllowsAirPlay=_mediaPlaybackAllowsAirPlay - In the implementation block
@property (assign,nonatomic) char suppressesIncrementalRendering;               //@synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering - In the implementation block
@property (nonatomic,copy) NSString * customUserAgent;                          //@synthesize customUserAgent=_customUserAgent - In the implementation block
+(id)defaultSettings;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDataDetectorTypes:(unsigned)arg1 ;
-(unsigned)dataDetectorTypes;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(void)setMediaPlaybackAllowsAirPlay:(char)arg1 ;
-(char)mediaPlaybackAllowsAirPlay;
-(char)suppressesIncrementalRendering;
-(void)setSuppressesIncrementalRendering:(char)arg1 ;
-(void)setAllowsInlineMediaPlayback:(char)arg1 ;
-(char)allowsInlineMediaPlayback;
-(void)setMediaPlaybackRequiresUserAction:(char)arg1 ;
-(char)mediaPlaybackRequiresUserAction;
-(NSString *)customUserAgent;
-(id)_initWithDictionary:(id)arg1 ;
-(id)_encodeAsDictionary;
@end


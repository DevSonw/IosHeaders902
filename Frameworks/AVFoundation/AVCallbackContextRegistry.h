/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AVCallbackContextRegistry : NSObject {

	NSMutableDictionary* _contextsForTokens;
	unsigned long _currentToken;
	NSObject*<OS_dispatch_queue> _readWriteQueue;

}
+(id)sharedCallbackContextRegistry;
+(void)initialize;
-(void*)registerCallbackContextObject:(id)arg1 ;
-(void)unregisterCallbackContextForToken:(void*)arg1 ;
-(id)callbackContextForToken:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROHandlerProtocol
@required
-(int)handlePerformActionForKey:(int)arg1 trusted:(char)arg2;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(char)arg2;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(char)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(char)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(char)arg4;

@end


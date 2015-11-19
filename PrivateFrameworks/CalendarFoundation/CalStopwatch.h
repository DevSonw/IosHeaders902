/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	char _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	char _hasValidElapsedTime;
	NSMutableDictionary* _events;
	char _usesSignalFlags;

}

@property (assign) char usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(id)init;
-(id)description;
-(void)reset;
-(void)stop;
-(void)start;
-(unsigned long long)elapsedTimeInNanoseconds;
-(char)usesSignalFlags;
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(double)markEventSplit:(id)arg1 ;
-(double)markEventEnd:(id)arg1 ;
-(void)setUsesSignalFlags:(char)arg1 ;
@end

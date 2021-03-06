/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIMotionEffectEventConsumer;
@interface _UIMotionEffectEventProvider : NSObject {

	id<_UIMotionEffectEventConsumer> _consumer;

}

@property (assign) id<_UIMotionEffectEventConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)setConsumer:(id<_UIMotionEffectEventConsumer>)arg1 ;
-(char)shouldLogEvents;
-(double)fastUpdateIntervalForLogs;
-(double)slowUpdateIntervalForLogs;
-(void)setSlowUpdatesEnabled:(char)arg1 ;
-(char)wantsSynchronizedUpdates;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(id<_UIMotionEffectEventConsumer>)consumer;
@end


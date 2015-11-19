/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ABLEDateValueQueue : NSObject {

	NSMutableArray* _queue;

}

@property (retain) NSMutableArray * queue;              //@synthesize queue=_queue - In the implementation block
-(void)addDate:(id)arg1 value:(id)arg2 ;
-(void)burnForAgeLimitMinimum:(id)arg1 ;
-(NSMutableArray *)queue;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(id)first;
-(double)extent;
-(id)last;
@end

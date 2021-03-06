/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {

	char _needsFlush;

}

@property (assign,nonatomic) char needsFlush;              //@synthesize needsFlush=_needsFlush - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_routerUpdated:(id)arg1 ;
-(void)setEventRouters:(id)arg1 ;
-(void)_flushTrigger;
-(char)needsFlush;
-(void)setNeedsFlush:(char)arg1 ;
-(void)_flush;
@end


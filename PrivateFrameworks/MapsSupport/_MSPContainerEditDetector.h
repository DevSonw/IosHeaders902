/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol MSPMutableObject;
@class _MSPContainerEditsRecorder;

@interface _MSPContainerEditDetector : NSProxy {

	_MSPContainerEditsRecorder* _owner;
	id<MSPMutableObject> _object;

}
-(char)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 owner:(id)arg2 ;
@end


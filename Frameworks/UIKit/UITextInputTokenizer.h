/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputTokenizer <NSObject>
@required
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
-(char)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
-(id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
-(char)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;

@end

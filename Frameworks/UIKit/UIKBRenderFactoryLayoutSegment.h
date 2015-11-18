/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, UIKBRenderTraits;

@interface UIKBRenderFactoryLayoutSegment : NSObject {

	int _rectCount;
	CGRect _rects[6];
	int _triangleCorners[6];
	int _edgeCount;
	unsigned _edges[6];
	NSString* _cachedKeyNames[6];
	char _requireAllMatches;
	UIKBRenderTraits* _traits;
	int _states;

}

@property (nonatomic,readonly) UIKBRenderTraits * traits;              //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) int keyStates;                            //@synthesize states=_states - In the implementation block
@property (assign,nonatomic) char requireAllMatches;                   //@synthesize requireAllMatches=_requireAllMatches - In the implementation block
+(id)segmentWithTraits:(id)arg1 ;
-(void)dealloc;
-(UIKBRenderTraits *)traits;
-(void)setKeyStates:(int)arg1 ;
-(void)addLayoutRect:(CGRect)arg1 asTriangle:(int)arg2 ;
-(void)setRequireAllMatches:(char)arg1 ;
-(void)addRelativeLayoutRectFromEdge:(unsigned)arg1 ofCachedKey:(id)arg2 ;
-(id)initWithTraits:(id)arg1 ;
-(char)requireAllMatches;
-(char)containsPoint:(CGPoint)arg1 inRect:(CGRect)arg2 withKeyplane:(id)arg3 ;
-(int)keyStates;
@end

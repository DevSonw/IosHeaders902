/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/ICDrawingInputFilter.h>

@protocol OS_dispatch_queue, ICDrawingInputFilter;
@class NSObject, NSString;

@interface ICDrawingInputSmoother : NSObject <ICDrawingInputFilter> {

	unsigned _immutableInputCount;
	unsigned _immutableCount;
	unsigned _lastInputIndex;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _inputPoints;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _outputPoints;
	NSObject*<OS_dispatch_queue> _outputQueue;
	float _smoothingThreshold;
	float _inputScale;
	NSObject*<ICDrawingInputFilter> _inputProvider;

}

@property (nonatomic,retain) NSObject*<ICDrawingInputFilter> inputProvider;              //@synthesize inputProvider=_inputProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInputScale:(float)arg1 ;
-(id)init;
-(void)reset;
-(void)setInputProvider:(NSObject*<ICDrawingInputFilter>)arg1 ;
-(void)drawingBeganWithCommand:(id)arg1 inputType:(int)arg2 ;
-(unsigned)copyUpdatedRangeFromIndex:(unsigned)arg1 into:(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)arg2 onQueue:(id)arg3 ;
-(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)getUpdatedRangeFromIndex:(inout unsigned*)arg1 ;
-(NSObject*<ICDrawingInputFilter>)inputProvider;
-(void)smooth;
-(void)fetchInput;
-(void)smoothCurvaturesDistance:(vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint> >*)arg1 ;
@end

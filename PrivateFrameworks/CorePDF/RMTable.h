/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface RMTable : NSObject <NSFastEnumeration> {

	NSMutableArray* _matrix;
	unsigned _elementCount;
	NSMutableArray* _rowFirstElements;
	NSMutableArray* _columnFirstElements;
	CGPDFLayoutRef _layout;
	CGPDFNodeRef _tableRoot;
	char _rowOrder;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) char rowOrder;                    //@synthesize rowOrder=_rowOrder - In the implementation block
-(void)dump;
-(CGRect)bounds;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_RM38*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(CGPDFLayoutRef)layout;
-(unsigned)rows;
-(CGPDFPageRef)page;
-(id)initWithRoot:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)setRowOrder:(char)arg1 ;
-(char)rowOrder;
-(void)matrixDealloc;
-(id)columnAtIndex:(unsigned)arg1 ;
-(id)rowAtIndex:(unsigned)arg1 ;
-(unsigned)columns;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableArray;

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {

	NSMutableArray* _subpaths;

}
+(id)directorySubpathsOperationAtPath:(id)arg1 ;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(id)subpaths;
-(void)handlePathname:(id)arg1 ;
-(void)dealloc;
@end


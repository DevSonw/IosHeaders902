/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject {

	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(void)_addOperation:(id)arg1 ;
-(void)_executeOperationsOnQueue:(id)arg1 ;
-(id)init;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)operations;
@end


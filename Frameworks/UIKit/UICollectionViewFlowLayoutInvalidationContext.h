/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	struct {
		unsigned invalidateDelegateMetrics : 1;
		unsigned invalidateAttributes : 1;
	}  _flowLayoutInvalidationFlags;

}

@property (assign,nonatomic) char invalidateFlowLayoutDelegateMetrics; 
@property (assign,nonatomic) char invalidateFlowLayoutAttributes; 
-(id)init;
-(void)setInvalidateFlowLayoutAttributes:(char)arg1 ;
-(char)invalidateFlowLayoutAttributes;
-(void)setInvalidateFlowLayoutDelegateMetrics:(char)arg1 ;
-(char)invalidateFlowLayoutDelegateMetrics;
@end

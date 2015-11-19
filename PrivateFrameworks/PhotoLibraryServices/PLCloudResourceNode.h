/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSDate, PLManagedAsset;

@interface PLCloudResourceNode : PLManagedObject

@property (assign,nonatomic) unsigned short budgetingCategory; 
@property (nonatomic,retain) NSString * assetUuid; 
@property (assign,nonatomic) unsigned short color; 
@property (assign,nonatomic) unsigned long long totalAssetCount; 
@property (assign,nonatomic) unsigned long long refcount; 
@property (assign,nonatomic) char floating; 
@property (assign,nonatomic) unsigned layoutStatus; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) PLCloudResourceNode * next; 
@property (nonatomic,retain) PLCloudResourceNode * parent; 
@property (nonatomic,retain) PLCloudResourceNode * leftChild; 
@property (nonatomic,retain) PLCloudResourceNode * rightChild; 
@property (nonatomic,retain,readonly) PLManagedAsset * asset; 
@property (nonatomic,retain,readonly) PLCloudResourceNode * grandparentNode; 
@property (nonatomic,retain,readonly) PLCloudResourceNode * successorNode; 
@property (nonatomic,retain,readonly) PLCloudResourceNode * predecessorNode; 
@property (nonatomic,retain,readonly) PLCloudResourceNode * uncleNode; 
@property (assign,nonatomic) unsigned long long selfResourceSizeClassLo; 
@property (assign,nonatomic) unsigned long long selfResourceSizeClassMed; 
@property (assign,nonatomic) unsigned long long selfResourceSizeClassHi; 
@property (assign,nonatomic) unsigned long long totalResourceSizeClassLo; 
@property (assign,nonatomic) unsigned long long totalResourceSizeClassMed; 
@property (assign,nonatomic) unsigned long long totalResourceSizeClassHi; 
+(id)entityName;
+(id)nodeForAssetWithUuid:(id)arg1 inContext:(id)arg2 ;
+(void)_insertFloatingNodeForAsset:(id)arg1 ;
+(void)_enumerateSelfAndDescendantsInOrderFromLocalRoot:(id)arg1 withCallbackBlock:(/*^block*/id)arg2 currentDepth:(int)arg3 ;
+(void)markStaleForAsset:(id)arg1 ;
-(id)description;
-(PLManagedAsset *)asset;
-(PLCloudResourceNode *)successorNode;
-(char)isNullNode;
-(unsigned long long)totalResourceSizeForQualityClass:(unsigned short)arg1 ;
-(unsigned long long)selfResourceSizeForQualityClass:(unsigned short)arg1 ;
-(void)updateTotalResourceSizesForQualityLevels:(/*^block*/id)arg1 ;
-(PLCloudResourceNode *)uncleNode;
-(PLCloudResourceNode *)grandparentNode;
-(void)_rotateLeftWithTreeRoot:(id*)arg1 ;
-(void)_rotateRightWithTreeRoot:(id*)arg1 ;
-(PLCloudResourceNode *)predecessorNode;
-(unsigned)nodeHeight;
-(id)nodeAtIndex:(unsigned)arg1 ;
-(id)resourceForQualityClass:(unsigned short)arg1 ;
-(id)supportingResourcesForQualityClass:(unsigned short)arg1 ;
-(void)insertChildNode:(id)arg1 usingComparer:(/*^block*/id)arg2 ;
-(void)setTotalResourceSize:(unsigned long long)arg1 forQualityClass:(unsigned short)arg2 ;
-(void)setSelfResourceSize:(unsigned long long)arg1 forQualityClass:(unsigned short)arg2 ;
-(unsigned long long)countOfResourcesOnSelfAndDescendants;
-(id)nodeAtIndex:(unsigned)arg1 withLocalRoot:(id)arg2 ;
-(void)enumerateDescendantsInOrder:(/*^block*/id)arg1 ;
-(char)isLeaf;
-(id)siblingNode;
-(unsigned long long)countOfDescendants;
@end

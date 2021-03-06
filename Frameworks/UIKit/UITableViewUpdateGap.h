/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIUpdateItem, NSMutableArray, NSArray;

@interface UITableViewUpdateGap : NSObject {

	UIUpdateItem* _firstUpdateItem;
	UIUpdateItem* _lastUpdateItem;
	NSMutableArray* _deleteItems;
	NSMutableArray* _insertItems;
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	}  _gapFlags;

}

@property (nonatomic,retain) UIUpdateItem * firstUpdateItem;                 //@synthesize firstUpdateItem=_firstUpdateItem - In the implementation block
@property (nonatomic,retain) UIUpdateItem * lastUpdateItem;                  //@synthesize lastUpdateItem=_lastUpdateItem - In the implementation block
@property (nonatomic,readonly) NSArray * updateItems; 
@property (nonatomic,readonly) NSArray * deleteItems;                        //@synthesize deleteItems=_deleteItems - In the implementation block
@property (nonatomic,readonly) NSArray * insertItems;                        //@synthesize insertItems=_insertItems - In the implementation block
@property (nonatomic,readonly) char isDeleteBasedGap; 
@property (nonatomic,readonly) char hasInserts; 
@property (nonatomic,readonly) char isSectionBasedGap; 
@property (nonatomic,readonly) char hasAutomaticAnimationItems; 
+(id)gapWithUpdateItem:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setFirstUpdateItem:(UIUpdateItem *)arg1 ;
-(void)setLastUpdateItem:(UIUpdateItem *)arg1 ;
-(void)addUpdateItem:(id)arg1 ;
-(char)isDeleteBasedGap;
-(char)hasInserts;
-(NSArray *)updateItems;
-(char)isSectionBasedGap;
-(char)hasAutomaticAnimationItems;
-(UIUpdateItem *)firstUpdateItem;
-(UIUpdateItem *)lastUpdateItem;
-(NSArray *)deleteItems;
-(NSArray *)insertItems;
@end


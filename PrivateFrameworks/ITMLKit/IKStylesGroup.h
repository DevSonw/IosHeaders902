/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary, NSIndexSet;

@interface IKStylesGroup : NSObject {

	NSArray* _mediaQueryList;
	NSArray* _orderedStylesOrGroups;
	NSDictionary* _indexedSelectors;
	NSIndexSet* _groupIndexes;

}

@property (nonatomic,retain,readonly) NSArray * mediaQueryList;                     //@synthesize mediaQueryList=_mediaQueryList - In the implementation block
@property (nonatomic,retain,readonly) NSArray * orderedStylesOrGroups;              //@synthesize orderedStylesOrGroups=_orderedStylesOrGroups - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * indexedSelectors;              //@synthesize indexedSelectors=_indexedSelectors - In the implementation block
@property (nonatomic,retain,readonly) NSIndexSet * groupIndexes;                    //@synthesize groupIndexes=_groupIndexes - In the implementation block
+(id)stylesGroupWithMarkup:(id)arg1 filterBlockedStyles:(char)arg2 ;
-(id)initWithMarkup:(id)arg1 parseSubGroups:(char)arg2 mediaQueryList:(id)arg3 filterBlockedStyles:(char)arg4 ;
-(NSArray *)orderedStylesOrGroups;
-(void)_computeIndexedSelectorsFromStylesOrGroups:(id)arg1 ;
-(id)initWithCSSRule:(id)arg1 mediaQueryList:(id)arg2 filterBlockedStyles:(char)arg3 ;
-(NSArray *)mediaQueryList;
-(NSDictionary *)indexedSelectors;
-(NSIndexSet *)groupIndexes;
@end

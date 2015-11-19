/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIShelfPageSectionConfigurationDataSource, UICollectionViewDataSource, UICollectionViewDelegate;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class UICollectionView, SKUIViewElementLayoutContext, SKUIStorePageSectionContext, UIColor, SKUIShelfLayoutData, IKViewElementStyle;

@interface SKUIShelfPageSectionConfiguration : NSObject {

	int _lockupType;
	UICollectionView* _shelfCollectionView;
	char _needsShelfCollectionViewReload;
	char _needsShelfCollectionViewLayout;
	char _rendersWithParallax;
	char _rendersWithPerspective;
	char _topSection;
	char _wantsZoomingShelfLayout;
	SKUIViewElementLayoutContext* _cellLayoutContext;
	id<SKUIShelfPageSectionConfigurationDataSource> _dataSource;
	SKUIStorePageSectionContext* _pageSectionContext;
	int _sectionIndex;
	UIColor* _shelfCollectionViewBackgroundColor;
	id<UICollectionViewDataSource> _shelfCollectionViewDataSource;
	id<UICollectionViewDelegate> _shelfCollectionViewDelegate;
	SKUIShelfLayoutData* _shelfLayoutData;
	IKViewElementStyle* _shelfViewElementStyle;
	float _zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
	float _zoomingShelfLayoutInterItemSpacing;
	float _zoomingShelfLayoutItemWidth;
	float _zoomingShelfLayoutScaledItemWidth;

}

@property (nonatomic,retain) SKUIViewElementLayoutContext * cellLayoutContext;                               //@synthesize cellLayoutContext=_cellLayoutContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIShelfPageSectionConfigurationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UICollectionView * existingShelfCollectionView; 
@property (assign,nonatomic) char needsShelfCollectionViewReload;                                            //@synthesize needsShelfCollectionViewReload=_needsShelfCollectionViewReload - In the implementation block
@property (assign,nonatomic) char needsShelfCollectionViewLayout;                                            //@synthesize needsShelfCollectionViewLayout=_needsShelfCollectionViewLayout - In the implementation block
@property (nonatomic,readonly) unsigned numberOfIterations; 
@property (nonatomic,retain) SKUIStorePageSectionContext * pageSectionContext;                               //@synthesize pageSectionContext=_pageSectionContext - In the implementation block
@property (assign,nonatomic) char rendersWithParallax;                                                       //@synthesize rendersWithParallax=_rendersWithParallax - In the implementation block
@property (assign,nonatomic) char rendersWithPerspective;                                                    //@synthesize rendersWithPerspective=_rendersWithPerspective - In the implementation block
@property (assign,nonatomic) int sectionIndex;                                                               //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,readonly) UICollectionView * shelfCollectionView; 
@property (nonatomic,retain) UIColor * shelfCollectionViewBackgroundColor;                                   //@synthesize shelfCollectionViewBackgroundColor=_shelfCollectionViewBackgroundColor - In the implementation block
@property (assign,nonatomic) id<UICollectionViewDataSource> shelfCollectionViewDataSource;                   //@synthesize shelfCollectionViewDataSource=_shelfCollectionViewDataSource - In the implementation block
@property (assign,nonatomic) id<UICollectionViewDelegate> shelfCollectionViewDelegate;                       //@synthesize shelfCollectionViewDelegate=_shelfCollectionViewDelegate - In the implementation block
@property (nonatomic,readonly) SKUIShelfLayoutData * shelfLayoutData;                                        //@synthesize shelfLayoutData=_shelfLayoutData - In the implementation block
@property (nonatomic,retain) IKViewElementStyle * shelfViewElementStyle;                                     //@synthesize shelfViewElementStyle=_shelfViewElementStyle - In the implementation block
@property (assign,getter=isTopSection,nonatomic) char topSection;                                            //@synthesize topSection=_topSection - In the implementation block
@property (nonatomic,readonly) char wantsZoomingShelfLayout;                                                 //@synthesize wantsZoomingShelfLayout=_wantsZoomingShelfLayout - In the implementation block
@property (nonatomic,readonly) float zoomingShelfLayoutFocusedItemHorizontalCenterOffset;                    //@synthesize zoomingShelfLayoutFocusedItemHorizontalCenterOffset=_zoomingShelfLayoutFocusedItemHorizontalCenterOffset - In the implementation block
@property (nonatomic,readonly) float zoomingShelfLayoutInterItemSpacing;                                     //@synthesize zoomingShelfLayoutInterItemSpacing=_zoomingShelfLayoutInterItemSpacing - In the implementation block
@property (nonatomic,readonly) float zoomingShelfLayoutItemWidth;                                            //@synthesize zoomingShelfLayoutItemWidth=_zoomingShelfLayoutItemWidth - In the implementation block
@property (nonatomic,readonly) float zoomingShelfLayoutScaledItemWidth;                                      //@synthesize zoomingShelfLayoutScaledItemWidth=_zoomingShelfLayoutScaledItemWidth - In the implementation block
-(void)setSectionIndex:(int)arg1 ;
-(int)sectionIndex;
-(unsigned)numberOfIterations;
-(void)setDataSource:(id<SKUIShelfPageSectionConfigurationDataSource>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<SKUIShelfPageSectionConfigurationDataSource>)dataSource;
-(void)setShelfCollectionViewDataSource:(id<UICollectionViewDataSource>)arg1 ;
-(void)setShelfCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(char)needsShelfCollectionViewReload;
-(void)setNeedsShelfCollectionViewReload:(char)arg1 ;
-(id)backgroundColorForShelfViewElement:(id)arg1 ;
-(id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2 ;
-(CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(int)arg3 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(UICollectionView *)existingShelfCollectionView;
-(void)setNeedsShelfCollectionViewLayout:(char)arg1 ;
-(int)numberOfSectionCells;
-(UIEdgeInsets)sectionContentInsetAdjustedFromValue:(UIEdgeInsets)arg1 forShelfViewElement:(id)arg2 withSectionIndex:(int)arg3 ;
-(void)setTopSection:(char)arg1 ;
-(void)registerReusableClassesForCollectionView:(id)arg1 ;
-(void)setCellLayoutContext:(SKUIViewElementLayoutContext *)arg1 ;
-(void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(char)arg3 numberOfShelfItems:(int)arg4 ;
-(void)setPageSectionContext:(SKUIStorePageSectionContext *)arg1 ;
-(char)supportsDuplicateShelfItems;
-(id)cellForShelfItemViewElement:(id)arg1 indexPath:(id)arg2 ;
-(unsigned)numberOfCellsForNumberOfShelfItems:(unsigned)arg1 ;
-(void)shelfItemsCollectionView:(id)arg1 willApplyLayoutAttributes:(id)arg2 forViewElement:(id)arg3 withItemIndex:(int)arg4 ;
-(char)rendersWithParallax;
-(id)normalizedShelfItemIndexPathFromActualIndexPath:(id)arg1 numberOfShelfItems:(unsigned)arg2 ;
-(char)rendersWithPerspective;
-(void)setRendersWithPerspective:(char)arg1 ;
-(void)setRendersWithParallax:(char)arg1 ;
-(void)setShelfViewElementStyle:(IKViewElementStyle *)arg1 ;
-(void)setShelfCollectionViewBackgroundColor:(UIColor *)arg1 ;
-(void)reloadLockupTypeForShelfViewElement:(id)arg1 ;
-(id)effectiveViewElementForShelfItemViewElement:(id)arg1 ;
-(id)actualIndexPathOfShelfItemClosestToVisibleBoundsForNormalizedIndexPath:(id)arg1 numberOfShelfItems:(unsigned)arg2 ;
-(char)prefetchResourcesForShelfItemViewElement:(id)arg1 reason:(int)arg2 ;
-(SKUIShelfLayoutData *)shelfLayoutData;
-(int)lockupTypeForLockup:(id)arg1 ;
-(char)isTopSection;
-(UICollectionView *)shelfCollectionView;
-(id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 ;
-(SKUIStorePageSectionContext *)pageSectionContext;
-(SKUIViewElementLayoutContext *)cellLayoutContext;
-(char)wantsZoomingShelfLayout;
-(float)zoomingShelfLayoutScaledItemWidth;
-(float)zoomingShelfLayoutItemWidth;
-(id)_styledShelfCollectionViewLayoutForExistingLayout:(id)arg1 ;
-(void)_updateShelfLayoutDataContentInset;
-(float)_perspectiveHeightForContentSize:(float)arg1 ;
-(id)_reloadShelfLayoutDataWithNumberOfShelfItems:(int)arg1 ;
-(Class)_cellClassForEffectiveShelfItemViewElement:(id)arg1 ;
-(float)_columnSpacingForShelfItemViewElements:(id)arg1 ;
-(id)_shelfItemViewElementAtIndex:(int)arg1 ;
-(void)requestCellLayoutForViewElement:(id)arg1 withColumnWidth:(float)arg2 ;
-(Class)_lockupCellClassWithLockup:(id)arg1 ;
-(char)needsShelfCollectionViewLayout;
-(UIColor *)shelfCollectionViewBackgroundColor;
-(id<UICollectionViewDataSource>)shelfCollectionViewDataSource;
-(id<UICollectionViewDelegate>)shelfCollectionViewDelegate;
-(IKViewElementStyle *)shelfViewElementStyle;
-(float)zoomingShelfLayoutFocusedItemHorizontalCenterOffset;
-(float)zoomingShelfLayoutInterItemSpacing;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIGridViewElementPageSectionConfigurationDataSource.h>
#import <libobjc.A.dylib/SKUICollectionDOMFeatureTargetting.h>

@protocol SKUIEntityProviding;
@class SKUIViewElementLayoutContext, SKUIGridViewElementPageSectionConfiguration, SKUIDynamicPageSectionIndexMapper, CPLRUDictionary, SKUIViewElement, SKUIViewElementTextLayoutCache, _SKUIDynamicGridSizeCacheKey, SKUIMutableIntegerValue, NSMutableDictionary, SKUIGridComponent, NSString;

@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting> {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	SKUIGridViewElementPageSectionConfiguration* _configuration;
	SKUIDynamicPageSectionIndexMapper* _dynamicPageSectionIndexMapper;
	char _editing;
	id<SKUIEntityProviding> _entityProvider;
	CPLRUDictionary* _globalIndexToEntityValueProviderValueCache;
	CPLRUDictionary* _globalIndexToTemplateViewElementCache;
	SKUIViewElement* _independentlySizedViewElement;
	SKUIViewElementTextLayoutCache* _labelLayoutCache;
	int _minimumEntityCountForSections;
	_SKUIDynamicGridSizeCacheKey* _reusableSizeCacheKey;
	SKUIMutableIntegerValue* _reusableGlobalIndexIntegerValue;
	unsigned* _sectionHeaderGlobalIndices;
	unsigned _numberOfSections;
	char _showsSectionHeaders;
	NSMutableDictionary* _sizeCacheKeyToCachedCellSize;
	NSMutableDictionary* _templateViewElementsCache;
	char _usesSizingEntityValueProvider;
	struct {
		unsigned respondsToSectionEntityValueProviderAtIndex : 1;
	}  _entityProviderFlags;

}

@property (nonatomic,readonly) SKUIGridComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEditing,nonatomic,readonly) char editing; 
-(UIEdgeInsets)sectionContentInset;
-(void)dealloc;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_setContext:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)_reloadViewElementProperties;
-(int)applyUpdateType:(int)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(void)deselectItemsAnimated:(char)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(id)relevantEntityProviders;
-(void)willAppearInContext:(id)arg1 ;
-(void)collectionViewDidConfirmButtonElement:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(int)numberOfCells;
-(char)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(char)arg3 ;
-(void)reloadVisibleCellsWithReason:(int)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2 ;
-(UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1 ;
-(int)pinningStyleForItemAtIndexPath:(id)arg1 ;
-(id)indexPathsForPinningItems;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(int)arg2 ;
-(void)_enumerateVisibleCellsUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateCellSizeCache;
-(void)_resetLayoutProperties;
-(id)_viewElementAtGlobalIndex:(int)arg1 ;
-(id)_dynamicGridViewElement;
-(int)_entityGlobalIndexForGlobalIndex:(int)arg1 returningSection:(out int*)arg2 ;
-(id)_templateViewElementsForType:(id)arg1 mode:(id)arg2 ;
-(void)_reloadEntityProperties;
-(void)_updateStyleProperties;
-(void)_reloadVisibleCellsAnimated:(char)arg1 ;
-(id)_entityValueProviderForGlobalIndex:(int)arg1 sectionIndex:(int*)arg2 ;
-(id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1 ;
-(int)_globalIndexForEntityGlobalIndex:(int)arg1 ;
-(char)_updateShowsSectionHeaders;
-(id)_itemTemplateViewElementForEntityValueProvider:(id)arg1 ;
-(id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2 ;
-(void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout int*)arg2 forItemAtIndexPath:(id)arg3 ;
@end

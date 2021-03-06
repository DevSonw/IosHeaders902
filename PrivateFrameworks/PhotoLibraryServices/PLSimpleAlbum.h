/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLAssetContainer.h>

@class NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate;

@interface PLSimpleAlbum : NSObject <PLAssetContainer> {

	NSString* _title;
	NSOrderedSet* _assets;
	PLManagedAsset* _keyAsset;
	PLManagedAsset* _secondaryKeyAsset;
	PLManagedAsset* _tertiaryKeyAsset;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset;                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset;                   //@synthesize secondaryKeyAsset=_secondaryKeyAsset - In the implementation block
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset;                    //@synthesize tertiaryKeyAsset=_tertiaryKeyAsset - In the implementation block
@property (nonatomic,readonly) char canShowComments; 
@property (nonatomic,readonly) char canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(char)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned)approximateCount;
-(NSOrderedSet *)assets;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(char)canShowComments;
-(NSArray *)localizedLocationNames;
-(void)dealloc;
-(NSString *)title;
-(char)isEmpty;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(int)_countOfAssetType:(short)arg1 ;
-(id)initWithTitle:(id)arg1 assets:(id)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <libobjc.A.dylib/SPUISearchResultDetailsViewController.h>

@protocol SPUISearchResultDetailsViewControllerDelegate;
@class UIColor, NSURLSessionDataTask, SPSearchResult, SPSearchResultSection, NSArray, NSString;

@interface SPUISearchMoviesViewController : UICollectionViewController <SPUISearchResultDetailsViewController> {

	NSURLSessionDataTask* _dataTask;
	id<SPUISearchResultDetailsViewControllerDelegate> actionDelegate;
	SPSearchResult* _result;
	SPSearchResultSection* _section;
	NSArray* _movies;

}

@property (retain) SPSearchResult * result;                                                       //@synthesize result=_result - In the implementation block
@property (retain) SPSearchResultSection * section;                                               //@synthesize section=_section - In the implementation block
@property (retain) NSArray * movies;                                                              //@synthesize movies=_movies - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<SPUISearchResultDetailsViewControllerDelegate> actionDelegate; 
@property (readonly) char wantsInset; 
@property (retain) UIColor * contentBackgroundColor; 
+(id)viewControllerForResult:(id)arg1 inSection:(id)arg2 ;
-(id<SPUISearchResultDetailsViewControllerDelegate>)actionDelegate;
-(void)setActionDelegate:(id<SPUISearchResultDetailsViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(SPSearchResultSection *)section;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(SPSearchResult *)result;
-(void)setSection:(SPSearchResultSection *)arg1 ;
-(NSArray *)movies;
-(void)setMovies:(NSArray *)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(char)wantsInset;
-(UIColor *)contentBackgroundColor;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setResult:(SPSearchResult *)arg1 ;
@end


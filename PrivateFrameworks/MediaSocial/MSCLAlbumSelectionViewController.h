/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UIImage, SKUIResourceLoader, UITableView, NSString;

@interface MSCLAlbumSelectionViewController : SKUIViewController <SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _albumItems;
	char _loading;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;
	int _selectedItemIndex;
	/*^block*/id _selectionBlock;
	UITableView* _tableView;
	NSString* _headerText;

}

@property (nonatomic,copy) NSArray * albumItems;                         //@synthesize albumItems=_albumItems - In the implementation block
@property (nonatomic,retain) NSString * headerText;                      //@synthesize headerText=_headerText - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;              //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) int selectedItemIndex;                      //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
@property (nonatomic,copy) id selectionBlock;                            //@synthesize selectionBlock=_selectionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)isLoading;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(id)_placeholderImage;
-(id)selectionBlock;
-(id)_imageDataConsumer;
-(void)setSelectionBlock:(id)arg1 ;
-(void)setAlbumItems:(NSArray *)arg1 ;
-(id)_imageForItemIndex:(int)arg1 ;
-(NSArray *)albumItems;
-(void)setLoading:(char)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_resourceLoader;
-(int)selectedItemIndex;
-(void)setSelectedItemIndex:(int)arg1 ;
@end

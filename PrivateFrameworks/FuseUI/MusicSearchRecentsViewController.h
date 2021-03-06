/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MusicSearchRecentsViewControllerDelegate;
@class UITableView, UIBarButtonItem, UIImageView, UILabel, UIView, NSArray, MusicSearchRecentsStorage, NSString;

@interface MusicSearchRecentsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UIBarButtonItem* _clearBarButtonItem;
	UIImageView* _emptyRecentsImageView;
	UILabel* _emptyRecentsLabel;
	UIView* _emptyRecentsView;
	NSArray* _recentSearches;
	MusicSearchRecentsStorage* _storage;
	id<MusicSearchRecentsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicSearchRecentsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_doneButtonTapped:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setDelegate:(id<MusicSearchRecentsViewControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MusicSearchRecentsViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_reloadData;
-(void)_recentsStorageDidUpdate:(id)arg1 ;
-(void)_layoutEmptyResultsView;
-(void)_showNoResults;
-(void)_showTableView;
-(void)_clearButtonTapped:(id)arg1 ;
-(id)_stringAtIndex:(unsigned)arg1 ;
@end


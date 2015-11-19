/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MSCLAttachmentPropertiesTableViewSectionDelegate.h>

@protocol MSCLAttachmentPropertiesDelegate;
@class MSCLAlbumSelectionViewController, MSCLAttachment, SKUIMediaSocialAuthor, NSArray, MSCLLoadAuthorAlbumsOperation, MSCLConfiguration, UIBarButtonItem, UIImagePickerController, UIPopoverPresentationController, NSMutableArray, UITableView, MSCLTokenTextViewTableAssistant, NSString;

@interface MSCLAttachmentPropertiesViewController : SKUIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate, MSCLAttachmentPropertiesTableViewSectionDelegate> {

	MSCLAlbumSelectionViewController* _albumSelectionViewController;
	MSCLAttachment* _attachment;
	int _artistNameLength;
	SKUIMediaSocialAuthor* _author;
	NSArray* _authorAlbumItems;
	MSCLLoadAuthorAlbumsOperation* _authorAlbumsOperation;
	MSCLConfiguration* _configuration;
	id<MSCLAttachmentPropertiesDelegate> _delegate;
	UIBarButtonItem* _doneButton;
	UIImagePickerController* _imagePickerController;
	CGRect _keyboardFrame;
	UIPopoverPresentationController* _popoverPresentationController;
	NSMutableArray* _sections;
	UITableView* _tableView;
	int _titleLength;
	MSCLTokenTextViewTableAssistant* _tokenTextViewAssistant;

}

@property (nonatomic,copy,readonly) MSCLAttachment * attachment;                                //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLAttachmentPropertiesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) SKUIMediaSocialAuthor * author;                                      //@synthesize author=_author - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MSCLAttachmentPropertiesDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<MSCLAttachmentPropertiesDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(MSCLAttachment *)attachment;
-(void)_setAuthorAlbumItems:(id)arg1 ;
-(void)_updateDoneButton;
-(void)_layoutTableView;
-(void)_pushAlbumSelectionViewController;
-(void)_presentCoverImagePickerControllerForIndexPath:(id)arg1 ;
-(void)_presentCoverImageEditingOptionsForIndexPath:(id)arg1 ;
-(void)_pushCategorySelectionViewController;
-(void)_setCoverImage:(id)arg1 ;
-(void)_reloadSectionWithType:(int)arg1 ;
-(void)tableViewSection:(id)arg1 artistLengthChanged:(int)arg2 ;
-(void)tableViewSection:(id)arg1 titleLengthChanged:(int)arg2 ;
-(id)initWithAttachment:(id)arg1 configuration:(id)arg2 ;
-(void)setAuthor:(SKUIMediaSocialAuthor *)arg1 ;
-(SKUIMediaSocialAuthor *)author;
-(void)_keyboardChangeNotification:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
@end

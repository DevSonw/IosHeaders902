/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface _UIDocumentPickerManagementViewController : UITableViewController {

	NSArray* _allPickers;
	NSArray* _fileTypes;
	unsigned _mode;

}

@property (nonatomic,retain) NSArray * allPickers;              //@synthesize allPickers=_allPickers - In the implementation block
@property (nonatomic,retain) NSArray * fileTypes;               //@synthesize fileTypes=_fileTypes - In the implementation block
@property (assign,nonatomic) unsigned mode;                     //@synthesize mode=_mode - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)_doneButtonPressed;
-(NSArray *)allPickers;
-(id)initWithFileTypes:(id)arg1 mode:(unsigned)arg2 ;
-(void)setFileTypes:(NSArray *)arg1 ;
-(NSArray *)fileTypes;
-(void)setAllPickers:(NSArray *)arg1 ;
-(void)switchToggled:(id)arg1 ;
@end


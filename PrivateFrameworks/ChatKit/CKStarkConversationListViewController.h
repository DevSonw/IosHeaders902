/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class CKConversation;

@interface CKStarkConversationListViewController : UITableViewController {

	CKConversation* _selectedConversation;

}

@property (nonatomic,retain) CKConversation * selectedConversation;              //@synthesize selectedConversation=_selectedConversation - In the implementation block
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)conversationListDidChange:(id)arg1 ;
-(void)_handleNewComposePressed:(id)arg1 ;
-(CKConversation *)selectedConversation;
-(void)setSelectedConversation:(CKConversation *)arg1 ;
@end


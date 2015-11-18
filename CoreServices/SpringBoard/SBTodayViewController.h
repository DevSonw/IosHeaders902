/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWidgetHandlingNCColumnViewController.h>
#import <libobjc.A.dylib/NCSnippetDataSourceObserver.h>

@class NSArray, EKUIMiniMonthView, NSString;

@interface SBTodayViewController : SBWidgetHandlingNCColumnViewController <NCSnippetDataSourceObserver> {

	NSArray* _todaySnippetIdentifierOrder;
	NSArray* _tomorrowSnippetIdentifierOrder;
	EKUIMiniMonthView* _miniMonth;

}

@property (assign,nonatomic) CGAffineTransform contentTransform; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interfaceItemForDatum:(id)arg1 fromDataSourceWithIdentifier:(id)arg2 ;
-(id)_widgetHandlingBulletinViewController;
-(id)_orderedEnabledInterfaceItems;
-(void)todayViewSettingsViewController:(id)arg1 didReorderInterfaceItems:(id)arg2 inGroup:(id)arg3 ;
-(id)_representedGroup;
-(char)notificationCenterTableViewController:(id)arg1 didSelectAction:(id)arg2 forRow:(id)arg3 inSection:(id)arg4 ;
-(char)notificationCenterTableViewController:(id)arg1 shouldHighlightRow:(id)arg2 inSection:(id)arg3 ;
-(char)notificationCenterTableViewController:(id)arg1 didSelectRow:(id)arg2 inSection:(id)arg3 ;
-(void)forceUpdateTableHeader;
-(void)updateTableFooter;
-(void)widgetsEditButtonTapped:(id)arg1 ;
-(void)_updateTableHeaderIfNecessary;
-(id)_bulletinOrderStringForSnippetInfo:(id)arg1 ;
-(char)_isElementWithIdentifierEnabled:(id)arg1 ;
-(void)_insertSnippetSectionIfPossible:(id)arg1 ;
-(void)_sortSnippets:(id)arg1 usingGuide:(id)arg2 ;
-(id)_snippetAfterSnippet:(id)arg1 inCollection:(id)arg2 ;
-(id)_snippetRowInfoWithIdentifier:(id)arg1 inSection:(id)arg2 ;
-(id)_todayViewControllerDelegate;
-(id)_sectionInfoForSnippetCategory:(int)arg1 ;
-(void)_replaceWithSnippetIfPossible:(id)arg1 snippet:(id)arg2 inSection:(id)arg3 ;
-(void)_insertSnippetIfPossible:(id)arg1 inSection:(id)arg2 sortGuide:(id)arg3 ;
-(void)_removeSnippetWithIdentifierIfPossible:(id)arg1 inSection:(id)arg2 ;
-(void)_replaceWithSnippetDatum:(id)arg1 inSection:(id)arg2 ;
-(id)_todaySectionInfo;
-(id)_tomorrowSectionInfo;
-(id)todayTableFooterView;
-(id)todayTableHeaderView;
-(void)_updateTableHeader:(char)arg1 ;
-(void)_removeSnippetSectionIfPossible:(id)arg1 ;
-(CGAffineTransform)contentTransform;
-(void)setContentTransform:(CGAffineTransform)arg1 ;
-(id)_lazyMiniMonth;
-(void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2 ;
-(void)snippetDataSource:(id)arg1 removeDatum:(id)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

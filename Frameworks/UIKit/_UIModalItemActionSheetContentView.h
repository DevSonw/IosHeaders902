/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIModalItemContentView.h>

@class UITableView, _UIBackdropView;

@interface _UIModalItemActionSheetContentView : _UIModalItemContentView {

	UITableView* _otherButtonTableView;
	UITableView* _cancelTableView;
	_UIBackdropView* _effectView;

}
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)layout;
-(void)_prepareViewIfNeeded;
-(void)_createOtherButtonTableView;
-(float)numberOfOtherButtonTitles;
-(void)_moveAllSubviewsToEffectContentView;
@end

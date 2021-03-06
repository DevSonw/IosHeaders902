/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSMutableArray, NSArray, NSString;

@interface PSUIWebRestrictionsController : PSEditableListController <MCProfileConnectionObserver> {

	char _webFilterEditingAllowedByProfile;
	int _restrictionState;
	NSMutableArray* _allowedGroup;
	NSMutableArray* _deniedGroup;
	NSMutableArray* _inAndOutList;
	NSMutableArray* _whitelistAllowedGroup;
	NSMutableArray* _whitelist;
	NSArray* _contentFilterOverriddenWhiteListedSites;
	NSArray* _contentFilterOverriddenBlackListedSites;
	NSArray* _whiteListAllowedSites;

}

@property (assign,nonatomic) char webFilterEditingAllowedByProfile;                          //@synthesize webFilterEditingAllowedByProfile=_webFilterEditingAllowedByProfile - In the implementation block
@property (assign,nonatomic) int restrictionState;                                           //@synthesize restrictionState=_restrictionState - In the implementation block
@property (nonatomic,retain) NSMutableArray * allowedGroup;                                  //@synthesize allowedGroup=_allowedGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * deniedGroup;                                   //@synthesize deniedGroup=_deniedGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * inAndOutList;                                  //@synthesize inAndOutList=_inAndOutList - In the implementation block
@property (nonatomic,retain) NSMutableArray * whitelistAllowedGroup;                         //@synthesize whitelistAllowedGroup=_whitelistAllowedGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * whitelist;                                     //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) NSArray * contentFilterOverriddenWhiteListedSites;              //@synthesize contentFilterOverriddenWhiteListedSites=_contentFilterOverriddenWhiteListedSites - In the implementation block
@property (nonatomic,retain) NSArray * contentFilterOverriddenBlackListedSites;              //@synthesize contentFilterOverriddenBlackListedSites=_contentFilterOverriddenBlackListedSites - In the implementation block
@property (nonatomic,retain) NSArray * whiteListAllowedSites;                                //@synthesize whiteListAllowedSites=_whiteListAllowedSites - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)webRestrictionsState;
-(NSMutableArray *)whitelist;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setEditable:(char)arg1 ;
-(void)setWhitelist:(NSMutableArray *)arg1 ;
-(void)setControlledURL:(id)arg1 specifier:(id)arg2 ;
-(id)controlledURL:(id)arg1 ;
-(void)commitNamedURL:(id)arg1 ;
-(void)reloadEntriesFromManagedConfiguration;
-(void)webFilterStateChanged:(id)arg1 ;
-(void)setContentFilterOverriddenWhiteListedSites:(NSArray *)arg1 ;
-(void)setContentFilterOverriddenBlackListedSites:(NSArray *)arg1 ;
-(id)_whitelistBookmarkForURL:(id)arg1 ;
-(void)setWhiteListAllowedSites:(NSArray *)arg1 ;
-(void)updateEditControlWithState:(int)arg1 animated:(char)arg2 ;
-(void)setRestrictionType:(id)arg1 specifier:(id)arg2 ;
-(id)inAndOutListItems;
-(id)whitelistItems;
-(void)saveContentFilterOverriddenBlackListedSites:(id)arg1 ;
-(void)saveContentFilterOverriddenWhiteListedSites:(id)arg1 ;
-(void)saveWhiteListAllowedSites:(id)arg1 ;
-(char)webFilterEditingAllowedByProfile;
-(void)setWebFilterEditingAllowedByProfile:(char)arg1 ;
-(int)restrictionState;
-(void)setRestrictionState:(int)arg1 ;
-(NSMutableArray *)allowedGroup;
-(void)setAllowedGroup:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deniedGroup;
-(void)setDeniedGroup:(NSMutableArray *)arg1 ;
-(NSMutableArray *)inAndOutList;
-(void)setInAndOutList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)whitelistAllowedGroup;
-(void)setWhitelistAllowedGroup:(NSMutableArray *)arg1 ;
-(NSArray *)contentFilterOverriddenWhiteListedSites;
-(NSArray *)contentFilterOverriddenBlackListedSites;
-(NSArray *)whiteListAllowedSites;
@end


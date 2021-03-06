/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBControlCenterSectionViewController.h>
#import <SpringBoard/SBCCButtonControllerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyPathObserver.h>

@class NSMutableArray, NSMutableDictionary, SBControlCenterButtonSectionSettings, NSString;

@interface SBCCButtonSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate, _UISettingsKeyPathObserver> {

	NSMutableArray* _modules;
	NSMutableDictionary* _modulesByID;
	NSMutableDictionary* _moduleControllersByID;
	SBControlCenterButtonSectionSettings* _settings;

}

@property (nonatomic,retain) SBControlCenterButtonSectionSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)buttonControllerClass;
+(Class)viewClass;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)_addButtonModule:(id)arg1 ;
-(id)_allButtonModules;
-(void)_activateModule:(id)arg1 ;
-(id)_sortKeyForModule:(id)arg1 ;
-(id)_allButtonControllers;
-(void)_deactivateModule:(id)arg1 ;
-(void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2 ;
-(id)_controllerForModule:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)view;
-(SBControlCenterButtonSectionSettings *)settings;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)_updateSettings;
-(void)setSettings:(SBControlCenterButtonSectionSettings *)arg1 ;
-(id)sectionIdentifier;
@end


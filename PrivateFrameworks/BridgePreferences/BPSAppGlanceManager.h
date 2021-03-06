/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BPSInternalGlanceObserverDelegate.h>

@class PSListController, NGSGlance, BPSInternalGlanceManager, NSString;

@interface BPSAppGlanceManager : NSObject <BPSInternalGlanceObserverDelegate> {

	PSListController* _listControllerDelegate;
	NGSGlance* _glance;
	BPSInternalGlanceManager* _manager;

}

@property (assign,nonatomic,__weak) PSListController * listControllerDelegate;              //@synthesize listControllerDelegate=_listControllerDelegate - In the implementation block
@property (nonatomic,retain) NGSGlance * glance;                                            //@synthesize glance=_glance - In the implementation block
@property (nonatomic,retain) BPSInternalGlanceManager * manager;                            //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setManager:(BPSInternalGlanceManager *)arg1 ;
-(BPSInternalGlanceManager *)manager;
-(void)loadSettings;
-(void)dealloc;
-(id)init;
-(void)settingsManagerReloadedGlances:(id)arg1 ;
-(void)setShowsGlance:(id)arg1 forSpecifier:(id)arg2 ;
-(id)showsGlance:(id)arg1 ;
-(id)glanceSpecifierForIdentifier:(id)arg1 ;
-(void)_logGlanceDescriptions;
-(PSListController *)listControllerDelegate;
-(void)setListControllerDelegate:(PSListController *)arg1 ;
-(NGSGlance *)glance;
-(void)setGlance:(NGSGlance *)arg1 ;
@end


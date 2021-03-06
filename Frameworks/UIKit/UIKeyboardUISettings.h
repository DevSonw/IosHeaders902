/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface UIKeyboardUISettings : _UISettings {

	int _lastVolume;
	char _nextPage;
	char _didShowHUD;

}
+(char)enabled;
+(void)loadSettings;
+(void)hideViaNotification;
+(id)sharedInstance;
-(void)pressRingerButton;
-(void)hide;
-(id)_sharedHUD;
-(char)_isShowingHUD;
-(id)initWithDefaultValues;
-(void)saveSettings;
-(void)cancel;
-(void)next;
-(void)show;
-(void)show:(char)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)settingsHUDConfiguration;
-(void)previous;
@end


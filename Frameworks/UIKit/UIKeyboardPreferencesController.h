/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIKeyboardPreferencesController : NSObject

@property (assign) int handBias; 
+(id)sharedPreferencesController;
+(void)handleSpecificHardwareKeyboard;
-(id)valueForKey:(int)arg1 ;
-(void)setValue:(id)arg1 forKey:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(float)rivenSizeFactor:(float)arg1 ;
-(char)boolForKey:(int)arg1 ;
-(void)synchronizePreferences;
-(void)saveInputModes:(id)arg1 ;
-(void)setLanguageAwareInputModeLastUsed:(id)arg1 ;
-(char)typologyEnabled;
-(int)handBias;
-(void)setHandBias:(int)arg1 ;
-(char)isKeyLockedDown:(int)arg1 ;
-(void)releaseDontSynchronizePreferences;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)touchSynchronizePreferencesTimer;
-(char)costlyCapture;
-(char)spaceConfirmationEnabled;
-(void)setInputModeLastUsed:(id)arg1 ;
@end

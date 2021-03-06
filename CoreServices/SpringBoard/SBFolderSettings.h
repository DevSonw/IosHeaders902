/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFolderSettings : _UISettings {

	char _allowNestedFolders;
	char _pinchToClose;
	char _oneColumnAtATime;

}

@property (assign,nonatomic) char allowNestedFolders;              //@synthesize allowNestedFolders=_allowNestedFolders - In the implementation block
@property (assign,nonatomic) char pinchToClose;                    //@synthesize pinchToClose=_pinchToClose - In the implementation block
@property (assign,nonatomic) char oneColumnAtATime;                //@synthesize oneColumnAtATime=_oneColumnAtATime - In the implementation block
+(id)settingsControllerModule;
-(char)allowNestedFolders;
-(void)setAllowNestedFolders:(char)arg1 ;
-(void)setPinchToClose:(char)arg1 ;
-(void)setOneColumnAtATime:(char)arg1 ;
-(char)pinchToClose;
-(char)oneColumnAtATime;
-(void)setDefaultValues;
@end


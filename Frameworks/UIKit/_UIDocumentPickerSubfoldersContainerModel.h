/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _containerID;

}
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned)arg3 ;
-(id)initWithPickableTypes:(id)arg1 container:(id)arg2 ;
-(id)scopes;
-(char)shouldShowTopLevelContainers;
-(id)displayTitle;
-(id)_createObserver;
@end


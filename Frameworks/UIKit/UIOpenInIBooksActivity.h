/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@class NSURL, NSString, LSApplicationProxy, NSOperation;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate> {

	char _shouldUnlinkFile;
	NSURL* _url;
	NSString* _applicationIdentifier;
	LSApplicationProxy* _applicationProxy;
	NSOperation* _operation;

}

@property (nonatomic,retain) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) char shouldUnlinkFile;                              //@synthesize shouldUnlinkFile=_shouldUnlinkFile - In the implementation block
@property (nonatomic,retain) NSString * applicationIdentifier;                   //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;              //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSOperation * operation;                            //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bestJobNameForActivityItems:(id)arg1 ;
+(id)jobNameFormatForFile;
+(id)defaultJobName;
+(int)activityCategory;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(NSURL *)url;
-(id)activityType;
-(NSString *)applicationIdentifier;
-(void)_cleanup;
-(void)setUrl:(NSURL *)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(void)_finishedCopyingResource;
-(char)shouldUnlinkFile;
-(id)printInteractionController;
-(void)setShouldUnlinkFile:(char)arg1 ;
-(void)_openDocumentWithApplication;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
@end

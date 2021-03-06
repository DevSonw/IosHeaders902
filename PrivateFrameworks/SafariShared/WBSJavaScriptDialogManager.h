/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface WBSJavaScriptDialogManager : NSObject {

	NSMutableDictionary* _mapOfURLToDateDialogWasLastShown;
	NSMutableSet* _setOfBannedURLs;
	double _intervalAfterWhichDateOfLastShownDialogForURLIsForgotten;

}
-(id)init;
-(void)_pruneMapOfURLToDateDialogWasLastShown;
-(char)canRunDialogFromURL:(id)arg1 ;
-(void)suppressDialogsFromURL:(id)arg1 ;
-(id)_earliestDateADialogCanBeShownWithoutSuppressionOptionFromURL:(id)arg1 ;
-(char)shouldOfferToSuppressDialogsFromURL:(id)arg1 ;
-(void)didRunDialogFromURL:(id)arg1 ;
-(void)willRedirectFromURL:(id)arg1 toURL:(id)arg2 ;
-(void)_test_setIntervalAfterWhichDateOfLastShownDialogForURLIsForgotten:(double)arg1 ;
@end


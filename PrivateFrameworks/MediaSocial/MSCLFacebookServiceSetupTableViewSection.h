/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MSCLSocialServiceSetupTableViewSection.h>

@interface MSCLFacebookServiceSetupTableViewSection : MSCLSocialServiceSetupTableViewSection {

	int _displayState;

}
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithService:(id)arg1 accountStore:(id)arg2 ;
-(void)registerReusableCellsWithTableView:(id)arg1 ;
-(id)performActionForIndexPath:(id)arg1 parentViewController:(id)arg2 ;
-(void)_updateDisplayStateForce:(char)arg1 ;
-(void)_openFacebookSettingsTitleKey:(id)arg1 messageKey:(id)arg2 parentViewController:(id)arg3 ;
-(int)_cellTypeForIndexPath:(id)arg1 ;
-(id)_selectedFacebookPageForAccount:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:37 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SL_OOPAuthFlowDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface SLGoogleAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {

	char _waitingForAuthorizationCode;
	/*^block*/id _completion;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(/*^block*/id)arg2 ;
-(void)_fetchNamesForToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(/*^block*/id)arg2 ;
-(char)wantsInitialRedirect;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1 ;
-(id)authURLForUsername:(id)arg1 ;
-(id)requestForAuthURL:(id)arg1 ;
-(char)shouldHideWebViewForLoadWithRequest:(id)arg1 ;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:39 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, LSApplicationProxy;

@interface _SFNavigationResult : NSObject {

	int _type;
	NSURL* _URL;
	LSApplicationProxy* _externalApplication;

}

@property (nonatomic,readonly) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) LSApplicationProxy * externalApplication;              //@synthesize externalApplication=_externalApplication - In the implementation block
+(id)resultOfLoadingRequest:(id)arg1 isMainFrame:(char)arg2 disallowRedirectToExternalApps:(char)arg3 ;
+(id)resultOfType:(int)arg1 withURL:(id)arg2 ;
+(id)resultWithRedirectToExternalURL:(id)arg1 ;
-(LSApplicationProxy *)externalApplication;
-(id)_initWithType:(int)arg1 URL:(id)arg2 externalApplication:(id)arg3 ;
-(int)type;
-(NSURL *)URL;
@end

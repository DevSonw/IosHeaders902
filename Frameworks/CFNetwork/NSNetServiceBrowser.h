/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:22:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface NSNetServiceBrowser : NSObject {

	id _netServiceBrowser;
	id _delegate;
	void* _reserved;
	char _includesPeerToPeer;

}

@property (assign) id<NSNetServiceBrowserDelegate> delegate; 
@property (assign) char includesPeerToPeer;                               //@synthesize includesPeerToPeer=_includesPeerToPeer - In the implementation block
-(char)includesPeerToPeer;
-(char)_includesAWDL;
-(void)setIncludesPeerToPeer:(char)arg1 ;
-(void)_setIncludesAWDL:(char)arg1 ;
-(CFNetServiceBrowserRef)_internalNetServiceBrowser;
-(void)searchForBrowsableDomains;
-(void)searchForRegistrationDomains;
-(void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2 ;
-(void)_dispatchCallBack:(void*)arg1 flags:(unsigned long)arg2 error:(SCD_Struct_NS20)arg3 ;
-(void)searchForAllDomains;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id<NSNetServiceBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NSNetServiceBrowserDelegate>)delegate;
-(void)stop;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)finalize;
@end


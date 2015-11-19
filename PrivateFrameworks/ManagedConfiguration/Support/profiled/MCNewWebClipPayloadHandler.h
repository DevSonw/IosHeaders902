/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@class UIWebClip;

@interface MCNewWebClipPayloadHandler : MCNewPayloadHandler {

	UIWebClip* _setAsideClip;

}
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)savedWebClipIdentifier;
-(id)_findInstalledClipWithIdentifier:(id)arg1 ;
-(char)isInstalled;
-(void)remove;
@end

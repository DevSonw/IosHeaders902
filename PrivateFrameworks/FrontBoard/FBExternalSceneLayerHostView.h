/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBSceneLayerHostView.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>

@protocol FBSceneHostView;
@class FBScene, FBSceneMonitor, FBSceneHostManager, NSString, UIView;

@interface FBExternalSceneLayerHostView : FBSceneLayerHostView <FBSceneMonitorDelegate> {

	FBScene* _parentScene;
	FBScene* _targetScene;
	FBSceneMonitor* _monitor;
	FBSceneHostManager* _hostManager;
	NSString* _requester;
	NSString* _targetSceneID;
	UIView*<FBSceneHostView> _hostView;

}

@property (nonatomic,retain,readonly) FBScene * targetScene;              //@synthesize targetScene=_targetScene - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2 ;
-(void)_updateHostingState;
-(void)_updateTargetScene;
-(FBScene *)targetScene;
@end


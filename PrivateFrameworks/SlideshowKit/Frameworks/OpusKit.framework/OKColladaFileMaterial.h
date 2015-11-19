/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OKMaterial.h>

@class NSURL, SCNNode, NSArray, OKWidgetNode;

@interface OKColladaFileMaterial : OKMaterial {

	NSURL* _url;
	SCNNode* _sceneLoaded;
	NSArray* _nodeNames;

}

@property (nonatomic,readonly) OKWidgetNode * parentNode; 
+(id)supportedSettings;
-(void)dealloc;
-(OKWidgetNode *)parentNode;
-(void)load;
-(void)unload;
-(id)settingUrl;
-(void)setSettingUrl:(id)arg1 ;
-(id)settingNodeNames;
-(void)setSettingNodeNames:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

@class MPUExtrasBannerController, MPUExtrasGridElementViewController;

@interface MPUExtrasGalleryTemplateViewController : MPUExtrasTemplateViewController {

	MPUExtrasBannerController* _bannerController;
	MPUExtrasGridElementViewController* _gridViewController;
	unsigned _selectedItemIndex;

}

@property (assign,nonatomic) unsigned selectedItemIndex;              //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_prepareLayout;
-(char)showsPlaceholder;
-(id)templateElement;
-(unsigned)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned)arg1 ;
@end


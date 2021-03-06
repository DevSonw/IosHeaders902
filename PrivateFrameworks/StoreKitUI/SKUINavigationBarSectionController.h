/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUINavigationBarContext, SKUIViewElementLayoutContext, UIView, NSString;

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate> {

	SKUINavigationBarContext* _navigationBarContext;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}

@property (nonatomic,retain) SKUINavigationBarContext * context;                              //@synthesize navigationBarContext=_navigationBarContext - In the implementation block
@property (nonatomic,readonly) SKUIViewElementLayoutContext * viewLayoutContext; 
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIView *)view;
-(SKUINavigationBarContext *)context;
-(void)setContext:(SKUINavigationBarContext *)arg1 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1 ;
-(void)willAppearInNavigationBar;
-(void)reloadSectionViews;
-(id)barButtonItemForElementIdentifier:(id)arg1 ;
-(SKUIViewElementLayoutContext *)viewLayoutContext;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElementCacheKey, UIColor;

@interface SKUIImageViewElement : SKUIViewElement {

	NSString* _alt;
	NSString* _entityResourceName;
	NSURL* _entityURL;
	char _enabled;
	char _hasValidEntityValues;
	SKUIImageViewElementCacheKey* _resourceCacheKey;
	NSString* _resourceName;
	CGSize _shadowOffset;
	float _shadowRadius;
	UIColor* _shadowColor;
	CGSize _size;
	SKUIImageViewElementCacheKey* _transientResourceCacheKey;
	NSURL* _url;
	float _layerShadowOpacity;
	float _layerShadowRadius;
	CGSize _layerShadowOffset;

}

@property (nonatomic,readonly) NSString * resourceName; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) id resourceCacheKey; 
@property (nonatomic,readonly) id transientResourceCacheKey;              //@synthesize transientResourceCacheKey=_transientResourceCacheKey - In the implementation block
@property (assign,nonatomic) float layerShadowOpacity;                    //@synthesize layerShadowOpacity=_layerShadowOpacity - In the implementation block
@property (assign,nonatomic) CGSize layerShadowOffset;                    //@synthesize layerShadowOffset=_layerShadowOffset - In the implementation block
@property (assign,nonatomic) float layerShadowRadius;                     //@synthesize layerShadowRadius=_layerShadowRadius - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                         //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) float shadowRadius;                          //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                       //@synthesize shadowColor=_shadowColor - In the implementation block
-(CGSize)size;
-(char)isEnabled;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(NSURL *)URL;
-(float)shadowRadius;
-(void)setShadowRadius:(float)arg1 ;
-(NSString *)resourceName;
-(id)accessibilityText;
-(id)resourceCacheKey;
-(char)rendersWithParallax;
-(char)rendersWithPerspective;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)pageComponentType;
-(void)entityValueProviderDidChange;
-(void)_loadEntityValuesIfNeeded;
-(id)uniquingMapKey;
-(id)entityValueProperties;
-(id)transientResourceCacheKey;
-(float)layerShadowOpacity;
-(void)setLayerShadowOpacity:(float)arg1 ;
-(CGSize)layerShadowOffset;
-(void)setLayerShadowOffset:(CGSize)arg1 ;
-(float)layerShadowRadius;
-(void)setLayerShadowRadius:(float)arg1 ;
@end


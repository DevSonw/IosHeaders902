/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPArtworkDataSource;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString, NSCache;

@interface MPArtworkCatalog : NSObject {

	CGSize _fittingSize;
	char _loadingRepresentation;
	float _destinationScale;
	id _token;
	id<MPArtworkDataSource> _dataSource;
	NSString* _cacheIdentifier;
	id _requestingContext;
	id _destination;
	/*^block*/id _configurationBlock;

}

@property (nonatomic,readonly) int MP_artworkType; 
@property (assign,nonatomic) float destinationScale;                                    //@synthesize destinationScale=_destinationScale - In the implementation block
@property (assign,nonatomic) CGSize fittingSize;                                        //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) CGSize scaledFittingSize; 
@property (nonatomic,retain) id token;                                                  //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id<MPArtworkDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSCache * cache; 
@property (nonatomic,readonly) id<NSCopying> visualIdenticalityIdentifier; 
@property (nonatomic,copy) NSString * cacheIdentifier;                                  //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id requestingContext;                               //@synthesize requestingContext=_requestingContext - In the implementation block
@property (assign,nonatomic,__weak) id destination;                                     //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) id configurationBlock;                                       //@synthesize configurationBlock=_configurationBlock - In the implementation block
@property (getter=isLoadingRepresentation) char loadingRepresentation;                  //@synthesize loadingRepresentation=_loadingRepresentation - In the implementation block
+(id)_artworkLoadQueue;
+(id)_artworkCacheForIdentifier:(id)arg1 requestingContext:(id)arg2 ;
+(id)staticArtworkCatalogWithImage:(id)arg1 ;
+(void)setCacheLimit:(unsigned)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
+(void)setCachePurgesWhenEnteringBackground:(char)arg1 forCacheIdentifier:(id)arg2 requestingContext:(id)arg3 ;
-(CGSize)scaledFittingSize;
-(id<NSCopying>)visualIdenticalityIdentifier;
-(float)destinationScale;
-(void)setFittingSize:(CGSize)arg1 ;
-(void)setDestinationScale:(float)arg1 ;
-(void)requestImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithToken:(id)arg1 dataSource:(id)arg2 ;
-(char)isLoadingRepresentation;
-(CGSize)fittingSize;
-(void)setLoadingRepresentation:(char)arg1 ;
-(void)_updateRepresentation;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(void)setRequestingContext:(id)arg1 ;
-(NSString *)cacheIdentifier;
-(id)requestingContext;
-(void)_updateWithRepresentation:(id)arg1 ;
-(void)_loadBestRepresentationIfNeeded;
-(id)bestImageFromDisk;
-(void)setDestination:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(char)isArtworkVisuallyIdenticalToCatalog:(id)arg1 ;
-(void)requestColorAnalysisWithAlgorithm:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestFocusRegionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCacheIdentifier:(id)arg1 forRequestingContext:(id)arg2 ;
-(int)MP_artworkType;
-(void)setDataSource:(id<MPArtworkDataSource>)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id<MPArtworkDataSource>)dataSource;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(NSCache *)cache;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(id)token;
-(void)setToken:(id)arg1 ;
@end

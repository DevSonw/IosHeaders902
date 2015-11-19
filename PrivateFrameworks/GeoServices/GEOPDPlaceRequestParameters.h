/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteParameters, GEOPDBatchPopularNearbySearchParameters, GEOPDSearchBrowseCategorySuggestionParameters, GEOPDCanonicalLocationSearchParameters, GEOPDCategorySearchParameters, GEOPDGeocodingParameters, GEOPDLocationDirectedSearchParameters, GEOPDMerchantLookupParameters, GEOPDNearbySearchParameters, GEOPDPlaceLookupParameters, GEOPDPlaceRefinementParameters, GEOPDPopularNearbySearchParameters, GEOPDReverseGeocodingParameters, GEOPDSearchFieldPlaceholderParameters, GEOPDSearchParameters, GEOPDSearchZeroKeywordCategorySuggestionParameters, GEOPDSiriSearchParameters, GEOPDVendorSpecificPlaceRefinementParameters;

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {

	GEOPDAutocompleteParameters* _autocompleteParameters;
	GEOPDBatchPopularNearbySearchParameters* _batchPopularNearbySearchParameters;
	GEOPDSearchBrowseCategorySuggestionParameters* _browseCategorySuggestionParameters;
	GEOPDCanonicalLocationSearchParameters* _canonicalLocationSearchParameters;
	GEOPDCategorySearchParameters* _categorySearchParameters;
	GEOPDGeocodingParameters* _geocodingParameters;
	GEOPDLocationDirectedSearchParameters* _locationDirectedSearchParameters;
	GEOPDMerchantLookupParameters* _merchantLookupParameters;
	GEOPDNearbySearchParameters* _nearbySearchParameters;
	GEOPDPlaceLookupParameters* _placeLookupParameters;
	GEOPDPlaceRefinementParameters* _placeRefinementParameters;
	GEOPDPopularNearbySearchParameters* _popularNearbySearchParameters;
	GEOPDReverseGeocodingParameters* _reverseGeocodingParameters;
	GEOPDSearchFieldPlaceholderParameters* _searchFieldPlaceholderParameters;
	GEOPDSearchParameters* _searchParameters;
	GEOPDSearchZeroKeywordCategorySuggestionParameters* _searchZeroKeywordCategorySuggestionParameters;
	GEOPDSiriSearchParameters* _siriSearchParameters;
	GEOPDVendorSpecificPlaceRefinementParameters* _vendorSpecificPlaceRefinementParameters;

}

@property (nonatomic,readonly) char hasSearchParameters; 
@property (nonatomic,retain) GEOPDSearchParameters * searchParameters;                                                                        //@synthesize searchParameters=_searchParameters - In the implementation block
@property (nonatomic,readonly) char hasGeocodingParameters; 
@property (nonatomic,retain) GEOPDGeocodingParameters * geocodingParameters;                                                                  //@synthesize geocodingParameters=_geocodingParameters - In the implementation block
@property (nonatomic,readonly) char hasCanonicalLocationSearchParameters; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchParameters * canonicalLocationSearchParameters;                                      //@synthesize canonicalLocationSearchParameters=_canonicalLocationSearchParameters - In the implementation block
@property (nonatomic,readonly) char hasReverseGeocodingParameters; 
@property (nonatomic,retain) GEOPDReverseGeocodingParameters * reverseGeocodingParameters;                                                    //@synthesize reverseGeocodingParameters=_reverseGeocodingParameters - In the implementation block
@property (nonatomic,readonly) char hasPlaceLookupParameters; 
@property (nonatomic,retain) GEOPDPlaceLookupParameters * placeLookupParameters;                                                              //@synthesize placeLookupParameters=_placeLookupParameters - In the implementation block
@property (nonatomic,readonly) char hasMerchantLookupParameters; 
@property (nonatomic,retain) GEOPDMerchantLookupParameters * merchantLookupParameters;                                                        //@synthesize merchantLookupParameters=_merchantLookupParameters - In the implementation block
@property (nonatomic,readonly) char hasPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDPlaceRefinementParameters * placeRefinementParameters;                                                      //@synthesize placeRefinementParameters=_placeRefinementParameters - In the implementation block
@property (nonatomic,readonly) char hasSiriSearchParameters; 
@property (nonatomic,retain) GEOPDSiriSearchParameters * siriSearchParameters;                                                                //@synthesize siriSearchParameters=_siriSearchParameters - In the implementation block
@property (nonatomic,readonly) char hasLocationDirectedSearchParameters; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchParameters * locationDirectedSearchParameters;                                        //@synthesize locationDirectedSearchParameters=_locationDirectedSearchParameters - In the implementation block
@property (nonatomic,readonly) char hasAutocompleteParameters; 
@property (nonatomic,retain) GEOPDAutocompleteParameters * autocompleteParameters;                                                            //@synthesize autocompleteParameters=_autocompleteParameters - In the implementation block
@property (nonatomic,readonly) char hasBrowseCategorySuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionParameters * browseCategorySuggestionParameters;                              //@synthesize browseCategorySuggestionParameters=_browseCategorySuggestionParameters - In the implementation block
@property (nonatomic,readonly) char hasCategorySearchParameters; 
@property (nonatomic,retain) GEOPDCategorySearchParameters * categorySearchParameters;                                                        //@synthesize categorySearchParameters=_categorySearchParameters - In the implementation block
@property (nonatomic,readonly) char hasPopularNearbySearchParameters; 
@property (nonatomic,retain) GEOPDPopularNearbySearchParameters * popularNearbySearchParameters;                                              //@synthesize popularNearbySearchParameters=_popularNearbySearchParameters - In the implementation block
@property (nonatomic,readonly) char hasSearchZeroKeywordCategorySuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordCategorySuggestionParameters * searchZeroKeywordCategorySuggestionParameters;              //@synthesize searchZeroKeywordCategorySuggestionParameters=_searchZeroKeywordCategorySuggestionParameters - In the implementation block
@property (nonatomic,readonly) char hasSearchFieldPlaceholderParameters; 
@property (nonatomic,retain) GEOPDSearchFieldPlaceholderParameters * searchFieldPlaceholderParameters;                                        //@synthesize searchFieldPlaceholderParameters=_searchFieldPlaceholderParameters - In the implementation block
@property (nonatomic,readonly) char hasBatchPopularNearbySearchParameters; 
@property (nonatomic,retain) GEOPDBatchPopularNearbySearchParameters * batchPopularNearbySearchParameters;                                    //@synthesize batchPopularNearbySearchParameters=_batchPopularNearbySearchParameters - In the implementation block
@property (nonatomic,readonly) char hasVendorSpecificPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDVendorSpecificPlaceRefinementParameters * vendorSpecificPlaceRefinementParameters;                          //@synthesize vendorSpecificPlaceRefinementParameters=_vendorSpecificPlaceRefinementParameters - In the implementation block
@property (nonatomic,readonly) char hasNearbySearchParameters; 
@property (nonatomic,retain) GEOPDNearbySearchParameters * nearbySearchParameters;                                                            //@synthesize nearbySearchParameters=_nearbySearchParameters - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDVendorSpecificPlaceRefinementParameters *)vendorSpecificPlaceRefinementParameters;
-(char)hasBrowseCategorySuggestionParameters;
-(void)setReverseGeocodingParameters:(GEOPDReverseGeocodingParameters *)arg1 ;
-(void)setBrowseCategorySuggestionParameters:(GEOPDSearchBrowseCategorySuggestionParameters *)arg1 ;
-(GEOPDSiriSearchParameters *)siriSearchParameters;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(char)hasAutocompleteParameters;
-(GEOPDNearbySearchParameters *)nearbySearchParameters;
-(void)setCategorySearchParameters:(GEOPDCategorySearchParameters *)arg1 ;
-(GEOPDLocationDirectedSearchParameters *)locationDirectedSearchParameters;
-(char)hasLocationDirectedSearchParameters;
-(GEOPDSearchParameters *)searchParameters;
-(GEOPDAutocompleteParameters *)autocompleteParameters;
-(char)hasSiriSearchParameters;
-(void)setPlaceLookupParameters:(GEOPDPlaceLookupParameters *)arg1 ;
-(void)setSearchParameters:(GEOPDSearchParameters *)arg1 ;
-(GEOPDGeocodingParameters *)geocodingParameters;
-(GEOPDSearchBrowseCategorySuggestionParameters *)browseCategorySuggestionParameters;
-(char)hasPlaceRefinementParameters;
-(GEOPDCanonicalLocationSearchParameters *)canonicalLocationSearchParameters;
-(void)setSearchFieldPlaceholderParameters:(GEOPDSearchFieldPlaceholderParameters *)arg1 ;
-(char)hasMerchantLookupParameters;
-(void)setSiriSearchParameters:(GEOPDSiriSearchParameters *)arg1 ;
-(char)hasVendorSpecificPlaceRefinementParameters;
-(void)setPopularNearbySearchParameters:(GEOPDPopularNearbySearchParameters *)arg1 ;
-(char)hasNearbySearchParameters;
-(GEOPDPopularNearbySearchParameters *)popularNearbySearchParameters;
-(GEOPDCategorySearchParameters *)categorySearchParameters;
-(char)hasPlaceLookupParameters;
-(char)hasBatchPopularNearbySearchParameters;
-(char)hasReverseGeocodingParameters;
-(GEOPDReverseGeocodingParameters *)reverseGeocodingParameters;
-(GEOPDSearchZeroKeywordCategorySuggestionParameters *)searchZeroKeywordCategorySuggestionParameters;
-(char)hasSearchFieldPlaceholderParameters;
-(GEOPDPlaceLookupParameters *)placeLookupParameters;
-(void)setLocationDirectedSearchParameters:(GEOPDLocationDirectedSearchParameters *)arg1 ;
-(void)setBatchPopularNearbySearchParameters:(GEOPDBatchPopularNearbySearchParameters *)arg1 ;
-(void)setGeocodingParameters:(GEOPDGeocodingParameters *)arg1 ;
-(void)setNearbySearchParameters:(GEOPDNearbySearchParameters *)arg1 ;
-(void)setAutocompleteParameters:(GEOPDAutocompleteParameters *)arg1 ;
-(char)hasSearchZeroKeywordCategorySuggestionParameters;
-(void)setSearchZeroKeywordCategorySuggestionParameters:(GEOPDSearchZeroKeywordCategorySuggestionParameters *)arg1 ;
-(char)hasCanonicalLocationSearchParameters;
-(GEOPDSearchFieldPlaceholderParameters *)searchFieldPlaceholderParameters;
-(GEOPDMerchantLookupParameters *)merchantLookupParameters;
-(char)hasGeocodingParameters;
-(char)hasPopularNearbySearchParameters;
-(GEOPDBatchPopularNearbySearchParameters *)batchPopularNearbySearchParameters;
-(void)setMerchantLookupParameters:(GEOPDMerchantLookupParameters *)arg1 ;
-(void)setVendorSpecificPlaceRefinementParameters:(GEOPDVendorSpecificPlaceRefinementParameters *)arg1 ;
-(void)setCanonicalLocationSearchParameters:(GEOPDCanonicalLocationSearchParameters *)arg1 ;
-(char)hasSearchParameters;
-(char)hasCategorySearchParameters;
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE16)arg1 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(char)readFrom:(id)arg1 ;
@end

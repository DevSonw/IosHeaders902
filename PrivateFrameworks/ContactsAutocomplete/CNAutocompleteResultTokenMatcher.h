/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CNAutocompleteResultTokenMatcher : NSObject {

	NSArray* _tokens;
	NSString* _countryCode;

}
+(id)searchTokensFromString:(id)arg1 ;
+(id)normalizePhoneNumber:(id)arg1 countryCode:(id)arg2 ;
+(id)indexTokensFromPhoneNumber:(id)arg1 ;
+(id)tokenizePhoneNumber:(id)arg1 ;
-(id)init;
-(id)initWithSearchString:(id)arg1 countryCode:(id)arg2 ;
-(char)evaluateResult:(id)arg1 ;
-(id)nameTokensForResult:(id)arg1 ;
-(id)tokensForResultName:(id)arg1 ;
-(id)tokensForResultValue:(id)arg1 ;
-(id)representationsOfPhoneNumber:(id)arg1 ;
-(/*^block*/id)filterAdapter;
-(id)initWithSearchString:(id)arg1 ;
@end

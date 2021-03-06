/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TCFontName : NSObject {

	NSString* _styleName;
	NSString* _fullName;

}

@property (nonatomic,readonly) NSString * styleName;              //@synthesize styleName=_styleName - In the implementation block
@property (nonatomic,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)fullName;
-(NSString *)styleName;
-(id)initWithStyleName:(id)arg1 fullName:(id)arg2 ;
-(id)equivalentDictionary;
@end


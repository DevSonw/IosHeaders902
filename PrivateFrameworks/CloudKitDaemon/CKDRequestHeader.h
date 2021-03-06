/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSURL;

@interface CKDRequestHeader : NSObject <NSSecureCoding> {

	NSDictionary* _headerDict;
	NSString* _method;
	NSURL* _url;
	NSString* _sessionConfigurationIdentifier;
	unsigned _urlSessionTaskIdentifier;

}

@property (nonatomic,retain) NSDictionary * headerDict;                              //@synthesize headerDict=_headerDict - In the implementation block
@property (nonatomic,retain) NSString * method;                                      //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSURL * url;                                            //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * sessionConfigurationIdentifier;              //@synthesize sessionConfigurationIdentifier=_sessionConfigurationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned urlSessionTaskIdentifier;                      //@synthesize urlSessionTaskIdentifier=_urlSessionTaskIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)method;
-(void)setHeaderDict:(NSDictionary *)arg1 ;
-(void)setSessionConfigurationIdentifier:(NSString *)arg1 ;
-(void)setUrlSessionTaskIdentifier:(unsigned)arg1 ;
-(NSDictionary *)headerDict;
-(NSString *)sessionConfigurationIdentifier;
-(unsigned)urlSessionTaskIdentifier;
-(void)setMethod:(NSString *)arg1 ;
@end


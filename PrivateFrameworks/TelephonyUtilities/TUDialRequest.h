/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSArray;

@interface TUDialRequest : NSObject <NSSecureCoding, NSCopying> {

	char _performDialAssist;
	char _performLocalDialAssist;
	char _dialAssisted;
	char _showUIPrompt;
	char _hostOnCurrentDevice;
	char _endpointOnCurrentDevice;
	int _service;
	int _dialType;
	NSString* _destinationID;
	int _callIdentifier;
	NSString* _audioSourceIdentifier;
	NSString* _uniqueProxyIdentifier;
	int _originatingUIType;
	CGSize _localLandscapeAspectRatio;
	CGSize _localPortraitAspectRatio;

}

@property (nonatomic,readonly) int service;                                          //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) int dialType;                                           //@synthesize dialType=_dialType - In the implementation block
@property (nonatomic,copy) NSString * destinationID;                                 //@synthesize destinationID=_destinationID - In the implementation block
@property (assign,nonatomic) int callIdentifier;                                     //@synthesize callIdentifier=_callIdentifier - In the implementation block
@property (nonatomic,copy) NSString * audioSourceIdentifier;                         //@synthesize audioSourceIdentifier=_audioSourceIdentifier - In the implementation block
@property (assign,nonatomic) char performDialAssist;                                 //@synthesize performDialAssist=_performDialAssist - In the implementation block
@property (assign,nonatomic) char performLocalDialAssist;                            //@synthesize performLocalDialAssist=_performLocalDialAssist - In the implementation block
@property (assign,getter=isDialAssisted,nonatomic) char dialAssisted;                //@synthesize dialAssisted=_dialAssisted - In the implementation block
@property (assign,nonatomic) char showUIPrompt;                                      //@synthesize showUIPrompt=_showUIPrompt - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSArray * validityErrors; 
@property (nonatomic,copy) NSString * uniqueProxyIdentifier;                         //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (assign,nonatomic) char hostOnCurrentDevice;                               //@synthesize hostOnCurrentDevice=_hostOnCurrentDevice - In the implementation block
@property (assign,nonatomic) char endpointOnCurrentDevice;                           //@synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * addressBookInternalUUID; 
@property (assign,nonatomic) int originatingUIType;                                  //@synthesize originatingUIType=_originatingUIType - In the implementation block
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;                       //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;                        //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
+(char)supportsSecureCoding;
+(int)originatingUITypeForString:(id)arg1 ;
+(id)stringForDialType:(int)arg1 ;
+(id)stringForOriginatingUIType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(int)service;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(CGSize)localPortraitAspectRatio;
-(id)initWithService:(int)arg1 ;
-(NSString *)destinationID;
-(char)isDialAssisted;
-(char)performLocalDialAssist;
-(void)setDestinationID:(NSString *)arg1 ;
-(char)performDialAssist;
-(int)callIdentifier;
-(void)setDialAssisted:(char)arg1 ;
-(NSString *)uniqueProxyIdentifier;
-(void)setCallIdentifier:(int)arg1 ;
-(NSString *)audioSourceIdentifier;
-(int)dialType;
-(char)hostOnCurrentDevice;
-(char)endpointOnCurrentDevice;
-(void)setEndpointOnCurrentDevice:(char)arg1 ;
-(char)showUIPrompt;
-(int)originatingUIType;
-(NSArray *)validityErrors;
-(id)URLScheme;
-(id)URLHost;
-(id)URLQueryItems;
-(id)isVoicemailURLQueryItem;
-(id)callIdentifierURLQueryItem;
-(id)forceAssistURLQueryItem;
-(id)suppressAssistURLQueryItem;
-(id)dialAssistedURLQueryItem;
-(id)originatingUIURLQueryItem;
-(id)noPromptURLQueryItem;
-(id)validityErrorForUnknownService;
-(id)validityErrorForDestinationIDWithVoicemail;
-(id)validityErrorForNonNormalDialTypeWithoutTelephony;
-(id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
-(id)validityErrorForEmergencyCall;
-(void)setDialType:(int)arg1 ;
-(void)setAudioSourceIdentifier:(NSString *)arg1 ;
-(void)setPerformDialAssist:(char)arg1 ;
-(void)setPerformLocalDialAssist:(char)arg1 ;
-(void)setShowUIPrompt:(char)arg1 ;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)setHostOnCurrentDevice:(char)arg1 ;
-(void)setOriginatingUIType:(int)arg1 ;
-(NSString *)addressBookInternalUUID;
-(CGSize)localLandscapeAspectRatio;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	char _authenticationRequired;
	char _destructive;
	NSString* _activationModeString;
	NSString* _behaviorString;
	NSString* _identifier;
	NSString* _title;
	unsigned _behavior;
	NSDictionary* _parameters;
	unsigned _activationMode;

}

@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned behavior;                                                        //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                                  //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned activationMode;                                                  //@synthesize activationMode=_activationMode - In the implementation block
@property (assign,getter=isAuthenticationRequired,nonatomic) char authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,getter=isDestructive,nonatomic) char destructive;                                    //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,readonly) NSString * activationModeString;                                        //@synthesize activationModeString=_activationModeString - In the implementation block
@property (nonatomic,readonly) NSString * behaviorString;                                              //@synthesize behaviorString=_behaviorString - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)validatedAction;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 behavior:(unsigned)arg3 parameters:(id)arg4 activationMode:(unsigned)arg5 isAuthenticationRequired:(char)arg6 isDestructive:(char)arg7 ;
-(unsigned)behavior;
-(NSDictionary *)parameters;
-(unsigned)activationMode;
-(char)isAuthenticationRequired;
-(char)isDestructive;
-(NSString *)behaviorString;
-(NSString *)activationModeString;
-(void)setBehavior:(unsigned)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setActivationMode:(unsigned)arg1 ;
-(void)setAuthenticationRequired:(char)arg1 ;
-(void)setDestructive:(char)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI18 _mask;
	NSString* _recentInputIdentifier;

}

@property (assign,nonatomic) unsigned autocapitalizationType; 
@property (assign,nonatomic) unsigned autocorrectionType; 
@property (assign,nonatomic) unsigned spellCheckingType; 
@property (assign,nonatomic) unsigned keyboardType; 
@property (assign,nonatomic) unsigned keyboardAppearance; 
@property (assign,nonatomic) unsigned returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,nonatomic) char secureTextEntry; 
@property (nonatomic,copy) NSString * recentInputIdentifier;                  //@synthesize recentInputIdentifier=_recentInputIdentifier - In the implementation block
+(id)traitsForUITextInputTraits:(id)arg1 ;
+(unsigned)translateToTextInputAutocapitalizationType:(int)arg1 ;
+(unsigned)translateToTextInputAutocorrectionType:(int)arg1 ;
+(unsigned)translateToTextInputSpellCheckingType:(int)arg1 ;
+(unsigned)translateToTextInputKeyboardType:(int)arg1 ;
+(unsigned)translateToTextInputKeyboardAppearance:(int)arg1 ;
+(unsigned)translateToTextInputReturnKeyType:(int)arg1 ;
+(id)translateToTextInputRecentInputIdentifier:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)keyboardAppearance;
-(void)setSecureTextEntry:(char)arg1 ;
-(unsigned)autocapitalizationType;
-(void)setAutocapitalizationType:(unsigned)arg1 ;
-(unsigned)autocorrectionType;
-(void)setAutocorrectionType:(unsigned)arg1 ;
-(unsigned)spellCheckingType;
-(void)setSpellCheckingType:(unsigned)arg1 ;
-(unsigned)keyboardType;
-(void)setKeyboardType:(unsigned)arg1 ;
-(void)setKeyboardAppearance:(unsigned)arg1 ;
-(unsigned)returnKeyType;
-(void)setReturnKeyType:(unsigned)arg1 ;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1 ;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(NSString *)arg1 ;
-(char)secureTextEntry;
@end


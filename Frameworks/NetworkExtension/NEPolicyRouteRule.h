/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSString;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {

	int _action;
	NSString* _interfaceName;
	int _type;

}

@property (assign) int action;                          //@synthesize action=_action - In the implementation block
@property (copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) int type;                            //@synthesize type=_type - In the implementation block
+(id)routeRuleWithAction:(int)arg1 forInterfaceName:(id)arg2 ;
+(id)routeRuleWithAction:(int)arg1 forType:(int)arg2 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(id)initInternal;
-(char)addTLVsToMessage:(id)arg1 ;
-(unsigned char)actionValue;
-(unsigned char)typeValue;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)action;
-(void)setAction:(int)arg1 ;
-(char)validate;
-(id)typeString;
-(id)actionString;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
@end

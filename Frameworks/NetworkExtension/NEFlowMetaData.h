/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSData, NSString;

@interface NEFlowMetaData : NSObject {

	NSData* _sourceAppUniqueIdentifier;
	NSString* _sourceAppSigningIdentifier;

}

@property (readonly) NSData * sourceAppUniqueIdentifier;                 //@synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier - In the implementation block
@property (readonly) NSString * sourceAppSigningIdentifier;              //@synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier - In the implementation block
-(id)initFromFlow:(NEFlowRef)arg1 ;
-(NSString *)sourceAppSigningIdentifier;
-(NSData *)sourceAppUniqueIdentifier;
-(id)description;
@end


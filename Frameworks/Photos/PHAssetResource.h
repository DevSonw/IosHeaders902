/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@class NSString, NSURL, NSData, PHAssetResourceCreationOptions, PHSandboxExtensionWrapper;

@interface PHAssetResource : NSObject {

	int _resourceType;
	NSString* _assetLocalIdentifier;
	NSString* _uniformTypeIdentifier;
	NSString* _originalFilename;
	NSURL* _fileURL;
	NSData* _data;
	PHAssetResourceCreationOptions* _creationOptions;
	NSURL* _privateFileURL;
	PHSandboxExtensionWrapper* _sandboxExtensionWrapper;

}

@property (nonatomic,readonly) int type;                                                                                           //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy) NSString * assetLocalIdentifier;                                                                        //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;                                                                       //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * originalFilename;                                                                            //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) PHAssetResourceCreationOptions * creationOptions;                                                       //@synthesize creationOptions=_creationOptions - In the implementation block
@property (setter=_setPrivateFileURL:,nonatomic,retain) NSURL * privateFileURL;                                                    //@synthesize privateFileURL=_privateFileURL - In the implementation block
@property (setter=_setSandboxExtensionWrapper:,nonatomic,retain) PHSandboxExtensionWrapper * sandboxExtensionWrapper;              //@synthesize sandboxExtensionWrapper=_sandboxExtensionWrapper - In the implementation block
+(id)_newInfosForResourceType:(int)arg1 asset:(id)arg2 managedAsset:(id*)arg3 library:(id)arg4 ;
+(char)uniformTypeIdentifier:(CFStringRef)arg1 conformsToResourceType:(int)arg2 ;
+(id)assetResourcesForAsset:(id)arg1 ;
-(id)initWithResourceType:(int)arg1 ;
-(void)_setAssetLocalIdentifier:(id)arg1 ;
-(void)_setPrivateFileURL:(id)arg1 ;
-(void)_setOriginalFilename:(id)arg1 ;
-(void)_setUniformTypeIdentifier:(id)arg1 ;
-(PHSandboxExtensionWrapper *)sandboxExtensionWrapper;
-(void)_setSandboxExtensionWrapper:(id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(void)setCreationOptions:(PHAssetResourceCreationOptions *)arg1 ;
-(id)propertyListRepresentation;
-(NSString *)assetLocalIdentifier;
-(PHAssetResourceCreationOptions *)creationOptions;
-(NSURL *)privateFileURL;
-(NSString *)uniformTypeIdentifier;
-(id)init;
-(id)description;
-(int)type;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)originalFilename;
-(void)setFileURL:(NSURL *)arg1 ;
@end

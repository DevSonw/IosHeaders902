/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:56 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSData, NSNumber;

@interface CKPackageItem : NSObject {

	int _packageIndex;
	NSURL* _fileURL;
	NSData* _signature;
	long _sectionIndex;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSData* _wrappedAssetKey;
	unsigned long long _itemID;
	long long _size;
	long long _offset;

}

@property (assign,nonatomic) int packageIndex;                       //@synthesize packageIndex=_packageIndex - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) unsigned long long itemID;              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) long long size;                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long sectionIndex;                      //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) NSNumber * deviceID;                    //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                      //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;               //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
-(unsigned long long)itemID;
-(void)setSectionIndex:(long)arg1 ;
-(long)sectionIndex;
-(long long)size;
-(id)description;
-(void)setSize:(long long)arg1 ;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 ;
-(id)CKPropertiesDescription;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(int)packageIndex;
-(void)setPackageIndex:(int)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(NSData *)wrappedAssetKey;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)deviceID;
-(void)setFileURL:(NSURL *)arg1 ;
@end


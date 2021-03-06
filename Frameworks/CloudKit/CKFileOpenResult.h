/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:23:55 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSFileHandle, NSNumber;

@interface CKFileOpenResult : NSObject <NSSecureCoding> {

	NSFileHandle* _fileHandle;
	NSFileHandle* _encryptedFileHandle;
	NSNumber* _fileSize;
	mkbbackuprefRef _handle;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;                       //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * encryptedFileHandle;              //@synthesize encryptedFileHandle=_encryptedFileHandle - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) mkbbackuprefRef handle;                          //@synthesize handle=_handle - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithMobileKeyBagHandle:(mkbbackuprefRef)arg1 path:(id)arg2 error:(id*)arg3 ;
-(void)setEncryptedFileHandle:(NSFileHandle *)arg1 ;
-(mkbbackuprefRef)handle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSFileHandle *)encryptedFileHandle;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(NSNumber *)fileSize;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setHandle:(mkbbackuprefRef)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface IDSAutoFileDeletion : NSObject {

	NSURL* _fileURL;
	int _accessedCount;

}
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)incrementAccessCount;
@end

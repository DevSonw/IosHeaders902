/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {

	NSString* _transferGUID;
	unsigned _wantsAttachmentContiguous : 1;

}

@property (nonatomic,copy,readonly) NSString * transferGUID;              //@synthesize transferGUID=_transferGUID - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)transferGUID;
-(char)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(int)arg3 transferGUID:(id)arg4 ;
@end


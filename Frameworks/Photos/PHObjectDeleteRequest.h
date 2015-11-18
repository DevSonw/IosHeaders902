/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHDeleteChangeRequest.h>

@class NSString, NSManagedObjectID;

@interface PHObjectDeleteRequest : NSObject <PHDeleteChangeRequest> {

	NSString* _uuid;
	NSManagedObjectID* _objectID;
	char _entitled;
	NSString* _clientName;
	int _clientProcessID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                 //@synthesize objectID=_objectID - In the implementation block
@property (getter=isEntitled,nonatomic,readonly) char entitled;              //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                          //@synthesize clientProcessID=_clientProcessID - In the implementation block
+(id)deleteRequestForObject:(id)arg1 ;
-(NSString *)managedEntityName;
-(char)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
-(char)isEntitled;
-(int)clientProcessID;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 entitled:(char)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initForNewObject;
-(NSManagedObjectID *)objectID;
-(id)init;
-(NSString *)uuid;
-(NSString *)clientName;
@end

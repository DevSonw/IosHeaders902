/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingAcceptingTopLevelLeaves.h>

@class NSString, NSMutableDictionary;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves> {

	NSString* _name;
	NSString* _email;
	int _status;
	int _role;
	int _localId;
	NSMutableDictionary* _placeHolder;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * email;                               //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int role;                                       //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) int localId;                                    //@synthesize localId=_localId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * placeHolder;              //@synthesize placeHolder=_placeHolder - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(NSMutableDictionary *)placeHolder;
-(void)setLocalId:(int)arg1 ;
-(void)setPlaceHolder:(NSMutableDictionary *)arg1 ;
-(int)localId;
-(void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 ;
-(id)initWithCalAttendee:(void*)arg1 parentEvent:(id)arg2 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2 ;
-(id)fullEmailString;
-(id)copyOfSelfWithoutLocalID;
-(id)icsUserAddress;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setRole:(int)arg1 ;
-(int)role;
@end

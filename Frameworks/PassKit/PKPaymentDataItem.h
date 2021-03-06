/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentAuthorizationDataModel, NSString;

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {

	int _type;
	int _status;
	PKPaymentAuthorizationDataModel* _model;

}

@property (assign,nonatomic) int type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int status;                                           //@synthesize status=_status - In the implementation block
@property (getter=isRejected,nonatomic,readonly) char rejected; 
@property (assign,nonatomic) PKPaymentAuthorizationDataModel * model;              //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)dataType;
-(char)isValidWithError:(id*)arg1 ;
-(char)isRejected;
-(void)setType:(int)arg1 ;
-(int)type;
-(PKPaymentAuthorizationDataModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(PKPaymentAuthorizationDataModel *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
@end


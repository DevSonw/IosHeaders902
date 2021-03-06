/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, TKSmartCardATR, NSString, TKSmartCardSlotProxy, TKSmartCardSlotScreen;

@interface TKSmartCardSlot : NSObject {

	NSXPCConnection* _connection;
	int _powerState;
	int _shareState;
	char _securePINVerificationSupported;
	char _securePINChangeSupported;
	int _state;
	TKSmartCardATR* _ATR;
	NSString* _name;
	int _maxInputLength;
	int _maxOutputLength;
	TKSmartCardSlotProxy* _proxy;

}

@property (readonly) int powerState; 
@property (readonly) int shareState; 
@property (readonly) char securePINVerificationSupported; 
@property (readonly) char securePINChangeSupported; 
@property (readonly) TKSmartCardSlotScreen * screen; 
@property (assign) int state;                                             //@synthesize state=_state - In the implementation block
@property (retain) TKSmartCardATR * ATR;                                  //@synthesize ATR=_ATR - In the implementation block
@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int maxInputLength;                        //@synthesize maxInputLength=_maxInputLength - In the implementation block
@property (nonatomic,readonly) int maxOutputLength;                       //@synthesize maxOutputLength=_maxOutputLength - In the implementation block
@property (nonatomic,readonly) TKSmartCardSlotProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (assign) int shareState;                                        //@synthesize shareState=_shareState - In the implementation block
@property (assign) int powerState;                                        //@synthesize powerState=_powerState - In the implementation block
@property (assign) char securePINVerificationSupported;                   //@synthesize securePINVerificationSupported=_securePINVerificationSupported - In the implementation block
@property (assign) char securePINChangeSupported;                         //@synthesize securePINChangeSupported=_securePINChangeSupported - In the implementation block
+(void)slotWithEndpoint:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(TKSmartCardSlotScreen *)screen;
-(TKSmartCardSlotProxy *)proxy;
-(int)maxOutputLength;
-(TKSmartCardATR *)ATR;
-(void)setATR:(TKSmartCardATR *)arg1 ;
-(int)shareState;
-(void)setShareState:(int)arg1 ;
-(void)getAttrib:(unsigned long)arg1 expectedLength:(unsigned long)arg2 reply:(/*^block*/id)arg3 ;
-(void)setAttrib:(unsigned long)arg1 data:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)connectToEndpoint:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)remoteSlotWithErrorHandler:(/*^block*/id)arg1 ;
-(id)makeSmartCard;
-(int)maxInputLength;
-(char)securePINVerificationSupported;
-(void)setSecurePINVerificationSupported:(char)arg1 ;
-(char)securePINChangeSupported;
-(void)setSecurePINChangeSupported:(char)arg1 ;
-(void)control:(id)arg1 data:(id)arg2 expectedLength:(unsigned long)arg3 reply:(/*^block*/id)arg4 ;
-(id)userInteractionForConfirmation;
-(id)userInteractionForStringEntry;
-(void)setPowerState:(int)arg1 ;
-(int)powerState;
@end


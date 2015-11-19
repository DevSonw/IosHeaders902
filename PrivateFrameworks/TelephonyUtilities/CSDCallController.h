/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TUCallModelState, CSDCallStateController, CSDTelephonyCallDataSource, CSDFaceTimeCallDataSource, CSDIDSCallDataSource, CSDRelayCallDataSource, NSArray;

@interface CSDCallController : NSObject {

	TUCallModelState* _callModelState;
	CSDCallStateController* _callStateController;
	CSDTelephonyCallDataSource* _telephonyCallDataSource;
	CSDFaceTimeCallDataSource* _faceTimeCallDataSource;
	CSDIDSCallDataSource* _idsCallDataSource;
	CSDRelayCallDataSource* _relayCallDataSource;
	NSArray* _callDataSources;

}

@property (nonatomic,readonly) NSArray * currentCalls; 
@property (nonatomic,readonly) NSArray * currentProxyCalls; 
@property (nonatomic,readonly) NSArray * currentRelayCalls; 
@property (nonatomic,retain) TUCallModelState * callModelState;                                 //@synthesize callModelState=_callModelState - In the implementation block
@property (assign,nonatomic,__weak) CSDCallStateController * callStateController;               //@synthesize callStateController=_callStateController - In the implementation block
@property (nonatomic,retain) CSDTelephonyCallDataSource * telephonyCallDataSource;              //@synthesize telephonyCallDataSource=_telephonyCallDataSource - In the implementation block
@property (nonatomic,retain) CSDFaceTimeCallDataSource * faceTimeCallDataSource;                //@synthesize faceTimeCallDataSource=_faceTimeCallDataSource - In the implementation block
@property (nonatomic,retain) CSDIDSCallDataSource * idsCallDataSource;                          //@synthesize idsCallDataSource=_idsCallDataSource - In the implementation block
@property (nonatomic,retain) CSDRelayCallDataSource * relayCallDataSource;                      //@synthesize relayCallDataSource=_relayCallDataSource - In the implementation block
@property (nonatomic,retain) NSArray * callDataSources;                                         //@synthesize callDataSources=_callDataSources - In the implementation block
-(CSDCallStateController *)callStateController;
-(void)setCallStateController:(CSDCallStateController *)arg1 ;
-(void)setTelephonyCallDataSource:(CSDTelephonyCallDataSource *)arg1 ;
-(CSDTelephonyCallDataSource *)telephonyCallDataSource;
-(void)setFaceTimeCallDataSource:(CSDFaceTimeCallDataSource *)arg1 ;
-(CSDFaceTimeCallDataSource *)faceTimeCallDataSource;
-(void)setIdsCallDataSource:(CSDIDSCallDataSource *)arg1 ;
-(CSDIDSCallDataSource *)idsCallDataSource;
-(void)setRelayCallDataSource:(CSDRelayCallDataSource *)arg1 ;
-(CSDRelayCallDataSource *)relayCallDataSource;
-(void)setCallDataSources:(NSArray *)arg1 ;
-(NSArray *)callDataSources;
-(id)relayCallWithUniqueProxyIdentifier:(id)arg1 ;
-(id)idsCallWithUniqueProxyIdentifier:(id)arg1 ;
-(id)relayCallWithProxyCall:(id)arg1 ;
-(NSArray *)currentRelayCalls;
-(NSArray *)currentProxyCalls;
-(char)updateProxyCallModelStateWithCallModelState:(id)arg1 ;
-(id)init;
-(NSArray *)currentCalls;
-(void)registerCall:(id)arg1 ;
-(TUCallModelState *)callModelState;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setCallModelState:(TUCallModelState *)arg1 ;
@end

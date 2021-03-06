/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol IDSWPPacketSendingProtocol, IDSLinkDelegate;
@class NSString, NSUUID, NSData;

@interface IDSBTLELink : NSObject <IDSLink, CBPeripheralDelegate> {

	NSString* _deviceID;
	NSString* _linkID;
	NSUUID* _peerID;
	id<IDSWPPacketSendingProtocol> _wpLinkManager;
	SCD_Struct_ID16* _incomingPacketBuffer;
	unsigned _state;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;
	char _hasSpaceAvailable;
	char _shouldSendHasSpaceAvailable;
	NSData* _outgoingData;
	id<IDSLinkDelegate> _delegate;

}

@property (retain,readonly) NSString * linkID;                                     //@synthesize linkID=_linkID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned headerOverhead; 
@property (assign) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)copyLinkStatsDict;
-(unsigned)sendPacketBuffer:(SCD_Struct_ID16*)arg1 toDeviceID:(id)arg2 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2 ;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(id)initWithWPLinkManager:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setHasSpaceAvailable:(char)arg1 ;
-(void)didReceiveData:(id)arg1 ;
-(NSString *)linkID;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(void)start;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end


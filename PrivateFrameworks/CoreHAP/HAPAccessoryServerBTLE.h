/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol OS_dispatch_source;
@class NSNumber, CBPeripheral, HAPAccessoryServerBrowserBTLE, NSMapTable, NSMutableArray, CBService, CBCharacteristic, NSString, NSData, NSMutableData, NSObject;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer <CBPeripheralDelegate> {

	PairingSessionPrivateRef _pairingSession;
	char _startPairingRequested;
	char _pairingFeaturesRead;
	char _disconnecting;
	char _unpairedIdentifyRequested;
	char _removeOnDisconnect;
	NSNumber* _stateNumber;
	CBPeripheral* _peripheral;
	HAPAccessoryServerBrowserBTLE* _browser;
	unsigned _state;
	unsigned _connectionRetryCount;
	NSMapTable* _btleServiceToHAPServiceMap;
	unsigned _characteristicDiscoveryRequestCount;
	unsigned _characteristicValueReadCount;
	unsigned _metadataDiscoveryRequestCount;
	unsigned _metadataValueReadCount;
	unsigned _availableInstanceID;
	NSMapTable* _btleCharacteristicToHAPCharacteristicMap;
	NSMapTable* _hapCharacteristicReadCompletionQueues;
	NSMapTable* _hapCharacteristicWriteCompletionQueues;
	NSMapTable* _hapCharacteristicEnableEventCompletionQueues;
	NSMutableArray* _addRemovePairingOperationsQueue;
	CBService* _pairingService;
	CBCharacteristic* _pairSetupCharacteristic;
	CBCharacteristic* _pairVerifyCharacteristic;
	CBCharacteristic* _pairingFeaturesCharacteristic;
	CBCharacteristic* _pairingsCharacteristic;
	CBService* _accessoryInfoService;
	CBCharacteristic* _identifyCharacteristic;
	CBCharacteristic* _modelCharacteristic;
	CBCharacteristic* _serialNumberCharacteristic;
	CBCharacteristic* _manufacturerCharacteristic;
	NSString* _controllerUsername;
	NSString* _accessoryPairingUsername;
	/*^block*/id _pairVerifyCompletionBlock;
	NSData* _sessionReadKey;
	NSMutableData* _readNonce;
	NSData* _sessionWriteKey;
	NSMutableData* _writeNonce;
	NSObject*<OS_dispatch_source> _connectionLifetimeTimer;
	/*^block*/id _unpairedIdentifyCompletionBlock;
	unsigned long long _pairingFeatureFlags;

}

@property (getter=getStateNumber,nonatomic,retain) NSNumber * stateNumber;                           //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) CBPeripheral * peripheral;                                              //@synthesize peripheral=_peripheral - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessoryServerBrowserBTLE * browser;                         //@synthesize browser=_browser - In the implementation block
@property (assign,nonatomic) unsigned state;                                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned connectionRetryCount;                                          //@synthesize connectionRetryCount=_connectionRetryCount - In the implementation block
@property (nonatomic,retain) NSMapTable * btleServiceToHAPServiceMap;                                //@synthesize btleServiceToHAPServiceMap=_btleServiceToHAPServiceMap - In the implementation block
@property (assign,nonatomic) unsigned characteristicDiscoveryRequestCount;                           //@synthesize characteristicDiscoveryRequestCount=_characteristicDiscoveryRequestCount - In the implementation block
@property (assign,nonatomic) unsigned characteristicValueReadCount;                                  //@synthesize characteristicValueReadCount=_characteristicValueReadCount - In the implementation block
@property (assign,nonatomic) unsigned metadataDiscoveryRequestCount;                                 //@synthesize metadataDiscoveryRequestCount=_metadataDiscoveryRequestCount - In the implementation block
@property (assign,nonatomic) unsigned metadataValueReadCount;                                        //@synthesize metadataValueReadCount=_metadataValueReadCount - In the implementation block
@property (assign,nonatomic) unsigned availableInstanceID;                                           //@synthesize availableInstanceID=_availableInstanceID - In the implementation block
@property (nonatomic,retain) NSMapTable * btleCharacteristicToHAPCharacteristicMap;                  //@synthesize btleCharacteristicToHAPCharacteristicMap=_btleCharacteristicToHAPCharacteristicMap - In the implementation block
@property (nonatomic,retain) NSMapTable * hapCharacteristicReadCompletionQueues;                     //@synthesize hapCharacteristicReadCompletionQueues=_hapCharacteristicReadCompletionQueues - In the implementation block
@property (nonatomic,retain) NSMapTable * hapCharacteristicWriteCompletionQueues;                    //@synthesize hapCharacteristicWriteCompletionQueues=_hapCharacteristicWriteCompletionQueues - In the implementation block
@property (nonatomic,retain) NSMapTable * hapCharacteristicEnableEventCompletionQueues;              //@synthesize hapCharacteristicEnableEventCompletionQueues=_hapCharacteristicEnableEventCompletionQueues - In the implementation block
@property (nonatomic,retain) NSMutableArray * addRemovePairingOperationsQueue;                       //@synthesize addRemovePairingOperationsQueue=_addRemovePairingOperationsQueue - In the implementation block
@property (nonatomic,retain) CBService * pairingService;                                             //@synthesize pairingService=_pairingService - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairSetupCharacteristic;                             //@synthesize pairSetupCharacteristic=_pairSetupCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairVerifyCharacteristic;                            //@synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairingFeaturesCharacteristic;                       //@synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * pairingsCharacteristic;                              //@synthesize pairingsCharacteristic=_pairingsCharacteristic - In the implementation block
@property (nonatomic,retain) CBService * accessoryInfoService;                                       //@synthesize accessoryInfoService=_accessoryInfoService - In the implementation block
@property (nonatomic,retain) CBCharacteristic * identifyCharacteristic;                              //@synthesize identifyCharacteristic=_identifyCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * modelCharacteristic;                                 //@synthesize modelCharacteristic=_modelCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * serialNumberCharacteristic;                          //@synthesize serialNumberCharacteristic=_serialNumberCharacteristic - In the implementation block
@property (nonatomic,retain) CBCharacteristic * manufacturerCharacteristic;                          //@synthesize manufacturerCharacteristic=_manufacturerCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * controllerUsername;                                          //@synthesize controllerUsername=_controllerUsername - In the implementation block
@property (nonatomic,retain) NSString * accessoryPairingUsername;                                    //@synthesize accessoryPairingUsername=_accessoryPairingUsername - In the implementation block
@property (nonatomic,copy) id pairVerifyCompletionBlock;                                             //@synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock - In the implementation block
@property (assign,nonatomic) char startPairingRequested;                                             //@synthesize startPairingRequested=_startPairingRequested - In the implementation block
@property (assign,nonatomic) char pairingFeaturesRead;                                               //@synthesize pairingFeaturesRead=_pairingFeaturesRead - In the implementation block
@property (assign,nonatomic) unsigned long long pairingFeatureFlags;                                 //@synthesize pairingFeatureFlags=_pairingFeatureFlags - In the implementation block
@property (nonatomic,retain) NSData * sessionReadKey;                                                //@synthesize sessionReadKey=_sessionReadKey - In the implementation block
@property (nonatomic,retain) NSMutableData * readNonce;                                              //@synthesize readNonce=_readNonce - In the implementation block
@property (nonatomic,retain) NSData * sessionWriteKey;                                               //@synthesize sessionWriteKey=_sessionWriteKey - In the implementation block
@property (nonatomic,retain) NSMutableData * writeNonce;                                             //@synthesize writeNonce=_writeNonce - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionLifetimeTimer;                  //@synthesize connectionLifetimeTimer=_connectionLifetimeTimer - In the implementation block
@property (assign,getter=isDisconnecting,nonatomic) char disconnecting;                              //@synthesize disconnecting=_disconnecting - In the implementation block
@property (assign,nonatomic) char unpairedIdentifyRequested;                                         //@synthesize unpairedIdentifyRequested=_unpairedIdentifyRequested - In the implementation block
@property (nonatomic,copy) id unpairedIdentifyCompletionBlock;                                       //@synthesize unpairedIdentifyCompletionBlock=_unpairedIdentifyCompletionBlock - In the implementation block
@property (assign,nonatomic) char removeOnDisconnect;                                                //@synthesize removeOnDisconnect=_removeOnDisconnect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_convertFromBTLEToHAPUUID:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setCategory:(id)arg1 ;
-(id)identifier;
-(char)_checkPairedState;
-(char)_delegateRespondsToSelector:(SEL)arg1 ;
-(char)_isSessionEstablished;
-(void)_getAttributeDatabase;
-(id)_serverIdentifier;
-(void)setPairVerifyCompletionBlock:(id)arg1 ;
-(void)_establishSecureSession;
-(long)_pairSetupStart;
-(long)_pairSetupTryPassword:(id)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enableEvents:(char)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(long)_pairVerifyStart;
-(id)pairVerifyCompletionBlock;
-(HAPAccessoryServerBrowserBTLE *)browser;
-(NSString *)controllerUsername;
-(long)_ensurePairingSessionIsInitializedWithType:(unsigned)arg1 ;
-(void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_serverName;
-(void)setBrowser:(HAPAccessoryServerBrowserBTLE *)arg1 ;
-(void)setControllerUsername:(NSString *)arg1 ;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(void)handleDisconnectionWithError:(id)arg1 withQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)getStateNumber;
-(void)handleConnectionWithError:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 version:(unsigned)arg7 browser:(id)arg8 keyStore:(id)arg9 ;
-(id)_decryptData:(id)arg1 error:(id*)arg2 ;
-(id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2 ;
-(CBCharacteristic *)pairingsCharacteristic;
-(CBCharacteristic *)pairVerifyCharacteristic;
-(void)setSessionReadKey:(NSData *)arg1 ;
-(void)setReadNonce:(NSMutableData *)arg1 ;
-(void)setSessionWriteKey:(NSData *)arg1 ;
-(void)setWriteNonce:(NSMutableData *)arg1 ;
-(NSData *)sessionWriteKey;
-(NSMutableData *)writeNonce;
-(NSMutableData *)readNonce;
-(NSData *)sessionReadKey;
-(void)setPairVerifyCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setPairingsCharacteristic:(CBCharacteristic *)arg1 ;
-(CBService *)pairingService;
-(void)setPairingService:(CBService *)arg1 ;
-(void)_createPrimaryAccessoryFromAdvertisementData;
-(void)setBtleServiceToHAPServiceMap:(NSMapTable *)arg1 ;
-(void)setBtleCharacteristicToHAPCharacteristicMap:(NSMapTable *)arg1 ;
-(void)setHapCharacteristicReadCompletionQueues:(NSMapTable *)arg1 ;
-(void)setHapCharacteristicWriteCompletionQueues:(NSMapTable *)arg1 ;
-(void)setHapCharacteristicEnableEventCompletionQueues:(NSMapTable *)arg1 ;
-(void)setAddRemovePairingOperationsQueue:(NSMutableArray *)arg1 ;
-(void)setPairSetupCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setPairingFeaturesCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setIdentifyCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setModelCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setSerialNumberCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setManufacturerCharacteristic:(CBCharacteristic *)arg1 ;
-(void)setConnectionRetryCount:(unsigned)arg1 ;
-(void)setCharacteristicDiscoveryRequestCount:(unsigned)arg1 ;
-(void)setCharacteristicValueReadCount:(unsigned)arg1 ;
-(void)setMetadataDiscoveryRequestCount:(unsigned)arg1 ;
-(void)setMetadataValueReadCount:(unsigned)arg1 ;
-(void)setAvailableInstanceID:(unsigned)arg1 ;
-(void)setStartPairingRequested:(char)arg1 ;
-(char)unpairedIdentifyRequested;
-(void)setRemoveOnDisconnect:(char)arg1 ;
-(void)setUnpairedIdentifyRequested:(char)arg1 ;
-(NSObject*<OS_dispatch_source>)connectionLifetimeTimer;
-(void)setConnectionLifetimeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_setStateNumber:(id)arg1 ;
-(id)_getStateNumber;
-(void)_handlePairingStateMachine;
-(NSString *)accessoryPairingUsername;
-(void)_updateConnectionLifetimeTimer;
-(void)_setupBTLEConnectionToPeripheral;
-(void)setAccessoryInfoService:(CBService *)arg1 ;
-(CBService *)accessoryInfoService;
-(CBCharacteristic *)pairSetupCharacteristic;
-(CBCharacteristic *)pairingFeaturesCharacteristic;
-(char)pairingFeaturesRead;
-(char)startPairingRequested;
-(void)_cancelConnectionLifetimeTimer;
-(void)_checkForAuthPrompt;
-(CBCharacteristic *)identifyCharacteristic;
-(CBCharacteristic *)modelCharacteristic;
-(CBCharacteristic *)manufacturerCharacteristic;
-(CBCharacteristic *)serialNumberCharacteristic;
-(void)_handleHAPServiceDiscovery;
-(void)_handleDescriptorDiscovery;
-(void)_handleReadDescriptorValues;
-(void)setDisconnecting:(char)arg1 ;
-(void)_enableEvent:(char)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)_btleCharacteristicForHAPCharacteristic:(id)arg1 ;
-(char)isDisconnecting;
-(void)_enqueueEnableEventCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 forCharacteristic:(id)arg3 ;
-(id)_hapCharacteristicForBTLECharacteristic:(id)arg1 ;
-(id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)arg1 ;
-(void)_handleSuccessfulBTLEConnection;
-(unsigned)connectionRetryCount;
-(void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)unpairedIdentifyCompletionBlock;
-(void)setUnpairedIdentifyCompletionBlock:(id)arg1 ;
-(NSMapTable *)btleCharacteristicToHAPCharacteristicMap;
-(id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1 ;
-(/*^block*/id)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1 ;
-(NSMutableArray *)addRemovePairingOperationsQueue;
-(char)removeOnDisconnect;
-(NSMapTable *)hapCharacteristicWriteCompletionQueues;
-(NSMapTable *)hapCharacteristicReadCompletionQueues;
-(NSMapTable *)hapCharacteristicEnableEventCompletionQueues;
-(void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(char)_shouldEnableSessionSecurity;
-(void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_enqueueWriteCompletionHandler:(/*^block*/id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_readValueForCharacteristic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_enqueueReadCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 forCharacteristic:(id)arg3 ;
-(void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2 ;
-(void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2 ;
-(unsigned)characteristicDiscoveryRequestCount;
-(unsigned)metadataDiscoveryRequestCount;
-(char)_parseBTLECharacteristicDescriptor:(id)arg1 existingDescriptors:(id)arg2 characteristics:(id)arg3 ;
-(unsigned)metadataValueReadCount;
-(unsigned)characteristicValueReadCount;
-(id)_parseBTLEService:(id)arg1 withInstanceId:(id)arg2 ;
-(NSMapTable *)btleServiceToHAPServiceMap;
-(id)_nextInstanceID;
-(unsigned)availableInstanceID;
-(void)_handleConnectionLifetimeTimeout;
-(void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2 ;
-(id)_pairSetupHAPCharacteristic;
-(long)_handlePairSetupExchangeWithData:(id)arg1 ;
-(id)_pairVerifyHAPCharacteristic;
-(long)_handlePairVerifyExchangeWithData:(id)arg1 ;
-(void)setPairingFeaturesRead:(char)arg1 ;
-(void)_handleHAPServiceDiscoveryCompletionForService:(id)arg1 withInstanceId:(id)arg2 ;
-(void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2 ;
-(void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_enqueueOperation:(int)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(char)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_dequeueAndContinueOperation;
-(void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setAccessoryPairingUsername:(NSString *)arg1 ;
-(unsigned long long)pairingFeatureFlags;
-(void)setPairingFeatureFlags:(unsigned long long)arg1 ;
-(CBPeripheral *)peripheral;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)isPaired;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableEvents:(char)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(char)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(char)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)startPairing;
-(char)stopPairingWithError:(id*)arg1 ;
-(char)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)continuePairingAfterAuthPrompt;
-(void)discoverAccessories;
-(void)_resetState;
-(int)linkType;
@end


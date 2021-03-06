/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>
#import <libobjc.A.dylib/WiFiShimDelegate.h>
#import <libobjc.A.dylib/ProxyAnalyticsDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSDate, NSString, NSMutableData, ImpoExpoService, NWPathEvaluator, NetworkAnalyticsModel, WiFiShim, NSData, ProxyAnalytics;

@interface NetworkAnalyticsEngine : AnalyticsEngineCore <WiFiShimDelegate, ProxyAnalyticsDelegate> {

	id primaryInterfaceObserver;
	id trafficObserver;
	id dnsObserver;
	id rssiObserver;
	NSMutableDictionary* activeEpochs;
	NSMutableArray* stateRelays;
	NStatManagerRef routeManager;
	/*^block*/id routeMetricsRefreshCompletionBlock;
	NSMutableDictionary* liveDefaultRoutes;
	int lastScoreExit[3];
	BOOL idleExitSuppressed;
	NSDate* lastEpochRemoved;
	NSDate* lastKnownGoodNotified;
	NSDate* pendedRssiEdge;
	unsigned long long pendedRssiEdgeTarget;
	int pendedLqm[2];
	int lastReportedRrcValue;
	NSString* lastReportedRrcInterface;
	int combinedCellDNSCounts;
	int combinedWifiDNSCounts;
	NSMutableDictionary* snapshots;
	NSMutableData* journalRecords;
	ImpoExpoService* ieService;
	NSDate* journalLastFlushed;
	NWPathEvaluator* cellPathEvaluator;
	NWPathEvaluator* wifiPathEvaluator;
	NWPathEvaluator* etherPathEvaluator;
	NWPathEvaluator* primaryPathEvaluator;
	CTServerConnectionRef serverConnection;
	int cellInternetStatus;
	NSString* cellInternetPDPContext;
	unsigned cellSPIType;
	NetworkAnalyticsModel* model;
	WiFiShim* _wifiShim;
	NSData* _hashSalt;
	unsigned long long _wifiSingleDNSFailureCount;
	unsigned long long _wifiCompleteDNSFailureCount;
	char _delegateToProxyAnalytics;
	char _removeOldRecordsNow;
	ProxyAnalytics* _proxyAnalytics;

}

@property (assign,nonatomic) char delegateToProxyAnalytics;                //@synthesize delegateToProxyAnalytics=_delegateToProxyAnalytics - In the implementation block
@property (assign,nonatomic) char removeOldRecordsNow;                     //@synthesize removeOldRecordsNow=_removeOldRecordsNow - In the implementation block
@property (nonatomic,retain) ProxyAnalytics * proxyAnalytics;              //@synthesize proxyAnalytics=_proxyAnalytics - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queue;
+(char)getDNSCountsOn:(id)arg1 total:(int*)arg2 impacted:(int*)arg3 ;
+(BOOL)performNetAttachmentQueryOn:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)hasNetworkAttachmentOn:(id)arg1 isAny:(char)arg2 isBuiltin:(char)arg3 scopedToLOI:(int)arg4 hasCustomSignature:(id)arg5 queue:(id)arg6 reply:(/*^block*/id)arg7 ;
+(int)getLQMOn:(id)arg1 ;
+(void)awdCaptureIn:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)layer2MetricsOn:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)getStateRelayFor:(id)arg1 ;
+(void)sendTrafficInfoFlags:(unsigned)arg1 changeFlags:(unsigned)arg2 foreground:(BOOL)arg3 ;
+(char)trainModelAndScore:(char)arg1 lastScoreDate:(id)arg2 output:(id*)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_model;
-(void)shutdown;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)setOption:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)proxyAnalyticsTrainAndScoreComplete:(id)arg1 error:(id)arg2 ;
-(int)_getCellInternetStatus;
-(id)_getCellInternetPDPContext;
-(void)_cellNetworkChangeForInterface:(id)arg1 roamingEvent:(char)arg2 ;
-(unsigned)_getCellSPIType;
-(void)_updateCellInternetStatus:(int)arg1 pdpContext:(int)arg2 ;
-(void)_actUponLqmChangeFrom:(int)arg1 to:(int)arg2 ofKind:(id)arg3 ;
-(void)_extractCellLinkFingerprintFrom:(CFDataRef)arg1 ;
-(void)_actUponCellRrcChangeTo:(int)arg1 ;
-(id)_currentEpochForKind:(id)arg1 ;
-(void)_retrieveDNSServersWhenPrimaryForEpoch:(id)arg1 ;
-(BOOL)_hashPrimaryKeyInPlace:(char*)arg1 ;
-(BOOL)_flushAllJournalRecords;
-(void)_setRadioTechnology:(unsigned char)arg1 forNetworkType:(int)arg2 ;
-(id)_retrieveCellCarrierName;
-(int)_retrieveCellId;
-(BOOL)_primaryKeyChange:(id)arg1 interfaceName:(id)arg2 ofKind:(id)arg3 roamingEvent:(BOOL)arg4 ;
-(void)_updateCombinedDNSCounts;
-(void)wifiNetworkChangedForInterface:(id)arg1 roaming:(BOOL)arg2 ;
-(void)_wifiNetworkChange:(id)arg1 ;
-(void)_wifiKnownNetworksDeleted:(id)arg1 ;
-(void)_fetchHashSaltFromJournal;
-(unsigned)_setupCoreTelephonyAndBasebandNotificationsOn:(id)arg1 ;
-(void)_observeNetworkFramework;
-(void)_flowCompleted:(id)arg1 ;
-(void)_dnsWithSymptoms:(id)arg1 ;
-(void)_rssiEdge:(id)arg1 ;
-(char)delegateToProxyAnalytics;
-(void)setProxyAnalytics:(ProxyAnalytics *)arg1 ;
-(ProxyAnalytics *)proxyAnalytics;
-(void)setRemoveOldRecordsNow:(char)arg1 ;
-(void)_trainModelAndScore:(char)arg1 ;
-(void)_engageTestSequence;
-(char)removeOldRecordsNow;
-(void)_removeOldRouteRecords;
-(void)setDelegateToProxyAnalytics:(char)arg1 ;
-(BOOL)_writeJournalRecord:(SCD_Struct_Ne6*)arg1 fromCellFingerprint:(BOOL)arg2 key:(const char*)arg3 atLOI:(int)arg4 ofKind:(id)arg5 lqm:(int)arg6 isFaulty:(unsigned)arg7 ;
-(BOOL)_appendJournalRecord:(id)arg1 ;
-(int)_generateAdviceForEpoch:(id)arg1 relativeTo:(id)arg2 ;
-(void)_updateAdviceForEpoch:(id)arg1 ;
-(void)_informKernelOfLqm:(int)arg1 forInterface:(const char*)arg2 ;
-(void)_informKernelOfCellRrc:(int)arg1 forInterface:(id)arg2 ;
-(void)_disarmDOASuspector:(id)arg1 ;
-(void)_disarmFatalSuspector:(id)arg1 withEventAt:(id)arg2 by:(id)arg3 ;
-(void)_handleRouteData:(NStatSourceRef)arg1 ;
-(BOOL)_shouldAcceptRouteSource:(NStatSourceRef)arg1 withDescription:(id)arg2 ;
-(void)_handleRouteClosing:(NStatSourceRef)arg1 ;
-(void)_armFatalSuspector:(id)arg1 ;
-(char)_getDNSCountsOn:(id)arg1 total:(int*)arg2 impacted:(int*)arg3 ;
-(void)_delayedKnownGoodNetworkAlert;
-(void)_disarmLowQDisconnectSuspector:(id)arg1 ;
-(void)_armLowQDisconnectSuspector:(id)arg1 ;
-(NStatSourceRef)_newDefRouteForInterface:(id)arg1 saFamily:(unsigned char)arg2 ;
-(void)_setDefrouteMonitoring:(unsigned)arg1 ofKind:(id)arg2 roamingEvent:(BOOL)arg3 family:(unsigned char)arg4 retries:(int)arg5 ;
-(void)_armDOASuspector:(id)arg1 ;
-(id)_hashPrimaryKey:(id)arg1 ;
-(void)_idleExitTransactionCheck;
-(void)_updateAdviceForKind:(id)arg1 ;
-(id)_scoringDuty:(id)arg1 forType:(int)arg2 withRetCode:(int*)arg3 oldestTime:(id*)arg4 ;
-(void)_tagNetworkAttachmentsIfGood:(id)arg1 among:(id)arg2 ;
-(void)_applyCalculatedScoringMetrics:(id)arg1 entries:(id)arg2 ;
-(void)_dumpStats;
-(id)_createNetworkAttachmentIdentifierExclusionList;
-(void)_awdCaptureHistorical:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_refreshRouteMetrics;
-(void)_refreshRouteMetricsComplete;
-(void)_refreshRouteMetricsWithCallbackOnQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(int)_combinedDNSCountForEpoch:(id)arg1 ;
-(void)_hasNetworkAttachmentOn:(id)arg1 isAny:(char)arg2 isBuiltin:(char)arg3 scopedToLOI:(int)arg4 hasCustomSignature:(id)arg5 queue:(id)arg6 reply:(/*^block*/id)arg7 ;
-(BOOL)_performNetAttachmentQueryOn:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_getStateRelayFor:(id)arg1 ;
-(void)_layer2MetricsOn:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_sendTrafficInfoFlags:(unsigned)arg1 changeFlags:(unsigned)arg2 foreground:(BOOL)arg3 ;
-(id)_adviceToNSString:(int)arg1 ;
-(void)_awdCaptureInstant:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_awdCaptureIn:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_scoringTrampoline;
-(void)_setLastScoreDate:(id)arg1 ;
-(id)lastScoreExits;
-(id)lastScoreDate;
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1 ;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2 ;
@end


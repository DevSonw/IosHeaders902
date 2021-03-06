/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ondemandd/ODRDiagnosticsProtocol.h>

@interface ODRDiagnosticsClient : NSObject <ODRDiagnosticsProtocol>
+(id)_prettyHashesString:(id)arg1 ;
+(void)_appendInfoToString:(id)arg1 forAssetPack:(id)arg2 ;
-(void)fakeWorkWithCount:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)statusWithReply:(/*^block*/id)arg1 ;
-(void)performMaintenanceWithReply:(/*^block*/id)arg1 ;
-(void)manifestForBundleID:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)assetsForBundleID:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setLoggingEnabled:(char)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSampler:(id)arg1 enabled:(char)arg2 samplingInterval:(double)arg3 reply:(/*^block*/id)arg4 ;
-(void)loadSourceURL:(id)arg1 intoDestinationURL:(id)arg2 isUrgent:(char)arg3 isStreaming:(char)arg4 withRequestCompletion:(/*^block*/id)arg5 ;
-(void)prefetchSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withPrefetchCompletion:(/*^block*/id)arg3 ;
-(void)prefetchAndRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)prefetchThenRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)cancelRequestWithUUID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pauseRequestWithUUID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resumeRequestWithUUID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchManifestForAdamID:(id)arg1 externalVersionID:(id)arg2 variant:(id)arg3 withFetchCompletion:(/*^block*/id)arg4 ;
-(void)registerManifest:(id)arg1 forBundleID:(id)arg2 withRequestCompletion:(/*^block*/id)arg3 ;
-(void)purgeableAssetsWithReply:(/*^block*/id)arg1 ;
-(void)nonPurgeableAssetsWithReply:(/*^block*/id)arg1 ;
-(void)purgeBytes:(long long)arg1 odrOnly:(char)arg2 urgency:(int)arg3 withReply:(/*^block*/id)arg4 ;
-(void)testPurgeBytes:(long long)arg1 urgency:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)purgeAllAssetsForApplication:(id)arg1 withRequestCompletion:(/*^block*/id)arg2 ;
-(void)purgeAssetWithIdentifier:(id)arg1 withRequestCompletion:(/*^block*/id)arg2 ;
-(void)getSimulatedBandwidthWithReply:(/*^block*/id)arg1 ;
-(void)setSimulatedBandwidth:(unsigned)arg1 withReply:(/*^block*/id)arg2 ;
-(void)getSpaceReductionWithReply:(/*^block*/id)arg1 ;
-(void)setSpaceReduction:(unsigned)arg1 withReply:(/*^block*/id)arg2 ;
-(id)interface;
-(id)initWithConnection:(id)arg1 ;
@end


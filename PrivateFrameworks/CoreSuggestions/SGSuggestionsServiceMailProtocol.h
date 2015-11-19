/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceContactsConfirmRejectProtocol>
@required
-(void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3;
-(char)prepareForRealtimeExtraction:(id*)arg1;
-(void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned)arg2 error:(id*)arg3;
-(void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5;
-(char)updateMessages:(id)arg1 state:(unsigned)arg2 error:(id*)arg3;
-(id)fullDownloadRequestBatch:(unsigned)arg1 error:(id*)arg2;
-(void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3;
-(char)resolveFullDownloadRequests:(id)arg1 error:(id*)arg2;
-(id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned)arg4 error:(id*)arg5;
-(id)messagesToRefreshWithError:(id*)arg1;
-(void)messagesToRefreshWithCompletion:(/*^block*/id)arg1;
-(char)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id*)arg3;
-(void)resolveFullDownloadRequests:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)updateMessages:(id)arg1 state:(unsigned)arg2 withCompletion:(/*^block*/id)arg3;
-(void)prepareForRealtimeExtractionWithCompletion:(/*^block*/id)arg1;
-(void)fullDownloadRequestBatch:(unsigned)arg1 withCompletion:(/*^block*/id)arg2;
-(id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned)arg2 error:(id*)arg3;

@end

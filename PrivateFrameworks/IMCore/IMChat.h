/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMItemsController.h>
#import <IMCore/IMSendProgressDelegate.h>

@protocol IMChatItemRules;
@class NSString, IMAccount, NSArray, NSMutableDictionary, IMMessage, NSMutableArray, NSMutableSet, IMTimingCollection, IMScheduledUpdater, IMSendProgress, NSSet, IMChatRegistry, NSDate, IMHandle;

@interface IMChat : IMItemsController <IMSendProgressDelegate> {

	NSString* _guid;
	NSString* _typingGUID;
	NSString* _currentLocationGUID;
	NSString* _identifier;
	IMAccount* _account;
	NSString* _displayName;
	NSString* _roomName;
	NSString* _roomNameWithoutSuffix;
	NSString* _lastAddressedHandleID;
	NSString* _groupID;
	NSArray* _participants;
	NSMutableDictionary* _participantStates;
	IMMessage* _invitationForPendingParticipants;
	NSMutableArray* _messagesPendingJoin;
	NSMutableSet* _guids;
	NSMutableDictionary* _chatProperties;
	NSMutableDictionary* _participantProperties;
	NSArray* _frequentReplies;
	NSArray* _attachments;
	IMTimingCollection* _timingCollection;
	id<IMChatItemRules> _chatItemRules;
	IMScheduledUpdater* _chatItemsUpdater;
	IMSendProgress* _sendProgress;
	char _downgradeState;
	IMScheduledUpdater* _downgradeStateUpdater;
	int _joinState;
	unsigned char _style;
	unsigned _dbFailedCount;
	unsigned _dbUnreadCount;
	void* _context;
	unsigned _hasBeenConfigured : 1;
	unsigned _isFirstMessageInvitation : 1;
	unsigned _wasInvitationHandled : 1;
	unsigned _didSendAFinishedMessage : 1;
	unsigned _hasPendingMarkRead : 1;
	unsigned _isUpdatingChatItems : 1;
	unsigned _isRecording : 1;
	unsigned _ignoreDowngradeStatusUpdates : 1;
	unsigned _isFiltered : 1;
	unsigned _forceMMS : 1;
	char _hasRefreshedServiceForSending;
	char _hasHadSuccessfulQuery;
	double _latestTypingIndicatorTimeInterval;

}

@property (nonatomic,readonly) char suppressAccountRetargetingForGroupConversation; 
@property (assign,nonatomic) char forceMMS; 
@property (assign,nonatomic) unsigned numberOfMessagesToKeepLoaded; 
@property (nonatomic,readonly) char hasMoreMessagesToLoad; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (nonatomic,retain,readonly) NSSet * fmfHandles; 
@property (nonatomic,retain,readonly) NSSet * allSiblingFMFHandles; 
@property (nonatomic,readonly) char hasRecipientsFollowingLocation; 
@property (nonatomic,readonly) char hasSiblingRecipientsSharingLocation; 
@property (nonatomic,readonly) char allRecipientsFollowingLocation; 
@property (nonatomic,readonly) char hasRecipientsSharingLocation; 
@property (nonatomic,readonly) char allRecipientsSharingLocation; 
@property (nonatomic,retain,readonly) IMChatRegistry * chatRegistry; 
@property (nonatomic,readonly) NSString * guid;                                                     //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) IMAccount * account;                                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) unsigned char chatStyle;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * chatIdentifier; 
@property (nonatomic,retain,readonly) NSString * persistentID; 
@property (nonatomic,readonly) unsigned messageCount; 
@property (nonatomic,readonly) unsigned unreadMessageCount; 
@property (nonatomic,readonly) unsigned messageFailureCount; 
@property (nonatomic,readonly) char canLeaveChat; 
@property (nonatomic,readonly) char canHaveMultipleParticipants; 
@property (nonatomic,readonly) unsigned overallChatStatus; 
@property (assign,nonatomic) NSString * displayName;                                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * roomName;                                                 //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,readonly) NSString * roomNameWithoutSuffix; 
@property (nonatomic,retain) NSArray * frequentReplies;                                             //@synthesize frequentReplies=_frequentReplies - In the implementation block
@property (nonatomic,readonly) int joinState;                                                       //@synthesize joinState=_joinState - In the implementation block
@property (nonatomic,readonly) char hasUnhandledInvitation; 
@property (assign,nonatomic) char localUserIsTyping; 
@property (assign,nonatomic) char localUserIsRecording; 
@property (nonatomic,readonly) NSString * localTypingMessageGUID; 
@property (nonatomic,readonly) IMMessage * lastMessage; 
@property (nonatomic,readonly) IMMessage * lastFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessageWithTextContent; 
@property (nonatomic,retain,readonly) NSDate * lastFinishedMessageDate; 
@property (nonatomic,readonly) long long lastFinishedMessageID; 
@property (assign,nonatomic) char isFiltered; 
@property (assign,nonatomic) char hasHadSuccessfulQuery; 
@property (nonatomic,readonly) NSArray * participants;                                              //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) IMHandle * recipient; 
@property (nonatomic,retain) IMMessage * invitationForPendingParticipants;                          //@synthesize invitationForPendingParticipants=_invitationForPendingParticipants - In the implementation block
@property (nonatomic,readonly) char _shouldRegisterChat; 
@property (nonatomic,retain,readonly) NSString * lastAddressedHandleID;                             //@synthesize lastAddressedHandleID=_lastAddressedHandleID - In the implementation block
@property (nonatomic,retain) NSString * groupID;                                                    //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) void* contextInfo;                                                     //@synthesize context=_context - In the implementation block
@property (setter=_setGUIDs:,nonatomic,retain) NSMutableSet * _guids;                               //@synthesize guids=_guids - In the implementation block
@property (assign,nonatomic) double latestTypingIndicatorTimeInterval;                              //@synthesize latestTypingIndicatorTimeInterval=_latestTypingIndicatorTimeInterval - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeFMF;
+(void)setChatItemRulesClass:(Class)arg1 ;
+(Class)chatItemRulesClass;
-(long long)__ck_watermarkMessageID;
-(id)__ck_watermarkDate;
-(char)__ck_isMuted;
-(void)__ck_setMuteUntilDate:(id)arg1 ;
-(void)__ck_updateWatermarkToMessageID:(long long)arg1 date:(id)arg2 ;
-(void)__ck_saveWatermark;
-(id)__ck_muteUntilDate;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(IMHandle *)recipient;
-(void)setRecipient:(IMHandle *)arg1 ;
-(NSString *)persistentID;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(unsigned)messageCount;
-(void)clear;
-(void)remove;
-(NSString *)displayName;
-(NSArray *)attachments;
-(void)_setupObservation;
-(void)startTrackingParticipantLocations;
-(void)stopTrackingParticipantLocations;
-(char)hasSiblingRecipientsSharingLocation;
-(NSSet *)allSiblingFMFHandles;
-(NSArray *)participants;
-(id)chatItems;
-(void)loadAttachments:(/*^block*/id)arg1 ;
-(void)deleteTransfers:(id)arg1 ;
-(char)forceMMS;
-(void)setForceMMS:(char)arg1 ;
-(IMMessage *)lastFinishedMessage;
-(char)allRecipientsFollowingLocation;
-(char)authorizedToSendCurrentLocationMessage;
-(char)canSendCurrentLocationMessage;
-(void)sendCurrentLocationMessage;
-(void)stopSharingLocation;
-(void)shareLocationUntilDate:(id)arg1 ;
-(void)leave;
-(char)hasRecipientsFollowingLocation;
-(id)sendProgressDelegate;
-(void)setSendProgressDelegate:(id)arg1 ;
-(void)markAllMessagesAsRead;
-(IMMessage *)lastIncomingMessage;
-(void)refreshServiceForSending;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)setLocalUserIsRecording:(char)arg1 ;
-(void)setLocalUserIsTyping:(char)arg1 ;
-(long long)lastFinishedMessageID;
-(NSDate *)lastFinishedMessageDate;
-(void*)contextInfo;
-(void)setNumberOfMessagesToKeepLoaded:(unsigned)arg1 ;
-(void)setContextInfo:(void*)arg1 ;
-(unsigned)unreadMessageCount;
-(IMMessage *)lastMessage;
-(void)updateIsFiltered:(char)arg1 ;
-(char)isFiltered;
-(id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(int)arg1 ;
-(unsigned char)chatStyle;
-(NSString *)chatIdentifier;
-(id)valueForChatProperty:(id)arg1 ;
-(IMMessage *)lastIncomingFinishedMessage;
-(char)isDowngraded;
-(char)canLeaveChat;
-(int)joinState;
-(void)inviteParticipants:(id)arg1 reason:(id)arg2 ;
-(void)removeParticipants:(id)arg1 reason:(id)arg2 ;
-(char)deleteAllHistory;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned)arg2 loadImmediately:(char)arg3 ;
-(NSArray *)frequentReplies;
-(id)loadFrequentRepliesLimit:(unsigned)arg1 loadImmediately:(char)arg2 ;
-(char)_accountIsOperational:(id)arg1 forService:(id)arg2 ;
-(NSString *)localTypingMessageGUID;
-(char)localUserIsTyping;
-(char)localUserIsRecording;
-(char)_chatHasValidAccount:(id)arg1 forService:(id)arg2 ;
-(void)endHoldingUpdatesForAllKeys;
-(void)updateChatItemsIfNeeded;
-(void)deleteChatItems:(id)arg1 ;
-(void)markChatItemAsPlayed:(id)arg1 ;
-(void)markAllLocationShareItemsAsUnactionable;
-(void)markChatItemAsSaved:(id)arg1 ;
-(void)markAsSpam;
-(void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(char)arg2 ;
-(void)setValue:(id)arg1 forChatProperty:(id)arg2 ;
-(NSString *)roomName;
-(char)suppressAccountRetargetingForGroupConversation;
-(void)_targetToService:(id)arg1 newComposition:(char)arg2 ;
-(void)_invalidateDowngradeState;
-(void)setHasHadSuccessfulQuery:(char)arg1 ;
-(NSString *)lastAddressedHandleID;
-(void)_setAndIncrementDowngradeMarkersForManual:(char)arg1 ;
-(char)sendDowngradeNotificationTo:(id)arg1 ;
-(id)_previousAccountForService:(id)arg1 ;
-(void)_setPreviousAccount:(id)arg1 forService:(id)arg2 ;
-(void)_setAccount:(id)arg1 ;
-(void)_calculateDowngradeState;
-(void)_calculateDowngradeStateTimerFired;
-(id)_consecutiveDowngradeAttemptsViaManualDowngrades:(char)arg1 ;
-(void)_updateDowngradeState:(char)arg1 checkAgainInterval:(double)arg2 ;
-(void)_clearDowngradeMarkers;
-(char)hasHadSuccessfulQuery;
-(void)_handleDeliveredCommand:(id)arg1 ;
-(void)_handleIncomingCommand:(id)arg1 ;
-(void)_delayedInvalidateDowngradeState;
-(void)_updateDisplayName:(id)arg1 ;
-(id)_initWithItems:(id)arg1 ;
-(void)updateMessage:(id)arg1 ;
-(id)messageForGUID:(id)arg1 ;
-(void)_accountLoggedOut:(id)arg1 ;
-(void)_daemonDied:(id)arg1 ;
-(void)_daemonAlive:(id)arg1 ;
-(void)_accountControllerUpdated:(id)arg1 ;
-(char)canHaveMultipleParticipants;
-(void)_watchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_updateChatItems;
-(void)_configureLocationShareItem:(id)arg1 ;
-(void)_initialize;
-(id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7 isFiltered:(char)arg8 hasHadSuccessfulQuery:(char)arg9 ;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 ;
-(unsigned)messageFailureCount;
-(unsigned)numberOfMessagesToKeepLoaded;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(char)arg3 isHistoryQuery:(char)arg4 limit:(unsigned)arg5 ;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 shouldPost:(char)arg3 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(char)arg2 block:(/*^block*/id)arg3 ;
-(void)setIsFiltered:(char)arg1 ;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(char)arg3 ;
-(unsigned)stateForParticipant:(id)arg1 ;
-(char)_isDuplicate:(id)arg1 ;
-(void)_updateLocationShareItemsForSender:(id)arg1 ;
-(void)_setJoinState:(int)arg1 quietly:(char)arg2 ;
-(void)_sendMessage:(id)arg1 adjustingSender:(char)arg2 shouldQueue:(char)arg3 ;
-(void)_setParticipantState:(unsigned)arg1 forHandle:(id)arg2 quietly:(char)arg3 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(char)arg2 block:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_clearCachedIdentifier;
-(char)_handleIncomingItem:(id)arg1 ;
-(void)_setDisplayName:(id)arg1 ;
-(void)_setJoinState:(int)arg1 ;
-(IMChatRegistry *)chatRegistry;
-(void)_setLocalUserIsTyping:(char)arg1 recording:(char)arg2 suppliedGUID:(id)arg3 ;
-(void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1 ;
-(double)latestTypingIndicatorTimeInterval;
-(void)setLatestTypingIndicatorTimeInterval:(double)arg1 ;
-(char)_shouldSendCancelTypingIndicator;
-(char)canSendTransfer:(id)arg1 ;
-(void)__clearReadMessageCache;
-(void)markMessagesAsRead:(id)arg1 ;
-(void)_setTimerForReadMessageCache;
-(void)_clearUnreadCount;
-(id)allPropertiesOfParticipant:(id)arg1 ;
-(void)_setAccount:(id)arg1 locally:(char)arg2 ;
-(void)setRecipient:(id)arg1 locally:(char)arg2 ;
-(void)_addParticipants:(id)arg1 withState:(unsigned)arg2 ;
-(void)_unwatchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_setParticipantState:(unsigned)arg1 forHandles:(id)arg2 quietly:(char)arg3 ;
-(char)canAddParticipant:(id)arg1 ;
-(id)participantsWithState:(unsigned)arg1 ;
-(id)_pendingParticipants;
-(IMMessage *)invitationForPendingParticipants;
-(void)_inviteParticipants:(id)arg1 reason:(id)arg2 ;
-(void)setInvitationForPendingParticipants:(IMMessage *)arg1 ;
-(char)_sanityCheckAccounts;
-(void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned)arg4 totalCount:(unsigned)arg5 finished:(char)arg6 ;
-(char)_shouldRegisterChat;
-(void)_setDBUnreadCount:(unsigned)arg1 ;
-(void)_setDBFailedCount:(unsigned)arg1 ;
-(char)_shouldAnnouncePeopleJoin;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(char)arg3 isHistoryQuery:(char)arg4 ;
-(IMMessage *)lastIncomingFinishedMessageWithTextContent;
-(void)didUnregisterFromRegistry:(id)arg1 ;
-(void)_recomputeOverallChatStatusQuietly:(char)arg1 ;
-(void)_handleHandleStatusChanged:(id)arg1 ;
-(id)_timingCollection;
-(void)_startTiming:(id)arg1 ;
-(void)_endTiming;
-(void)_handleMessageGUIDDeletions:(id)arg1 ;
-(void)_participant:(id)arg1 statusChanged:(int)arg2 ;
-(void)_showErrorMessage:(id)arg1 ;
-(unsigned)overallChatStatus;
-(NSString *)roomNameWithoutSuffix;
-(char)hasUnhandledInvitation;
-(void)acceptInvitation;
-(void)declineInvitation;
-(void)cancelMessage:(id)arg1 ;
-(char)canSendMessage:(id)arg1 ;
-(void)updateMessage:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)markMessageAsRead:(id)arg1 ;
-(void)_setChatProperties:(id)arg1 ;
-(id)allChatProperties;
-(id)valueForProperty:(id)arg1 ofParticipant:(id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3 ;
-(char)_hasCommunicatedOnService:(id)arg1 ;
-(char)canAddParticipants:(id)arg1 ;
-(void)_invitePendingParticipants;
-(void)addPendingParticipants:(id)arg1 ;
-(char)hasSentMessageWithGUID:(id)arg1 ;
-(id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4 ;
-(void)setFrequentReplies:(NSArray *)arg1 ;
-(NSMutableSet *)_guids;
-(void)_setGUIDs:(id)arg1 ;
-(id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(char)arg6 hasHadSuccessfulQuery:(char)arg7 ;
-(id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned)arg3 loadImmediately:(char)arg4 ;
-(void)_setAttachments:(id)arg1 ;
-(char)hasMoreMessagesToLoad;
-(id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned)arg2 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned)arg2 ;
-(id)loadUnreadMessagesWithLimit:(unsigned)arg1 fallbackToMessagesUpToGUID:(id)arg2 ;
-(void)_replaceStaleChatItems;
-(id)chatItemsForItems:(id)arg1 ;
-(NSSet *)fmfHandles;
-(char)hasRecipientsSharingLocation;
-(char)allRecipientsSharingLocation;
-(id)testChatItems;
-(NSString *)guid;
-(void)join;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(IMAccount *)account;
-(void)_itemsDidChange:(id)arg1 ;
@end

#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_OnlineSubsystemSteamworks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0000 (0x0324 - 0x0324)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks");
		return ptr;
	}


	bool GetServerAddr(struct FIpAddr* OutServerIP, int* OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId* OutServerUID);
	bool STATIC_VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int* OutAuthTicketUID);
	bool STATIC_VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int ClientPort, int AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int ServerPort, bool bSecure, int* OutAuthTicketUID);
	bool STATIC_SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool STATIC_SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
};


// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0060 (0x03A8 - 0x0348)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray<struct FScriptDelegate>                     GameInviteAcceptedDelegates;                              // 0x0348(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterPlayerCompleteDelegates;                          // 0x0358(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnregisterPlayerCompleteDelegates;                        // 0x0368(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x0378(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0378(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0388(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0388(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x0398(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0398(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		return ptr;
	}


	bool GetUserConnectionInfoAsync(TArray<struct FString> UserNames);
	bool GetCurrentSessionMemberInfo(const struct FName& SessionName, TArray<struct FSessionMemberInfo>* OutMemberInfo);
	bool GetCurrentSessionMemberInfoAsync(unsigned char LocalUserNum, const struct FName& SessionName);
	void STATIC_RunBandwidthTest();
	bool IsAllowedToNetworkHost();
	void GetRoomIdFromSessionId(const struct FString& SessionId);
	void GetRoomIdFromTitleService(const struct FQWord& DataId);
	struct FString GetRoomId();
	int GetNumberOfCurrentPlayersCached();
	bool STATIC_SendPlayerList(TArray<class APlayerReplicationInfo*> Players);
	void STATIC_RetrieveGameSettingsForIP(const struct FString& IPAddress);
	bool GetNumberOfCurrentPlayers();
	bool JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	bool MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName);
	bool STATIC_RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const struct FName& SessionName);
	bool STATIC_RegisterForArbitration(const struct FName& SessionName);
	bool EndOnlineGame(const struct FName& SessionName);
	bool STATIC_StartOnlineGame(const struct FName& SessionName);
	bool GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo);
	bool STATIC_QuerySessionsByKeyword(unsigned char LocalPlayerNum, const struct FString& Keyword, class UOnlineGameSearch* SearchSettings);
	bool STATIC_QuerySessionsForUser(unsigned char LocalPlayerNum);
	void LeaveAllOnlineSessions(bool bClearSessionIfHost);
	bool LeaveOnlineSession(unsigned char LocalPlayerNum, const struct FName& SessionName, bool bClearSessionIfHost);
	void STATIC_AcceptPendingGameSession(const struct FName& SessionName);
	bool STATIC_UpdateSessionProperties(unsigned char ScoutingUserNum, const struct FName& SessionName);
	bool DeleteCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName);
	bool STATIC_SetCustomMemberProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue);
	bool DeleteCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName);
	bool STATIC_SetCustomSessionProperty(const struct FName& SessionName, const struct FString& PropertyName, const struct FString& PropertyValue);
	bool STATIC_AddSessionMembers(unsigned char ScoutingPlayerNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Members);
	bool STATIC_AddSessionMember(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FUniqueNetId& Member);
	bool STATIC_AddSessionMemberByString(unsigned char ScoutingPlayerNum, const struct FName& SessionName, const struct FString& Member);
	bool CreateOnlineSessionWithTemplate(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings, const struct FString& TemplateName, const struct FString& SessionKeyword);
	bool InitiatedSessionSearch(const struct FName& SessionName);
	bool IsHostOfSession(const struct FName& SessionName);
	bool MatchmakeOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	bool CreateOnlineGameWithParty(unsigned char ScoutingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	bool IsCurrentRoomOwner();
	bool STATIC_SetRankedReadyStatus(bool bReady);
	bool IsJoinOperationInProgress();
	bool JoinOnlineGameByMatchingParams(const struct FQWord& RoomId, class UOnlineGameSettings** JoinedGameSettings);
	void OnMapChangeComplete();
	void OnMapChangePending();
	bool JoinOnlineGameBySessionHandle(unsigned char PlayerNum, const struct FName& SessionName, const struct FString& InSessionGuid);
	bool JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	class UOnlineGameSearch* GetGameSearch();
	bool STATIC_BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo);
	bool STATIC_ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo);
	bool STATIC_ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool STATIC_CancelFindOnlineGames();
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	bool DestroyOnlineGame(const struct FName& SessionName);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSettings* GetGameSettings(const struct FName& SessionName);
	bool STATIC_QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void STATIC_ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void STATIC_AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void STATIC_OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool STATIC_UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool STATIC_UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void STATIC_ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void STATIC_AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void STATIC_OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool STATIC_RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool STATIC_RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool STATIC_AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void STATIC_ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void STATIC_AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void STATIC_OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	bool STATIC_UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
};


// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x094C (0x0BD4 - 0x0288)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    VfTable_PComOnlinePlayerInterface;                        // 0x0288(0x0008) (Const, Native, NoExport)
	unsigned long                                      bStoringAchievement : 1;                                  // 0x0290(0x0004)
	unsigned long                                      bClientStatsStorePending : 1;                             // 0x0290(0x0004)
	unsigned long                                      bGSStatsStoresSuccess : 1;                                // 0x0290(0x0004)
	unsigned long                                      bNeedsKeyboardTicking : 1;                                // 0x0290(0x0004) (Const)
	unsigned long                                      bLastHasConnection : 1;                                   // 0x0290(0x0004)
	unsigned long                                      bIsStatsSessionOk : 1;                                    // 0x0290(0x0004)
	unsigned long                                      bHasSteamworksAccount : 1;                                // 0x0290(0x0004) (Const, Config)
	unsigned long                                      bShouldUseMcp : 1;                                        // 0x0290(0x0004) (Const, Config)
	int                                                TotalGSStatsStoresPending;                                // 0x0294(0x0004)
	TEnumAsByte<EOnlineEnumerationReadState>           UserStatsReceivedState;                                   // 0x0298(0x0001)
	TEnumAsByte<ELoginStatus>                          LoggedInStatus;                                           // 0x0299(0x0001) (Const)
	unsigned char                                      bWasKeyboardInputCanceled;                                // 0x029A(0x0001) (Const)
	TEnumAsByte<ENetworkNotificationPosition>          CurrentNotificationPosition;                              // 0x029B(0x0001) (Config)
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                            // 0x029C(0x0008) (Const)
	struct FString                                     LocalProfileName;                                         // 0x02A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                                       // 0x02B4(0x0010) (Const, NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                                         // 0x02C4(0x0008) (Const)
	int                                                LoggedInPlayerNum;                                        // 0x02CC(0x0004) (Const)
	struct FString                                     ProfileDataDirectory;                                     // 0x02D0(0x0010) (Config, NeedCtorLink)
	struct FString                                     ProfileDataExtension;                                     // 0x02E0(0x0010) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                            // 0x02F0(0x0010) (NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                            // 0x0300(0x0008)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageReadDelegates;                          // 0x0308(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LocalPlayerStorageWriteDelegates;                         // 0x0318(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RemotePlayerStorageReadDelegates;                         // 0x0328(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;                       // 0x0338(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                                     // 0x0348(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                                   // 0x0358(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                                    // 0x0368(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                                     // 0x0378(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                                     // 0x0388(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ContentPurchaseResponseDelegates;                         // 0x0398(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                                 // 0x03A8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AccountCreateDelegates;                                   // 0x03B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     TalkingDelegates;                                         // 0x03C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadOnlineStatsCompleteDelegates;                         // 0x03D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FlushOnlineStatsDelegates;                                // 0x03E8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ConnectionStatusChangeDelegates;                          // 0x03F8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ControllerChangeDelegates;                                // 0x0408(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     LinkStatusDelegates;                                      // 0x0418(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0428(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                                     // 0x0438(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                                 // 0x0448(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;                      // 0x0458(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                            // 0x0468(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                           // 0x0478(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;                          // 0x0488(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileReadCompleteDelegates;                          // 0x0498(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     SharedFileWriteCompleteDelegates;                         // 0x04A8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     TokenAndSignatureRetrievedDelegates;                      // 0x04B8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PrivilegeLevelCheckedDelegates;                           // 0x04C8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PrivilegeCheckedForUsersDelegates;                        // 0x04D8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     PrivilegeCheckedForUsersByUniqueNetIdsDelegates;          // 0x04E8(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FilterTextDelegates;                                      // 0x04F8(0x0010) (NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                                       // 0x0508(0x000C)
	TArray<struct FRemoteTalker>                       RemoteTalkers;                                            // 0x0514(0x0010) (NeedCtorLink)
	int                                                GameID;                                                   // 0x0524(0x0004) (Const, Config)
	class UOnlineStatsRead*                            CurrentStatsRead;                                         // 0x0528(0x0008) (Const)
	TArray<struct FPendingPlayerStats>                 PendingStats;                                             // 0x0530(0x0010) (Const, NeedCtorLink)
	struct FString                                     KeyboardResultsString;                                    // 0x0540(0x0010) (Const, NeedCtorLink)
	TArray<struct FScriptDelegate>                     KeyboardInputDelegates;                                   // 0x0550(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendInviteReceivedDelegates;                            // 0x0560(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FriendMessageReceivedDelegates;                           // 0x0570(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AddFriendByNameCompleteDelegates;                         // 0x0580(0x0010) (NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                             // 0x0590(0x0038) (NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                                       // 0x05C8(0x0008)
	struct FString                                     CachedFriendMessage;                                      // 0x05D0(0x0010) (Const, NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                              // 0x05E0(0x0024) (NeedCtorLink)
	TArray<struct FString>                             LocationUrlsForInvites;                                   // 0x0604(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     LocationUrl;                                              // 0x0614(0x0010) (Const, Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                              // 0x0624(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;                          // 0x0634(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     GetNumberOfCurrentPlayersCompleteDelegates;               // 0x0644(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RegisterHostStatGuidCompleteDelegates;                    // 0x0654(0x0010) (NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                                     // 0x0664(0x0010) (NeedCtorLink)
	TArray<struct FOnlineStatusMapping>                StatusMappings;                                           // 0x0674(0x0010) (Const, Config, NeedCtorLink)
	struct FString                                     DefaultStatus;                                            // 0x0684(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     GameInviteMessage;                                        // 0x0694(0x0010) (Const, Localized, NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4];                                    // 0x06A4(0x0008)
	float                                              ConnectionPresenceTimeInterval;                           // 0x06C4(0x0004)
	float                                              ConnectionPresenceElapsedTime;                            // 0x06C8(0x0004)
	struct FString                                     EncryptedProductKey;                                      // 0x06CC(0x0010) (Const, Config, NeedCtorLink)
	TArray<struct FUniqueNetId>                        MuteList;                                                 // 0x06DC(0x0010) (Const, NeedCtorLink)
	TArray<struct FSteamUserCloud>                     UserCloudFiles;                                           // 0x06EC(0x0010) (NeedCtorLink)
	TArray<struct FSteamUserCloudMetadata>             UserCloudMetadata;                                        // 0x06FC(0x0010) (NeedCtorLink)
	TArray<struct FTitleFile>                          SharedFileCache;                                          // 0x070C(0x0010) (NeedCtorLink)
	TArray<struct FQueuedAvatarRequest>                QueuedAvatarRequests;                                     // 0x071C(0x0010) (Const, NeedCtorLink)
	TArray<struct FAchievementMappingInfo>             AchievementMappings;                                      // 0x072C(0x0010) (Config, NeedCtorLink)
	TArray<struct FAchievementProgressStat>            PendingAchievementProgress;                               // 0x073C(0x0010) (Const, NeedCtorLink)
	TArray<struct FLeaderboardTemplate>                LeaderboardList;                                          // 0x074C(0x0010) (NeedCtorLink)
	TArray<struct FDeferredLeaderboardRead>            DeferredLeaderboardReads;                                 // 0x075C(0x0010) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           DeferredLeaderboardWrites;                                // 0x076C(0x0010) (Const, NeedCtorLink)
	TArray<struct FDeferredLeaderboardWrite>           PendingLeaderboardStats;                                  // 0x077C(0x0010) (Const, NeedCtorLink)
	TArray<struct FViewIdToLeaderboardName>            LeaderboardNameMappings;                                  // 0x078C(0x0010) (Config, NeedCtorLink)
	TArray<int>                                        GameServerStatsMappings;                                  // 0x079C(0x0010) (Config, NeedCtorLink)
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                            // 0x07AC(0x0008) (Const)
	TArray<struct FIpAddr>                             PendingRedirects;                                         // 0x07B4(0x0010) (Const, NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                                // 0x07C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                             // 0x07D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                               // 0x07E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                              // 0x07F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                                // 0x0804(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0804(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                            // 0x0814(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0814(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                          // 0x0824(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0824(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;                // 0x0834(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0834(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;               // 0x0844(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0844(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;                  // 0x0854(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0854(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;          // 0x0864(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0864(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;                 // 0x0874(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0874(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                        // 0x0884(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0884(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;                   // 0x0894(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0894(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                        // 0x08A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData14[0x4];                                       // 0x08A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;                    // 0x08B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData15[0x4];                                       // 0x08B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;                   // 0x08C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData16[0x4];                                       // 0x08C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                           // 0x08D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData17[0x4];                                       // 0x08D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                           // 0x08E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData18[0x4];                                       // 0x08E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                           // 0x08F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData19[0x4];                                       // 0x08F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;                     // 0x0904(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0904(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                        // 0x0914(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0914(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x0924(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData22[0x4];                                       // 0x0924(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;               // 0x0934(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0934(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;                      // 0x0944(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData24[0x4];                                       // 0x0944(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;                    // 0x0954(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0954(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;                       // 0x0964(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData26[0x4];                                       // 0x0964(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                         // 0x0974(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData27[0x4];                                       // 0x0974(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;                     // 0x0984(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0984(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;                      // 0x0994(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0994(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;               // 0x09A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData30[0x4];                                       // 0x09A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnContentPurchaseResponse__Delegate;                    // 0x09B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData31[0x4];                                       // 0x09B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;                    // 0x09C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData32[0x4];                                       // 0x09C4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;                  // 0x09D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData33[0x4];                                       // 0x09D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                         // 0x09E4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData34[0x4];                                       // 0x09E4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;                   // 0x09F4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData35[0x4];                                       // 0x09F4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;                   // 0x0A04(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData36[0x4];                                       // 0x0A04(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;          // 0x0A14(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData37[0x4];                                       // 0x0A14(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;      // 0x0A24(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData38[0x4];                                       // 0x0A24(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;                 // 0x0A34(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData39[0x4];                                       // 0x0A34(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;                       // 0x0A44(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData40[0x4];                                       // 0x0A44(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;                      // 0x0A54(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData41[0x4];                                       // 0x0A54(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;                     // 0x0A64(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData42[0x4];                                       // 0x0A64(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadSharedFileComplete__Delegate;                     // 0x0A74(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData43[0x4];                                       // 0x0A74(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnWriteSharedFileComplete__Delegate;                    // 0x0A84(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData44[0x4];                                       // 0x0A84(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnTokenAndSignatureRetrieved__Delegate;                 // 0x0A94(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData45[0x4];                                       // 0x0A94(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeLevelChecked__Delegate;                      // 0x0AA4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData46[0x4];                                       // 0x0AA4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnStatisticChanged__Delegate;                           // 0x0AB4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData47[0x4];                                       // 0x0AB4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnCurrentUserChanged__Delegate;                         // 0x0AC4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData48[0x4];                                       // 0x0AC4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsers__Delegate;                   // 0x0AD4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData49[0x4];                                       // 0x0AD4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPrivilegeCheckedForUsersByUniqueNetIds__Delegate;     // 0x0AE4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData50[0x4];                                       // 0x0AE4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnFilterText__Delegate;                                 // 0x0AF4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData51[0x4];                                       // 0x0AF4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnSystemUserControllerPairingChanged__Delegate;         // 0x0B04(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData52[0x4];                                       // 0x0B04(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowGamerCardComplete__Delegate;                      // 0x0B14(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData53[0x4];                                       // 0x0B14(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAccountPickerComplete__Delegate;                      // 0x0B24(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData54[0x4];                                       // 0x0B24(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUserAccountInfoRetrieved__Delegate;                   // 0x0B34(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData55[0x4];                                       // 0x0B34(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRemoteTalkerStatusChange__Delegate;                   // 0x0B44(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData56[0x4];                                       // 0x0B44(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowComposeMessageUIComplete__Delegate;               // 0x0B54(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData57[0x4];                                       // 0x0B54(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPeoplePickerComplete__Delegate;                       // 0x0B64(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData58[0x4];                                       // 0x0B64(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnAcceptReceivedData__Delegate;                         // 0x0B74(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData59[0x4];                                       // 0x0B74(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnShowHelpComplete__Delegate;                           // 0x0B84(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData60[0x4];                                       // 0x0B84(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineProfilesComplete__Delegate;                 // 0x0B94(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData61[0x4];                                       // 0x0B94(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnRegisterLocalTalkerComplete__Delegate;                // 0x0BA4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData62[0x4];                                       // 0x0BA4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterLocalTalkerComplete__Delegate;              // 0x0BB4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData63[0x4];                                       // 0x0BB4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterRemoteTalkerComplete__Delegate;             // 0x0BC4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData64[0x4];                                       // 0x0BC4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		return ptr;
	}


	bool OpenChatWithUser(const struct FUniqueNetId& UniqueId);
	bool STATIC_PreLogin();
	struct FString GetActivePlayerCountry();
	bool ReadChallenges(unsigned char LocalUserNum, int TitleId, bool bUnlockedOnly);
	bool IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	TEnumAsByte<EOnlineServerConnectionStatus> GetCurrentConnectionStatus();
	bool STATIC_ReadOnlineStatsForPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool STATIC_ReadOnlineStatForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, bool FavoriteFriendsOnly, int NumToRead);
	bool STATIC_SendPlayerSessionResume(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId);
	bool STATIC_SendPlayerSessionPause(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId);
	bool STATIC_SendPlayerSessionEnd(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId, int ExitStatusId);
	bool STATIC_SendPlayerSessionStart(unsigned char LocalUserNum, const struct FString& MultiplayerCorrelationId, int GameplayModeId, int DifficultyLevelId);
	bool STATIC_SendReputationFeedback(unsigned char SenderLocalUserNum, const struct FUniqueNetId& ReputeeNetId, TEnumAsByte<EReputationFeedbackType> FeedbackType, const struct FString& ReportText);
	void STATIC_ClearUnregisterRemoteTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterRemoteTalkerCompleteDelegate);
	void STATIC_AddUnregisterRemoteTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterRemoteTalkerCompleteDelegate);
	void STATIC_OnUnregisterRemoteTalkerComplete(const struct FUniqueNetId& RemoteNetId, bool bWasSuccessful);
	void STATIC_ClearUnregisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterLocalTalkerCompleteDelegate);
	void STATIC_AddUnregisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& UnregisterLocalTalkerCompleteDelegate);
	void STATIC_OnUnregisterLocalTalkerComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	void STATIC_ClearRegisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& RegisterLocalTalkerCompleteDelegate);
	void STATIC_AddRegisterLocalTalkerCompleteDelegate(const struct FScriptDelegate& RegisterLocalTalkerCompleteDelegate);
	void STATIC_OnRegisterLocalTalkerComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	void STATIC_ClearReadOnlineProfilesCompleteDelegate(const struct FScriptDelegate& ReadOnlineProfileDelegate);
	void STATIC_AddReadOnlineProfilesCompleteDelegate(const struct FScriptDelegate& ReadOnlineProfileDelegate);
	void STATIC_OnReadOnlineProfilesComplete(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles);
	bool STATIC_ReadOnlineProfilesForPlayers(TArray<struct FString> PlayerIDs);
	bool GetPlayerIDForPlayerNickname(const struct FString& InPlayerNickname, struct FUniqueNetId* OutPlayerId);
	bool GetPlayerNicknameForPlayerId(const struct FUniqueNetId& InPlayerId, struct FString* OutPlayerNickname);
	bool STATIC_ShowCustomErrorUI(int ErrorCode, const struct FString& ErrorContext, const struct FString& DialogTitle, const struct FString& DialogContent);
	bool STATIC_ShowSystemErrorUI(int ErrorCode, const struct FString& ErrorContext);
	void STATIC_CloseCurrentContentUI();
	bool STATIC_ShowContentRedeemCodeUI(unsigned char LocalUserNum, const struct FString& Offer);
	bool ShowContentPurchaseUI(unsigned char LocalUserNum, const struct FString& Offer);
	bool STATIC_ShowProductDetailsUI(unsigned char LocalUserNum, const struct FString& ParentProductId);
	void STATIC_ClearShowHelpCompleteDelegate(const struct FScriptDelegate& HelpDelegate);
	void STATIC_AddShowHelpCompleteDelegate(const struct FScriptDelegate& HelpDelegate);
	void STATIC_OnShowHelpComplete(bool bWasSuccessful);
	bool STATIC_ShowHelpForErrorUI(const struct FString& ContextId, const struct FString& ErrorString);
	bool STATIC_ShowHelpUI(unsigned char LocalUserNum);
	void STATIC_ClearAcceptReceivedDataDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void STATIC_AddAcceptReceivedDataDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void STATIC_OnAcceptReceivedData(const struct FString& Data);
	bool STATIC_ShowDataSendingUI(unsigned char LocalUserNum, const struct FString& Message, const struct FString& DataName, const struct FString& DataDescription, TArray<unsigned char> Data, int MaxSelectableUsers);
	void STATIC_ClearPeoplePickerCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void STATIC_AddPeoplePickerCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InDelegate);
	void STATIC_OnPeoplePickerComplete(bool bWasSuccessful, TArray<struct FOnlineFriend> PeoplePicked);
	bool STATIC_ShowPeoplePickerUI(unsigned char LocalUserNum, TArray<struct FOnlineFriend> People, int MaxSelectable, const struct FString& Text);
	void STATIC_ClearShowComposeMessageUICompleteDelegate(const struct FScriptDelegate& MessageDelegate);
	void STATIC_AddShowComposeMessageUICompleteDelegate(const struct FScriptDelegate& MessageDelegate);
	void STATIC_OnShowComposeMessageUIComplete(bool bWasSuccessful);
	void STATIC_OnRemoteTalkerStatusChange(const struct FUniqueNetId& RemoteNetId, bool bIsTalking);
	bool UpdatePlayerMuteSetting(bool PlayerMuteSetting);
	bool IsTalkerMuted(const struct FUniqueNetId& ConsoleId);
	void STATIC_ClearGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_AddGetUserAccountInfoDelegate(const struct FScriptDelegate& InDelegate);
	bool GetUserAccountInfo(unsigned char LocalUserNum);
	void STATIC_OnUserAccountInfoRetrieved(bool bSuccessful, const struct FUserAccountInfo& AccountInfo);
	void STATIC_RemoveAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_AddAccountPickerCompleteDelegate(const struct FScriptDelegate& InDelegate);
	void STATIC_OnAccountPickerComplete(bool bForceLogin);
	void STATIC_ClearShowGamerCardCompleteDelegate(const struct FScriptDelegate& GamerCardDelegate);
	void STATIC_AddShowGamerCardCompleteDelegate(const struct FScriptDelegate& GamerCardDelegate);
	void STATIC_OnShowGamerCardComplete(bool bWasSuccessful);
	bool STATIC_ShowVideo(const struct FString& URL);
	void STATIC_ClearSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void STATIC_AddSystemUserContrllerPairingChangedDelegate(const struct FScriptDelegate& PairingChangeDelegate);
	void STATIC_OnSystemUserControllerPairingChanged(int NewLocalUserNum, int PreviousLocalUserNum);
	void STATIC_ClearFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate);
	void STATIC_AddFilterTextDelegate(const struct FScriptDelegate& FilterTextDelegate);
	void STATIC_OnFilterText(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely);
	bool STATIC_CheckFilterText(const struct FString& Text);
	void STATIC_ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results);
	void STATIC_ClearPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_AddPrivilegeCheckedForUsersDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_OnPrivilegeCheckedForUsers(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results);
	bool STATIC_CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users);
	bool STATIC_CanCommunicateTextWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users);
	bool STATIC_CanCommunicateVoiceWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users);
	bool STATIC_CanCommunicateVoiceWithUsers(unsigned char LocalUserNum, TArray<struct FSessionMemberInfo> Users);
	void STATIC_CheckForGameInviteOnLaunch();
	bool STATIC_GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId);
	void STATIC_CacheLoggedInGamepad();
	void STATIC_ClearCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate);
	void STATIC_AddCurrentUserChangedDelegate(const struct FScriptDelegate& CurrentUserDelegate);
	void STATIC_OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser);
	bool PairUserAndControllerAtIndex(unsigned char PlayerIndex, unsigned char ControllerIndex, int PairIndex);
	bool STATIC_CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanCommunicateVideo(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanCommunicateVoice(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanShareUserCreatedContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanRecordDVRClips(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanUseCloudStorage(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanAccessPremiumContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanAccessPremiumVideoContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanBrowseInternet(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanShareWithSocialNetwork(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanShareKinectContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanUploadFitnessData(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	void STATIC_UnsubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName);
	void STATIC_SubscribeToStatisticEvent(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FScriptDelegate& EventDelegate);
	void STATIC_OnStatisticChanged(const struct FUniqueNetId& PlayerNetId, const struct FName& StatName, const struct FString& NewStatValue);
	bool HideKeyboardUI(unsigned char LocalUserNum);
	void STATIC_ClearAchievements(unsigned char LocalUserNum, int TitleId);
	void STATIC_ClearPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_AddPrivilegeLevelCheckedDelegate(const struct FScriptDelegate& PrivilegeDelegate);
	void STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint);
	void STATIC_ClearURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate);
	void STATIC_AddURLTokenRetrievedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& tsrDelegate);
	void STATIC_OnTokenAndSignatureRetrieved(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature);
	bool GetTokenAndSignatureForURL(unsigned char LocalUserNum, const struct FString& URL);
	bool STATIC_ShowComposeMessageUI(unsigned char LocalUserNum, TArray<struct FUniqueNetId> People, const struct FString& Text);
	bool STATIC_ShowGamerCardUIByUsername(unsigned char LocalUserNum, const struct FString& UserName, const struct FUniqueNetId& PlayerID);
	void STATIC_ClearAllDelegates();
	void STATIC_ClearWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	void STATIC_AddWriteSharedFileCompleteDelegate(const struct FScriptDelegate& WriteSharedFileCompleteDelegate);
	bool STATIC_WriteSharedFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* Contents);
	void STATIC_OnWriteSharedFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename, const struct FString& SharedHandle);
	void STATIC_ClearReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	void STATIC_AddReadSharedFileCompleteDelegate(const struct FScriptDelegate& ReadSharedFileCompleteDelegate);
	bool STATIC_ReadSharedFile(const struct FString& SharedHandle);
	void STATIC_OnReadSharedFileComplete(bool bWasSuccessful, const struct FString& SharedHandle);
	bool STATIC_ClearSharedFile(const struct FString& SharedHandle);
	bool STATIC_ClearSharedFiles();
	bool GetSharedFileContents(const struct FString& SharedHandle, TArray<unsigned char>* FileContents);
	void STATIC_ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void STATIC_AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(const struct FString& UserId, const struct FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void STATIC_OnDeleteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void STATIC_AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	bool STATIC_WriteUserFile(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	void STATIC_OnWriteUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void STATIC_ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void STATIC_AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	bool STATIC_ReadUserFile(const struct FString& UserId, const struct FString& Filename);
	void STATIC_OnReadUserFileComplete(bool bWasSuccessful, const struct FString& UserId, const struct FString& Filename);
	void GetUserFileList(const struct FString& UserId, TArray<struct FEmsFile>* UserFiles);
	void STATIC_ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void STATIC_AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(const struct FString& UserId);
	void STATIC_OnEnumerateUserFilesComplete(bool bWasSuccessful, const struct FString& UserId);
	bool STATIC_ClearFile(const struct FString& UserId, const struct FString& Filename);
	bool STATIC_ClearFiles(const struct FString& UserId);
	bool GetFileContents(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool WriteUserFileInternal(const struct FString& UserId, const struct FString& Filename, TArray<unsigned char>* FileContents);
	bool GetFriendJoinURL(const struct FUniqueNetId& FriendUID, struct FString* ServerURL, struct FString* ServerUID);
	bool GetCommandlineJoinURL(bool bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID);
	bool Int64ToUniqueNetId(const struct FString& UIDString, struct FUniqueNetId* OutUID);
	struct FString UniqueNetIdToInt64(struct FUniqueNetId* Uid);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool ShowProfileUI(unsigned char LocalUserNum, const struct FString& SubURL, const struct FUniqueNetId& PlayerUID);
	struct FString UniqueNetIdToPlayerName(struct FUniqueNetId* Uid);
	bool DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress);
	bool CreateLeaderboard(const struct FString& LeaderboardName, TEnumAsByte<ELeaderboardSortType> SortType, TEnumAsByte<ELeaderboardFormat> DisplayFormat);
	bool ResetStats(bool bResetAchievements);
	bool STATIC_ShowCustomMessageUI(unsigned char LocalUserNum, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage, TArray<struct FUniqueNetId>* Recipients);
	void STATIC_ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	void STATIC_ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void STATIC_AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void STATIC_OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful);
	bool STATIC_ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings);
	bool STATIC_UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId);
	void GetSteamClanData(TArray<struct FSteamPlayerClanData>* Results);
	void STATIC_ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void STATIC_AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate);
	void STATIC_OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	void STATIC_OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar);
	bool STATIC_ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players);
	TEnumAsByte<EOnlineEnumerationReadState> GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements);
	void STATIC_ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void STATIC_AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void STATIC_OnReadAchievementsComplete(int TitleId);
	bool STATIC_ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages);
	bool STATIC_ShowPlayersUI(unsigned char LocalUserNum);
	bool STATIC_ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool STATIC_ShowFriendsUI(unsigned char LocalUserNum);
	void STATIC_ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void STATIC_AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void STATIC_OnProfileDataChanged();
	bool STATIC_UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void STATIC_ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void STATIC_AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void STATIC_OnUnlockAchievementComplete(bool bWasSuccessful);
	bool STATIC_UnlockAchievement(unsigned char LocalUserNum, int AchievementId, float PercentComplete);
	bool IsDeviceValid(int DeviceID, int SizeNeeded);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void STATIC_ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void STATIC_AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void STATIC_OnDeviceSelectionComplete(bool bWasSuccessful);
	bool STATIC_ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bManageStorage);
	bool STATIC_ShowMembershipMarketplaceUI(unsigned char LocalUserNum);
	bool STATIC_ShowContentMarketplaceUI(unsigned char LocalUserNum, int ParentProductType, int RequestedProductTypes, const struct FString& ParentProductId);
	void STATIC_ClearContentPurchaseResponse(const struct FScriptDelegate& ResponseDelegate);
	void STATIC_AddContentPurchaseResponse(const struct FScriptDelegate& ResponseDelegate);
	void STATIC_OnContentPurchaseResponse(bool bAuthorized, const struct FQWord& qwOrderId);
	bool CanShowContentPurchaseUI();
	bool STATIC_ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText);
	bool STATIC_ShowAchievementsUI(unsigned char LocalUserNum);
	bool STATIC_ShowMessagesUI(unsigned char LocalUserNum);
	bool STATIC_ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool STATIC_ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	bool STATIC_UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, bool bAllowFriends);
	void STATIC_CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma);
	bool STATIC_RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void STATIC_ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void STATIC_AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate);
	void STATIC_OnRegisterHostStatGuidComplete(bool bWasSuccessful);
	bool STATIC_RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	void STATIC_ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void STATIC_AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate);
	void STATIC_OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages);
	void STATIC_ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void STATIC_AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate);
	void STATIC_OnJoinFriendGameComplete(bool bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend);
	void STATIC_ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void STATIC_AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate);
	void STATIC_OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName);
	bool STATIC_SendGameInviteToFriends(unsigned char LocalUserNum, const struct FName& SessionName, TArray<struct FUniqueNetId> Friends, const struct FString& Text);
	bool STATIC_SendGameInviteToFriend(unsigned char LocalUserNum, const struct FName& SessionName, const struct FUniqueNetId& Friend, const struct FString& Text);
	bool STATIC_SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message);
	void STATIC_ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void STATIC_AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate);
	void STATIC_OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message);
	bool DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool STATIC_AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer);
	bool STATIC_RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend);
	void STATIC_ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void STATIC_AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate);
	void STATIC_OnAddFriendByNameComplete(bool bWasSuccessful);
	bool STATIC_AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message);
	bool STATIC_AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void STATIC_ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void STATIC_AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void STATIC_OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void STATIC_SetOnlineStatus(unsigned char LocalUserNum, const struct FString& StatusString, bool PlayerActive);
	bool GetLocalAccountNames(TArray<struct FString>* Accounts);
	bool DeleteLocalAccount(const struct FString& UserName, const struct FString& Password);
	bool STATIC_RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password);
	bool CreateLocalAccount(const struct FString& UserName, const struct FString& Password);
	void STATIC_ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void STATIC_AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void STATIC_OnCreateOnlineAccountCompleted(TEnumAsByte<EOnlineAccountCreateStatus> ErrorStatus);
	bool CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey);
	TEnumAsByte<EOnlineEnumerationReadState> GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void STATIC_ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void STATIC_AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool STATIC_ReadTitleFile(const struct FString& FileToRead);
	void STATIC_OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	void STATIC_ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void STATIC_AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void STATIC_OnStorageDeviceChange();
	int GetLocale();
	TEnumAsByte<ENATType> STATIC_GetNATType();
	void STATIC_ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void STATIC_AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void STATIC_OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus);
	bool IsControllerConnected(int ControllerId);
	void STATIC_ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void STATIC_AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void STATIC_OnControllerChange(int ControllerId, bool bIsConnected, bool bPauseGame);
	void STATIC_SetNetworkNotificationPosition(TEnumAsByte<ENetworkNotificationPosition> NewPos);
	TEnumAsByte<ENetworkNotificationPosition> GetNetworkNotificationPosition();
	void STATIC_ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void STATIC_AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void STATIC_OnExternalUIChange(bool bIsOpening);
	void STATIC_ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void STATIC_AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void STATIC_OnLinkStatusChange(bool bIsConnected);
	bool STATIC_HasLinkConnection();
	struct FString STATIC_GetPlayerNicknameFromIndex(int UserIndex);
	bool STATIC_WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores);
	void STATIC_ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void STATIC_AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate);
	void STATIC_OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool FlushOnlineStats(const struct FName& SessionName);
	bool STATIC_WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void STATIC_ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void STATIC_AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate);
	void STATIC_OnReadOnlineStatsComplete(bool bWasSuccessful);
	bool STATIC_ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool STATIC_ReadOnlineStatsByRank(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool STATIC_ReadOnlineStats(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players);
	bool STATIC_SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool STATIC_SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void STATIC_ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void STATIC_AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate);
	void STATIC_OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words);
	bool STATIC_StopSpeechRecognition(unsigned char LocalUserNum);
	bool STATIC_StartSpeechRecognition(unsigned char LocalUserNum);
	void STATIC_StopNetworkedVoice(unsigned char LocalUserNum);
	void STATIC_StartNetworkedVoice(unsigned char LocalUserNum);
	void STATIC_ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void STATIC_AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate);
	void STATIC_OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	bool STATIC_UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide);
	bool STATIC_SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool STATIC_UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool STATIC_RegisterRemoteTalker(const struct FUniqueNetId& PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
	bool RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
	TEnumAsByte<EOnlineEnumerationReadState> GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends);
	void STATIC_ClearCustomOnlineDelegates();
	void STATIC_ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void STATIC_AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void STATIC_OnReadFriendsComplete(bool bWasSuccessful);
	bool STATIC_ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void STATIC_ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void STATIC_AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void STATIC_OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool STATIC_WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void STATIC_ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void STATIC_AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void STATIC_OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool STATIC_ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void STATIC_ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void STATIC_AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void STATIC_OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool STATIC_ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void STATIC_ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void STATIC_AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void STATIC_OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool STATIC_WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void STATIC_ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void STATIC_AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void STATIC_OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool STATIC_ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void STATIC_ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void STATIC_AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate);
	void STATIC_ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void STATIC_AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate);
	void STATIC_ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void STATIC_AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void STATIC_ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void STATIC_AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum);
	void STATIC_OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId);
	void STATIC_ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void STATIC_AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool STATIC_AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query);
	bool IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool STATIC_CanShowPresenceInformation(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanViewPlayerProfiles(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	bool STATIC_CanPurchaseContent(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	TEnumAsByte<EFeaturePrivilegeLevel> STATIC_CanCommunicate(unsigned char LocalUserNum);
	bool STATIC_CanPlayOnline(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	bool IsLocalLogin(unsigned char LocalUserNum);
	bool IsGuestLogin(unsigned char LocalUserNum);
	TEnumAsByte<ELoginStatus> STATIC_GetLoginStatus(unsigned char LocalUserNum);
	void STATIC_ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void STATIC_AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void STATIC_OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void STATIC_ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void STATIC_AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void STATIC_OnLoginFailed(unsigned char LocalUserNum, TEnumAsByte<EOnlineServerConnectionStatus> ErrorCode);
	bool STATIC_AutoLogin();
	bool STATIC_Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly);
	bool IsAccountPickerOpen();
	bool STATIC_ShowLoginUI(unsigned char LocalUserNum, bool bForceLogin, bool bShowOnlineOnly);
	void STATIC_OnFriendsChange();
	void STATIC_OnMutingChange();
	void STATIC_OnLoginCancelled();
	void STATIC_OnLoginChange(unsigned char LocalUserNum);
	void Exit();
	bool Init();
};


// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0014 (0x023C - 0x0228)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:
	unsigned long                                      bSteamSocketsOnly : 1;                                    // 0x0228(0x0004) (Config)
	unsigned char                                      UnknownData00[0x10];                                      // 0x022C(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetDriverSteamworks");
		return ptr;
	}

};


// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0xB134 - 0xB134)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

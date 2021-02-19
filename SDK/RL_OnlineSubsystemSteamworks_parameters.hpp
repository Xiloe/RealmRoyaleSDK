#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_OnlineSubsystemSteamworks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
struct UOnlineAuthInterfaceSteamworks_GetServerAddr_Params
{
	struct FIpAddr                                     OutServerIP;                                              // (Parm, OutParm)
	int                                                OutServerPort;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
struct UOnlineAuthInterfaceSteamworks_GetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	struct FIpAddr                                     ServerIP;                                                 // (Parm)
	int                                                AuthTicketUID;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	struct FIpAddr                                     ClientIP;                                                 // (Parm)
	int                                                ClientPort;                                               // (Parm)
	int                                                OutAuthTicketUID;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	struct FIpAddr                                     ClientIP;                                                 // (Parm)
	int                                                ClientPort;                                               // (Parm)
	int                                                AuthTicketUID;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	struct FIpAddr                                     ServerIP;                                                 // (Parm)
	int                                                ServerPort;                                               // (Parm)
	bool                                               bSecure;                                                  // (Parm)
	int                                                OutAuthTicketUID;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
struct UOnlineAuthInterfaceSteamworks_SendServerAuthRequest_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
struct UOnlineAuthInterfaceSteamworks_SendClientAuthRequest_Params
{
	class UPlayer*                                     ClientConnection;                                         // (Parm)
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetUserConnectionInfoAsync
struct UOnlineGameInterfaceSteamworks_GetUserConnectionInfoAsync_Params
{
	TArray<struct FString>                             UserNames;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfo
struct UOnlineGameInterfaceSteamworks_GetCurrentSessionMemberInfo_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FSessionMemberInfo>                  OutMemberInfo;                                            // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetCurrentSessionMemberInfoAsync
struct UOnlineGameInterfaceSteamworks_GetCurrentSessionMemberInfoAsync_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RunBandwidthTest
struct UOnlineGameInterfaceSteamworks_RunBandwidthTest_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsAllowedToNetworkHost
struct UOnlineGameInterfaceSteamworks_IsAllowedToNetworkHost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromSessionId
struct UOnlineGameInterfaceSteamworks_GetRoomIdFromSessionId_Params
{
	struct FString                                     SessionId;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomIdFromTitleService
struct UOnlineGameInterfaceSteamworks_GetRoomIdFromTitleService_Params
{
	struct FQWord                                      DataId;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetRoomId
struct UOnlineGameInterfaceSteamworks_GetRoomId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayersCached
struct UOnlineGameInterfaceSteamworks_GetNumberOfCurrentPlayersCached_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SendPlayerList
struct UOnlineGameInterfaceSteamworks_SendPlayerList_Params
{
	TArray<class APlayerReplicationInfo*>              Players;                                                  // (Const, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RetrieveGameSettingsForIP
struct UOnlineGameInterfaceSteamworks_RetrieveGameSettingsForIP_Params
{
	struct FString                                     IPAddress;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetNumberOfCurrentPlayers
struct UOnlineGameInterfaceSteamworks_GetNumberOfCurrentPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinMigratedOnlineGame
struct UOnlineGameInterfaceSteamworks_JoinMigratedOnlineGame_Params
{
	unsigned char                                      PlayerNum;                                                // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MigrateOnlineGame
struct UOnlineGameInterfaceSteamworks_MigrateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RecalculateSkillRating
struct UOnlineGameInterfaceSteamworks_RecalculateSkillRating_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetArbitratedPlayers
struct UOnlineGameInterfaceSteamworks_GetArbitratedPlayers_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FOnlineArbitrationRegistrant>        ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterForArbitration
struct UOnlineGameInterfaceSteamworks_RegisterForArbitration_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.EndOnlineGame
struct UOnlineGameInterfaceSteamworks_EndOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.StartOnlineGame
struct UOnlineGameInterfaceSteamworks_StartOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
struct UOnlineGameInterfaceSteamworks_GetResolvedConnectString_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     ConnectInfo;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsByKeyword
struct UOnlineGameInterfaceSteamworks_QuerySessionsByKeyword_Params
{
	unsigned char                                      LocalPlayerNum;                                           // (Parm)
	struct FString                                     Keyword;                                                  // (Parm, NeedCtorLink)
	class UOnlineGameSearch*                           SearchSettings;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QuerySessionsForUser
struct UOnlineGameInterfaceSteamworks_QuerySessionsForUser_Params
{
	unsigned char                                      LocalPlayerNum;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveAllOnlineSessions
struct UOnlineGameInterfaceSteamworks_LeaveAllOnlineSessions_Params
{
	bool                                               bClearSessionIfHost;                                      // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.LeaveOnlineSession
struct UOnlineGameInterfaceSteamworks_LeaveOnlineSession_Params
{
	unsigned char                                      LocalPlayerNum;                                           // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bClearSessionIfHost;                                      // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptPendingGameSession
struct UOnlineGameInterfaceSteamworks_AcceptPendingGameSession_Params
{
	struct FName                                       SessionName;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateSessionProperties
struct UOnlineGameInterfaceSteamworks_UpdateSessionProperties_Params
{
	unsigned char                                      ScoutingUserNum;                                          // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomMemberProperty
struct UOnlineGameInterfaceSteamworks_DeleteCustomMemberProperty_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     PropertyName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomMemberProperty
struct UOnlineGameInterfaceSteamworks_SetCustomMemberProperty_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     PropertyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     PropertyValue;                                            // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DeleteCustomSessionProperty
struct UOnlineGameInterfaceSteamworks_DeleteCustomSessionProperty_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     PropertyName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetCustomSessionProperty
struct UOnlineGameInterfaceSteamworks_SetCustomSessionProperty_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     PropertyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     PropertyValue;                                            // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMembers
struct UOnlineGameInterfaceSteamworks_AddSessionMembers_Params
{
	unsigned char                                      ScoutingPlayerNum;                                        // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Members;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMember
struct UOnlineGameInterfaceSteamworks_AddSessionMember_Params
{
	unsigned char                                      ScoutingPlayerNum;                                        // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Member;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddSessionMemberByString
struct UOnlineGameInterfaceSteamworks_AddSessionMemberByString_Params
{
	unsigned char                                      ScoutingPlayerNum;                                        // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineSessionWithTemplate
struct UOnlineGameInterfaceSteamworks_CreateOnlineSessionWithTemplate_Params
{
	unsigned char                                      ScoutingPlayerNum;                                        // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (Parm)
	struct FString                                     TemplateName;                                             // (Parm, NeedCtorLink)
	struct FString                                     SessionKeyword;                                           // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.InitiatedSessionSearch
struct UOnlineGameInterfaceSteamworks_InitiatedSessionSearch_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsHostOfSession
struct UOnlineGameInterfaceSteamworks_IsHostOfSession_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakeOnlineGameWithParty
struct UOnlineGameInterfaceSteamworks_MatchmakeOnlineGameWithParty_Params
{
	unsigned char                                      ScoutingPlayerNum;                                        // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGameWithParty
struct UOnlineGameInterfaceSteamworks_CreateOnlineGameWithParty_Params
{
	unsigned char                                      ScoutingPlayerNum;                                        // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsCurrentRoomOwner
struct UOnlineGameInterfaceSteamworks_IsCurrentRoomOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.SetRankedReadyStatus
struct UOnlineGameInterfaceSteamworks_SetRankedReadyStatus_Params
{
	bool                                               bReady;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.IsJoinOperationInProgress
struct UOnlineGameInterfaceSteamworks_IsJoinOperationInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameByMatchingParams
struct UOnlineGameInterfaceSteamworks_JoinOnlineGameByMatchingParams_Params
{
	struct FQWord                                      RoomId;                                                   // (Parm)
	class UOnlineGameSettings*                         JoinedGameSettings;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangeComplete
struct UOnlineGameInterfaceSteamworks_OnMapChangeComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnMapChangePending
struct UOnlineGameInterfaceSteamworks_OnMapChangePending_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGameBySessionHandle
struct UOnlineGameInterfaceSteamworks_JoinOnlineGameBySessionHandle_Params
{
	unsigned char                                      PlayerNum;                                                // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     InSessionGuid;                                            // (Const, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.JoinOnlineGame
struct UOnlineGameInterfaceSteamworks_JoinOnlineGame_Params
{
	unsigned char                                      PlayerNum;                                                // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FreeSearchResults
struct UOnlineGameInterfaceSteamworks_FreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSearch
struct UOnlineGameInterfaceSteamworks_GetGameSearch_Params
{
	class UOnlineGameSearch*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch
struct UOnlineGameInterfaceSteamworks_BindPlatformSpecificSessionToSearch_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName
struct UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfoBySessionName_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo
struct UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfo_Params
{
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CancelFindOnlineGames
struct UOnlineGameInterfaceSteamworks_CancelFindOnlineGames_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FindOnlineGames
struct UOnlineGameInterfaceSteamworks_FindOnlineGames_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.DestroyOnlineGame
struct UOnlineGameInterfaceSteamworks_DestroyOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.CreateOnlineGame
struct UOnlineGameInterfaceSteamworks_CreateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings
struct UOnlineGameInterfaceSteamworks_GetGameSettings_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
struct UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                  // (Parm)
	int                                                NumberToQuery;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayers
struct UOnlineGameInterfaceSteamworks_UnregisterPlayers_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
struct UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayers
struct UOnlineGameInterfaceSteamworks_RegisterPlayers_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
struct UOnlineGameInterfaceSteamworks_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasInvited;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
struct UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
struct UOnlineGameInterfaceSteamworks_ClearGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
struct UOnlineGameInterfaceSteamworks_AddGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
struct UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (Const, Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
struct UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (Parm)
	bool                                               bShouldRefreshOnlineData;                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenChatWithUser
struct UOnlineSubsystemSteamworks_OpenChatWithUser_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PreLogin
struct UOnlineSubsystemSteamworks_PreLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActivePlayerCountry
struct UOnlineSubsystemSteamworks_GetActivePlayerCountry_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadChallenges
struct UOnlineSubsystemSteamworks_ReadChallenges_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	bool                                               bUnlockedOnly;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
struct UOnlineSubsystemSteamworks_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
struct UOnlineSubsystemSteamworks_GetCurrentConnectionStatus_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForPlayer
struct UOnlineSubsystemSteamworks_ReadOnlineStatsForPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatForFriends
struct UOnlineSubsystemSteamworks_ReadOnlineStatForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               FavoriteFriendsOnly;                                      // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionResume
struct UOnlineSubsystemSteamworks_SendPlayerSessionResume_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	int                                                GameplayModeId;                                           // (Parm)
	int                                                DifficultyLevelId;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionPause
struct UOnlineSubsystemSteamworks_SendPlayerSessionPause_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionEnd
struct UOnlineSubsystemSteamworks_SendPlayerSessionEnd_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	int                                                GameplayModeId;                                           // (Parm)
	int                                                DifficultyLevelId;                                        // (Parm)
	int                                                ExitStatusId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendPlayerSessionStart
struct UOnlineSubsystemSteamworks_SendPlayerSessionStart_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     MultiplayerCorrelationId;                                 // (Parm, NeedCtorLink)
	int                                                GameplayModeId;                                           // (Parm)
	int                                                DifficultyLevelId;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendReputationFeedback
struct UOnlineSubsystemSteamworks_SendReputationFeedback_Params
{
	unsigned char                                      SenderLocalUserNum;                                       // (Parm)
	struct FUniqueNetId                                ReputeeNetId;                                             // (Parm)
	TEnumAsByte<EReputationFeedbackType>               FeedbackType;                                             // (Parm)
	struct FString                                     ReportText;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterRemoteTalkerCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnregisterRemoteTalkerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterRemoteTalkerCompleteDelegate;                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterRemoteTalkerCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnregisterRemoteTalkerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterRemoteTalkerCompleteDelegate;                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterRemoteTalkerComplete
struct UOnlineSubsystemSteamworks_OnUnregisterRemoteTalkerComplete_Params
{
	struct FUniqueNetId                                RemoteNetId;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisterLocalTalkerCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnregisterLocalTalkerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterLocalTalkerCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisterLocalTalkerCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnregisterLocalTalkerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterLocalTalkerCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisterLocalTalkerComplete
struct UOnlineSubsystemSteamworks_OnUnregisterLocalTalkerComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterLocalTalkerCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearRegisterLocalTalkerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterLocalTalkerCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterLocalTalkerCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRegisterLocalTalkerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterLocalTalkerCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterLocalTalkerComplete
struct UOnlineSubsystemSteamworks_OnRegisterLocalTalkerComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineProfilesCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadOnlineProfilesCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineProfileDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineProfilesCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadOnlineProfilesCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineProfileDelegate;                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineProfilesComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineProfilesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	TArray<struct FString>                             PlayerIDs;                                                // (Parm, NeedCtorLink)
	TArray<struct FOnlineProfile>                      OnlineProfiles;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineProfilesForPlayers
struct UOnlineSubsystemSteamworks_ReadOnlineProfilesForPlayers_Params
{
	TArray<struct FString>                             PlayerIDs;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerIDForPlayerNickname
struct UOnlineSubsystemSteamworks_GetPlayerIDForPlayerNickname_Params
{
	struct FString                                     InPlayerNickname;                                         // (Parm, NeedCtorLink)
	struct FUniqueNetId                                OutPlayerId;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameForPlayerId
struct UOnlineSubsystemSteamworks_GetPlayerNicknameForPlayerId_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (Parm)
	struct FString                                     OutPlayerNickname;                                        // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomErrorUI
struct UOnlineSubsystemSteamworks_ShowCustomErrorUI_Params
{
	int                                                ErrorCode;                                                // (Parm)
	struct FString                                     ErrorContext;                                             // (Parm, NeedCtorLink)
	struct FString                                     DialogTitle;                                              // (Parm, NeedCtorLink)
	struct FString                                     DialogContent;                                            // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowSystemErrorUI
struct UOnlineSubsystemSteamworks_ShowSystemErrorUI_Params
{
	int                                                ErrorCode;                                                // (Parm)
	struct FString                                     ErrorContext;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CloseCurrentContentUI
struct UOnlineSubsystemSteamworks_CloseCurrentContentUI_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentRedeemCodeUI
struct UOnlineSubsystemSteamworks_ShowContentRedeemCodeUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     Offer;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI
struct UOnlineSubsystemSteamworks_ShowContentPurchaseUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     Offer;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProductDetailsUI
struct UOnlineSubsystemSteamworks_ShowProductDetailsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ParentProductId;                                          // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowHelpCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearShowHelpCompleteDelegate_Params
{
	struct FScriptDelegate                             HelpDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowHelpCompleteDelegate
struct UOnlineSubsystemSteamworks_AddShowHelpCompleteDelegate_Params
{
	struct FScriptDelegate                             HelpDelegate;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowHelpComplete
struct UOnlineSubsystemSteamworks_OnShowHelpComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpForErrorUI
struct UOnlineSubsystemSteamworks_ShowHelpForErrorUI_Params
{
	struct FString                                     ContextId;                                                // (Parm, NeedCtorLink)
	struct FString                                     ErrorString;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowHelpUI
struct UOnlineSubsystemSteamworks_ShowHelpUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptReceivedDataDelegate
struct UOnlineSubsystemSteamworks_ClearAcceptReceivedDataDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptReceivedDataDelegate
struct UOnlineSubsystemSteamworks_AddAcceptReceivedDataDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptReceivedData
struct UOnlineSubsystemSteamworks_OnAcceptReceivedData_Params
{
	struct FString                                     Data;                                                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDataSendingUI
struct UOnlineSubsystemSteamworks_ShowDataSendingUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     DataName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     DataDescription;                                          // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Data;                                                     // (Parm, NeedCtorLink)
	int                                                MaxSelectableUsers;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPeoplePickerCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearPeoplePickerCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPeoplePickerCompleteDelegate
struct UOnlineSubsystemSteamworks_AddPeoplePickerCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPeoplePickerComplete
struct UOnlineSubsystemSteamworks_OnPeoplePickerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	TArray<struct FOnlineFriend>                       PeoplePicked;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPeoplePickerUI
struct UOnlineSubsystemSteamworks_ShowPeoplePickerUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       People;                                                   // (Parm, NeedCtorLink)
	int                                                MaxSelectable;                                            // (Parm)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowComposeMessageUICompleteDelegate
struct UOnlineSubsystemSteamworks_ClearShowComposeMessageUICompleteDelegate_Params
{
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowComposeMessageUICompleteDelegate
struct UOnlineSubsystemSteamworks_AddShowComposeMessageUICompleteDelegate_Params
{
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowComposeMessageUIComplete
struct UOnlineSubsystemSteamworks_OnShowComposeMessageUIComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoteTalkerStatusChange
struct UOnlineSubsystemSteamworks_OnRemoteTalkerStatusChange_Params
{
	struct FUniqueNetId                                RemoteNetId;                                              // (Parm)
	bool                                               bIsTalking;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdatePlayerMuteSetting
struct UOnlineSubsystemSteamworks_UpdatePlayerMuteSetting_Params
{
	bool                                               PlayerMuteSetting;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsTalkerMuted
struct UOnlineSubsystemSteamworks_IsTalkerMuted_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAccountInfoDelegate
struct UOnlineSubsystemSteamworks_ClearGetUserAccountInfoDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAccountInfoDelegate
struct UOnlineSubsystemSteamworks_AddGetUserAccountInfoDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAccountInfo
struct UOnlineSubsystemSteamworks_GetUserAccountInfo_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserAccountInfoRetrieved
struct UOnlineSubsystemSteamworks_OnUserAccountInfoRetrieved_Params
{
	bool                                               bSuccessful;                                              // (Parm)
	struct FUserAccountInfo                            AccountInfo;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveAccountPickerCompleteDelegate
struct UOnlineSubsystemSteamworks_RemoveAccountPickerCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAccountPickerCompleteDelegate
struct UOnlineSubsystemSteamworks_AddAccountPickerCompleteDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAccountPickerComplete
struct UOnlineSubsystemSteamworks_OnAccountPickerComplete_Params
{
	bool                                               bForceLogin;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShowGamerCardCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearShowGamerCardCompleteDelegate_Params
{
	struct FScriptDelegate                             GamerCardDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShowGamerCardCompleteDelegate
struct UOnlineSubsystemSteamworks_AddShowGamerCardCompleteDelegate_Params
{
	struct FScriptDelegate                             GamerCardDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowGamerCardComplete
struct UOnlineSubsystemSteamworks_OnShowGamerCardComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowVideo
struct UOnlineSubsystemSteamworks_ShowVideo_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserContrllerPairingChangedDelegate
struct UOnlineSubsystemSteamworks_ClearSystemUserContrllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserContrllerPairingChangedDelegate
struct UOnlineSubsystemSteamworks_AddSystemUserContrllerPairingChangedDelegate_Params
{
	struct FScriptDelegate                             PairingChangeDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
struct UOnlineSubsystemSteamworks_OnSystemUserControllerPairingChanged_Params
{
	int                                                NewLocalUserNum;                                          // (Parm)
	int                                                PreviousLocalUserNum;                                     // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFilterTextDelegate
struct UOnlineSubsystemSteamworks_ClearFilterTextDelegate_Params
{
	struct FScriptDelegate                             FilterTextDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFilterTextDelegate
struct UOnlineSubsystemSteamworks_AddFilterTextDelegate_Params
{
	struct FScriptDelegate                             FilterTextDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFilterText
struct UOnlineSubsystemSteamworks_OnFilterText_Params
{
	struct FString                                     OriginalText;                                             // (Parm, NeedCtorLink)
	struct FString                                     FilteredText;                                             // (Parm, NeedCtorLink)
	bool                                               bCensorCompletely;                                        // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckFilterText
struct UOnlineSubsystemSteamworks_CheckFilterText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate
struct UOnlineSubsystemSteamworks_ClearPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate
struct UOnlineSubsystemSteamworks_AddPrivilegeCheckedForUsersByUniqueNetIdsDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsersByUniqueNetIds
struct UOnlineSubsystemSteamworks_OnPrivilegeCheckedForUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResultByUniqueNetId>     Results;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeCheckedForUsersDelegate
struct UOnlineSubsystemSteamworks_ClearPrivilegeCheckedForUsersDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeCheckedForUsersDelegate
struct UOnlineSubsystemSteamworks_AddPrivilegeCheckedForUsersDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeCheckedForUsers
struct UOnlineSubsystemSteamworks_OnPrivilegeCheckedForUsers_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResult>                  Results;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsersByUniqueNetIds
struct UOnlineSubsystemSteamworks_CanCommunicateTextWithUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateTextWithUsers
struct UOnlineSubsystemSteamworks_CanCommunicateTextWithUsers_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSessionMemberInfo>                  Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsersByUniqueNetIds
struct UOnlineSubsystemSteamworks_CanCommunicateVoiceWithUsersByUniqueNetIds_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoiceWithUsers
struct UOnlineSubsystemSteamworks_CanCommunicateVoiceWithUsers_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSessionMemberInfo>                  Users;                                                    // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckForGameInviteOnLaunch
struct UOnlineSubsystemSteamworks_CheckForGameInviteOnLaunch_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerIdFromNetId
struct UOnlineSubsystemSteamworks_GetControllerIdFromNetId_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                ControllerId;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CacheLoggedInGamepad
struct UOnlineSubsystemSteamworks_CacheLoggedInGamepad_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCurrentUserChangedDelegate
struct UOnlineSubsystemSteamworks_ClearCurrentUserChangedDelegate_Params
{
	struct FScriptDelegate                             CurrentUserDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCurrentUserChangedDelegate
struct UOnlineSubsystemSteamworks_AddCurrentUserChangedDelegate_Params
{
	struct FScriptDelegate                             CurrentUserDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCurrentUserChanged
struct UOnlineSubsystemSteamworks_OnCurrentUserChanged_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     CurrentUser;                                              // (Parm, NeedCtorLink)
	struct FString                                     LoggedInUser;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PairUserAndControllerAtIndex
struct UOnlineSubsystemSteamworks_PairUserAndControllerAtIndex_Params
{
	unsigned char                                      PlayerIndex;                                              // (Parm)
	unsigned char                                      ControllerIndex;                                          // (Parm)
	int                                                PairIndex;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
struct UOnlineSubsystemSteamworks_CanCommunicateText_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
struct UOnlineSubsystemSteamworks_CanCommunicateVideo_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
struct UOnlineSubsystemSteamworks_CanCommunicateVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
struct UOnlineSubsystemSteamworks_CanShareUserCreatedContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
struct UOnlineSubsystemSteamworks_CanRecordDVRClips_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
struct UOnlineSubsystemSteamworks_CanUseCloudStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
struct UOnlineSubsystemSteamworks_CanAccessPremiumContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
struct UOnlineSubsystemSteamworks_CanAccessPremiumVideoContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
struct UOnlineSubsystemSteamworks_CanBrowseInternet_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
struct UOnlineSubsystemSteamworks_CanShareWithSocialNetwork_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
struct UOnlineSubsystemSteamworks_CanShareKinectContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
struct UOnlineSubsystemSteamworks_CanUploadFitnessData_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnsubscribeToStatisticEvent
struct UOnlineSubsystemSteamworks_UnsubscribeToStatisticEvent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	struct FName                                       StatName;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SubscribeToStatisticEvent
struct UOnlineSubsystemSteamworks_SubscribeToStatisticEvent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	struct FName                                       StatName;                                                 // (Parm)
	struct FScriptDelegate                             EventDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStatisticChanged
struct UOnlineSubsystemSteamworks_OnStatisticChanged_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	struct FName                                       StatName;                                                 // (Parm)
	struct FString                                     NewStatValue;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
struct UOnlineSubsystemSteamworks_HideKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAchievements
struct UOnlineSubsystemSteamworks_ClearAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrivilegeLevelCheckedDelegate
struct UOnlineSubsystemSteamworks_ClearPrivilegeLevelCheckedDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPrivilegeLevelCheckedDelegate
struct UOnlineSubsystemSteamworks_AddPrivilegeLevelCheckedDelegate_Params
{
	struct FScriptDelegate                             PrivilegeDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPrivilegeLevelChecked
struct UOnlineSubsystemSteamworks_OnPrivilegeLevelChecked_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearURLTokenRetrievedDelegate
struct UOnlineSubsystemSteamworks_ClearURLTokenRetrievedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             tsrDelegate;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddURLTokenRetrievedDelegate
struct UOnlineSubsystemSteamworks_AddURLTokenRetrievedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             tsrDelegate;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnTokenAndSignatureRetrieved
struct UOnlineSubsystemSteamworks_OnTokenAndSignatureRetrieved_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
	struct FString                                     AuthToken;                                                // (Parm, NeedCtorLink)
	struct FString                                     Signature;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTokenAndSignatureForURL
struct UOnlineSubsystemSteamworks_GetTokenAndSignatureForURL_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowComposeMessageUI
struct UOnlineSubsystemSteamworks_ShowComposeMessageUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        People;                                                   // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUIByUsername
struct UOnlineSubsystemSteamworks_ShowGamerCardUIByUsername_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
struct UOnlineSubsystemSteamworks_ClearAllDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteSharedFileCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
struct UOnlineSubsystemSteamworks_WriteSharedFile_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Contents;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
struct UOnlineSubsystemSteamworks_OnWriteSharedFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SharedHandle;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadSharedFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadSharedFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
struct UOnlineSubsystemSteamworks_ReadSharedFile_Params
{
	struct FString                                     SharedHandle;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
struct UOnlineSubsystemSteamworks_OnReadSharedFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     SharedHandle;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
struct UOnlineSubsystemSteamworks_ClearSharedFile_Params
{
	struct FString                                     SharedHandle;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
struct UOnlineSubsystemSteamworks_ClearSharedFiles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
struct UOnlineSubsystemSteamworks_GetSharedFileContents_Params
{
	struct FString                                     SharedHandle;                                             // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddDeleteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             DeleteUserFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
struct UOnlineSubsystemSteamworks_DeleteUserFile_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               bShouldCloudDelete;                                       // (Parm)
	bool                                               bShouldLocallyDelete;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
struct UOnlineSubsystemSteamworks_OnDeleteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             WriteUserFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
struct UOnlineSubsystemSteamworks_WriteUserFile_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
struct UOnlineSubsystemSteamworks_OnWriteUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadUserFileCompleteDelegate;                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
struct UOnlineSubsystemSteamworks_ReadUserFile_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
struct UOnlineSubsystemSteamworks_OnReadUserFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
struct UOnlineSubsystemSteamworks_GetUserFileList_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	TArray<struct FEmsFile>                            UserFiles;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddEnumerateUserFileCompleteDelegate_Params
{
	struct FScriptDelegate                             EnumerateUserFileCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
struct UOnlineSubsystemSteamworks_EnumerateUserFiles_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
struct UOnlineSubsystemSteamworks_OnEnumerateUserFilesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
struct UOnlineSubsystemSteamworks_ClearFile_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
struct UOnlineSubsystemSteamworks_ClearFiles_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
struct UOnlineSubsystemSteamworks_GetFileContents_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
struct UOnlineSubsystemSteamworks_WriteUserFileInternal_Params
{
	struct FString                                     UserId;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
struct UOnlineSubsystemSteamworks_GetFriendJoinURL_Params
{
	struct FUniqueNetId                                FriendUID;                                                // (Parm)
	struct FString                                     ServerURL;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     ServerUID;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
struct UOnlineSubsystemSteamworks_GetCommandlineJoinURL_Params
{
	bool                                               bMarkAsJoined;                                            // (Parm)
	struct FString                                     ServerURL;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     ServerUID;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
struct UOnlineSubsystemSteamworks_Int64ToUniqueNetId_Params
{
	struct FString                                     UIDString;                                                // (Parm, NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
struct UOnlineSubsystemSteamworks_UniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                                      // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_NotifyVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             VOIPAudioComponent;                                       // (Parm, EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_OnVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             AC;                                                       // (Parm, EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
struct UOnlineSubsystemSteamworks_ShowProfileUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     SubURL;                                                   // (OptionalParm, Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
struct UOnlineSubsystemSteamworks_UniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                                      // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
struct UOnlineSubsystemSteamworks_DisplayAchievementProgress_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                ProgressCount;                                            // (Parm)
	int                                                MaxProgress;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
struct UOnlineSubsystemSteamworks_CreateLeaderboard_Params
{
	struct FString                                     LeaderboardName;                                          // (Parm, NeedCtorLink)
	TEnumAsByte<ELeaderboardSortType>                  SortType;                                                 // (Parm)
	TEnumAsByte<ELeaderboardFormat>                    DisplayFormat;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
struct UOnlineSubsystemSteamworks_ResetStats_Params
{
	bool                                               bResetAchievements;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
struct UOnlineSubsystemSteamworks_ShowCustomMessageUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Recipients;                                               // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     MessageTitle;                                             // (Parm, NeedCtorLink)
	struct FString                                     NonEditableMessage;                                       // (Parm, NeedCtorLink)
	struct FString                                     EditableMessage;                                          // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ClearCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_GetCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadCrossTitleProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ReadCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
struct UOnlineSubsystemSteamworks_UnlockAvatarAward_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AvatarItemId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
struct UOnlineSubsystemSteamworks_GetSteamClanData_Params
{
	TArray<struct FSteamPlayerClanData>                Results;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
struct UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params
{
	int                                                TotalPlayers;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
struct UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
struct UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Const, Parm)
	int                                                Size;                                                     // (Parm)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineAvatarComplete_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Const, Parm)
	class UTexture2D*                                  Avatar;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
struct UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Description;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
struct UOnlineSubsystemSteamworks_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
struct UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
struct UOnlineSubsystemSteamworks_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	bool                                               bShouldReadText;                                          // (OptionalParm, Parm)
	bool                                               bShouldReadImages;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
struct UOnlineSubsystemSteamworks_ShowPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
struct UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
struct UOnlineSubsystemSteamworks_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
struct UOnlineSubsystemSteamworks_OnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
struct UOnlineSubsystemSteamworks_UnlockGamerPicture_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                PictureId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
struct UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
struct UOnlineSubsystemSteamworks_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AchievementId;                                            // (Parm)
	float                                              PercentComplete;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
struct UOnlineSubsystemSteamworks_IsDeviceValid_Params
{
	int                                                DeviceID;                                                 // (Parm)
	int                                                SizeNeeded;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
struct UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     DeviceName;                                               // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
struct UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
struct UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                SizeNeeded;                                               // (Parm)
	bool                                               bManageStorage;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                ParentProductType;                                        // (Parm)
	int                                                RequestedProductTypes;                                    // (Parm)
	struct FString                                     ParentProductId;                                          // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentPurchaseResponse
struct UOnlineSubsystemSteamworks_ClearContentPurchaseResponse_Params
{
	struct FScriptDelegate                             ResponseDelegate;                                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentPurchaseResponse
struct UOnlineSubsystemSteamworks_AddContentPurchaseResponse_Params
{
	struct FScriptDelegate                             ResponseDelegate;                                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentPurchaseResponse
struct UOnlineSubsystemSteamworks_OnContentPurchaseResponse_Params
{
	bool                                               bAuthorized;                                              // (Parm)
	struct FQWord                                      qwOrderId;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowContentPurchaseUI
struct UOnlineSubsystemSteamworks_CanShowContentPurchaseUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
struct UOnlineSubsystemSteamworks_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviteText;                                               // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
struct UOnlineSubsystemSteamworks_ShowAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
struct UOnlineSubsystemSteamworks_ShowMessagesUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
struct UOnlineSubsystemSteamworks_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
struct UOnlineSubsystemSteamworks_ShowFeedbackUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
struct UOnlineSubsystemSteamworks_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
struct UOnlineSubsystemSteamworks_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
struct UOnlineSubsystemSteamworks_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bAllowFriends;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
struct UOnlineSubsystemSteamworks_CalcAggregateSkill_Params
{
	TArray<struct FDouble>                             Mus;                                                      // (Parm, NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                                   // (Parm, NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                           // (Parm, OutParm)
	struct FDouble                                     OutAggregateSigma;                                        // (Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
struct UOnlineSubsystemSteamworks_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     ClientStatGuid;                                           // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
struct UOnlineSubsystemSteamworks_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
struct UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
struct UOnlineSubsystemSteamworks_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
struct UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
struct UOnlineSubsystemSteamworks_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
struct UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
struct UOnlineSubsystemSteamworks_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
struct UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviterName;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
struct UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
struct UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
struct UOnlineSubsystemSteamworks_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
struct UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
struct UOnlineSubsystemSteamworks_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
struct UOnlineSubsystemSteamworks_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
struct UOnlineSubsystemSteamworks_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                FormerFriend;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
struct UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
struct UOnlineSubsystemSteamworks_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FriendName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
struct UOnlineSubsystemSteamworks_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
struct UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                             // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
struct UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
struct UOnlineSubsystemSteamworks_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
struct UOnlineSubsystemSteamworks_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     StatusString;                                             // (Parm, NeedCtorLink)
	bool                                               PlayerActive;                                             // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
struct UOnlineSubsystemSteamworks_GetLocalAccountNames_Params
{
	TArray<struct FString>                             Accounts;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
struct UOnlineSubsystemSteamworks_DeleteLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
struct UOnlineSubsystemSteamworks_RenameLocalAccount_Params
{
	struct FString                                     NewUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     OldUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
struct UOnlineSubsystemSteamworks_CreateLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemSteamworks_AddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
struct UOnlineSubsystemSteamworks_OnCreateOnlineAccountCompleted_Params
{
	TEnumAsByte<EOnlineAccountCreateStatus>            ErrorStatus;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
struct UOnlineSubsystemSteamworks_CreateOnlineAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	struct FString                                     EmailAddress;                                             // (Parm, NeedCtorLink)
	struct FString                                     ProductKey;                                               // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
struct UOnlineSubsystemSteamworks_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
struct UOnlineSubsystemSteamworks_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
struct UOnlineSubsystemSteamworks_ReadTitleFile_Params
{
	struct FString                                     FileToRead;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
struct UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
struct UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
struct UOnlineSubsystemSteamworks_GetLocale_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
struct UOnlineSubsystemSteamworks_GetNATType_Params
{
	TEnumAsByte<ENATType>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
struct UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
struct UOnlineSubsystemSteamworks_IsControllerConnected_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
struct UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
struct UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
struct UOnlineSubsystemSteamworks_OnControllerChange_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
	bool                                               bPauseGame;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          NewPos;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params
{
	TEnumAsByte<ENetworkNotificationPosition>          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
struct UOnlineSubsystemSteamworks_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
struct UOnlineSubsystemSteamworks_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
struct UOnlineSubsystemSteamworks_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
struct UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
struct UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	int                                                LeaderboardId;                                            // (Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
struct UOnlineSubsystemSteamworks_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
struct UOnlineSubsystemSteamworks_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Player;                                                   // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
struct UOnlineSubsystemSteamworks_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                NumRows;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                StartIndex;                                               // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
struct UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
struct UOnlineSubsystemSteamworks_ReadOnlineStats_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
struct UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
struct UOnlineSubsystemSteamworks_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                VocabularyId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
struct UOnlineSubsystemSteamworks_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
struct UOnlineSubsystemSteamworks_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
struct UOnlineSubsystemSteamworks_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
struct UOnlineSubsystemSteamworks_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
struct UOnlineSubsystemSteamworks_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
struct UOnlineSubsystemSteamworks_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_AddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
struct UOnlineSubsystemSteamworks_OnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	bool                                               bIsTalking;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
struct UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
struct UOnlineSubsystemSteamworks_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
struct UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                Priority;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
struct UOnlineSubsystemSteamworks_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
struct UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
struct UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
struct UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
struct UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
struct UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
struct UOnlineSubsystemSteamworks_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
struct UOnlineSubsystemSteamworks_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	TEnumAsByte<EOnlineEnumerationReadState>           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCustomOnlineDelegates
struct UOnlineSubsystemSteamworks_ClearCustomOnlineDelegates_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
struct UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
struct UOnlineSubsystemSteamworks_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
struct UOnlineSubsystemSteamworks_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
struct UOnlineSubsystemSteamworks_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
struct UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
struct UOnlineSubsystemSteamworks_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
struct UOnlineSubsystemSteamworks_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
struct UOnlineSubsystemSteamworks_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
struct UOnlineSubsystemSteamworks_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
struct UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
struct UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
struct UOnlineSubsystemSteamworks_OnLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                // (Parm)
	struct FUniqueNetId                                NewId;                                                    // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
struct UOnlineSubsystemSteamworks_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
struct UOnlineSubsystemSteamworks_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
struct UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
struct UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
struct UOnlineSubsystemSteamworks_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
struct UOnlineSubsystemSteamworks_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
struct UOnlineSubsystemSteamworks_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevelHint;                                       // (Parm, OutParm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
	struct FString                                     Reason;                                                   // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
struct UOnlineSubsystemSteamworks_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
struct UOnlineSubsystemSteamworks_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
struct UOnlineSubsystemSteamworks_IsLocalLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
struct UOnlineSubsystemSteamworks_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
struct UOnlineSubsystemSteamworks_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<ELoginStatus>                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
struct UOnlineSubsystemSteamworks_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
struct UOnlineSubsystemSteamworks_Logout_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
struct UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
struct UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
struct UOnlineSubsystemSteamworks_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
struct UOnlineSubsystemSteamworks_AutoLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
struct UOnlineSubsystemSteamworks_Login_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     LoginName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               bWantsLocalOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAccountPickerOpen
struct UOnlineSubsystemSteamworks_IsAccountPickerOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
struct UOnlineSubsystemSteamworks_ShowLoginUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bForceLogin;                                              // (OptionalParm, Parm)
	bool                                               bShowOnlineOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
struct UOnlineSubsystemSteamworks_OnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
struct UOnlineSubsystemSteamworks_OnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
struct UOnlineSubsystemSteamworks_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
struct UOnlineSubsystemSteamworks_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
struct UOnlineSubsystemSteamworks_Exit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
struct UOnlineSubsystemSteamworks_Init_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

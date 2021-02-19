#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_TgClient_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TgClient.TgBrowserManager.AccountLink
struct UTgBrowserManager_AccountLink_Params
{
};

// Function TgClient.TgBrowserManager.LaunchTournament
struct UTgBrowserManager_LaunchTournament_Params
{
};

// Function TgClient.TgBrowserManager.TwitchSignup
struct UTgBrowserManager_TwitchSignup_Params
{
};

// Function TgClient.TgBrowserManager.TwitchHelp
struct UTgBrowserManager_TwitchHelp_Params
{
};

// Function TgClient.TgBrowserManager.PlayerStats
struct UTgBrowserManager_PlayerStats_Params
{
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgBrowserManager.RecruitPromo
struct UTgBrowserManager_RecruitPromo_Params
{
};

// Function TgClient.TgBrowserManager.TwitterPromo
struct UTgBrowserManager_TwitterPromo_Params
{
};

// Function TgClient.TgBrowserManager.FacebookPromo
struct UTgBrowserManager_FacebookPromo_Params
{
};

// Function TgClient.TgBrowserManager.RankedRules
struct UTgBrowserManager_RankedRules_Params
{
};

// Function TgClient.TgBrowserManager.GodPack
struct UTgBrowserManager_GodPack_Params
{
};

// Function TgClient.TgBrowserManager.SubmitBugReport
struct UTgBrowserManager_SubmitBugReport_Params
{
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgBrowserManager.RecoverUsername
struct UTgBrowserManager_RecoverUsername_Params
{
};

// Function TgClient.TgBrowserManager.RecoverPassword
struct UTgBrowserManager_RecoverPassword_Params
{
};

// Function TgClient.TgBrowserManager.CreateAccount
struct UTgBrowserManager_CreateAccount_Params
{
};

// Function TgClient.TgBrowserManager.ActivateKey
struct UTgBrowserManager_ActivateKey_Params
{
};

// Function TgClient.TgBrowserManager.Profile
struct UTgBrowserManager_Profile_Params
{
};

// Function TgClient.TgBrowserManager.Support
struct UTgBrowserManager_Support_Params
{
};

// Function TgClient.TgBrowserManager.Booster
struct UTgBrowserManager_Booster_Params
{
};

// Function TgClient.TgBrowserManager.Store
struct UTgBrowserManager_Store_Params
{
};

// Function TgClient.TgBrowserManager.Gold
struct UTgBrowserManager_Gold_Params
{
};

// Function TgClient.TgBrowserManager.Alert
struct UTgBrowserManager_Alert_Params
{
};

// Function TgClient.TgBrowserManager.SetContainer
struct UTgBrowserManager_SetContainer_Params
{
	class UUIWebBrowser*                               pContainer;                                               // (Parm)
};

// Function TgClient.TgBrowserManager.ResizeView
struct UTgBrowserManager_ResizeView_Params
{
};

// Function TgClient.TgBrowserManager.Close
struct UTgBrowserManager_Close_Params
{
};

// Function TgClient.TgBrowserManager.OpenVideo
struct UTgBrowserManager_OpenVideo_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bAddName;                                                 // (OptionalParm, Parm)
};

// Function TgClient.TgBrowserManager.OpenURL
struct UTgBrowserManager_OpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bShowNavButtons;                                          // (OptionalParm, Parm)
};

// Function TgClient.TgBrowserManager.ExternalOpenURL
struct UTgBrowserManager_ExternalOpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bAddLang;                                                 // (OptionalParm, Parm)
};

// Function TgClient.TgBrowserManager.IsBrowserLoaded
struct UTgBrowserManager_IsBrowserLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgClientHUD.Tick
struct ATgClientHUD_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClient.TgClientHUD.PostBeginPlay
struct ATgClientHUD_PostBeginPlay_Params
{
};

// Function TgClient.TgClientHUD.TogglePushToTalk
struct ATgClientHUD_TogglePushToTalk_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function TgClient.TgClientHUD.ToggleDevMenu
struct ATgClientHUD_ToggleDevMenu_Params
{
};

// Function TgClient.TgClientHUD.ToggleHUD
struct ATgClientHUD_ToggleHUD_Params
{
};

// Function TgClient.TgClientHUD.TestDidIt
struct ATgClientHUD_TestDidIt_Params
{
	int                                                nActivityId;                                              // (Parm)
	int                                                nCount;                                                   // (Parm)
};

// Function TgClient.TgClientHUD.ResetViewCenterPoint
struct ATgClientHUD_ResetViewCenterPoint_Params
{
};

// Function TgClient.TgClientHUD.RemoveSceneFromStack
struct ATgClientHUD_RemoveSceneFromStack_Params
{
	class UTgGfxScene*                                 pScene;                                                   // (Parm)
	bool                                               bPopAll;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgClientHUD.PushScene
struct ATgClientHUD_PushScene_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	bool                                               bSkipPrivilegeCheck;                                      // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgClientHUD.PopScene
struct ATgClientHUD_PopScene_Params
{
	int                                                nIndex;                                                   // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgClientHUD.ClearScenes
struct ATgClientHUD_ClearScenes_Params
{
	unsigned char                                      ePreviousState;                                           // (OptionalParm, Parm)
	unsigned char                                      eTargetState;                                             // (OptionalParm, Parm)
};

// Function TgClient.TgClientHUD.ShowSubtitle
struct ATgClientHUD_ShowSubtitle_Params
{
	int                                                nMessage;                                                 // (Parm)
	float                                              fTime;                                                    // (Parm)
};

// Function TgClient.TgClientHUD.ShowHit
struct ATgClientHUD_ShowHit_Params
{
	class AActor*                                      Target;                                                   // (Parm)
	float                                              fDamageAmount;                                            // (Parm)
	bool                                               bIsShieldHit;                                             // (Parm)
	struct FExtraDamageInfo                            ExtraInfo;                                                // (Const, Parm, OutParm)
};

// Function TgClient.TgClientHUD.ShowCursor
struct ATgClientHUD_ShowCursor_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClient.TgClientHUD.Initialize
struct ATgClientHUD_Initialize_Params
{
};

// Function TgClient.TgClientHUD.IsLoggedIn
struct ATgClientHUD_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgClientHUD.IsInGame
struct ATgClientHUD_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgData_Cards.Initialize
struct UTgData_Cards_Initialize_Params
{
	class UUIGameMoviePlayer*                          pMoviePlayer;                                             // (Parm)
};

// Function TgClient.TgDataChunk.usc_Unsubscribe
struct UTgDataChunk_usc_Unsubscribe_Params
{
};

// Function TgClient.TgDataChunk.usc_Subscribe
struct UTgDataChunk_usc_Subscribe_Params
{
};

// Function TgClient.TgDataChunk.usc_Unsubscribe_Delegate
struct UTgDataChunk_usc_Unsubscribe_Delegate_Params
{
};

// Function TgClient.TgDataChunk.usc_Subscribe_Delegate
struct UTgDataChunk_usc_Subscribe_Delegate_Params
{
};

// Function TgClient.TgDataChunk.GetPlayerController
struct UTgDataChunk_GetPlayerController_Params
{
	class ATgPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgDataChunk.NotifyMapChange
struct UTgDataChunk_NotifyMapChange_Params
{
};

// Function TgClient.TgDataChunk.IsSubscribed
struct UTgDataChunk_IsSubscribed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgDataChunk.SetDirty
struct UTgDataChunk_SetDirty_Params
{
};

// Function TgClient.TgDataChunk.GetField
struct UTgDataChunk_GetField_Params
{
	struct FString                                     FieldName;                                                // (Parm, NeedCtorLink)
	struct FASValue                                    NewValue;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgDataChunk.SetField
struct UTgDataChunk_SetField_Params
{
	struct FString                                     FieldName;                                                // (Parm, NeedCtorLink)
	struct FASValue                                    NewValue;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               bCreateIfMissing;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgDataChunk.AddField
struct UTgDataChunk_AddField_Params
{
	struct FString                                     FieldName;                                                // (Parm, NeedCtorLink)
	struct FASValue                                    NewValue;                                                 // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClient.TgDataChunk.ClearDelegates
struct UTgDataChunk_ClearDelegates_Params
{
};

// Function TgClient.TgDataChunk.SetDelegates
struct UTgDataChunk_SetDelegates_Params
{
};

// Function TgClient.TgDataChunk.RemoveChild
struct UTgDataChunk_RemoveChild_Params
{
	class UTgDataChunk*                                Child;                                                    // (Parm)
	bool                                               bClearDelegates;                                          // (OptionalParm, Parm)
};

// Function TgClient.TgDataChunk.AddChild
struct UTgDataChunk_AddChild_Params
{
	class UTgDataChunk*                                Child;                                                    // (Parm)
};

// Function TgClient.TgDataChunk.DataUpdateEvent
struct UTgDataChunk_DataUpdateEvent_Params
{
};

// Function TgClient.TgDataChunk.Update
struct UTgDataChunk_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               bSkipCallback;                                            // (OptionalParm, Parm)
};

// Function TgClient.TgDataChunk.InitializeData
struct UTgDataChunk_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgDataHandler.NotifyMapChange
struct UTgDataHandler_NotifyMapChange_Params
{
};

// Function TgClient.TgDataHandler.Update
struct UTgDataHandler_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClient.TgDataHandler.InitializeDataHandler
struct UTgDataHandler_InitializeDataHandler_Params
{
	class UUIMoviePlayer*                              mp;                                                       // (Parm)
};

// Function TgClient.TgGameViewportClient.Init
struct UTgGameViewportClient_Init_Params
{
	struct FString                                     OutError;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameViewportClient.LayoutPlayers
struct UTgGameViewportClient_LayoutPlayers_Params
{
};

// Function TgClient.TgGameViewportClient.GetSubtitleRegion
struct UTgGameViewportClient_GetSubtitleRegion_Params
{
	struct FVector2D                                   MinPos;                                                   // (Parm, OutParm)
	struct FVector2D                                   MaxPos;                                                   // (Parm, OutParm)
};

// Function TgClient.TgGameViewportClient.GameSessionEnded
struct UTgGameViewportClient_GameSessionEnded_Params
{
};

// Function TgClient.TgGameViewportClient.InitTgGameViewportClient
struct UTgGameViewportClient_InitTgGameViewportClient_Params
{
};

// Function TgClient.TgGameViewportClient.IsGfxMovieCapturingMouseInput
struct UTgGameViewportClient_IsGfxMovieCapturingMouseInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameViewportClient.NativeGameSessionEnded
struct UTgGameViewportClient_NativeGameSessionEnded_Params
{
};

// Function TgClient.TgGameViewportClient.DrawTransition
struct UTgGameViewportClient_DrawTransition_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function TgClient.TgSynchronizedTimer.IsPaused
struct UTgSynchronizedTimer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgSynchronizedTimer.IsRunning
struct UTgSynchronizedTimer_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgSynchronizedTimer.EventCallback
struct UTgSynchronizedTimer_EventCallback_Params
{
	int                                                nTimerId;                                                 // (Parm)
	TEnumAsByte<ETGT_EVENT>                            eEvent;                                                   // (Parm)
};

// Function TgClient.TgSynchronizedTimer.ExpireTimer
struct UTgSynchronizedTimer_ExpireTimer_Params
{
	bool                                               bFromCallback;                                            // (OptionalParm, Parm)
};

// Function TgClient.TgSynchronizedTimer.UpdateTimer
struct UTgSynchronizedTimer_UpdateTimer_Params
{
	float                                              fElapsed;                                                 // (Parm)
	float                                              fTotal;                                                   // (Parm)
	bool                                               bPaused;                                                  // (OptionalParm, Parm)
	bool                                               bFromCallback;                                            // (OptionalParm, Parm)
};

// Function TgClient.TgSynchronizedTimer.StartTimer
struct UTgSynchronizedTimer_StartTimer_Params
{
	float                                              fSeconds;                                                 // (Parm)
};

// Function TgClient.UIDataShop.GetMarketplaceProductsByType
struct UUIDataShop_GetMarketplaceProductsByType_Params
{
	class UUIGameMoviePlayer*                          pMoviePlayer;                                             // (Parm)
	TEnumAsByte<EMediaItemType>                        MediaType;                                                // (Parm)
	TArray<struct FMarketplaceProductDetails>          AvailableProducts;                                        // (Parm, OutParm, NeedCtorLink)
};

// Function TgClient.UIDataShop.StoreRealMoneyItemData
struct UUIDataShop_StoreRealMoneyItemData_Params
{
};

// Function TgClient.UIMoviePlayer.ShowEmptyStoreDialog
struct UUIMoviePlayer_ShowEmptyStoreDialog_Params
{
};

// Function TgClient.UIMoviePlayer.SetMarketplaceVisibility
struct UUIMoviePlayer_SetMarketplaceVisibility_Params
{
	bool                                               Visible;                                                  // (Parm)
	unsigned char                                      IconPosition;                                             // (OptionalParm, Parm)
};

// Function TgClient.UIMoviePlayer.usc_ClipboardCopy
struct UUIMoviePlayer_usc_ClipboardCopy_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.UIMoviePlayer.usc_ClipboardPaste
struct UUIMoviePlayer_usc_ClipboardPaste_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.UIMoviePlayer.InitOSSRef
struct UUIMoviePlayer_InitOSSRef_Params
{
};

// Function TgClient.UIMoviePlayer.Init
struct UUIMoviePlayer_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (OptionalParm, Parm)
};

// Function TgClient.UIMoviePlayer.Tick
struct UUIMoviePlayer_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClient.UIMoviePlayer.usc_IME_Exists
struct UUIMoviePlayer_usc_IME_Exists_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIMoviePlayer.usc_IME_SetEnabled
struct UUIMoviePlayer_usc_IME_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIMoviePlayer.usc_TranslateMsg
struct UUIMoviePlayer_usc_TranslateMsg_Params
{
	struct FString                                     Identifier;                                               // (Parm, NeedCtorLink)
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.UIMoviePlayer.usc_TranslateMsgId
struct UUIMoviePlayer_usc_TranslateMsgId_Params
{
	int                                                nId;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.UIMoviePlayer.ShowTransitionScene
struct UUIMoviePlayer_ShowTransitionScene_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClient.UIMoviePlayer.usc_toggle_arrow_key_navigation
struct UUIMoviePlayer_usc_toggle_arrow_key_navigation_Params
{
	bool                                               bAllowNav;                                                // (Parm)
};

// Function TgClient.UIMoviePlayer.usc_toggle_key_capture
struct UUIMoviePlayer_usc_toggle_key_capture_Params
{
	bool                                               bCapture;                                                 // (Parm)
};

// Function TgClient.UIMoviePlayer.usc_toggle_cursor
struct UUIMoviePlayer_usc_toggle_cursor_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClient.UIMoviePlayer.usc_Console_Command
struct UUIMoviePlayer_usc_Console_Command_Params
{
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.UIMoviePlayer.usc_Data_Handler_Created
struct UUIMoviePlayer_usc_Data_Handler_Created_Params
{
};

// Function TgClient.UIMoviePlayer.QuitGame
struct UUIMoviePlayer_QuitGame_Params
{
};

// Function TgClient.UIMoviePlayer.UnregisterEngineCallbacks
struct UUIMoviePlayer_UnregisterEngineCallbacks_Params
{
};

// Function TgClient.UIMoviePlayer.RegisterEngineCallbacks
struct UUIMoviePlayer_RegisterEngineCallbacks_Params
{
};

// Function TgClient.UIMoviePlayer.GetTranslatedKeyBind
struct UUIMoviePlayer_GetTranslatedKeyBind_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	int                                                nAlternate;                                               // (OptionalParm, Parm)
	bool                                               bLocalizeKB;                                              // (OptionalParm, Parm)
	bool                                               bLocalizeMouse;                                           // (OptionalParm, Parm)
	bool                                               bLocalizeGamepad;                                         // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.UIMoviePlayer.UpdateViewportForSafeAreas
struct UUIMoviePlayer_UpdateViewportForSafeAreas_Params
{
};

// Function TgClient.UIMoviePlayer.NativeTick
struct UUIMoviePlayer_NativeTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClient.UIMoviePlayer.InitializeDataHandler
struct UUIMoviePlayer_InitializeDataHandler_Params
{
};

// Function TgClient.UIMoviePlayer.PostInit
struct UUIMoviePlayer_PostInit_Params
{
};

// Function TgClient.UIMoviePlayer.OnClose
struct UUIMoviePlayer_OnClose_Params
{
};

// Function TgClient.UIMoviePlayer.GetPlayerOwner
struct UUIMoviePlayer_GetPlayerOwner_Params
{
	class ATgPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIMoviePlayer.GetHUD
struct UUIMoviePlayer_GetHUD_Params
{
	class ATgClientHUD*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgDevMenuMoviePlayer.FilterButtonInput
struct UTgDevMenuMoviePlayer_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgDevMenuMoviePlayer.OnClose
struct UTgDevMenuMoviePlayer_OnClose_Params
{
};

// Function TgClient.TgDevMenuMoviePlayer.PostInit
struct UTgDevMenuMoviePlayer_PostInit_Params
{
};

// Function TgClient.TgDevMenuMoviePlayer.usc_FillCommands
struct UTgDevMenuMoviePlayer_usc_FillCommands_Params
{
	struct FString                                     MenuName;                                                 // (Parm, NeedCtorLink)
};

// Function TgClient.TgDevMenuMoviePlayer.AddSubMenu
struct UTgDevMenuMoviePlayer_AddSubMenu_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     submenuname;                                              // (Parm, NeedCtorLink)
	struct FString                                     DisplayName;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgDevMenuMoviePlayer.AddCommand
struct UTgDevMenuMoviePlayer_AddCommand_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	struct FString                                     DisplayName;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgDevMenuMoviePlayer.FillSubMenuCommands
struct UTgDevMenuMoviePlayer_FillSubMenuCommands_Params
{
	struct FString                                     submenuname;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgDevMenuMoviePlayer.FillMenuCommands
struct UTgDevMenuMoviePlayer_FillMenuCommands_Params
{
};

// Function TgClient.UIGAPeachStartup.OnClose
struct UUIGAPeachStartup_OnClose_Params
{
};

// Function TgClient.UIGAPeachStartup.PostInit
struct UUIGAPeachStartup_PostInit_Params
{
};

// Function TgClient.UIGAPeachStartup.Init
struct UUIGAPeachStartup_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (OptionalParm, Parm)
};

// Function TgClient.UIGAPeachStartup.UpdateViewportForSafeAreas
struct UUIGAPeachStartup_UpdateViewportForSafeAreas_Params
{
};

// Function TgClient.UIData_RealMoneyItem.GetInventoryItems
struct UUIData_RealMoneyItem_GetInventoryItems_Params
{
	TArray<struct FMarketplaceInventoryItem>           InventoryItems;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function TgClient.UIDataItem.GetChampionIconLockedName
struct UUIDataItem_GetChampionIconLockedName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataItem.GetChampionIconName
struct UUIDataItem_GetChampionIconName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataItem.OnTeamModelUpdated
struct UUIDataItem_OnTeamModelUpdated_Params
{
};

// Function TgClient.UIDataGoals.GetLoreCompleteCount
struct UUIDataGoals_GetLoreCompleteCount_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataGoals.GetLoreProgress
struct UUIDataGoals_GetLoreProgress_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataGoals.GetDailyLoginBonusDay
struct UUIDataGoals_GetDailyLoginBonusDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataGoals.GetDailyLoginsCount
struct UUIDataGoals_GetDailyLoginsCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataGoals.GetDailyLoginsTier
struct UUIDataGoals_GetDailyLoginsTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataGoals.GetLoreQuest
struct UUIDataGoals_GetLoreQuest_Params
{
	class UUIData_Quest*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataGoals.GetDailyLoginsQuest
struct UUIDataGoals_GetDailyLoginsQuest_Params
{
	class UUIData_Quest*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataGoals.GetChampionQuest
struct UUIDataGoals_GetChampionQuest_Params
{
	class UUIData_Quest*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIDataManager.StoreOfflineData
struct UUIDataManager_StoreOfflineData_Params
{
};

// Function TgClient.SelectionInterface.SetFocusImpl
struct USelectionInterface_SetFocusImpl_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.SelectionInterface.SetFocus
struct USelectionInterface_SetFocus_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameHUD.AddNamedAreas
struct ATgGameHUD_AddNamedAreas_Params
{
};

// Function TgClient.TgGameHUD.PlayDeviceFailResponse
struct ATgGameHUD_PlayDeviceFailResponse_Params
{
	TEnumAsByte<EDeviceFailType>                       failType;                                                 // (Parm)
};

// Function TgClient.TgGameHUD.PostRender
struct ATgGameHUD_PostRender_Params
{
};

// Function TgClient.TgGameHUD.PostBeginPlay
struct ATgGameHUD_PostBeginPlay_Params
{
};

// Function TgClient.TgGameHUD.ToggleCosmeticWheel
struct ATgGameHUD_ToggleCosmeticWheel_Params
{
};

// Function TgClient.TgGameHUD.OpenCosmeticWheel
struct ATgGameHUD_OpenCosmeticWheel_Params
{
	bool                                               bShouldOpen;                                              // (OptionalParm, Parm)
	int                                                nPage;                                                    // (OptionalParm, Parm)
};

// Function TgClient.TgGameHUD.ViewScoreboard
struct ATgGameHUD_ViewScoreboard_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClient.TgGameHUD.ScoreboardToggle
struct ATgGameHUD_ScoreboardToggle_Params
{
};

// Function TgClient.TgGameHUD.ViewInventory
struct ATgGameHUD_ViewInventory_Params
{
};

// Function TgClient.TgGameHUD.ViewVGS
struct ATgGameHUD_ViewVGS_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClient.TgGameHUD.ShowLootGoblinSpawned
struct ATgGameHUD_ShowLootGoblinSpawned_Params
{
	class ATgPawn*                                     DiscoveringPawn;                                          // (Parm)
	class ATgPawn*                                     TargetGoblin;                                             // (Parm)
};

// Function TgClient.TgGameHUD.EndMission
struct ATgGameHUD_EndMission_Params
{
	bool                                               bPlayerAttacker;                                          // (Parm)
	TEnumAsByte<EGAME_WIN_STATE>                       finalWinState;                                            // (Parm)
};

// Function TgClient.TgGameHUD.AddNamedArea
struct ATgGameHUD_AddNamedArea_Params
{
	class ATgNamedPOIActor*                            pPOI;                                                     // (Parm)
	int                                                nCount;                                                   // (Parm)
};

// Function TgClient.TgGameHUD.ShowScope
struct ATgGameHUD_ShowScope_Params
{
	bool                                               bValue;                                                   // (Parm)
	unsigned char                                      eType;                                                    // (OptionalParm, Parm)
};

// Function TgClient.TgGameHUD.UpdatePlayerReady
struct ATgGameHUD_UpdatePlayerReady_Params
{
	class ATgRepInfo_Player*                           pPRI;                                                     // (Parm)
};

// Function TgClient.TgGameHUD.PostRenderDebugDraws
struct ATgGameHUD_PostRenderDebugDraws_Params
{
};

// Function TgClient.TgGameHUD.PostRenderMovies
struct ATgGameHUD_PostRenderMovies_Params
{
};

// Function TgClient.TgGameHUD.FinishIntro
struct ATgGameHUD_FinishIntro_Params
{
};

// Function TgClient.TgGameHUD.PlayIntro
struct ATgGameHUD_PlayIntro_Params
{
};

// Function TgClient.TgDataGroup_Game.NotifyMapChange
struct UTgDataGroup_Game_NotifyMapChange_Params
{
};

// Function TgClient.TgDataGroup_Game.InitializeData
struct UTgDataGroup_Game_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_Device.usc_set_cast_mode
struct UTgGameDC_Device_usc_set_cast_mode_Params
{
	int                                                nCastMode;                                                // (Parm)
};

// Function TgClient.TgGameDC_Device.usc_set_cast_mode_delegate
struct UTgGameDC_Device_usc_set_cast_mode_delegate_Params
{
};

// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip
struct UTgGameDC_Device_usc_get_mode_tooltip_Params
{
	int                                                nRank;                                                    // (Parm)
};

// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip_delegate
struct UTgGameDC_Device_usc_get_mode_tooltip_delegate_Params
{
};

// Function TgClient.TgGameDC_Device.NotifyMapChange
struct UTgGameDC_Device_NotifyMapChange_Params
{
};

// Function TgClient.TgGameDC_Device.UpdateCastMode
struct UTgGameDC_Device_UpdateCastMode_Params
{
};

// Function TgClient.TgGameDC_Device.UpdateInstanceCount
struct UTgGameDC_Device_UpdateInstanceCount_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_Device.UpdatePtsAlloc
struct UTgGameDC_Device_UpdatePtsAlloc_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_Device.UpdateCooldown
struct UTgGameDC_Device_UpdateCooldown_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_Device.UpdateCanFire
struct UTgGameDC_Device_UpdateCanFire_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_Device.UpdateSelected
struct UTgGameDC_Device_UpdateSelected_Params
{
	bool                                               bSelected;                                                // (Parm)
};

// Function TgClient.TgGameDC_Device.UpdateValues
struct UTgGameDC_Device_UpdateValues_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_Device.DeviceChangeEvent
struct UTgGameDC_Device_DeviceChangeEvent_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	TEnumAsByte<EDeviceChangeEvent>                    Event;                                                    // (Parm)
};

// Function TgClient.TgGameDC_Device.InitializeData
struct UTgGameDC_Device_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_DeviceList.SetEmpty
struct UTgGameDC_DeviceList_SetEmpty_Params
{
	TEnumAsByte<ETG_EQUIP_POINT>                       eSlot;                                                    // (Parm)
};

// Function TgClient.TgGameDC_DeviceList.UpdatePtsAlloc
struct UTgGameDC_DeviceList_UpdatePtsAlloc_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_DeviceList.UpdateSelected
struct UTgGameDC_DeviceList_UpdateSelected_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_DeviceList.UpdateDevice
struct UTgGameDC_DeviceList_UpdateDevice_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClient.TgGameDC_DeviceList.DeviceChangeEvent
struct UTgGameDC_DeviceList_DeviceChangeEvent_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	TEnumAsByte<EDeviceChangeEvent>                    Event;                                                    // (Parm)
};

// Function TgClient.TgGameDC_DeviceList.GetDeviceChunk
struct UTgGameDC_DeviceList_GetDeviceChunk_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	class UTgGameDC_Device*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameDC_DeviceList.InitializeData
struct UTgGameDC_DeviceList_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_Effect.NotifyMapChange
struct UTgGameDC_Effect_NotifyMapChange_Params
{
};

// Function TgClient.TgGameDC_Effect.InitializeData
struct UTgGameDC_Effect_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_EffectList.UpdateEffects
struct UTgGameDC_EffectList_UpdateEffects_Params
{
	class ATgEffectManager*                            effectManager;                                            // (Parm)
	int                                                indexChanged;                                             // (Parm)
};

// Function TgClient.TgGameDC_EffectList.InitializeData
struct UTgGameDC_EffectList_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_Game.UpdateGameCapturePoint
struct UTgGameDC_Game_UpdateGameCapturePoint_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                Taskforce;                                                // (Parm)
};

// Function TgClient.TgGameDC_Game.UpdateGameClock
struct UTgGameDC_Game_UpdateGameClock_Params
{
};

// Function TgClient.TgGameDC_Game.NotifyMapChange
struct UTgGameDC_Game_NotifyMapChange_Params
{
};

// Function TgClient.TgGameDC_Game.InitializeData
struct UTgGameDC_Game_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_MapEntity.NotifyMapChange
struct UTgGameDC_MapEntity_NotifyMapChange_Params
{
};

// Function TgClient.TgGameDC_MapEntity.UpdateMapPosition
struct UTgGameDC_MapEntity_UpdateMapPosition_Params
{
	struct FVector                                     Location;                                                 // (Parm)
	struct FRotator                                    Rotation;                                                 // (Parm)
};

// Function TgClient.TgGameDC_MapEntity.UpdateActorMapPosition
struct UTgGameDC_MapEntity_UpdateActorMapPosition_Params
{
	class AActor*                                      gameActor;                                                // (Parm)
};

// Function TgClient.TgGameDC_MapEntity.InitializeData
struct UTgGameDC_MapEntity_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate
struct UTgGameDC_Player_USC_ForceStatsUpdate_Params
{
};

// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate_Delegate
struct UTgGameDC_Player_USC_ForceStatsUpdate_Delegate_Params
{
};

// Function TgClient.TgGameDC_Player.NotifyMapChange
struct UTgGameDC_Player_NotifyMapChange_Params
{
};

// Function TgClient.TgGameDC_Player.UpdateItemStoreItems
struct UTgGameDC_Player_UpdateItemStoreItems_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
};

// Function TgClient.TgGameDC_Player.UpdateStats
struct UTgGameDC_Player_UpdateStats_Params
{
	class ATgPawn*                                     changedPawn;                                              // (Parm)
};

// Function TgClient.TgGameDC_Player.UpdatePlayer
struct UTgGameDC_Player_UpdatePlayer_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
};

// Function TgClient.TgGameDC_Player.SetDirty
struct UTgGameDC_Player_SetDirty_Params
{
};

// Function TgClient.TgGameDC_Player.InitializeData
struct UTgGameDC_Player_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget
struct UTgGameDC_LocalPlayer_UpdateSpectatorViewTarget_Params
{
	class UTgGameDC_MapEntity*                         entity;                                                   // (Parm)
};

// Function TgClient.TgGameDC_LocalPlayer.SetVendorItemList
struct UTgGameDC_LocalPlayer_SetVendorItemList_Params
{
	TArray<int>                                        nItemIds;                                                 // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameDC_LocalPlayer.InitializeData
struct UTgGameDC_LocalPlayer_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_PlayerVitals.UpdateCoreStats
struct UTgGameDC_PlayerVitals_UpdateCoreStats_Params
{
};

// Function TgClient.TgGameDC_PlayerVitals.UpdateDamageDone
struct UTgGameDC_PlayerVitals_UpdateDamageDone_Params
{
};

// Function TgClient.TgGameDC_PlayerVitals.NotifyMapChange
struct UTgGameDC_PlayerVitals_NotifyMapChange_Params
{
};

// Function TgClient.TgGameDC_PlayerVitals.InitializeData
struct UTgGameDC_PlayerVitals_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_Tower.InitializeData
struct UTgGameDC_Tower_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_Target.UpdateTarget
struct UTgGameDC_Target_UpdateTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
	bool                                               bHovered;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameDC_Target.InitializeData
struct UTgGameDC_Target_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDC_Team.UpdatePlayerSurrender
struct UTgGameDC_Team_UpdatePlayerSurrender_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameDC_Team.UpdatePlayerItemStoreItems
struct UTgGameDC_Team_UpdatePlayerItemStoreItems_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameDC_Team.UpdatePlayerStat
struct UTgGameDC_Team_UpdatePlayerStat_Params
{
	class ATgPawn*                                     changedPawn;                                              // (Parm)
};

// Function TgClient.TgGameDC_Team.UpdateMembers
struct UTgGameDC_Team_UpdateMembers_Params
{
	class ATgRepInfo_TaskForce*                        tfri;                                                     // (Parm)
};

// Function TgClient.TgGameDC_Team.NotifyMapChange
struct UTgGameDC_Team_NotifyMapChange_Params
{
};

// Function TgClient.TgGameDC_Team.InitializeData
struct UTgGameDC_Team_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGameDataHandler.InitializeDataHandler
struct UTgGameDataHandler_InitializeDataHandler_Params
{
	class UUIMoviePlayer*                              mp;                                                       // (Parm)
};

// Function TgClient.TgGameDC_Chat.TokenReplace
struct UTgGameDC_Chat_TokenReplace_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.TgGameDC_Chat.SubmitDeferredMessages
struct UTgGameDC_Chat_SubmitDeferredMessages_Params
{
	int                                                nChannel;                                                 // (OptionalParm, Parm)
};

// Function TgClient.TgGameDC_Chat.PlayAnnouncerSound
struct UTgGameDC_Chat_PlayAnnouncerSound_Params
{
	int                                                nMsgId;                                                   // (Parm)
};

// Function TgClient.TgGameDC_Chat.PlayVGSPOTG
struct UTgGameDC_Chat_PlayVGSPOTG_Params
{
	int                                                nPackId;                                                  // (Parm)
	int                                                nBotId;                                                   // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	struct FString                                     customSuffix;                                             // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameDC_Chat.PlayVGSSound
struct UTgGameDC_Chat_PlayVGSSound_Params
{
	int                                                nMsgId;                                                   // (Parm)
	int                                                nPackId;                                                  // (Parm)
	int                                                nBotId;                                                   // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	struct FString                                     customSuffix;                                             // (Parm, NeedCtorLink)
	int                                                nSourcePlayerId;                                          // (OptionalParm, Parm)
};

// Function TgClient.TgGameDC_Chat.PlayMessageSound
struct UTgGameDC_Chat_PlayMessageSound_Params
{
	int                                                nMsgId;                                                   // (Parm)
	TEnumAsByte<ETG_CHAT_PRIORITY>                     ePriority;                                                // (OptionalParm, Parm)
};

// Function TgClient.TgGameDC_Chat.AddAlert
struct UTgGameDC_Chat_AddAlert_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameDC_Chat.UpdateMessageSoundQueue
struct UTgGameDC_Chat_UpdateMessageSoundQueue_Params
{
};

// Function TgClient.TgGameDC_Chat.Update
struct UTgGameDC_Chat_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               bSkipCallback;                                            // (OptionalParm, Parm)
};

// Function TgClient.TgGameDC_Chat.AddPopupMsg
struct UTgGameDC_Chat_AddPopupMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameDC_Chat.AddCombatMsg
struct UTgGameDC_Chat_AddCombatMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameDC_Chat.AddLocalChatMsg
struct UTgGameDC_Chat_AddLocalChatMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	struct FString                                     senderName;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameDC_Chat.AddChatMsg
struct UTgGameDC_Chat_AddChatMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	struct FString                                     senderName;                                               // (Parm, NeedCtorLink)
	int                                                nChannel;                                                 // (Parm)
	bool                                               bIsFeedback;                                              // (Parm)
	bool                                               bIsVGS;                                                   // (OptionalParm, Parm)
	int                                                nMsgId;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGameDC_Chat.InitializeData
struct UTgGameDC_Chat_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgMiniMap.CheckSpectatorState
struct UTgMiniMap_CheckSpectatorState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgMiniMap.UpdateMapSize
struct UTgMiniMap_UpdateMapSize_Params
{
	int                                                newX;                                                     // (Parm)
};

// Function TgClient.TgMiniMap.UpdateMiniMapTexture
struct UTgMiniMap_UpdateMiniMapTexture_Params
{
};

// Function TgClient.TgMiniMap.CreateMiniMapTexture
struct UTgMiniMap_CreateMiniMapTexture_Params
{
};

// Function TgClient.TgMiniMap.Clear
struct UTgMiniMap_Clear_Params
{
};

// Function TgClient.TgMiniMap.RemoveAllEntities
struct UTgMiniMap_RemoveAllEntities_Params
{
};

// Function TgClient.TgMiniMap.VerifyMapLocation
struct UTgMiniMap_VerifyMapLocation_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgMiniMap.GetRepInfosForLocation
struct UTgMiniMap_GetRepInfosForLocation_Params
{
	struct FVector                                     mapLoc;                                                   // (Parm)
	TArray<class AReplicationInfo*>                    repInfos;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClient.TgMiniMap.WorldToMap
struct UTgMiniMap_WorldToMap_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgMiniMap.MapToWorld
struct UTgMiniMap_MapToWorld_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgMiniMap.ClearHover
struct UTgMiniMap_ClearHover_Params
{
};

// Function TgClient.TgMiniMap.HoverMap
struct UTgMiniMap_HoverMap_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function TgClient.TgMiniMap.PingMap
struct UTgMiniMap_PingMap_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	TEnumAsByte<EPING_TYPE>                            Pt;                                                       // (Parm)
};

// Function TgClient.TgMiniMap.ShouldRender
struct UTgMiniMap_ShouldRender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgMiniMap.PingWorldLocation
struct UTgMiniMap_PingWorldLocation_Params
{
	struct FVector                                     PingLocation;                                             // (Parm)
	TEnumAsByte<EPING_TYPE>                            Pt;                                                       // (Parm)
};

// Function TgClient.TgMiniMap.Init
struct UTgMiniMap_Init_Params
{
	class ATgPlayerController*                         PC;                                                       // (Parm)
};

// Function TgClient.TgMiniMap.Draw
struct UTgMiniMap_Draw_Params
{
	class UCanvas*                                     theCanvas;                                                // (Parm)
};

// Function TgClient.UIGameMoviePlayer.CheckPermissionForOnlineScene
struct UUIGameMoviePlayer_CheckPermissionForOnlineScene_Params
{
	struct FString                                     sScene;                                                   // (Parm, NeedCtorLink)
	unsigned char                                      ControlledId;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                Hint;                                                     // (Parm)
	bool                                               bAttemptToResolve;                                        // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.OnPermissionForOnlineScene
struct UUIGameMoviePlayer_OnPermissionForOnlineScene_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                PrivilegeLevel;                                           // (Parm)
	bool                                               bDiffersFromHint;                                         // (Parm)
};

// Function TgClient.UIGameMoviePlayer.NativeOpenURL
struct UUIGameMoviePlayer_NativeOpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.OnAccountPickerCompleteForLogin
struct UUIGameMoviePlayer_OnAccountPickerCompleteForLogin_Params
{
	bool                                               bForceLogin;                                              // (Parm)
};

// Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerData
struct UUIGameMoviePlayer_OnReadOnlinePlayerData_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	TArray<struct FString>                             PlayerIDs;                                                // (Parm, NeedCtorLink)
	TArray<struct FOnlineProfile>                      OnlineProfiles;                                           // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.IsAccountPickerOpen
struct UUIGameMoviePlayer_IsAccountPickerOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.ReadOnlinePlayerData
struct UUIGameMoviePlayer_ReadOnlinePlayerData_Params
{
	TArray<struct FString>                             PlayerIDs;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.OnUserAccountInfoRetrieved
struct UUIGameMoviePlayer_OnUserAccountInfoRetrieved_Params
{
	bool                                               bSuccessful;                                              // (Parm)
	struct FUserAccountInfo                            AccountInfo;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.GetAccountInfo
struct UUIGameMoviePlayer_GetAccountInfo_Params
{
};

// Function TgClient.UIGameMoviePlayer.CanShowContentPurchaseUI
struct UUIGameMoviePlayer_CanShowContentPurchaseUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.ShowContentPurchaseUI
struct UUIGameMoviePlayer_ShowContentPurchaseUI_Params
{
	struct FString                                     SingedOffer;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.usc_ShowProductDetailsUI
struct UUIGameMoviePlayer_usc_ShowProductDetailsUI_Params
{
	struct FString                                     ProductID;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.usc_ShowGameDetailsUI
struct UUIGameMoviePlayer_usc_ShowGameDetailsUI_Params
{
};

// Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUIForProduct
struct UUIGameMoviePlayer_usc_ShowContentMarketPlaceUIForProduct_Params
{
	int                                                ParentProductType;                                        // (Parm)
	int                                                RequestedProductTypes;                                    // (Parm)
	struct FString                                     ProductID;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUI
struct UUIGameMoviePlayer_usc_ShowContentMarketPlaceUI_Params
{
	int                                                ParentProductType;                                        // (Parm)
	int                                                RequestedProductTypes;                                    // (Parm)
};

// Function TgClient.UIGameMoviePlayer.updatePlayerMute
struct UUIGameMoviePlayer_updatePlayerMute_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function TgClient.UIGameMoviePlayer.ShowGamercard
struct UUIGameMoviePlayer_ShowGamercard_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function TgClient.UIGameMoviePlayer.ShowGamerCardByUserName
struct UUIGameMoviePlayer_ShowGamerCardByUserName_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
};

// Function TgClient.UIGameMoviePlayer.IsPlayerMuted
struct UUIGameMoviePlayer_IsPlayerMuted_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.UnmutePlayer
struct UUIGameMoviePlayer_UnmutePlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
};

// Function TgClient.UIGameMoviePlayer.MutePlayer
struct UUIGameMoviePlayer_MutePlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
};

// Function TgClient.UIGameMoviePlayer.UnregisterLocalTalker
struct UUIGameMoviePlayer_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.RegisterLocalTalker
struct UUIGameMoviePlayer_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.WidgetUnloaded
struct UUIGameMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.WidgetInitialized
struct UUIGameMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.CheckControllerConnected
struct UUIGameMoviePlayer_CheckControllerConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.OnComponentKeyboardInputComplete
struct UUIGameMoviePlayer_OnComponentKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function TgClient.UIGameMoviePlayer.OnTextFieldKeyboardInputComplete
struct UUIGameMoviePlayer_OnTextFieldKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function TgClient.UIGameMoviePlayer.ShowComponentKeyboardUI
struct UUIGameMoviePlayer_ShowComponentKeyboardUI_Params
{
	class UUIComponent*                                CallingComponent;                                         // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.ShowKeyboardUI
struct UUIGameMoviePlayer_ShowKeyboardUI_Params
{
	class UGFxObject*                                  FocusedTextField;                                         // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelledWrapper
struct UUIGameMoviePlayer_OnAccountPickerCancelledWrapper_Params
{
};

// Function TgClient.UIGameMoviePlayer.OnClose
struct UUIGameMoviePlayer_OnClose_Params
{
};

// Function TgClient.UIGameMoviePlayer.InitOSSRef
struct UUIGameMoviePlayer_InitOSSRef_Params
{
};

// Function TgClient.UIGameMoviePlayer.Init
struct UUIGameMoviePlayer_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.UnloadScene
struct UUIGameMoviePlayer_UnloadScene_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.LoadScene
struct UUIGameMoviePlayer_LoadScene_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sPath;                                                    // (Parm, NeedCtorLink)
	int                                                nDepth;                                                   // (Parm)
};

// Function TgClient.UIGameMoviePlayer.ShowErrorMessage
struct UUIGameMoviePlayer_ShowErrorMessage_Params
{
	struct FString                                     sTitle;                                                   // (Parm, NeedCtorLink)
	struct FString                                     sError;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelled
struct UUIGameMoviePlayer_OnAccountPickerCancelled_Params
{
};

// Function TgClient.UIGameMoviePlayer.ShowPartyRequiresPremiumAccountWarning
struct UUIGameMoviePlayer_ShowPartyRequiresPremiumAccountWarning_Params
{
};

// Function TgClient.UIGameMoviePlayer.ShowNoFriendsForProfileViewWarning
struct UUIGameMoviePlayer_ShowNoFriendsForProfileViewWarning_Params
{
};

// Function TgClient.UIGameMoviePlayer.OnSuccessfulUserAccountInfoRetrieved
struct UUIGameMoviePlayer_OnSuccessfulUserAccountInfoRetrieved_Params
{
	struct FUserAccountInfo                            AccountInfo;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.IsItemOwned
struct UUIGameMoviePlayer_IsItemOwned_Params
{
	int                                                ItemId;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.GetDataHandler
struct UUIGameMoviePlayer_GetDataHandler_Params
{
	class UTgGameDataHandler*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.GetGameData
struct UUIGameMoviePlayer_GetGameData_Params
{
	class UTgDataGroup_Game*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.HideSubtitle
struct UUIGameMoviePlayer_HideSubtitle_Params
{
};

// Function TgClient.UIGameMoviePlayer.SwitchSubtitleText
struct UUIGameMoviePlayer_SwitchSubtitleText_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.ShowSubtitle
struct UUIGameMoviePlayer_ShowSubtitle_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
	float                                              fTime;                                                    // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.NativeWidgetInitialized
struct UUIGameMoviePlayer_NativeWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.NativeWidgetUnloaded
struct UUIGameMoviePlayer_NativeWidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerDataComplete
struct UUIGameMoviePlayer_OnReadOnlinePlayerDataComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	TArray<struct FString>                             PlayerIDs;                                                // (Parm, NeedCtorLink)
	TArray<struct FOnlineProfile>                      OnlineProfiles;                                           // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.HasPlayerDisplayName
struct UUIGameMoviePlayer_HasPlayerDisplayName_Params
{
	struct FString                                     OnlineID;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.GetPlayerDisplayName
struct UUIGameMoviePlayer_GetPlayerDisplayName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
	struct FString                                     OnlineID;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.GetGamepadValueForKeyBind
struct UUIGameMoviePlayer_GetGamepadValueForKeyBind_Params
{
	struct FString                                     KeyBind;                                                  // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.NativeTick
struct UUIGameMoviePlayer_NativeTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClient.UIGameMoviePlayer.ForceDirty
struct UUIGameMoviePlayer_ForceDirty_Params
{
};

// Function TgClient.UIGameMoviePlayer.PostInit
struct UUIGameMoviePlayer_PostInit_Params
{
};

// Function TgClient.UIGameMoviePlayer.InitAnnouncer
struct UUIGameMoviePlayer_InitAnnouncer_Params
{
};

// Function TgClient.UIGameMoviePlayer.OnVoicePackLoaded
struct UUIGameMoviePlayer_OnVoicePackLoaded_Params
{
};

// Function TgClient.UIGameMoviePlayer.OnAnnouncerLoaded
struct UUIGameMoviePlayer_OnAnnouncerLoaded_Params
{
};

// Function TgClient.UIGameMoviePlayer.SetLoginReady
struct UUIGameMoviePlayer_SetLoginReady_Params
{
};

// Function TgClient.UIGameMoviePlayer.UpdateGamepadIcons
struct UUIGameMoviePlayer_UpdateGamepadIcons_Params
{
};

// Function TgClient.UIGameMoviePlayer.CheckControllerDisconnected
struct UUIGameMoviePlayer_CheckControllerDisconnected_Params
{
};

// Function TgClient.UIGameMoviePlayer.AddInitialChatMessages
struct UUIGameMoviePlayer_AddInitialChatMessages_Params
{
};

// Function TgClient.UIGameMoviePlayer.CloseChatTab
struct UUIGameMoviePlayer_CloseChatTab_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     sSender;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.OpenChatTab
struct UUIGameMoviePlayer_OpenChatTab_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     sName;                                                    // (OptionalParm, Parm, NeedCtorLink)
	bool                                               bOpenWindow;                                              // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.UpdateViewportForSafeAreas
struct UUIGameMoviePlayer_UpdateViewportForSafeAreas_Params
{
};

// Function TgClient.UIGameMoviePlayer.AttemptAutoLogin
struct UUIGameMoviePlayer_AttemptAutoLogin_Params
{
	bool                                               bSkipServerStatusCheck;                                   // (OptionalParm, Parm)
};

// Function TgClient.UIGameMoviePlayer.QuitGame
struct UUIGameMoviePlayer_QuitGame_Params
{
};

// Function TgClient.UIGameMoviePlayer.PromptToQuit
struct UUIGameMoviePlayer_PromptToQuit_Params
{
};

// Function TgClient.UIGameMoviePlayer.SetRenderTargetEnabled
struct UUIGameMoviePlayer_SetRenderTargetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm)
	int                                                surfaceId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.usc_resize_browser
struct UUIGameMoviePlayer_usc_resize_browser_Params
{
	int                                                surfaceId;                                                // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	float                                              widthReal;                                                // (Parm)
	float                                              heightReal;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIGameMoviePlayer.usc_enable_browser_input
struct UUIGameMoviePlayer_usc_enable_browser_input_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function TgClient.UIGameMoviePlayer.usc_chat_close_tab
struct UUIGameMoviePlayer_usc_chat_close_tab_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     Sender;                                                   // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.usc_resend_private_messages
struct UUIGameMoviePlayer_usc_resend_private_messages_Params
{
};

// Function TgClient.UIGameMoviePlayer.usc_vgs_command
struct UUIGameMoviePlayer_usc_vgs_command_Params
{
	int                                                nId;                                                      // (Parm)
	bool                                               bSubMenu;                                                 // (Parm)
};

// Function TgClient.UIGameMoviePlayer.usc_toggle_player_mute
struct UUIGameMoviePlayer_usc_toggle_player_mute_Params
{
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.UIGameMoviePlayer.ToggleSkillScreen
struct UUIGameMoviePlayer_ToggleSkillScreen_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClient.UIGameMoviePlayer.DumpMctsEventProfiling
struct UUIGameMoviePlayer_DumpMctsEventProfiling_Params
{
};

// Function TgClient.TgLobbyHUD.RequestCustomGames
struct ATgLobbyHUD_RequestCustomGames_Params
{
};

// Function TgClient.TgLobbyHUD.ChangePedestalModel
struct ATgLobbyHUD_ChangePedestalModel_Params
{
	TEnumAsByte<EPedestalType>                         PedestalType;                                             // (Parm)
	int                                                BotId;                                                    // (Parm)
	int                                                SkinId;                                                   // (Parm)
	int                                                HeadId;                                                   // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	int                                                DeviceSkinId;                                             // (Parm)
	int                                                MVPId;                                                    // (OptionalParm, Parm)
	int                                                nContrailSkinId;                                          // (OptionalParm, Parm)
	int                                                CharacterMastery;                                         // (OptionalParm, Parm)
};

// Function TgClient.TgLobbyHUD.StopSkydive
struct ATgLobbyHUD_StopSkydive_Params
{
};

// Function TgClient.TgLobbyHUD.StopMVP
struct ATgLobbyHUD_StopMVP_Params
{
};

// Function TgClient.TgLobbyHUD.PlayMVP
struct ATgLobbyHUD_PlayMVP_Params
{
	int                                                nDeviceId;                                                // (Parm)
};

// Function TgClient.TgLobbyHUD.StopEmote
struct ATgLobbyHUD_StopEmote_Params
{
};

// Function TgClient.TgLobbyHUD.PlayEmote
struct ATgLobbyHUD_PlayEmote_Params
{
	int                                                nDeviceId;                                                // (Parm)
};

// Function TgClient.TgLobbyHUD.ChangeModel
struct ATgLobbyHUD_ChangeModel_Params
{
	int                                                BotId;                                                    // (Parm)
	int                                                SkinId;                                                   // (Parm)
	int                                                HeadId;                                                   // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	int                                                DeviceSkinId;                                             // (Parm)
	int                                                PedestalSkinId;                                           // (Parm)
	int                                                ContrailSkinId;                                           // (Parm)
	unsigned char                                      pose;                                                     // (OptionalParm, Parm)
	TEnumAsByte<ELobbyCameraTag>                       CameraTag;                                                // (OptionalParm, Parm)
	float                                              BlendTime;                                                // (OptionalParm, Parm)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // (OptionalParm, Parm)
	float                                              BlendExp;                                                 // (OptionalParm, Parm)
	TEnumAsByte<EModelHighlightType>                   HighlightType;                                            // (OptionalParm, Parm)
	int                                                MVPDeviceId;                                              // (OptionalParm, Parm)
};

// Function TgClient.TgLobbyHUD.SwitchToCards
struct ATgLobbyHUD_SwitchToCards_Params
{
	bool                                               bEnabled;                                                 // (Parm)
};

// Function TgClient.TgLobbyHUD.PostBeginPlay
struct ATgLobbyHUD_PostBeginPlay_Params
{
};

// Function TgClient.TgLobbyHUD.TryPushScene
struct ATgLobbyHUD_TryPushScene_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	bool                                               bSkipPrivilegeCheck;                                      // (OptionalParm, Parm)
};

// Function TgClient.TgLobbyHUD.TriggerLazyPrecache
struct ATgLobbyHUD_TriggerLazyPrecache_Params
{
};

// Function TgClient.TgLobbyHUD.DisplayCharacter
struct ATgLobbyHUD_DisplayCharacter_Params
{
};

// Function TgClient.TgLobbyHUD.PreviewItem
struct ATgLobbyHUD_PreviewItem_Params
{
	TEnumAsByte<ELobbyCameraTag>                       CamTag;                                                   // (Parm)
	int                                                nItemIdToPreview;                                         // (Parm)
	int                                                nTargetIndex;                                             // (OptionalParm, Parm)
};

// Function TgClient.TgLobbyHUD.SwitchToCamera
struct ATgLobbyHUD_SwitchToCamera_Params
{
	TEnumAsByte<ELobbyCameraTag>                       CamTag;                                                   // (Parm)
	TEnumAsByte<ECameraTransType>                      camDirection;                                             // (OptionalParm, Parm)
	bool                                               bForce;                                                   // (OptionalParm, Parm)
	bool                                               bForceCameraReset;                                        // (OptionalParm, Parm)
	struct FViewTargetTransitionParams                 BlendParams;                                              // (OptionalParm, Parm)
	class ATgLobbyCamera*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgLobbyHUD.GetCamera
struct ATgLobbyHUD_GetCamera_Params
{
	TEnumAsByte<ELobbyCameraTag>                       CamTag;                                                   // (Parm)
	class ATgLobbyCamera*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgLobbyHUD.CleanupPedestalModels
struct ATgLobbyHUD_CleanupPedestalModels_Params
{
};

// Function TgClient.TgLobbyHUD.ChangeTeamModel
struct ATgLobbyHUD_ChangeTeamModel_Params
{
	bool                                               bFriendly;                                                // (Parm)
	int                                                nIndex;                                                   // (Parm)
	int                                                nClassID;                                                 // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	int                                                nHeadId;                                                  // (Parm)
	int                                                nDeviceId;                                                // (Parm)
	int                                                nDeviceSkinId;                                            // (Parm)
	int                                                nPedestalSkinId;                                          // (Parm)
	TEnumAsByte<ELobbyAnimPose>                        pose;                                                     // (Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
	TEnumAsByte<EModelHighlightType>                   HighlightType;                                            // (OptionalParm, Parm)
	int                                                MVPDeviceId;                                              // (OptionalParm, Parm)
	int                                                nContrailSkinId;                                          // (OptionalParm, Parm)
	int                                                nCharacterXP;                                             // (OptionalParm, Parm)
	struct FScriptDelegate                             MeshUpdatedDelegate;                                      // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClient.TgLobbyHUD.RotateModel
struct ATgLobbyHUD_RotateModel_Params
{
	float                                              fValue;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgLobbyHUD.ChangeClassModel
struct ATgLobbyHUD_ChangeClassModel_Params
{
	bool                                               bFriendly;                                                // (Parm)
	int                                                nIndex;                                                   // (Parm)
	int                                                nClassID;                                                 // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	int                                                nHeadId;                                                  // (Parm)
	int                                                nDeviceId;                                                // (Parm)
	int                                                nDeployableId;                                            // (Parm)
	int                                                nMarkerId;                                                // (Parm)
	int                                                nDeviceSkinId;                                            // (Parm)
	int                                                nPedestalSkinId;                                          // (Parm)
	TEnumAsByte<ELobbyAnimPose>                        pose;                                                     // (Parm)
	TEnumAsByte<ECameraTransType>                      camDirection;                                             // (OptionalParm, Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
	TEnumAsByte<EModelHighlightType>                   HighlightType;                                            // (OptionalParm, Parm)
	int                                                MVPDeviceId;                                              // (OptionalParm, Parm)
	int                                                nContrailSkinId;                                          // (OptionalParm, Parm)
};

// Function TgClient.TgLobbyHUD.SetUpEOMLobby
struct ATgLobbyHUD_SetUpEOMLobby_Params
{
};

// Function TgClient.TgLobbyHUD.HaveEOMLobbyData
struct ATgLobbyHUD_HaveEOMLobbyData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgSettingsManager.GetKeybindExtended
struct UTgSettingsManager_GetKeybindExtended_Params
{
	struct FString                                     sCommand;                                                 // (Parm, NeedCtorLink)
	int                                                nAlt;                                                     // (Parm)
	int                                                nBotId;                                                   // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.UIComponent.OnKeyboardUIComplete
struct UUIComponent_OnKeyboardUIComplete_Params
{
	struct FString                                     sResult;                                                  // (Parm, NeedCtorLink)
	unsigned char                                      bCanceled;                                                // (Parm)
};

// Function TgClient.UIComponent.GetYMouse
struct UUIComponent_GetYMouse_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIComponent.GetXMouse
struct UUIComponent_GetXMouse_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIComponent.HandleAnimEvent
struct UUIComponent_HandleAnimEvent_Params
{
	int                                                nEventType;                                               // (Parm)
	TArray<float>                                      fExtraData;                                               // (OptionalParm, Parm, NeedCtorLink)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIComponent.ClearQueuedSounds
struct UUIComponent_ClearQueuedSounds_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.QueueSound
struct UUIComponent_QueueSound_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (Parm)
	float                                              fDelay;                                                   // (Parm)
};

// Function TgClient.UIComponent.IsSoundQueued
struct UUIComponent_IsSoundQueued_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIComponent.EndAnim
struct UUIComponent_EndAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.GetAnimationTarget
struct UUIComponent_GetAnimationTarget_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIComponent.IsAnimating
struct UUIComponent_IsAnimating_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIComponent.QueueAnim
struct UUIComponent_QueueAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
	float                                              fValue;                                                   // (Parm)
	unsigned char                                      eQuad;                                                    // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.Animate
struct UUIComponent_Animate_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
	float                                              fValue;                                                   // (Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
	unsigned char                                      eQuad;                                                    // (OptionalParm, Parm)
	bool                                               bEndCurrentAnim;                                          // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.FadeOut
struct UUIComponent_FadeOut_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.FadeIn
struct UUIComponent_FadeIn_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.AnimateAsWell
struct UUIComponent_AnimateAsWell_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
	float                                              fValue;                                                   // (Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
	unsigned char                                      eQuad;                                                    // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.FadeOutAsWell
struct UUIComponent_FadeOutAsWell_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIComponent.FadeInAsWell
struct UUIComponent_FadeInAsWell_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIComponent_HealFeed.HideHealSource
struct UUIComponent_HealFeed_HideHealSource_Params
{
	int                                                nColumn;                                                  // (Parm)
};

// Function TgClient.UIComponent_HealFeed.ShowHealSource
struct UUIComponent_HealFeed_ShowHealSource_Params
{
	int                                                nColumn;                                                  // (Parm)
};

// Function TgClient.UIComponent_HealFeed.HideHealGlow
struct UUIComponent_HealFeed_HideHealGlow_Params
{
	int                                                nColumn;                                                  // (Parm)
};

// Function TgClient.UIComponent_HealFeed.ShowHealGlow
struct UUIComponent_HealFeed_ShowHealGlow_Params
{
	int                                                nColumn;                                                  // (Parm)
};

// Function TgClient.UIComponent_HealFeedEntry.QueueAnimation
struct UUIComponent_HealFeedEntry_QueueAnimation_Params
{
	struct FVector                                     vAnimOrigin;                                              // (Parm)
};

// Function TgClient.UIComponent_ItemPreviewStack.OnLoadingScreenLoaded
struct UUIComponent_ItemPreviewStack_OnLoadingScreenLoaded_Params
{
};

// Function TgClient.UIComponent_ItemPreviewStack.PreviewLoadingScreen
struct UUIComponent_ItemPreviewStack_PreviewLoadingScreen_Params
{
};

// Function TgClient.UIComponent_ItemPreviewStack.InitLoadingScreenManifest
struct UUIComponent_ItemPreviewStack_InitLoadingScreenManifest_Params
{
};

// Function TgClient.UIComponent_TitlesView.FadeOut
struct UUIComponent_TitlesView_FadeOut_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIComponent_TitlesView.FadeIn
struct UUIComponent_TitlesView_FadeIn_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIScene.ClearQueuedSounds
struct UUIScene_ClearQueuedSounds_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (OptionalParm, Parm)
};

// Function TgClient.UIScene.QueueSound
struct UUIScene_QueueSound_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (Parm)
	float                                              fDelay;                                                   // (Parm)
};

// Function TgClient.UIScene.IsSoundQueued
struct UUIScene_IsSoundQueued_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIScene.EndAnim
struct UUIScene_EndAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (OptionalParm, Parm)
};

// Function TgClient.UIScene.GetAnimationTarget
struct UUIScene_GetAnimationTarget_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (OptionalParm, Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIScene.IsAnimating
struct UUIScene_IsAnimating_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIScene.QueueAnim
struct UUIScene_QueueAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
	float                                              fValue;                                                   // (Parm)
	unsigned char                                      eQuad;                                                    // (OptionalParm, Parm)
};

// Function TgClient.UIScene.Animate
struct UUIScene_Animate_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
	float                                              fValue;                                                   // (Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
	unsigned char                                      eQuad;                                                    // (OptionalParm, Parm)
	bool                                               bEndCurrentAnim;                                          // (OptionalParm, Parm)
};

// Function TgClient.UIScene.FadeOutAsWell
struct UUIScene_FadeOutAsWell_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIScene.FadeInAsWell
struct UUIScene_FadeInAsWell_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIScene.FadeOut
struct UUIScene_FadeOut_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIScene.FadeIn
struct UUIScene_FadeIn_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.UIScene_UIFooterGamepad.Thaw
struct UUIScene_UIFooterGamepad_Thaw_Params
{
};

// Function TgClient.UIScene_UIFooterGamepad.Freeze
struct UUIScene_UIFooterGamepad_Freeze_Params
{
};

// Function TgClient.UIComponent_ProgressBarHorizontal.IsValid
struct UUIComponent_ProgressBarHorizontal_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxScene.HandleAnimState
struct UTgGfxScene_HandleAnimState_Params
{
	int                                                nAnimState;                                               // (Parm)
	int                                                nAnimGroup;                                               // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.SlamOutAnim
struct UTgGfxScene_SlamOutAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.SlamInAnim
struct UTgGfxScene_SlamInAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.Highlight
struct UTgGfxScene_Highlight_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	bool                                               bShow;                                                    // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.FadeOut
struct UTgGfxScene_FadeOut_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.FadeIn
struct UTgGfxScene_FadeIn_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (OptionalParm, Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.ClearQueuedSounds
struct UTgGfxScene_ClearQueuedSounds_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.QueueSound
struct UTgGfxScene_QueueSound_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (Parm)
	float                                              fDelay;                                                   // (Parm)
};

// Function TgClient.TgGfxScene.IsSoundQueued
struct UTgGfxScene_IsSoundQueued_Params
{
	class UAkBaseSoundObject*                          akSound;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxScene.IsAnimatingType
struct UTgGfxScene_IsAnimatingType_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxScene.IsAnimating
struct UTgGfxScene_IsAnimating_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxScene.EndAnim
struct UTgGfxScene_EndAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
};

// Function TgClient.TgGfxScene.CancelAnim
struct UTgGfxScene_CancelAnim_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxScene.Animate
struct UTgGfxScene_Animate_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	float                                              fTime;                                                    // (Parm)
	TEnumAsByte<EUIANIMTYPE>                           eType;                                                    // (Parm)
	float                                              fValue;                                                   // (Parm)
	float                                              fDelay;                                                   // (OptionalParm, Parm)
	unsigned char                                      eQuad;                                                    // (OptionalParm, Parm)
	bool                                               bEndCurrentAnim;                                          // (OptionalParm, Parm)
};

// Function TgClient.TgGfxScene.Click
struct UTgGfxScene_Click_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxScene.Rollout
struct UTgGfxScene_Rollout_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxScene.Rollover
struct UTgGfxScene_Rollover_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxScene.Focus
struct UTgGfxScene_Focus_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxScene.ReceiveEvent
struct UTgGfxScene_ReceiveEvent_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	int                                                nEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxScene.DelegateEvent
struct UTgGfxScene_DelegateEvent_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	int                                                nEvent;                                                   // (Parm)
};

// Function TgClient.UIHudCenter.GetCatapultAimScreenLocation
struct UUIHudCenter_GetCatapultAimScreenLocation_Params
{
	float                                              fClipSize;                                                // (Parm)
	class UCanvas*                                     pCanvas;                                                  // (Parm)
	struct FVector                                     CameraRotation;                                           // (Parm)
	struct FVector                                     CatapultDirection;                                        // (Parm)
	struct FVector                                     ScreenLocation;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIHudCenter.TriggerPounceReticleAnim
struct UUIHudCenter_TriggerPounceReticleAnim_Params
{
	bool                                               bPounceReady;                                             // (Parm)
};

// Function TgClient.UIHudMap.AddNamedArea
struct UUIHudMap_AddNamedArea_Params
{
	class ATgNamedPOIActor*                            pPOI;                                                     // (Parm)
};

// Function TgClient.UIHudMinimap.AnimateObjectiveCheck
struct UUIHudMinimap_AnimateObjectiveCheck_Params
{
	class UGFxObject*                                  pCheck;                                                   // (Parm)
};

// Function TgClient.UIHudMinimap.AddNamedArea
struct UUIHudMinimap_AddNamedArea_Params
{
	class ATgNamedPOIActor*                            pPOI;                                                     // (Parm)
};

// Function TgClient.UIHudOverlay.ScaleAdvancedDamage
struct UUIHudOverlay_ScaleAdvancedDamage_Params
{
	struct FDamageOverlayData                          Data;                                                     // (Parm, OutParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.UIHudOverlay.AnimateAdvancedDamage
struct UUIHudOverlay_AnimateAdvancedDamage_Params
{
	struct FDamageOverlayData                          Data;                                                     // (Parm, OutParm)
};

// Function TgClient.UIHudOverlay.InitAdvancedDamage
struct UUIHudOverlay_InitAdvancedDamage_Params
{
	struct FDamageOverlayData                          Data;                                                     // (Parm, OutParm)
	bool                                               bHeadShot;                                                // (Parm)
};

// Function TgClient.UIHudOverlay.OnForgeItemFinish
struct UUIHudOverlay_OnForgeItemFinish_Params
{
};

// Function TgClient.UIHudOverlay.ShowScope
struct UUIHudOverlay_ShowScope_Params
{
	bool                                               bShow;                                                    // (Parm)
	unsigned char                                      eType;                                                    // (OptionalParm, Parm)
};

// Function TgClient.TgIconGroup.OnManifestLoaded
struct UTgIconGroup_OnManifestLoaded_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

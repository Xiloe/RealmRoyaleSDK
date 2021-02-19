// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_TgClient_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TgClient.TgBrowserManager.AccountLink
// (Latent, PreOperator, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::AccountLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.AccountLink");

	UTgBrowserManager_AccountLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.LaunchTournament
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::LaunchTournament()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.LaunchTournament");

	UTgBrowserManager_LaunchTournament_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.TwitchSignup
// (Iterator, PreOperator, Simulated, HasOptionalParms)

void UTgBrowserManager::TwitchSignup()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.TwitchSignup");

	UTgBrowserManager_TwitchSignup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.TwitchHelp
// (Final, Defined, PreOperator, Simulated, HasOptionalParms)

void UTgBrowserManager::TwitchHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.TwitchHelp");

	UTgBrowserManager_TwitchHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.PlayerStats
// (Final, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgBrowserManager::PlayerStats(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.PlayerStats");

	UTgBrowserManager_PlayerStats_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RecruitPromo
// (Simulated, HasOptionalParms)

void UTgBrowserManager::RecruitPromo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.RecruitPromo");

	UTgBrowserManager_RecruitPromo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.TwitterPromo
// (Final, Iterator, PreOperator, Simulated, HasOptionalParms)

void UTgBrowserManager::TwitterPromo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.TwitterPromo");

	UTgBrowserManager_TwitterPromo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.FacebookPromo
// (Defined, Iterator, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::FacebookPromo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.FacebookPromo");

	UTgBrowserManager_FacebookPromo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RankedRules
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::RankedRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.RankedRules");

	UTgBrowserManager_RankedRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.GodPack
// (Iterator, Latent, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::GodPack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.GodPack");

	UTgBrowserManager_GodPack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.SubmitBugReport
// (Final, Defined, Iterator, Latent, Simulated, HasOptionalParms)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgBrowserManager::SubmitBugReport(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.SubmitBugReport");

	UTgBrowserManager_SubmitBugReport_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RecoverUsername
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::RecoverUsername()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.RecoverUsername");

	UTgBrowserManager_RecoverUsername_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.RecoverPassword
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::RecoverPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.RecoverPassword");

	UTgBrowserManager_RecoverPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.CreateAccount
// (Iterator, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::CreateAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.CreateAccount");

	UTgBrowserManager_CreateAccount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.ActivateKey
// (Final, Latent, PreOperator, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::ActivateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.ActivateKey");

	UTgBrowserManager_ActivateKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Profile
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::Profile()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.Profile");

	UTgBrowserManager_Profile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Support
// (PreOperator, Simulated, HasOptionalParms)

void UTgBrowserManager::Support()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.Support");

	UTgBrowserManager_Support_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Booster
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::Booster()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.Booster");

	UTgBrowserManager_Booster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Store
// (Defined, Iterator, Latent, Simulated, HasOptionalParms)

void UTgBrowserManager::Store()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.Store");

	UTgBrowserManager_Store_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Gold
// (Final, Iterator, Latent, Singular, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::Gold()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.Gold");

	UTgBrowserManager_Gold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Alert
// (Final, Defined, Latent, PreOperator, Net, NetReliable, HasOptionalParms)

void UTgBrowserManager::Alert()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.Alert");

	UTgBrowserManager_Alert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.SetContainer
// (Final, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// class UUIWebBrowser*           pContainer                     (Parm)

void UTgBrowserManager::STATIC_SetContainer(class UUIWebBrowser* pContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.SetContainer");

	UTgBrowserManager_SetContainer_Params params;
	params.pContainer = pContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.ResizeView
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)

void UTgBrowserManager::STATIC_ResizeView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.ResizeView");

	UTgBrowserManager_ResizeView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.Close
// (Iterator, Exec, Operator, Static, HasOptionalParms, Const)

void UTgBrowserManager::STATIC_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.Close");

	UTgBrowserManager_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.OpenVideo
// (Defined, PreOperator, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bAddName                       (OptionalParm, Parm)

void UTgBrowserManager::STATIC_OpenVideo(const struct FString& URL, bool bAddName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.OpenVideo");

	UTgBrowserManager_OpenVideo_Params params;
	params.URL = URL;
	params.bAddName = bAddName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.OpenURL
// (Final, PreOperator, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bShowNavButtons                (OptionalParm, Parm)

void UTgBrowserManager::STATIC_OpenURL(const struct FString& URL, bool bShowNavButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.OpenURL");

	UTgBrowserManager_OpenURL_Params params;
	params.URL = URL;
	params.bShowNavButtons = bShowNavButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.ExternalOpenURL
// (Singular, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           bAddLang                       (OptionalParm, Parm)

void UTgBrowserManager::STATIC_ExternalOpenURL(const struct FString& URL, bool bAddLang)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.ExternalOpenURL");

	UTgBrowserManager_ExternalOpenURL_Params params;
	params.URL = URL;
	params.bAddLang = bAddLang;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgBrowserManager.IsBrowserLoaded
// (Defined, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgBrowserManager::STATIC_IsBrowserLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgBrowserManager.IsBrowserLoaded");

	UTgBrowserManager_IsBrowserLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void ATgClientHUD::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.Tick");

	ATgClientHUD_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.PostBeginPlay
// (Final, Latent, Net, Simulated)

void ATgClientHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.PostBeginPlay");

	ATgClientHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.TogglePushToTalk
// (Final, Defined, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bEnable                        (Parm)

void ATgClientHUD::STATIC_TogglePushToTalk(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.TogglePushToTalk");

	ATgClientHUD_TogglePushToTalk_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ToggleDevMenu
// (Defined, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms)

void ATgClientHUD::STATIC_ToggleDevMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.ToggleDevMenu");

	ATgClientHUD_ToggleDevMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ToggleHUD
// (Defined, Iterator, Latent, NetReliable, Native, Event, Static, HasOptionalParms, Const)

void ATgClientHUD::STATIC_ToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.ToggleHUD");

	ATgClientHUD_ToggleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.TestDidIt
// (Final, Latent, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nActivityId                    (Parm)
// int                            nCount                         (Parm)

void ATgClientHUD::STATIC_TestDidIt(int nActivityId, int nCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.TestDidIt");

	ATgClientHUD_TestDidIt_Params params;
	params.nActivityId = nActivityId;
	params.nCount = nCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ResetViewCenterPoint
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)

void ATgClientHUD::STATIC_ResetViewCenterPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.ResetViewCenterPoint");

	ATgClientHUD_ResetViewCenterPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.RemoveSceneFromStack
// (Defined, Latent, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UTgGfxScene*             pScene                         (Parm)
// bool                           bPopAll                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::STATIC_RemoveSceneFromStack(class UTgGfxScene* pScene, bool bPopAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.RemoveSceneFromStack");

	ATgClientHUD_RemoveSceneFromStack_Params params;
	params.pScene = pScene;
	params.bPopAll = bPopAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.PushScene
// (Defined, PreOperator, Singular, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// bool                           bSkipPrivilegeCheck            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::STATIC_PushScene(const struct FString& sName, bool bSkipPrivilegeCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.PushScene");

	ATgClientHUD_PushScene_Params params;
	params.sName = sName;
	params.bSkipPrivilegeCheck = bSkipPrivilegeCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.PopScene
// (Defined, Latent, Net, Exec, Static, HasOptionalParms)
// Parameters:
// int                            nIndex                         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::STATIC_PopScene(int nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.PopScene");

	ATgClientHUD_PopScene_Params params;
	params.nIndex = nIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.ClearScenes
// (Final, Latent, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// unsigned char                  ePreviousState                 (OptionalParm, Parm)
// unsigned char                  eTargetState                   (OptionalParm, Parm)

void ATgClientHUD::STATIC_ClearScenes(unsigned char ePreviousState, unsigned char eTargetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.ClearScenes");

	ATgClientHUD_ClearScenes_Params params;
	params.ePreviousState = ePreviousState;
	params.eTargetState = eTargetState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ShowSubtitle
// (Defined, Iterator, PreOperator, Simulated, Exec, Static, HasOptionalParms)
// Parameters:
// int                            nMessage                       (Parm)
// float                          fTime                          (Parm)

void ATgClientHUD::STATIC_ShowSubtitle(int nMessage, float fTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.ShowSubtitle");

	ATgClientHUD_ShowSubtitle_Params params;
	params.nMessage = nMessage;
	params.fTime = fTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.ShowHit
// (Latent, PreOperator, Singular, Net, Native, Event, HasOptionalParms)
// Parameters:
// class AActor*                  Target                         (Parm)
// float                          fDamageAmount                  (Parm)
// bool                           bIsShieldHit                   (Parm)
// struct FExtraDamageInfo        ExtraInfo                      (Const, Parm, OutParm)

void ATgClientHUD::ShowHit(class AActor* Target, float fDamageAmount, bool bIsShieldHit, struct FExtraDamageInfo* ExtraInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.ShowHit");

	ATgClientHUD_ShowHit_Params params;
	params.Target = Target;
	params.fDamageAmount = fDamageAmount;
	params.bIsShieldHit = bIsShieldHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraInfo != nullptr)
		*ExtraInfo = params.ExtraInfo;
}


// Function TgClient.TgClientHUD.ShowCursor
// (Defined, Iterator, Latent, Singular, Net, Native, Event, HasOptionalParms)
// Parameters:
// bool                           bShow                          (Parm)

void ATgClientHUD::ShowCursor(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.ShowCursor");

	ATgClientHUD_ShowCursor_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.Initialize
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, HasOptionalParms, Const)

void ATgClientHUD::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.Initialize");

	ATgClientHUD_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClientHUD.IsLoggedIn
// (Final, Defined, Net, Simulated, Exec, Event, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::STATIC_IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.IsLoggedIn");

	ATgClientHUD_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClientHUD.IsInGame
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgClientHUD::STATIC_IsInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClientHUD.IsInGame");

	ATgClientHUD_IsInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgData_Cards.Initialize
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, HasOptionalParms, Const)
// Parameters:
// class UUIGameMoviePlayer*      pMoviePlayer                   (Parm)

void UTgData_Cards::Initialize(class UUIGameMoviePlayer* pMoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgData_Cards.Initialize");

	UTgData_Cards_Initialize_Params params;
	params.pMoviePlayer = pMoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Unsubscribe
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)

void UTgDataChunk::STATIC_usc_Unsubscribe()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.usc_Unsubscribe");

	UTgDataChunk_usc_Unsubscribe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Subscribe
// (Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)

void UTgDataChunk::STATIC_usc_Subscribe()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.usc_Subscribe");

	UTgDataChunk_usc_Subscribe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Unsubscribe_Delegate
// (Final, Singular, Simulated, HasOptionalParms)

void UTgDataChunk::usc_Unsubscribe_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.usc_Unsubscribe_Delegate");

	UTgDataChunk_usc_Unsubscribe_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.usc_Subscribe_Delegate
// (Singular, Simulated, HasOptionalParms)

void UTgDataChunk::usc_Subscribe_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.usc_Subscribe_Delegate");

	UTgDataChunk_usc_Subscribe_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.GetPlayerController
// (Singular, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class ATgPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgPlayerController* UTgDataChunk::STATIC_GetPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.GetPlayerController");

	UTgDataChunk_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgDataChunk::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.NotifyMapChange");

	UTgDataChunk_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.IsSubscribed
// (PreOperator, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDataChunk::STATIC_IsSubscribed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.IsSubscribed");

	UTgDataChunk_IsSubscribed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.SetDirty
// (Final, Defined, Latent, NetReliable)

void UTgDataChunk::SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.SetDirty");

	UTgDataChunk_SetDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.GetField
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FASValue                NewValue                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDataChunk::STATIC_GetField(const struct FString& FieldName, struct FASValue* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.GetField");

	UTgDataChunk_GetField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.SetField
// (Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FASValue                NewValue                       (Const, Parm, OutParm, NeedCtorLink)
// bool                           bCreateIfMissing               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDataChunk::STATIC_SetField(const struct FString& FieldName, bool bCreateIfMissing, struct FASValue* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.SetField");

	UTgDataChunk_SetField_Params params;
	params.FieldName = FieldName;
	params.bCreateIfMissing = bCreateIfMissing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;

	return params.ReturnValue;
}


// Function TgClient.TgDataChunk.AddField
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 FieldName                      (Parm, NeedCtorLink)
// struct FASValue                NewValue                       (Const, Parm, OutParm, NeedCtorLink)

void UTgDataChunk::STATIC_AddField(const struct FString& FieldName, struct FASValue* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.AddField");

	UTgDataChunk_AddField_Params params;
	params.FieldName = FieldName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function TgClient.TgDataChunk.ClearDelegates
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Event, Operator, Static, Const)

void UTgDataChunk::STATIC_ClearDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.ClearDelegates");

	UTgDataChunk_ClearDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.SetDelegates
// (Defined, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, HasOptionalParms)

void UTgDataChunk::STATIC_SetDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.SetDelegates");

	UTgDataChunk_SetDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.RemoveChild
// (Final, Latent, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UTgDataChunk*            Child                          (Parm)
// bool                           bClearDelegates                (OptionalParm, Parm)

void UTgDataChunk::STATIC_RemoveChild(class UTgDataChunk* Child, bool bClearDelegates)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.RemoveChild");

	UTgDataChunk_RemoveChild_Params params;
	params.Child = Child;
	params.bClearDelegates = bClearDelegates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.AddChild
// (Iterator, Latent, PreOperator, Singular, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataChunk*            Child                          (Parm)

void UTgDataChunk::STATIC_AddChild(class UTgDataChunk* Child)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.AddChild");

	UTgDataChunk_AddChild_Params params;
	params.Child = Child;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.DataUpdateEvent
// (Final, Iterator, Singular, Net, NetReliable, Native, Static, HasOptionalParms)

void UTgDataChunk::STATIC_DataUpdateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.DataUpdateEvent");

	UTgDataChunk_DataUpdateEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.Update
// (Final, Defined, NetReliable, Native, Event, Operator, Static)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           bSkipCallback                  (OptionalParm, Parm)

void UTgDataChunk::STATIC_Update(float DeltaTime, bool bSkipCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.Update");

	UTgDataChunk_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.bSkipCallback = bSkipCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataChunk.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgDataChunk::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataChunk.InitializeData");

	UTgDataChunk_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataHandler.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgDataHandler::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataHandler.NotifyMapChange");

	UTgDataHandler_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataHandler.Update
// (Final, Defined, NetReliable, Native, Event, Operator, Static)
// Parameters:
// float                          DeltaTime                      (Parm)

void UTgDataHandler::STATIC_Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataHandler.Update");

	UTgDataHandler_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataHandler.InitializeDataHandler
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UUIMoviePlayer*          mp                             (Parm)

void UTgDataHandler::STATIC_InitializeDataHandler(class UUIMoviePlayer* mp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataHandler.InitializeDataHandler");

	UTgDataHandler_InitializeDataHandler_Params params;
	params.mp = mp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// struct FString                 OutError                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameViewportClient::Init(struct FString* OutError)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.Init");

	UTgGameViewportClient_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutError != nullptr)
		*OutError = params.OutError;

	return params.ReturnValue;
}


// Function TgClient.TgGameViewportClient.LayoutPlayers
// (Defined, Iterator, Latent, Net, Simulated, Exec, Event, Operator, Static)

void UTgGameViewportClient::STATIC_LayoutPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.LayoutPlayers");

	UTgGameViewportClient_LayoutPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.GetSubtitleRegion
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Event, Operator, Static)
// Parameters:
// struct FVector2D               MinPos                         (Parm, OutParm)
// struct FVector2D               MaxPos                         (Parm, OutParm)

void UTgGameViewportClient::STATIC_GetSubtitleRegion(struct FVector2D* MinPos, struct FVector2D* MaxPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.GetSubtitleRegion");

	UTgGameViewportClient_GetSubtitleRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinPos != nullptr)
		*MinPos = params.MinPos;
	if (MaxPos != nullptr)
		*MaxPos = params.MaxPos;
}


// Function TgClient.TgGameViewportClient.GameSessionEnded
// (Final, Defined, Latent, Singular, Net, NetReliable, Exec, Event, Operator, Static)

void UTgGameViewportClient::STATIC_GameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.GameSessionEnded");

	UTgGameViewportClient_GameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.InitTgGameViewportClient
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)

void UTgGameViewportClient::STATIC_InitTgGameViewportClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.InitTgGameViewportClient");

	UTgGameViewportClient_InitTgGameViewportClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.IsGfxMovieCapturingMouseInput
// (Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameViewportClient::STATIC_IsGfxMovieCapturingMouseInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.IsGfxMovieCapturingMouseInput");

	UTgGameViewportClient_IsGfxMovieCapturingMouseInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameViewportClient.NativeGameSessionEnded
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Operator, Static, HasOptionalParms)

void UTgGameViewportClient::STATIC_NativeGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.NativeGameSessionEnded");

	UTgGameViewportClient_NativeGameSessionEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameViewportClient.DrawTransition
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UTgGameViewportClient::DrawTransition(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameViewportClient.DrawTransition");

	UTgGameViewportClient_DrawTransition_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.IsPaused
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgSynchronizedTimer::STATIC_IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSynchronizedTimer.IsPaused");

	UTgSynchronizedTimer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSynchronizedTimer.IsRunning
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgSynchronizedTimer::STATIC_IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSynchronizedTimer.IsRunning");

	UTgSynchronizedTimer_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSynchronizedTimer.EventCallback
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// int                            nTimerId                       (Parm)
// TEnumAsByte<ETGT_EVENT>        eEvent                         (Parm)

void UTgSynchronizedTimer::STATIC_EventCallback(int nTimerId, TEnumAsByte<ETGT_EVENT> eEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSynchronizedTimer.EventCallback");

	UTgSynchronizedTimer_EventCallback_Params params;
	params.nTimerId = nTimerId;
	params.eEvent = eEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.ExpireTimer
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// bool                           bFromCallback                  (OptionalParm, Parm)

void UTgSynchronizedTimer::STATIC_ExpireTimer(bool bFromCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSynchronizedTimer.ExpireTimer");

	UTgSynchronizedTimer_ExpireTimer_Params params;
	params.bFromCallback = bFromCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.UpdateTimer
// (Defined, PreOperator, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// float                          fElapsed                       (Parm)
// float                          fTotal                         (Parm)
// bool                           bPaused                        (OptionalParm, Parm)
// bool                           bFromCallback                  (OptionalParm, Parm)

void UTgSynchronizedTimer::STATIC_UpdateTimer(float fElapsed, float fTotal, bool bPaused, bool bFromCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSynchronizedTimer.UpdateTimer");

	UTgSynchronizedTimer_UpdateTimer_Params params;
	params.fElapsed = fElapsed;
	params.fTotal = fTotal;
	params.bPaused = bPaused;
	params.bFromCallback = bFromCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSynchronizedTimer.StartTimer
// (Latent, PreOperator, Singular, Net, NetReliable, Simulated, Event, Static, HasOptionalParms, Const)
// Parameters:
// float                          fSeconds                       (Parm)

void UTgSynchronizedTimer::STATIC_StartTimer(float fSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSynchronizedTimer.StartTimer");

	UTgSynchronizedTimer_StartTimer_Params params;
	params.fSeconds = fSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIDataShop.GetMarketplaceProductsByType
// (Final, Defined, Latent, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// class UUIGameMoviePlayer*      pMoviePlayer                   (Parm)
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)
// TArray<struct FMarketplaceProductDetails> AvailableProducts              (Parm, OutParm, NeedCtorLink)

void UUIDataShop::GetMarketplaceProductsByType(class UUIGameMoviePlayer* pMoviePlayer, TEnumAsByte<EMediaItemType> MediaType, TArray<struct FMarketplaceProductDetails>* AvailableProducts)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataShop.GetMarketplaceProductsByType");

	UUIDataShop_GetMarketplaceProductsByType_Params params;
	params.pMoviePlayer = pMoviePlayer;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableProducts != nullptr)
		*AvailableProducts = params.AvailableProducts;
}


// Function TgClient.UIDataShop.StoreRealMoneyItemData
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Exec, Operator, Static, HasOptionalParms)

void UUIDataShop::STATIC_StoreRealMoneyItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataShop.StoreRealMoneyItemData");

	UUIDataShop_StoreRealMoneyItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.ShowEmptyStoreDialog
// (Final, Latent, Simulated, HasOptionalParms)

void UUIMoviePlayer::ShowEmptyStoreDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.ShowEmptyStoreDialog");

	UUIMoviePlayer_ShowEmptyStoreDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.SetMarketplaceVisibility
// (Defined, Iterator, Simulated, HasOptionalParms)
// Parameters:
// bool                           Visible                        (Parm)
// unsigned char                  IconPosition                   (OptionalParm, Parm)

void UUIMoviePlayer::SetMarketplaceVisibility(bool Visible, unsigned char IconPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.SetMarketplaceVisibility");

	UUIMoviePlayer_SetMarketplaceVisibility_Params params;
	params.Visible = Visible;
	params.IconPosition = IconPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_ClipboardCopy
// (Final, Defined, Latent, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)

void UUIMoviePlayer::STATIC_usc_ClipboardCopy(const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_ClipboardCopy");

	UUIMoviePlayer_usc_ClipboardCopy_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_ClipboardPaste
// (Iterator, Latent, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::STATIC_usc_ClipboardPaste()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_ClipboardPaste");

	UUIMoviePlayer_usc_ClipboardPaste_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.InitOSSRef
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)

void UUIMoviePlayer::STATIC_InitOSSRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.InitOSSRef");

	UUIMoviePlayer_InitOSSRef_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UUIMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.Init");

	UUIMoviePlayer_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUIMoviePlayer::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.Tick");

	UUIMoviePlayer_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_IME_Exists
// (Final, Defined, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIMoviePlayer::STATIC_usc_IME_Exists()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_IME_Exists");

	UUIMoviePlayer_usc_IME_Exists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.usc_IME_SetEnabled
// (Iterator, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bEnabled                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIMoviePlayer::STATIC_usc_IME_SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_IME_SetEnabled");

	UUIMoviePlayer_usc_IME_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.usc_TranslateMsg
// (Iterator, Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 Identifier                     (Parm, NeedCtorLink)
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::STATIC_usc_TranslateMsg(const struct FString& Identifier, const struct FString& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_TranslateMsg");

	UUIMoviePlayer_usc_TranslateMsg_Params params;
	params.Identifier = Identifier;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.usc_TranslateMsgId
// (Final, Iterator, Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nId                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::STATIC_usc_TranslateMsgId(int nId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_TranslateMsgId");

	UUIMoviePlayer_usc_TranslateMsgId_Params params;
	params.nId = nId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.ShowTransitionScene
// (Iterator, PreOperator, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bShow                          (Parm)

void UUIMoviePlayer::STATIC_ShowTransitionScene(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.ShowTransitionScene");

	UUIMoviePlayer_ShowTransitionScene_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_toggle_arrow_key_navigation
// (Defined, Iterator, PreOperator, Singular, NetReliable, Exec, Event, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bAllowNav                      (Parm)

void UUIMoviePlayer::STATIC_usc_toggle_arrow_key_navigation(bool bAllowNav)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_toggle_arrow_key_navigation");

	UUIMoviePlayer_usc_toggle_arrow_key_navigation_Params params;
	params.bAllowNav = bAllowNav;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_toggle_key_capture
// (Defined, Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bCapture                       (Parm)

void UUIMoviePlayer::STATIC_usc_toggle_key_capture(bool bCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_toggle_key_capture");

	UUIMoviePlayer_usc_toggle_key_capture_Params params;
	params.bCapture = bCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_toggle_cursor
// (Final, Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bShow                          (Parm)

void UUIMoviePlayer::STATIC_usc_toggle_cursor(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_toggle_cursor");

	UUIMoviePlayer_usc_toggle_cursor_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_Console_Command
// (Final, Iterator, Latent, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 Cmd                            (Parm, NeedCtorLink)

void UUIMoviePlayer::STATIC_usc_Console_Command(const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_Console_Command");

	UUIMoviePlayer_usc_Console_Command_Params params;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.usc_Data_Handler_Created
// (Defined, Iterator, Latent, Singular, Net, Native, Operator, Static, HasOptionalParms)

void UUIMoviePlayer::STATIC_usc_Data_Handler_Created()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.usc_Data_Handler_Created");

	UUIMoviePlayer_usc_Data_Handler_Created_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.QuitGame
// (Final, Defined, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)

void UUIMoviePlayer::STATIC_QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.QuitGame");

	UUIMoviePlayer_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.UnregisterEngineCallbacks
// (Final, Iterator, Latent, PreOperator, Simulated, Exec, Event, Operator, HasOptionalParms)

void UUIMoviePlayer::UnregisterEngineCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.UnregisterEngineCallbacks");

	UUIMoviePlayer_UnregisterEngineCallbacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.RegisterEngineCallbacks
// (Defined, Iterator, Latent, Singular, NetReliable, Exec, Native, HasOptionalParms)

void UUIMoviePlayer::RegisterEngineCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.RegisterEngineCallbacks");

	UUIMoviePlayer_RegisterEngineCallbacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.GetTranslatedKeyBind
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// int                            nAlternate                     (OptionalParm, Parm)
// bool                           bLocalizeKB                    (OptionalParm, Parm)
// bool                           bLocalizeMouse                 (OptionalParm, Parm)
// bool                           bLocalizeGamepad               (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIMoviePlayer::STATIC_GetTranslatedKeyBind(const struct FString& Command, int nAlternate, bool bLocalizeKB, bool bLocalizeMouse, bool bLocalizeGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.GetTranslatedKeyBind");

	UUIMoviePlayer_GetTranslatedKeyBind_Params params;
	params.Command = Command;
	params.nAlternate = nAlternate;
	params.bLocalizeKB = bLocalizeKB;
	params.bLocalizeMouse = bLocalizeMouse;
	params.bLocalizeGamepad = bLocalizeGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.UpdateViewportForSafeAreas
// (Iterator, PreOperator, Net, Native, Operator, Static, HasOptionalParms)

void UUIMoviePlayer::STATIC_UpdateViewportForSafeAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.UpdateViewportForSafeAreas");

	UUIMoviePlayer_UpdateViewportForSafeAreas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.NativeTick
// (Latent, PreOperator, Net, NetReliable, Operator, Static, HasOptionalParms)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUIMoviePlayer::STATIC_NativeTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.NativeTick");

	UUIMoviePlayer_NativeTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.InitializeDataHandler
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)

void UUIMoviePlayer::STATIC_InitializeDataHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.InitializeDataHandler");

	UUIMoviePlayer_InitializeDataHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.PostInit
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Event, Operator, Static)

void UUIMoviePlayer::STATIC_PostInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.PostInit");

	UUIMoviePlayer_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.OnClose
// (Final, Defined, Singular, Net, NetReliable, Native, Event, Operator, Static)

void UUIMoviePlayer::STATIC_OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.OnClose");

	UUIMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIMoviePlayer.GetPlayerOwner
// (Final, Defined, Simulated, Native, Event, HasOptionalParms, Const)
// Parameters:
// class ATgPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgPlayerController* UUIMoviePlayer::GetPlayerOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.GetPlayerOwner");

	UUIMoviePlayer_GetPlayerOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIMoviePlayer.GetHUD
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class ATgClientHUD*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgClientHUD* UUIMoviePlayer::STATIC_GetHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIMoviePlayer.GetHUD");

	UUIMoviePlayer_GetHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDevMenuMoviePlayer.FilterButtonInput
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Operator, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgDevMenuMoviePlayer::STATIC_FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.FilterButtonInput");

	UTgDevMenuMoviePlayer_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgDevMenuMoviePlayer.OnClose
// (Final, Defined, Singular, Net, NetReliable, Native, Event, Operator, Static)

void UTgDevMenuMoviePlayer::STATIC_OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.OnClose");

	UTgDevMenuMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.PostInit
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Event, Operator, Static)

void UTgDevMenuMoviePlayer::STATIC_PostInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.PostInit");

	UTgDevMenuMoviePlayer_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.usc_FillCommands
// (PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 MenuName                       (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::STATIC_usc_FillCommands(const struct FString& MenuName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.usc_FillCommands");

	UTgDevMenuMoviePlayer_usc_FillCommands_Params params;
	params.MenuName = MenuName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.AddSubMenu
// (Iterator, Net, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 Section                        (Parm, NeedCtorLink)
// struct FString                 submenuname                    (Parm, NeedCtorLink)
// struct FString                 DisplayName                    (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::STATIC_AddSubMenu(const struct FString& Section, const struct FString& submenuname, const struct FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.AddSubMenu");

	UTgDevMenuMoviePlayer_AddSubMenu_Params params;
	params.Section = Section;
	params.submenuname = submenuname;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.AddCommand
// (Defined, Iterator, Latent, PreOperator, Singular, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 Section                        (Parm, NeedCtorLink)
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 DisplayName                    (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::STATIC_AddCommand(const struct FString& Section, const struct FString& Command, const struct FString& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.AddCommand");

	UTgDevMenuMoviePlayer_AddCommand_Params params;
	params.Section = Section;
	params.Command = Command;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.FillSubMenuCommands
// (Latent, PreOperator, Singular, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 submenuname                    (Parm, NeedCtorLink)

void UTgDevMenuMoviePlayer::STATIC_FillSubMenuCommands(const struct FString& submenuname)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.FillSubMenuCommands");

	UTgDevMenuMoviePlayer_FillSubMenuCommands_Params params;
	params.submenuname = submenuname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDevMenuMoviePlayer.FillMenuCommands
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Native, Static, HasOptionalParms)

void UTgDevMenuMoviePlayer::STATIC_FillMenuCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDevMenuMoviePlayer.FillMenuCommands");

	UTgDevMenuMoviePlayer_FillMenuCommands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGAPeachStartup.OnClose
// (Final, Defined, Singular, Net, NetReliable, Native, Event, Operator, Static)

void UUIGAPeachStartup::STATIC_OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGAPeachStartup.OnClose");

	UUIGAPeachStartup_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGAPeachStartup.PostInit
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Event, Operator, Static)

void UUIGAPeachStartup::STATIC_PostInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGAPeachStartup.PostInit");

	UUIGAPeachStartup_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGAPeachStartup.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UUIGAPeachStartup::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGAPeachStartup.Init");

	UUIGAPeachStartup_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGAPeachStartup.UpdateViewportForSafeAreas
// (Iterator, PreOperator, Net, Native, Operator, Static, HasOptionalParms)

void UUIGAPeachStartup::STATIC_UpdateViewportForSafeAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGAPeachStartup.UpdateViewportForSafeAreas");

	UUIGAPeachStartup_UpdateViewportForSafeAreas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIData_RealMoneyItem.GetInventoryItems
// (Defined, Latent, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// TArray<struct FMarketplaceInventoryItem> InventoryItems                 (Parm, OutParm, NeedCtorLink)

void UUIData_RealMoneyItem::GetInventoryItems(TArray<struct FMarketplaceInventoryItem>* InventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIData_RealMoneyItem.GetInventoryItems");

	UUIData_RealMoneyItem_GetInventoryItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryItems != nullptr)
		*InventoryItems = params.InventoryItems;
}


// Function TgClient.UIDataItem.GetChampionIconLockedName
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UUIDataItem::STATIC_GetChampionIconLockedName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataItem.GetChampionIconLockedName");

	UUIDataItem_GetChampionIconLockedName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataItem.GetChampionIconName
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UUIDataItem::STATIC_GetChampionIconName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataItem.GetChampionIconName");

	UUIDataItem_GetChampionIconName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataItem.OnTeamModelUpdated
// (Defined, Iterator, Latent, Net, Simulated, Operator, Static, HasOptionalParms)

void UUIDataItem::STATIC_OnTeamModelUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataItem.OnTeamModelUpdated");

	UUIDataItem_OnTeamModelUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIDataGoals.GetLoreCompleteCount
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct Fdword                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct Fdword UUIDataGoals::STATIC_GetLoreCompleteCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetLoreCompleteCount");

	UUIDataGoals_GetLoreCompleteCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoals.GetLoreProgress
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct Fdword                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct Fdword UUIDataGoals::STATIC_GetLoreProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetLoreProgress");

	UUIDataGoals_GetLoreProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoals.GetDailyLoginBonusDay
// (Final, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataGoals::STATIC_GetDailyLoginBonusDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetDailyLoginBonusDay");

	UUIDataGoals_GetDailyLoginBonusDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoals.GetDailyLoginsCount
// (Defined, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataGoals::STATIC_GetDailyLoginsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetDailyLoginsCount");

	UUIDataGoals_GetDailyLoginsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoals.GetDailyLoginsTier
// (Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataGoals::STATIC_GetDailyLoginsTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetDailyLoginsTier");

	UUIDataGoals_GetDailyLoginsTier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoals.GetLoreQuest
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UUIData_Quest*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIData_Quest* UUIDataGoals::STATIC_GetLoreQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetLoreQuest");

	UUIDataGoals_GetLoreQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoals.GetDailyLoginsQuest
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UUIData_Quest*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIData_Quest* UUIDataGoals::STATIC_GetDailyLoginsQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetDailyLoginsQuest");

	UUIDataGoals_GetDailyLoginsQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataGoals.GetChampionQuest
// (PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UUIData_Quest*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UUIData_Quest* UUIDataGoals::STATIC_GetChampionQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataGoals.GetChampionQuest");

	UUIDataGoals_GetChampionQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIDataManager.StoreOfflineData
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native, Event, HasOptionalParms)

void UUIDataManager::StoreOfflineData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIDataManager.StoreOfflineData");

	UUIDataManager_StoreOfflineData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.SelectionInterface.SetFocusImpl
// (Final, Iterator, Simulated, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USelectionInterface::SetFocusImpl(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.SelectionInterface.SetFocusImpl");

	USelectionInterface_SetFocusImpl_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.SelectionInterface.SetFocus
// (Final, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USelectionInterface::STATIC_SetFocus(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.SelectionInterface.SetFocus");

	USelectionInterface_SetFocus_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameHUD.AddNamedAreas
// (Defined, Latent, PreOperator, Net, NetReliable, HasOptionalParms)

void ATgGameHUD::AddNamedAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.AddNamedAreas");

	ATgGameHUD_AddNamedAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PlayDeviceFailResponse
// (Defined, Singular, Net, Simulated, Exec, Native, Event, Operator, Static)
// Parameters:
// TEnumAsByte<EDeviceFailType>   failType                       (Parm)

void ATgGameHUD::STATIC_PlayDeviceFailResponse(TEnumAsByte<EDeviceFailType> failType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.PlayDeviceFailResponse");

	ATgGameHUD_PlayDeviceFailResponse_Params params;
	params.failType = failType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PostRender
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, Operator, Static)

void ATgGameHUD::STATIC_PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.PostRender");

	ATgGameHUD_PostRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PostBeginPlay
// (Final, Latent, Net, Simulated)

void ATgGameHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.PostBeginPlay");

	ATgGameHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ToggleCosmeticWheel
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void ATgGameHUD::STATIC_ToggleCosmeticWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.ToggleCosmeticWheel");

	ATgGameHUD_ToggleCosmeticWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.OpenCosmeticWheel
// (Latent, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bShouldOpen                    (OptionalParm, Parm)
// int                            nPage                          (OptionalParm, Parm)

void ATgGameHUD::STATIC_OpenCosmeticWheel(bool bShouldOpen, int nPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.OpenCosmeticWheel");

	ATgGameHUD_OpenCosmeticWheel_Params params;
	params.bShouldOpen = bShouldOpen;
	params.nPage = nPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ViewScoreboard
// (Final, PreOperator, NetReliable, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bShow                          (Parm)

void ATgGameHUD::STATIC_ViewScoreboard(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.ViewScoreboard");

	ATgGameHUD_ViewScoreboard_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ScoreboardToggle
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)

void ATgGameHUD::STATIC_ScoreboardToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.ScoreboardToggle");

	ATgGameHUD_ScoreboardToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ViewInventory
// (PreOperator, NetReliable, Native, Operator, Static, HasOptionalParms)

void ATgGameHUD::STATIC_ViewInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.ViewInventory");

	ATgGameHUD_ViewInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ViewVGS
// (Final, Defined, PreOperator, NetReliable, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bShow                          (Parm)

void ATgGameHUD::STATIC_ViewVGS(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.ViewVGS");

	ATgGameHUD_ViewVGS_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ShowLootGoblinSpawned
// (Final, Defined, PreOperator, Simulated, Exec, Static, HasOptionalParms)
// Parameters:
// class ATgPawn*                 DiscoveringPawn                (Parm)
// class ATgPawn*                 TargetGoblin                   (Parm)

void ATgGameHUD::STATIC_ShowLootGoblinSpawned(class ATgPawn* DiscoveringPawn, class ATgPawn* TargetGoblin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.ShowLootGoblinSpawned");

	ATgGameHUD_ShowLootGoblinSpawned_Params params;
	params.DiscoveringPawn = DiscoveringPawn;
	params.TargetGoblin = TargetGoblin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.EndMission
// (Iterator, Singular, Net, NetReliable, Simulated, Event, Operator)
// Parameters:
// bool                           bPlayerAttacker                (Parm)
// TEnumAsByte<EGAME_WIN_STATE>   finalWinState                  (Parm)

void ATgGameHUD::EndMission(bool bPlayerAttacker, TEnumAsByte<EGAME_WIN_STATE> finalWinState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.EndMission");

	ATgGameHUD_EndMission_Params params;
	params.bPlayerAttacker = bPlayerAttacker;
	params.finalWinState = finalWinState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.AddNamedArea
// (Defined, Net, Native, Static, HasOptionalParms)
// Parameters:
// class ATgNamedPOIActor*        pPOI                           (Parm)
// int                            nCount                         (Parm)

void ATgGameHUD::STATIC_AddNamedArea(class ATgNamedPOIActor* pPOI, int nCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.AddNamedArea");

	ATgGameHUD_AddNamedArea_Params params;
	params.pPOI = pPOI;
	params.nCount = nCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.ShowScope
// (Final, Iterator, PreOperator, Simulated, Exec, Static, HasOptionalParms)
// Parameters:
// bool                           bValue                         (Parm)
// unsigned char                  eType                          (OptionalParm, Parm)

void ATgGameHUD::STATIC_ShowScope(bool bValue, unsigned char eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.ShowScope");

	ATgGameHUD_ShowScope_Params params;
	params.bValue = bValue;
	params.eType = eType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.UpdatePlayerReady
// (Final, Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Event, Operator, HasOptionalParms)
// Parameters:
// class ATgRepInfo_Player*       pPRI                           (Parm)

void ATgGameHUD::UpdatePlayerReady(class ATgRepInfo_Player* pPRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.UpdatePlayerReady");

	ATgGameHUD_UpdatePlayerReady_Params params;
	params.pPRI = pPRI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PostRenderDebugDraws
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void ATgGameHUD::STATIC_PostRenderDebugDraws()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.PostRenderDebugDraws");

	ATgGameHUD_PostRenderDebugDraws_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PostRenderMovies
// (Final, PreOperator, NetReliable, Simulated, Operator, Static, HasOptionalParms)

void ATgGameHUD::STATIC_PostRenderMovies()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.PostRenderMovies");

	ATgGameHUD_PostRenderMovies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.FinishIntro
// (Defined, PreOperator, NetReliable, Native, Event, Operator)

void ATgGameHUD::FinishIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.FinishIntro");

	ATgGameHUD_FinishIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameHUD.PlayIntro
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, HasOptionalParms)

void ATgGameHUD::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameHUD.PlayIntro");

	ATgGameHUD_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataGroup_Game.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgDataGroup_Game::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataGroup_Game.NotifyMapChange");

	UTgDataGroup_Game_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataGroup_Game.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgDataGroup_Game::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataGroup_Game.InitializeData");

	UTgDataGroup_Game_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_set_cast_mode
// (Final, Defined, Iterator, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nCastMode                      (Parm)

void UTgGameDC_Device::STATIC_usc_set_cast_mode(int nCastMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.usc_set_cast_mode");

	UTgGameDC_Device_usc_set_cast_mode_Params params;
	params.nCastMode = nCastMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_set_cast_mode_delegate
// (Final, Defined, Latent, PreOperator, Simulated, HasOptionalParms)

void UTgGameDC_Device::usc_set_cast_mode_delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.usc_set_cast_mode_delegate");

	UTgGameDC_Device_usc_set_cast_mode_delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip
// (Defined, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nRank                          (Parm)

void UTgGameDC_Device::STATIC_usc_get_mode_tooltip(int nRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.usc_get_mode_tooltip");

	UTgGameDC_Device_usc_get_mode_tooltip_Params params;
	params.nRank = nRank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.usc_get_mode_tooltip_delegate
// (Defined, Latent, PreOperator, Simulated, HasOptionalParms)

void UTgGameDC_Device::usc_get_mode_tooltip_delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.usc_get_mode_tooltip_delegate");

	UTgGameDC_Device_usc_get_mode_tooltip_delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgGameDC_Device::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.NotifyMapChange");

	UTgGameDC_Device_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateCastMode
// (Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)

void UTgGameDC_Device::STATIC_UpdateCastMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.UpdateCastMode");

	UTgGameDC_Device_UpdateCastMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateInstanceCount
// (Final, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::STATIC_UpdateInstanceCount(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.UpdateInstanceCount");

	UTgGameDC_Device_UpdateInstanceCount_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdatePtsAlloc
// (Final, Iterator, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::STATIC_UpdatePtsAlloc(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.UpdatePtsAlloc");

	UTgGameDC_Device_UpdatePtsAlloc_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateCooldown
// (Final, Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::STATIC_UpdateCooldown(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.UpdateCooldown");

	UTgGameDC_Device_UpdateCooldown_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateCanFire
// (Final, Defined, Iterator, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::STATIC_UpdateCanFire(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.UpdateCanFire");

	UTgGameDC_Device_UpdateCanFire_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateSelected
// (Defined, Iterator, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bSelected                      (Parm)

void UTgGameDC_Device::STATIC_UpdateSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.UpdateSelected");

	UTgGameDC_Device_UpdateSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.UpdateValues
// (Final, Defined, PreOperator, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_Device::STATIC_UpdateValues(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.UpdateValues");

	UTgGameDC_Device_UpdateValues_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.DeviceChangeEvent
// (Defined, PreOperator, Singular, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)
// TEnumAsByte<EDeviceChangeEvent> Event                          (Parm)

void UTgGameDC_Device::STATIC_DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.DeviceChangeEvent");

	UTgGameDC_Device_DeviceChangeEvent_Params params;
	params.Dev = Dev;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Device.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Device::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Device.InitializeData");

	UTgGameDC_Device_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.SetEmpty
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// TEnumAsByte<ETG_EQUIP_POINT>   eSlot                          (Parm)

void UTgGameDC_DeviceList::STATIC_SetEmpty(TEnumAsByte<ETG_EQUIP_POINT> eSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_DeviceList.SetEmpty");

	UTgGameDC_DeviceList_SetEmpty_Params params;
	params.eSlot = eSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.UpdatePtsAlloc
// (Final, Iterator, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_DeviceList::STATIC_UpdatePtsAlloc(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_DeviceList.UpdatePtsAlloc");

	UTgGameDC_DeviceList_UpdatePtsAlloc_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.UpdateSelected
// (Defined, Iterator, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_DeviceList::STATIC_UpdateSelected(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_DeviceList.UpdateSelected");

	UTgGameDC_DeviceList_UpdateSelected_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.UpdateDevice
// (Iterator, Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)

void UTgGameDC_DeviceList::STATIC_UpdateDevice(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_DeviceList.UpdateDevice");

	UTgGameDC_DeviceList_UpdateDevice_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.DeviceChangeEvent
// (Defined, PreOperator, Singular, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)
// TEnumAsByte<EDeviceChangeEvent> Event                          (Parm)

void UTgGameDC_DeviceList::STATIC_DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_DeviceList.DeviceChangeEvent");

	UTgGameDC_DeviceList_DeviceChangeEvent_Params params;
	params.Dev = Dev;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_DeviceList.GetDeviceChunk
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class ATgDevice*               Dev                            (Parm)
// class UTgGameDC_Device*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgGameDC_Device* UTgGameDC_DeviceList::STATIC_GetDeviceChunk(class ATgDevice* Dev)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_DeviceList.GetDeviceChunk");

	UTgGameDC_DeviceList_GetDeviceChunk_Params params;
	params.Dev = Dev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_DeviceList.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_DeviceList::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_DeviceList.InitializeData");

	UTgGameDC_DeviceList_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Effect.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgGameDC_Effect::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Effect.NotifyMapChange");

	UTgGameDC_Effect_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Effect.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Effect::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Effect.InitializeData");

	UTgGameDC_Effect_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_EffectList.UpdateEffects
// (Final, Iterator, Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgEffectManager*        effectManager                  (Parm)
// int                            indexChanged                   (Parm)

void UTgGameDC_EffectList::STATIC_UpdateEffects(class ATgEffectManager* effectManager, int indexChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_EffectList.UpdateEffects");

	UTgGameDC_EffectList_UpdateEffects_Params params;
	params.effectManager = effectManager;
	params.indexChanged = indexChanged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_EffectList.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_EffectList::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_EffectList.InitializeData");

	UTgGameDC_EffectList_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.UpdateGameCapturePoint
// (Defined, Iterator, Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// int                            Taskforce                      (Parm)

void UTgGameDC_Game::STATIC_UpdateGameCapturePoint(int Index, int Taskforce)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Game.UpdateGameCapturePoint");

	UTgGameDC_Game_UpdateGameCapturePoint_Params params;
	params.Index = Index;
	params.Taskforce = Taskforce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.UpdateGameClock
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)

void UTgGameDC_Game::STATIC_UpdateGameClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Game.UpdateGameClock");

	UTgGameDC_Game_UpdateGameClock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgGameDC_Game::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Game.NotifyMapChange");

	UTgGameDC_Game_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Game.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Game::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Game.InitializeData");

	UTgGameDC_Game_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgGameDC_MapEntity::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_MapEntity.NotifyMapChange");

	UTgGameDC_MapEntity_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.UpdateMapPosition
// (Final, Defined, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FVector                 Location                       (Parm)
// struct FRotator                Rotation                       (Parm)

void UTgGameDC_MapEntity::STATIC_UpdateMapPosition(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_MapEntity.UpdateMapPosition");

	UTgGameDC_MapEntity_UpdateMapPosition_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.UpdateActorMapPosition
// (Defined, Iterator, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class AActor*                  gameActor                      (Parm)

void UTgGameDC_MapEntity::STATIC_UpdateActorMapPosition(class AActor* gameActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_MapEntity.UpdateActorMapPosition");

	UTgGameDC_MapEntity_UpdateActorMapPosition_Params params;
	params.gameActor = gameActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_MapEntity.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_MapEntity::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_MapEntity.InitializeData");

	UTgGameDC_MapEntity_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate
// (Final, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)

void UTgGameDC_Player::STATIC_USC_ForceStatsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate");

	UTgGameDC_Player_USC_ForceStatsUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate_Delegate
// (Final, Latent, PreOperator, Simulated, HasOptionalParms)

void UTgGameDC_Player::USC_ForceStatsUpdate_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.USC_ForceStatsUpdate_Delegate");

	UTgGameDC_Player_USC_ForceStatsUpdate_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgGameDC_Player::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.NotifyMapChange");

	UTgGameDC_Player_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.UpdateItemStoreItems
// (Defined, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)

void UTgGameDC_Player::STATIC_UpdateItemStoreItems(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.UpdateItemStoreItems");

	UTgGameDC_Player_UpdateItemStoreItems_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.UpdateStats
// (PreOperator, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgPawn*                 changedPawn                    (Parm)

void UTgGameDC_Player::STATIC_UpdateStats(class ATgPawn* changedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.UpdateStats");

	UTgGameDC_Player_UpdateStats_Params params;
	params.changedPawn = changedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.UpdatePlayer
// (Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)

void UTgGameDC_Player::STATIC_UpdatePlayer(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.UpdatePlayer");

	UTgGameDC_Player_UpdatePlayer_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.SetDirty
// (Final, Defined, Latent, NetReliable)

void UTgGameDC_Player::SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.SetDirty");

	UTgGameDC_Player_SetDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Player.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Player::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Player.InitializeData");

	UTgGameDC_Player_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget
// (Final, Defined, Iterator, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class UTgGameDC_MapEntity*     entity                         (Parm)

void UTgGameDC_LocalPlayer::STATIC_UpdateSpectatorViewTarget(class UTgGameDC_MapEntity* entity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget");

	UTgGameDC_LocalPlayer_UpdateSpectatorViewTarget_Params params;
	params.entity = entity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_LocalPlayer.SetVendorItemList
// (Defined, Iterator, Latent, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// TArray<int>                    nItemIds                       (Parm, NeedCtorLink)

void UTgGameDC_LocalPlayer::STATIC_SetVendorItemList(TArray<int> nItemIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_LocalPlayer.SetVendorItemList");

	UTgGameDC_LocalPlayer_SetVendorItemList_Params params;
	params.nItemIds = nItemIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_LocalPlayer.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_LocalPlayer::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_LocalPlayer.InitializeData");

	UTgGameDC_LocalPlayer_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.UpdateCoreStats
// (Defined, Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)

void UTgGameDC_PlayerVitals::STATIC_UpdateCoreStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_PlayerVitals.UpdateCoreStats");

	UTgGameDC_PlayerVitals_UpdateCoreStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.UpdateDamageDone
// (Final, Defined, Latent, PreOperator, Singular, Native, Operator, Static, HasOptionalParms)

void UTgGameDC_PlayerVitals::STATIC_UpdateDamageDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_PlayerVitals.UpdateDamageDone");

	UTgGameDC_PlayerVitals_UpdateDamageDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgGameDC_PlayerVitals::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_PlayerVitals.NotifyMapChange");

	UTgGameDC_PlayerVitals_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_PlayerVitals.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_PlayerVitals::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_PlayerVitals.InitializeData");

	UTgGameDC_PlayerVitals_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Tower.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Tower::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Tower.InitializeData");

	UTgGameDC_Tower_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Target.UpdateTarget
// (Final, PreOperator, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class AActor*                  NewTarget                      (Parm)
// bool                           bHovered                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameDC_Target::STATIC_UpdateTarget(class AActor* NewTarget, bool bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Target.UpdateTarget");

	UTgGameDC_Target_UpdateTarget_Params params;
	params.NewTarget = NewTarget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Target.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Target::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Target.InitializeData");

	UTgGameDC_Target_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.UpdatePlayerSurrender
// (Iterator, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameDC_Team::STATIC_UpdatePlayerSurrender(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Team.UpdatePlayerSurrender");

	UTgGameDC_Team_UpdatePlayerSurrender_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Team.UpdatePlayerItemStoreItems
// (Final, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgRepInfo_Player*       PRI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameDC_Team::STATIC_UpdatePlayerItemStoreItems(class ATgRepInfo_Player* PRI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Team.UpdatePlayerItemStoreItems");

	UTgGameDC_Team_UpdatePlayerItemStoreItems_Params params;
	params.PRI = PRI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Team.UpdatePlayerStat
// (Final, Defined, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgPawn*                 changedPawn                    (Parm)

void UTgGameDC_Team::STATIC_UpdatePlayerStat(class ATgPawn* changedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Team.UpdatePlayerStat");

	UTgGameDC_Team_UpdatePlayerStat_Params params;
	params.changedPawn = changedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.UpdateMembers
// (Final, Iterator, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// class ATgRepInfo_TaskForce*    tfri                           (Parm)

void UTgGameDC_Team::STATIC_UpdateMembers(class ATgRepInfo_TaskForce* tfri)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Team.UpdateMembers");

	UTgGameDC_Team_UpdateMembers_Params params;
	params.tfri = tfri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.NotifyMapChange
// (Final, Iterator, Latent, PreOperator, Simulated, Operator, Static, HasOptionalParms)

void UTgGameDC_Team::STATIC_NotifyMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Team.NotifyMapChange");

	UTgGameDC_Team_NotifyMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Team.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Team::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Team.InitializeData");

	UTgGameDC_Team_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDataHandler.InitializeDataHandler
// (Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UUIMoviePlayer*          mp                             (Parm)

void UTgGameDataHandler::STATIC_InitializeDataHandler(class UUIMoviePlayer* mp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDataHandler.InitializeDataHandler");

	UTgGameDataHandler_InitializeDataHandler_Params params;
	params.mp = mp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.TokenReplace
// (Final, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 sValue                         (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgGameDC_Chat::TokenReplace(const struct FString& Message, const struct FString& Token, const struct FString& sValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.TokenReplace");

	UTgGameDC_Chat_TokenReplace_Params params;
	params.Message = Message;
	params.Token = Token;
	params.sValue = sValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDC_Chat.SubmitDeferredMessages
// (Final, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nChannel                       (OptionalParm, Parm)

void UTgGameDC_Chat::STATIC_SubmitDeferredMessages(int nChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.SubmitDeferredMessages");

	UTgGameDC_Chat_SubmitDeferredMessages_Params params;
	params.nChannel = nChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayAnnouncerSound
// (Final, Defined, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nMsgId                         (Parm)

void UTgGameDC_Chat::STATIC_PlayAnnouncerSound(int nMsgId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.PlayAnnouncerSound");

	UTgGameDC_Chat_PlayAnnouncerSound_Params params;
	params.nMsgId = nMsgId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayVGSPOTG
// (Defined, Iterator, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nPackId                        (Parm)
// int                            nBotId                         (Parm)
// int                            nSkinId                        (Parm)
// struct FString                 customSuffix                   (Parm, NeedCtorLink)

void UTgGameDC_Chat::STATIC_PlayVGSPOTG(int nPackId, int nBotId, int nSkinId, const struct FString& customSuffix)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.PlayVGSPOTG");

	UTgGameDC_Chat_PlayVGSPOTG_Params params;
	params.nPackId = nPackId;
	params.nBotId = nBotId;
	params.nSkinId = nSkinId;
	params.customSuffix = customSuffix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayVGSSound
// (Final, Defined, Iterator, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nMsgId                         (Parm)
// int                            nPackId                        (Parm)
// int                            nBotId                         (Parm)
// int                            nSkinId                        (Parm)
// struct FString                 customSuffix                   (Parm, NeedCtorLink)
// int                            nSourcePlayerId                (OptionalParm, Parm)

void UTgGameDC_Chat::STATIC_PlayVGSSound(int nMsgId, int nPackId, int nBotId, int nSkinId, const struct FString& customSuffix, int nSourcePlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.PlayVGSSound");

	UTgGameDC_Chat_PlayVGSSound_Params params;
	params.nMsgId = nMsgId;
	params.nPackId = nPackId;
	params.nBotId = nBotId;
	params.nSkinId = nSkinId;
	params.customSuffix = customSuffix;
	params.nSourcePlayerId = nSourcePlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.PlayMessageSound
// (Final, Iterator, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nMsgId                         (Parm)
// TEnumAsByte<ETG_CHAT_PRIORITY> ePriority                      (OptionalParm, Parm)

void UTgGameDC_Chat::STATIC_PlayMessageSound(int nMsgId, TEnumAsByte<ETG_CHAT_PRIORITY> ePriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.PlayMessageSound");

	UTgGameDC_Chat_PlayMessageSound_Params params;
	params.nMsgId = nMsgId;
	params.ePriority = ePriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddAlert
// (Defined, Latent, PreOperator, Singular, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void UTgGameDC_Chat::STATIC_AddAlert(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.AddAlert");

	UTgGameDC_Chat_AddAlert_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.UpdateMessageSoundQueue
// (Defined, Iterator, Net, Native, Operator, Static, HasOptionalParms)

void UTgGameDC_Chat::STATIC_UpdateMessageSoundQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.UpdateMessageSoundQueue");

	UTgGameDC_Chat_UpdateMessageSoundQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.Update
// (Final, Defined, NetReliable, Native, Event, Operator, Static)
// Parameters:
// float                          DeltaTime                      (Parm)
// bool                           bSkipCallback                  (OptionalParm, Parm)

void UTgGameDC_Chat::STATIC_Update(float DeltaTime, bool bSkipCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.Update");

	UTgGameDC_Chat_Update_Params params;
	params.DeltaTime = DeltaTime;
	params.bSkipCallback = bSkipCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddPopupMsg
// (Final, Defined, Net, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)

void UTgGameDC_Chat::STATIC_AddPopupMsg(const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.AddPopupMsg");

	UTgGameDC_Chat_AddPopupMsg_Params params;
	params.msg = msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddCombatMsg
// (Final, Iterator, Latent, PreOperator, Singular, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)

void UTgGameDC_Chat::STATIC_AddCombatMsg(const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.AddCombatMsg");

	UTgGameDC_Chat_AddCombatMsg_Params params;
	params.msg = msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddLocalChatMsg
// (Final, Net, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)
// struct FString                 senderName                     (Parm, NeedCtorLink)

void UTgGameDC_Chat::STATIC_AddLocalChatMsg(const struct FString& msg, const struct FString& senderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.AddLocalChatMsg");

	UTgGameDC_Chat_AddLocalChatMsg_Params params;
	params.msg = msg;
	params.senderName = senderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.AddChatMsg
// (Final, Defined, Latent, PreOperator, Singular, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 msg                            (Parm, NeedCtorLink)
// struct FString                 senderName                     (Parm, NeedCtorLink)
// int                            nChannel                       (Parm)
// bool                           bIsFeedback                    (Parm)
// bool                           bIsVGS                         (OptionalParm, Parm)
// int                            nMsgId                         (OptionalParm, Parm)

void UTgGameDC_Chat::STATIC_AddChatMsg(const struct FString& msg, const struct FString& senderName, int nChannel, bool bIsFeedback, bool bIsVGS, int nMsgId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.AddChatMsg");

	UTgGameDC_Chat_AddChatMsg_Params params;
	params.msg = msg;
	params.senderName = senderName;
	params.nChannel = nChannel;
	params.bIsFeedback = bIsFeedback;
	params.bIsVGS = bIsVGS;
	params.nMsgId = nMsgId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDC_Chat.InitializeData
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgGameDC_Chat::STATIC_InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDC_Chat.InitializeData");

	UTgGameDC_Chat_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.CheckSpectatorState
// (Defined, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgMiniMap::CheckSpectatorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.CheckSpectatorState");

	UTgMiniMap_CheckSpectatorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.UpdateMapSize
// (Iterator, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            newX                           (Parm)

void UTgMiniMap::STATIC_UpdateMapSize(int newX)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.UpdateMapSize");

	UTgMiniMap_UpdateMapSize_Params params;
	params.newX = newX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.UpdateMiniMapTexture
// (Final, Defined, Iterator, Net, Native, Operator, Static, HasOptionalParms)

void UTgMiniMap::STATIC_UpdateMiniMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.UpdateMiniMapTexture");

	UTgMiniMap_UpdateMiniMapTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.CreateMiniMapTexture
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)

void UTgMiniMap::STATIC_CreateMiniMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.CreateMiniMapTexture");

	UTgMiniMap_CreateMiniMapTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.Clear
// (Defined, Latent, Singular, Net, Simulated, HasOptionalParms)

void UTgMiniMap::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.Clear");

	UTgMiniMap_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.RemoveAllEntities
// (Final, Defined, Singular, Net, NetReliable, Exec, Native, HasOptionalParms)

void UTgMiniMap::RemoveAllEntities()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.RemoveAllEntities");

	UTgMiniMap_RemoveAllEntities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.VerifyMapLocation
// (Final, NetReliable, Native, Operator, Static, HasOptionalParms)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgMiniMap::STATIC_VerifyMapLocation(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.VerifyMapLocation");

	UTgMiniMap_VerifyMapLocation_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.GetRepInfosForLocation
// (Final, Defined, Singular, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FVector                 mapLoc                         (Parm)
// TArray<class AReplicationInfo*> repInfos                       (Parm, OutParm, NeedCtorLink)

void UTgMiniMap::STATIC_GetRepInfosForLocation(const struct FVector& mapLoc, TArray<class AReplicationInfo*>* repInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.GetRepInfosForLocation");

	UTgMiniMap_GetRepInfosForLocation_Params params;
	params.mapLoc = mapLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (repInfos != nullptr)
		*repInfos = params.repInfos;
}


// Function TgClient.TgMiniMap.WorldToMap
// (Final, Singular, NetReliable, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FVector                 Loc                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UTgMiniMap::STATIC_WorldToMap(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.WorldToMap");

	UTgMiniMap_WorldToMap_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.MapToWorld
// (Final, Defined, Iterator, Singular, Net, Operator, Static, HasOptionalParms)
// Parameters:
// struct FVector                 Loc                            (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UTgMiniMap::STATIC_MapToWorld(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.MapToWorld");

	UTgMiniMap_MapToWorld_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.ClearHover
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)

void UTgMiniMap::STATIC_ClearHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.ClearHover");

	UTgMiniMap_ClearHover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.HoverMap
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)

void UTgMiniMap::STATIC_HoverMap(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.HoverMap");

	UTgMiniMap_HoverMap_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.PingMap
// (Final, Defined, Iterator, Latent, NetReliable, HasOptionalParms)
// Parameters:
// float                          X                              (Parm)
// float                          Y                              (Parm)
// TEnumAsByte<EPING_TYPE>        Pt                             (Parm)

void UTgMiniMap::PingMap(float X, float Y, TEnumAsByte<EPING_TYPE> Pt)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.PingMap");

	UTgMiniMap_PingMap_Params params;
	params.X = X;
	params.Y = Y;
	params.Pt = Pt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.ShouldRender
// (Final, Defined, Iterator, Latent, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgMiniMap::STATIC_ShouldRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.ShouldRender");

	UTgMiniMap_ShouldRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgMiniMap.PingWorldLocation
// (Iterator, Latent, PreOperator, Singular, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// struct FVector                 PingLocation                   (Parm)
// TEnumAsByte<EPING_TYPE>        Pt                             (Parm)

void UTgMiniMap::STATIC_PingWorldLocation(const struct FVector& PingLocation, TEnumAsByte<EPING_TYPE> Pt)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.PingWorldLocation");

	UTgMiniMap_PingWorldLocation_Params params;
	params.PingLocation = PingLocation;
	params.Pt = Pt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// class ATgPlayerController*     PC                             (Parm)

void UTgMiniMap::Init(class ATgPlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.Init");

	UTgMiniMap_Init_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgMiniMap.Draw
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// class UCanvas*                 theCanvas                      (Parm)

void UTgMiniMap::STATIC_Draw(class UCanvas* theCanvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgMiniMap.Draw");

	UTgMiniMap_Draw_Params params;
	params.theCanvas = theCanvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CheckPermissionForOnlineScene
// (Final, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FString                 sScene                         (Parm, NeedCtorLink)
// unsigned char                  ControlledId                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> Hint                           (Parm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)

void UUIGameMoviePlayer::CheckPermissionForOnlineScene(const struct FString& sScene, unsigned char ControlledId, TEnumAsByte<EFeaturePrivilegeLevel> Hint, bool bAttemptToResolve)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.CheckPermissionForOnlineScene");

	UUIGameMoviePlayer_CheckPermissionForOnlineScene_Params params;
	params.sScene = sScene;
	params.ControlledId = ControlledId;
	params.Hint = Hint;
	params.bAttemptToResolve = bAttemptToResolve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnPermissionForOnlineScene
// (Defined, Latent, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void UUIGameMoviePlayer::STATIC_OnPermissionForOnlineScene(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnPermissionForOnlineScene");

	UUIGameMoviePlayer_OnPermissionForOnlineScene_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.NativeOpenURL
// (Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::NativeOpenURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.NativeOpenURL");

	UUIGameMoviePlayer_NativeOpenURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnAccountPickerCompleteForLogin
// (Final, Iterator, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bForceLogin                    (Parm)

void UUIGameMoviePlayer::STATIC_OnAccountPickerCompleteForLogin(bool bForceLogin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnAccountPickerCompleteForLogin");

	UUIGameMoviePlayer_OnAccountPickerCompleteForLogin_Params params;
	params.bForceLogin = bForceLogin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerData
// (Final, Defined, Latent, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FString>         PlayerIDs                      (Parm, NeedCtorLink)
// TArray<struct FOnlineProfile>  OnlineProfiles                 (Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_OnReadOnlinePlayerData(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerData");

	UUIGameMoviePlayer_OnReadOnlinePlayerData_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerIDs = PlayerIDs;
	params.OnlineProfiles = OnlineProfiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.IsAccountPickerOpen
// (Final, Defined, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::IsAccountPickerOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.IsAccountPickerOpen");

	UUIGameMoviePlayer_IsAccountPickerOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.ReadOnlinePlayerData
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// TArray<struct FString>         PlayerIDs                      (Parm, NeedCtorLink)

void UUIGameMoviePlayer::ReadOnlinePlayerData(TArray<struct FString> PlayerIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ReadOnlinePlayerData");

	UUIGameMoviePlayer_ReadOnlinePlayerData_Params params;
	params.PlayerIDs = PlayerIDs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnUserAccountInfoRetrieved
// (Latent, Singular, Simulated, Native, Event, Static)
// Parameters:
// bool                           bSuccessful                    (Parm)
// struct FUserAccountInfo        AccountInfo                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_OnUserAccountInfoRetrieved(bool bSuccessful, const struct FUserAccountInfo& AccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnUserAccountInfoRetrieved");

	UUIGameMoviePlayer_OnUserAccountInfoRetrieved_Params params;
	params.bSuccessful = bSuccessful;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.GetAccountInfo
// (Latent, Singular, Net, NetReliable, HasOptionalParms)

void UUIGameMoviePlayer::GetAccountInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.GetAccountInfo");

	UUIGameMoviePlayer_GetAccountInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CanShowContentPurchaseUI
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::CanShowContentPurchaseUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.CanShowContentPurchaseUI");

	UUIGameMoviePlayer_CanShowContentPurchaseUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.ShowContentPurchaseUI
// (Latent, Simulated, HasOptionalParms)
// Parameters:
// struct FString                 SingedOffer                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::ShowContentPurchaseUI(const struct FString& SingedOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowContentPurchaseUI");

	UUIGameMoviePlayer_ShowContentPurchaseUI_Params params;
	params.SingedOffer = SingedOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowProductDetailsUI
// (Final, Defined, Iterator, Latent, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// struct FString                 ProductID                      (Parm, NeedCtorLink)

void UUIGameMoviePlayer::usc_ShowProductDetailsUI(const struct FString& ProductID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_ShowProductDetailsUI");

	UUIGameMoviePlayer_usc_ShowProductDetailsUI_Params params;
	params.ProductID = ProductID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowGameDetailsUI
// (Defined, Iterator, Latent, PreOperator, Simulated, HasOptionalParms)

void UUIGameMoviePlayer::usc_ShowGameDetailsUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_ShowGameDetailsUI");

	UUIGameMoviePlayer_usc_ShowGameDetailsUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUIForProduct
// (Final, Iterator, Latent, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// int                            ParentProductType              (Parm)
// int                            RequestedProductTypes          (Parm)
// struct FString                 ProductID                      (Parm, NeedCtorLink)

void UUIGameMoviePlayer::usc_ShowContentMarketPlaceUIForProduct(int ParentProductType, int RequestedProductTypes, const struct FString& ProductID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUIForProduct");

	UUIGameMoviePlayer_usc_ShowContentMarketPlaceUIForProduct_Params params;
	params.ParentProductType = ParentProductType;
	params.RequestedProductTypes = RequestedProductTypes;
	params.ProductID = ProductID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUI
// (Iterator, Latent, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// int                            ParentProductType              (Parm)
// int                            RequestedProductTypes          (Parm)

void UUIGameMoviePlayer::usc_ShowContentMarketPlaceUI(int ParentProductType, int RequestedProductTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_ShowContentMarketPlaceUI");

	UUIGameMoviePlayer_usc_ShowContentMarketPlaceUI_Params params;
	params.ParentProductType = ParentProductType;
	params.RequestedProductTypes = RequestedProductTypes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.updatePlayerMute
// (Defined, Latent, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUIGameMoviePlayer::STATIC_updatePlayerMute(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.updatePlayerMute");

	UUIGameMoviePlayer_updatePlayerMute_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowGamercard
// (Iterator, Latent, Net, Native, Event, Operator, Static)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)

void UUIGameMoviePlayer::STATIC_ShowGamercard(const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowGamercard");

	UUIGameMoviePlayer_ShowGamercard_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowGamerCardByUserName
// (Defined, Latent, Simulated, HasOptionalParms)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (Parm)

void UUIGameMoviePlayer::ShowGamerCardByUserName(const struct FString& UserName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowGamerCardByUserName");

	UUIGameMoviePlayer_ShowGamerCardByUserName_Params params;
	params.UserName = UserName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.IsPlayerMuted
// (Iterator, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FUniqueNetId            ConsoleId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::IsPlayerMuted(const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.IsPlayerMuted");

	UUIGameMoviePlayer_IsPlayerMuted_Params params;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.UnmutePlayer
// (Final, Defined, Iterator, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            ConsoleId                      (Parm)

void UUIGameMoviePlayer::UnmutePlayer(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.UnmutePlayer");

	UUIGameMoviePlayer_UnmutePlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.MutePlayer
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            ConsoleId                      (Parm)

void UUIGameMoviePlayer::MutePlayer(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.MutePlayer");

	UUIGameMoviePlayer_MutePlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ConsoleId = ConsoleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UnregisterLocalTalker
// (Latent, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)

void UUIGameMoviePlayer::UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.UnregisterLocalTalker");

	UUIGameMoviePlayer_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.RegisterLocalTalker
// (Final, Simulated, HasOptionalParms)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ChannelIndex                   (OptionalParm, Parm)

void UUIGameMoviePlayer::RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.RegisterLocalTalker");

	UUIGameMoviePlayer_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ChannelIndex = ChannelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.WidgetUnloaded
// (Final, Defined, Latent, Singular, Net, NetReliable, Native, Event, Operator, Static)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.WidgetUnloaded");

	UUIGameMoviePlayer_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.WidgetInitialized
// (Defined, Latent, Singular, Net, NetReliable, Native, Event, Operator, Static)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.WidgetInitialized");

	UUIGameMoviePlayer_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.CheckControllerConnected
// (Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::CheckControllerConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.CheckControllerConnected");

	UUIGameMoviePlayer_CheckControllerConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnComponentKeyboardInputComplete
// (Final, Defined, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUIGameMoviePlayer::STATIC_OnComponentKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnComponentKeyboardInputComplete");

	UUIGameMoviePlayer_OnComponentKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnTextFieldKeyboardInputComplete
// (Final, Defined, Iterator, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UUIGameMoviePlayer::STATIC_OnTextFieldKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnTextFieldKeyboardInputComplete");

	UUIGameMoviePlayer_OnTextFieldKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowComponentKeyboardUI
// (Final, Defined, Iterator, Simulated, HasOptionalParms)
// Parameters:
// class UUIComponent*            CallingComponent               (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)

void UUIGameMoviePlayer::ShowComponentKeyboardUI(class UUIComponent* CallingComponent, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowComponentKeyboardUI");

	UUIGameMoviePlayer_ShowComponentKeyboardUI_Params params;
	params.CallingComponent = CallingComponent;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowKeyboardUI
// (Final, Iterator, Latent, Simulated, HasOptionalParms)
// Parameters:
// class UGFxObject*              FocusedTextField               (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// bool                           bIsPassword                    (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)

void UUIGameMoviePlayer::ShowKeyboardUI(class UGFxObject* FocusedTextField, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowKeyboardUI");

	UUIGameMoviePlayer_ShowKeyboardUI_Params params;
	params.FocusedTextField = FocusedTextField;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.bIsPassword = bIsPassword;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelledWrapper
// (Iterator, Net, Simulated, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_OnAccountPickerCancelledWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelledWrapper");

	UUIGameMoviePlayer_OnAccountPickerCancelledWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnClose
// (Final, Defined, Singular, Net, NetReliable, Native, Event, Operator, Static)

void UUIGameMoviePlayer::STATIC_OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnClose");

	UUIGameMoviePlayer_OnClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.InitOSSRef
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_InitOSSRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.InitOSSRef");

	UUIGameMoviePlayer_InitOSSRef_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// class ULocalPlayer*            LocPlay                        (OptionalParm, Parm)

void UUIGameMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.Init");

	UUIGameMoviePlayer_Init_Params params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UnloadScene
// (Defined, Iterator, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UUIGameMoviePlayer::UnloadScene(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.UnloadScene");

	UUIGameMoviePlayer_UnloadScene_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.LoadScene
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// struct FString                 sPath                          (Parm, NeedCtorLink)
// int                            nDepth                         (Parm)

void UUIGameMoviePlayer::LoadScene(const struct FString& sName, const struct FString& sPath, int nDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.LoadScene");

	UUIGameMoviePlayer_LoadScene_Params params;
	params.sName = sName;
	params.sPath = sPath;
	params.nDepth = nDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowErrorMessage
// (Final, PreOperator, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 sTitle                         (Parm, NeedCtorLink)
// struct FString                 sError                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_ShowErrorMessage(const struct FString& sTitle, const struct FString& sError)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowErrorMessage");

	UUIGameMoviePlayer_ShowErrorMessage_Params params;
	params.sTitle = sTitle;
	params.sError = sError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelled
// (Final, Defined, Net, Simulated, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_OnAccountPickerCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnAccountPickerCancelled");

	UUIGameMoviePlayer_OnAccountPickerCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowPartyRequiresPremiumAccountWarning
// (Final, Defined, PreOperator, Net, Exec, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_ShowPartyRequiresPremiumAccountWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowPartyRequiresPremiumAccountWarning");

	UUIGameMoviePlayer_ShowPartyRequiresPremiumAccountWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowNoFriendsForProfileViewWarning
// (Defined, PreOperator, Net, Exec, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_ShowNoFriendsForProfileViewWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowNoFriendsForProfileViewWarning");

	UUIGameMoviePlayer_ShowNoFriendsForProfileViewWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnSuccessfulUserAccountInfoRetrieved
// (Final, Iterator, Latent, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// struct FUserAccountInfo        AccountInfo                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_OnSuccessfulUserAccountInfoRetrieved(const struct FUserAccountInfo& AccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnSuccessfulUserAccountInfoRetrieved");

	UUIGameMoviePlayer_OnSuccessfulUserAccountInfoRetrieved_Params params;
	params.AccountInfo = AccountInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.IsItemOwned
// (Final, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// int                            ItemId                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_IsItemOwned(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.IsItemOwned");

	UUIGameMoviePlayer_IsItemOwned_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.GetDataHandler
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgGameDataHandler*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgGameDataHandler* UUIGameMoviePlayer::STATIC_GetDataHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.GetDataHandler");

	UUIGameMoviePlayer_GetDataHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.GetGameData
// (Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgDataGroup_Game*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgDataGroup_Game* UUIGameMoviePlayer::STATIC_GetGameData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.GetGameData");

	UUIGameMoviePlayer_GetGameData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.HideSubtitle
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, Native, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_HideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.HideSubtitle");

	UUIGameMoviePlayer_HideSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.SwitchSubtitleText
// (Defined, Iterator, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 sValue                         (Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_SwitchSubtitleText(const struct FString& sValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.SwitchSubtitleText");

	UUIGameMoviePlayer_SwitchSubtitleText_Params params;
	params.sValue = sValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ShowSubtitle
// (Defined, Iterator, PreOperator, Simulated, Exec, Static, HasOptionalParms)
// Parameters:
// struct FString                 sValue                         (Parm, NeedCtorLink)
// float                          fTime                          (OptionalParm, Parm)

void UUIGameMoviePlayer::STATIC_ShowSubtitle(const struct FString& sValue, float fTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ShowSubtitle");

	UUIGameMoviePlayer_ShowSubtitle_Params params;
	params.sValue = sValue;
	params.fTime = fTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.NativeWidgetInitialized
// (Final, Latent, PreOperator, Net, NetReliable, Operator, Static, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_NativeWidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.NativeWidgetInitialized");

	UUIGameMoviePlayer_NativeWidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.NativeWidgetUnloaded
// (Defined, Latent, PreOperator, Net, NetReliable, Operator, Static, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_NativeWidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.NativeWidgetUnloaded");

	UUIGameMoviePlayer_NativeWidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerDataComplete
// (Iterator, Latent, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FString>         PlayerIDs                      (Parm, NeedCtorLink)
// TArray<struct FOnlineProfile>  OnlineProfiles                 (Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_OnReadOnlinePlayerDataComplete(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnReadOnlinePlayerDataComplete");

	UUIGameMoviePlayer_OnReadOnlinePlayerDataComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayerIDs = PlayerIDs;
	params.OnlineProfiles = OnlineProfiles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.HasPlayerDisplayName
// (Iterator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 OnlineID                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_HasPlayerDisplayName(const struct FString& OnlineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.HasPlayerDisplayName");

	UUIGameMoviePlayer_HasPlayerDisplayName_Params params;
	params.OnlineID = OnlineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.GetPlayerDisplayName
// (Final, Singular, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 PlayerName                     (Parm, NeedCtorLink)
// struct FString                 OnlineID                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UUIGameMoviePlayer::STATIC_GetPlayerDisplayName(const struct FString& PlayerName, const struct FString& OnlineID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.GetPlayerDisplayName");

	UUIGameMoviePlayer_GetPlayerDisplayName_Params params;
	params.PlayerName = PlayerName;
	params.OnlineID = OnlineID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.GetGamepadValueForKeyBind
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 KeyBind                        (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIGameMoviePlayer::STATIC_GetGamepadValueForKeyBind(const struct FString& KeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.GetGamepadValueForKeyBind");

	UUIGameMoviePlayer_GetGamepadValueForKeyBind_Params params;
	params.KeyBind = KeyBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.NativeTick
// (Latent, PreOperator, Net, NetReliable, Operator, Static, HasOptionalParms)
// Parameters:
// float                          DeltaTime                      (Parm)

void UUIGameMoviePlayer::STATIC_NativeTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.NativeTick");

	UUIGameMoviePlayer_NativeTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ForceDirty
// (Final, Latent, NetReliable, Simulated, Native, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_ForceDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ForceDirty");

	UUIGameMoviePlayer_ForceDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.PostInit
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Event, Operator, Static)

void UUIGameMoviePlayer::STATIC_PostInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.PostInit");

	UUIGameMoviePlayer_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.InitAnnouncer
// (Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_InitAnnouncer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.InitAnnouncer");

	UUIGameMoviePlayer_InitAnnouncer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnVoicePackLoaded
// (Final, Defined, Iterator, Latent, Net, Simulated, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_OnVoicePackLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnVoicePackLoaded");

	UUIGameMoviePlayer_OnVoicePackLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OnAnnouncerLoaded
// (Defined, Iterator, Net, Simulated, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_OnAnnouncerLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OnAnnouncerLoaded");

	UUIGameMoviePlayer_OnAnnouncerLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.SetLoginReady
// (Defined, Net, Exec, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_SetLoginReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.SetLoginReady");

	UUIGameMoviePlayer_SetLoginReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UpdateGamepadIcons
// (Net, Native, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_UpdateGamepadIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.UpdateGamepadIcons");

	UUIGameMoviePlayer_UpdateGamepadIcons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CheckControllerDisconnected
// (Final, Iterator, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_CheckControllerDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.CheckControllerDisconnected");

	UUIGameMoviePlayer_CheckControllerDisconnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.AddInitialChatMessages
// (Net, Native, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_AddInitialChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.AddInitialChatMessages");

	UUIGameMoviePlayer_AddInitialChatMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.CloseChatTab
// (Defined, Latent, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 sSender                        (OptionalParm, Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_CloseChatTab(int nChannel, const struct FString& sSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.CloseChatTab");

	UUIGameMoviePlayer_CloseChatTab_Params params;
	params.nChannel = nChannel;
	params.sSender = sSender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.OpenChatTab
// (PreOperator, Net, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 sName                          (OptionalParm, Parm, NeedCtorLink)
// bool                           bOpenWindow                    (OptionalParm, Parm)

void UUIGameMoviePlayer::STATIC_OpenChatTab(int nChannel, const struct FString& sName, bool bOpenWindow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.OpenChatTab");

	UUIGameMoviePlayer_OpenChatTab_Params params;
	params.nChannel = nChannel;
	params.sName = sName;
	params.bOpenWindow = bOpenWindow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.UpdateViewportForSafeAreas
// (Iterator, PreOperator, Net, Native, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_UpdateViewportForSafeAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.UpdateViewportForSafeAreas");

	UUIGameMoviePlayer_UpdateViewportForSafeAreas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.AttemptAutoLogin
// (Iterator, Latent, PreOperator, Net, Native, Static, HasOptionalParms)
// Parameters:
// bool                           bSkipServerStatusCheck         (OptionalParm, Parm)

void UUIGameMoviePlayer::STATIC_AttemptAutoLogin(bool bSkipServerStatusCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.AttemptAutoLogin");

	UUIGameMoviePlayer_AttemptAutoLogin_Params params;
	params.bSkipServerStatusCheck = bSkipServerStatusCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.QuitGame
// (Final, Defined, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.QuitGame");

	UUIGameMoviePlayer_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.PromptToQuit
// (Defined, Singular, NetReliable, Simulated, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_PromptToQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.PromptToQuit");

	UUIGameMoviePlayer_PromptToQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.SetRenderTargetEnabled
// (Final, Defined, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bEnabled                       (Parm)
// int                            surfaceId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_SetRenderTargetEnabled(bool bEnabled, int surfaceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.SetRenderTargetEnabled");

	UUIGameMoviePlayer_SetRenderTargetEnabled_Params params;
	params.bEnabled = bEnabled;
	params.surfaceId = surfaceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.usc_resize_browser
// (Defined, Iterator, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            surfaceId                      (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIGameMoviePlayer::STATIC_usc_resize_browser(int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_resize_browser");

	UUIGameMoviePlayer_usc_resize_browser_Params params;
	params.surfaceId = surfaceId;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIGameMoviePlayer.usc_enable_browser_input
// (Final, Defined, Iterator, Latent, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bEnable                        (Parm)

void UUIGameMoviePlayer::STATIC_usc_enable_browser_input(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_enable_browser_input");

	UUIGameMoviePlayer_usc_enable_browser_input_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_chat_close_tab
// (Defined, Latent, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 Sender                         (Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_usc_chat_close_tab(int nChannel, const struct FString& Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_chat_close_tab");

	UUIGameMoviePlayer_usc_chat_close_tab_Params params;
	params.nChannel = nChannel;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_resend_private_messages
// (Final, Iterator, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_usc_resend_private_messages()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_resend_private_messages");

	UUIGameMoviePlayer_usc_resend_private_messages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_vgs_command
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// int                            nId                            (Parm)
// bool                           bSubMenu                       (Parm)

void UUIGameMoviePlayer::STATIC_usc_vgs_command(int nId, bool bSubMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_vgs_command");

	UUIGameMoviePlayer_usc_vgs_command_Params params;
	params.nId = nId;
	params.bSubMenu = bSubMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.usc_toggle_player_mute
// (Final, Defined, Latent, PreOperator, Singular, Net, Native, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UUIGameMoviePlayer::STATIC_usc_toggle_player_mute(const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.usc_toggle_player_mute");

	UUIGameMoviePlayer_usc_toggle_player_mute_Params params;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.ToggleSkillScreen
// (Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bShow                          (Parm)

void UUIGameMoviePlayer::STATIC_ToggleSkillScreen(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.ToggleSkillScreen");

	UUIGameMoviePlayer_ToggleSkillScreen_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIGameMoviePlayer.DumpMctsEventProfiling
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Native, Static, HasOptionalParms)

void UUIGameMoviePlayer::STATIC_DumpMctsEventProfiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIGameMoviePlayer.DumpMctsEventProfiling");

	UUIGameMoviePlayer_DumpMctsEventProfiling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.RequestCustomGames
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void ATgLobbyHUD::STATIC_RequestCustomGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.RequestCustomGames");

	ATgLobbyHUD_RequestCustomGames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.ChangePedestalModel
// (Iterator, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// TEnumAsByte<EPedestalType>     PedestalType                   (Parm)
// int                            BotId                          (Parm)
// int                            SkinId                         (Parm)
// int                            HeadId                         (Parm)
// int                            DeviceID                       (Parm)
// int                            DeviceSkinId                   (Parm)
// int                            MVPId                          (OptionalParm, Parm)
// int                            nContrailSkinId                (OptionalParm, Parm)
// int                            CharacterMastery               (OptionalParm, Parm)

void ATgLobbyHUD::STATIC_ChangePedestalModel(TEnumAsByte<EPedestalType> PedestalType, int BotId, int SkinId, int HeadId, int DeviceID, int DeviceSkinId, int MVPId, int nContrailSkinId, int CharacterMastery)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.ChangePedestalModel");

	ATgLobbyHUD_ChangePedestalModel_Params params;
	params.PedestalType = PedestalType;
	params.BotId = BotId;
	params.SkinId = SkinId;
	params.HeadId = HeadId;
	params.DeviceID = DeviceID;
	params.DeviceSkinId = DeviceSkinId;
	params.MVPId = MVPId;
	params.nContrailSkinId = nContrailSkinId;
	params.CharacterMastery = CharacterMastery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.StopSkydive
// (Final, Defined, PreOperator, Singular, NetReliable, Exec, Native, Event, HasOptionalParms)

void ATgLobbyHUD::StopSkydive()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.StopSkydive");

	ATgLobbyHUD_StopSkydive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.StopMVP
// (Iterator, Latent, Singular, NetReliable, Exec, Native, Event, HasOptionalParms)

void ATgLobbyHUD::StopMVP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.StopMVP");

	ATgLobbyHUD_StopMVP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.PlayMVP
// (Final, Iterator, Latent, Net, Simulated, HasOptionalParms)
// Parameters:
// int                            nDeviceId                      (Parm)

void ATgLobbyHUD::PlayMVP(int nDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.PlayMVP");

	ATgLobbyHUD_PlayMVP_Params params;
	params.nDeviceId = nDeviceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.StopEmote
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Native, Event, HasOptionalParms)

void ATgLobbyHUD::StopEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.StopEmote");

	ATgLobbyHUD_StopEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.PlayEmote
// (Defined, Latent, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// int                            nDeviceId                      (Parm)

void ATgLobbyHUD::PlayEmote(int nDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.PlayEmote");

	ATgLobbyHUD_PlayEmote_Params params;
	params.nDeviceId = nDeviceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.ChangeModel
// (Final, Defined, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// int                            BotId                          (Parm)
// int                            SkinId                         (Parm)
// int                            HeadId                         (Parm)
// int                            DeviceID                       (Parm)
// int                            DeviceSkinId                   (Parm)
// int                            PedestalSkinId                 (Parm)
// int                            ContrailSkinId                 (Parm)
// unsigned char                  pose                           (OptionalParm, Parm)
// TEnumAsByte<ELobbyCameraTag>   CameraTag                      (OptionalParm, Parm)
// float                          BlendTime                      (OptionalParm, Parm)
// TEnumAsByte<EViewTargetBlendFunction> BlendFunction                  (OptionalParm, Parm)
// float                          BlendExp                       (OptionalParm, Parm)
// TEnumAsByte<EModelHighlightType> HighlightType                  (OptionalParm, Parm)
// int                            MVPDeviceId                    (OptionalParm, Parm)

void ATgLobbyHUD::STATIC_ChangeModel(int BotId, int SkinId, int HeadId, int DeviceID, int DeviceSkinId, int PedestalSkinId, int ContrailSkinId, unsigned char pose, TEnumAsByte<ELobbyCameraTag> CameraTag, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExp, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.ChangeModel");

	ATgLobbyHUD_ChangeModel_Params params;
	params.BotId = BotId;
	params.SkinId = SkinId;
	params.HeadId = HeadId;
	params.DeviceID = DeviceID;
	params.DeviceSkinId = DeviceSkinId;
	params.PedestalSkinId = PedestalSkinId;
	params.ContrailSkinId = ContrailSkinId;
	params.pose = pose;
	params.CameraTag = CameraTag;
	params.BlendTime = BlendTime;
	params.BlendFunction = BlendFunction;
	params.BlendExp = BlendExp;
	params.HighlightType = HighlightType;
	params.MVPDeviceId = MVPDeviceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.SwitchToCards
// (Latent, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// bool                           bEnabled                       (Parm)

void ATgLobbyHUD::STATIC_SwitchToCards(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.SwitchToCards");

	ATgLobbyHUD_SwitchToCards_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.PostBeginPlay
// (Final, Latent, Net, Simulated)

void ATgLobbyHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.PostBeginPlay");

	ATgLobbyHUD_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TryPushScene
// (Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// bool                           bSkipPrivilegeCheck            (OptionalParm, Parm)

void ATgLobbyHUD::STATIC_TryPushScene(const struct FString& sName, bool bSkipPrivilegeCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.TryPushScene");

	ATgLobbyHUD_TryPushScene_Params params;
	params.sName = sName;
	params.bSkipPrivilegeCheck = bSkipPrivilegeCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.TriggerLazyPrecache
// (Final, Iterator, Latent, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms)

void ATgLobbyHUD::STATIC_TriggerLazyPrecache()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.TriggerLazyPrecache");

	ATgLobbyHUD_TriggerLazyPrecache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.DisplayCharacter
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Native, Static, HasOptionalParms)

void ATgLobbyHUD::STATIC_DisplayCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.DisplayCharacter");

	ATgLobbyHUD_DisplayCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.PreviewItem
// (Singular, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)
// Parameters:
// TEnumAsByte<ELobbyCameraTag>   CamTag                         (Parm)
// int                            nItemIdToPreview               (Parm)
// int                            nTargetIndex                   (OptionalParm, Parm)

void ATgLobbyHUD::STATIC_PreviewItem(TEnumAsByte<ELobbyCameraTag> CamTag, int nItemIdToPreview, int nTargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.PreviewItem");

	ATgLobbyHUD_PreviewItem_Params params;
	params.CamTag = CamTag;
	params.nItemIdToPreview = nItemIdToPreview;
	params.nTargetIndex = nTargetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.SwitchToCamera
// (Final, Defined, Iterator, NetReliable, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// TEnumAsByte<ELobbyCameraTag>   CamTag                         (Parm)
// TEnumAsByte<ECameraTransType>  camDirection                   (OptionalParm, Parm)
// bool                           bForce                         (OptionalParm, Parm)
// bool                           bForceCameraReset              (OptionalParm, Parm)
// struct FViewTargetTransitionParams BlendParams                    (OptionalParm, Parm)
// class ATgLobbyCamera*          ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgLobbyCamera* ATgLobbyHUD::STATIC_SwitchToCamera(TEnumAsByte<ELobbyCameraTag> CamTag, TEnumAsByte<ECameraTransType> camDirection, bool bForce, bool bForceCameraReset, const struct FViewTargetTransitionParams& BlendParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.SwitchToCamera");

	ATgLobbyHUD_SwitchToCamera_Params params;
	params.CamTag = CamTag;
	params.camDirection = camDirection;
	params.bForce = bForce;
	params.bForceCameraReset = bForceCameraReset;
	params.BlendParams = BlendParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.GetCamera
// (Final, Defined, Latent, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// TEnumAsByte<ELobbyCameraTag>   CamTag                         (Parm)
// class ATgLobbyCamera*          ReturnValue                    (Parm, OutParm, ReturnParm)

class ATgLobbyCamera* ATgLobbyHUD::STATIC_GetCamera(TEnumAsByte<ELobbyCameraTag> CamTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.GetCamera");

	ATgLobbyHUD_GetCamera_Params params;
	params.CamTag = CamTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.CleanupPedestalModels
// (Defined, Iterator, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)

void ATgLobbyHUD::STATIC_CleanupPedestalModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.CleanupPedestalModels");

	ATgLobbyHUD_CleanupPedestalModels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.ChangeTeamModel
// (Final, Iterator, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// bool                           bFriendly                      (Parm)
// int                            nIndex                         (Parm)
// int                            nClassID                       (Parm)
// int                            nSkinId                        (Parm)
// int                            nHeadId                        (Parm)
// int                            nDeviceId                      (Parm)
// int                            nDeviceSkinId                  (Parm)
// int                            nPedestalSkinId                (Parm)
// TEnumAsByte<ELobbyAnimPose>    pose                           (Parm)
// bool                           bAsync                         (OptionalParm, Parm)
// TEnumAsByte<EModelHighlightType> HighlightType                  (OptionalParm, Parm)
// int                            MVPDeviceId                    (OptionalParm, Parm)
// int                            nContrailSkinId                (OptionalParm, Parm)
// int                            nCharacterXP                   (OptionalParm, Parm)
// struct FScriptDelegate         MeshUpdatedDelegate            (OptionalParm, Parm, NeedCtorLink)

void ATgLobbyHUD::STATIC_ChangeTeamModel(bool bFriendly, int nIndex, int nClassID, int nSkinId, int nHeadId, int nDeviceId, int nDeviceSkinId, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId, int nContrailSkinId, int nCharacterXP, const struct FScriptDelegate& MeshUpdatedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.ChangeTeamModel");

	ATgLobbyHUD_ChangeTeamModel_Params params;
	params.bFriendly = bFriendly;
	params.nIndex = nIndex;
	params.nClassID = nClassID;
	params.nSkinId = nSkinId;
	params.nHeadId = nHeadId;
	params.nDeviceId = nDeviceId;
	params.nDeviceSkinId = nDeviceSkinId;
	params.nPedestalSkinId = nPedestalSkinId;
	params.pose = pose;
	params.bAsync = bAsync;
	params.HighlightType = HighlightType;
	params.MVPDeviceId = MVPDeviceId;
	params.nContrailSkinId = nContrailSkinId;
	params.nCharacterXP = nCharacterXP;
	params.MeshUpdatedDelegate = MeshUpdatedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.RotateModel
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, HasOptionalParms)
// Parameters:
// float                          fValue                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgLobbyHUD::RotateModel(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.RotateModel");

	ATgLobbyHUD_RotateModel_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.ChangeClassModel
// (Final, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// bool                           bFriendly                      (Parm)
// int                            nIndex                         (Parm)
// int                            nClassID                       (Parm)
// int                            nSkinId                        (Parm)
// int                            nHeadId                        (Parm)
// int                            nDeviceId                      (Parm)
// int                            nDeployableId                  (Parm)
// int                            nMarkerId                      (Parm)
// int                            nDeviceSkinId                  (Parm)
// int                            nPedestalSkinId                (Parm)
// TEnumAsByte<ELobbyAnimPose>    pose                           (Parm)
// TEnumAsByte<ECameraTransType>  camDirection                   (OptionalParm, Parm)
// bool                           bAsync                         (OptionalParm, Parm)
// TEnumAsByte<EModelHighlightType> HighlightType                  (OptionalParm, Parm)
// int                            MVPDeviceId                    (OptionalParm, Parm)
// int                            nContrailSkinId                (OptionalParm, Parm)

void ATgLobbyHUD::STATIC_ChangeClassModel(bool bFriendly, int nIndex, int nClassID, int nSkinId, int nHeadId, int nDeviceId, int nDeployableId, int nMarkerId, int nDeviceSkinId, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, TEnumAsByte<ECameraTransType> camDirection, bool bAsync, TEnumAsByte<EModelHighlightType> HighlightType, int MVPDeviceId, int nContrailSkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.ChangeClassModel");

	ATgLobbyHUD_ChangeClassModel_Params params;
	params.bFriendly = bFriendly;
	params.nIndex = nIndex;
	params.nClassID = nClassID;
	params.nSkinId = nSkinId;
	params.nHeadId = nHeadId;
	params.nDeviceId = nDeviceId;
	params.nDeployableId = nDeployableId;
	params.nMarkerId = nMarkerId;
	params.nDeviceSkinId = nDeviceSkinId;
	params.nPedestalSkinId = nPedestalSkinId;
	params.pose = pose;
	params.camDirection = camDirection;
	params.bAsync = bAsync;
	params.HighlightType = HighlightType;
	params.MVPDeviceId = MVPDeviceId;
	params.nContrailSkinId = nContrailSkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.SetUpEOMLobby
// (Final, Iterator, Latent, Net, Exec, Operator, Static, HasOptionalParms)

void ATgLobbyHUD::STATIC_SetUpEOMLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.SetUpEOMLobby");

	ATgLobbyHUD_SetUpEOMLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.HaveEOMLobbyData
// (Final, Iterator, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgLobbyHUD::STATIC_HaveEOMLobbyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.HaveEOMLobbyData");

	ATgLobbyHUD_HaveEOMLobbyData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSettingsManager.GetKeybindExtended
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)
// int                            nAlt                           (Parm)
// int                            nBotId                         (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgSettingsManager::STATIC_GetKeybindExtended(const struct FString& sCommand, int nAlt, int nBotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSettingsManager.GetKeybindExtended");

	UTgSettingsManager_GetKeybindExtended_Params params;
	params.sCommand = sCommand;
	params.nAlt = nAlt;
	params.nBotId = nBotId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.OnKeyboardUIComplete
// (Final, Iterator, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)
// Parameters:
// struct FString                 sResult                        (Parm, NeedCtorLink)
// unsigned char                  bCanceled                      (Parm)

void UUIComponent::STATIC_OnKeyboardUIComplete(const struct FString& sResult, unsigned char bCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.OnKeyboardUIComplete");

	UUIComponent_OnKeyboardUIComplete_Params params;
	params.sResult = sResult;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.GetYMouse
// (PreOperator, Singular, Net, NetReliable, Native, Operator, Static, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::STATIC_GetYMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.GetYMouse");

	UUIComponent_GetYMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.GetXMouse
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Native, Operator, Static, HasOptionalParms)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::STATIC_GetXMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.GetXMouse");

	UUIComponent_GetXMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.HandleAnimEvent
// (Defined, Iterator, Latent, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// int                            nEventType                     (Parm)
// TArray<float>                  fExtraData                     (OptionalParm, Parm, NeedCtorLink)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::HandleAnimEvent(int nEventType, TArray<float> fExtraData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.HandleAnimEvent");

	UUIComponent_HandleAnimEvent_Params params;
	params.nEventType = nEventType;
	params.fExtraData = fExtraData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.ClearQueuedSounds
// (Latent, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (OptionalParm, Parm)

void UUIComponent::STATIC_ClearQueuedSounds(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.ClearQueuedSounds");

	UUIComponent_ClearQueuedSounds_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.QueueSound
// (Defined, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// float                          fDelay                         (Parm)

void UUIComponent::STATIC_QueueSound(class UAkBaseSoundObject* akSound, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.QueueSound");

	UUIComponent_QueueSound_Params params;
	params.akSound = akSound;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.IsSoundQueued
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIComponent::STATIC_IsSoundQueued(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.IsSoundQueued");

	UUIComponent_IsSoundQueued_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.EndAnim
// (Final, Defined, PreOperator, Singular, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)

void UUIComponent::STATIC_EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.EndAnim");

	UUIComponent_EndAnim_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.GetAnimationTarget
// (Defined, Latent, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIComponent::STATIC_GetAnimationTarget(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.GetAnimationTarget");

	UUIComponent_GetAnimationTarget_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.IsAnimating
// (Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIComponent::STATIC_IsAnimating(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.IsAnimating");

	UUIComponent_IsAnimating_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIComponent.QueueAnim
// (Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)

void UUIComponent::STATIC_QueueAnim(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, unsigned char eQuad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.QueueAnim");

	UUIComponent_QueueAnim_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.eQuad = eQuad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.Animate
// (Final, Iterator, Latent, Net, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)
// bool                           bEndCurrentAnim                (OptionalParm, Parm)

void UUIComponent::STATIC_Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.Animate");

	UUIComponent_Animate_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;
	params.bEndCurrentAnim = bEndCurrentAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeOut
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.FadeOut");

	UUIComponent_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeIn
// (Final, Defined, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.FadeIn");

	UUIComponent_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.AnimateAsWell
// (Defined, Iterator, Latent, Net, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)

void UUIComponent::STATIC_AnimateAsWell(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.AnimateAsWell");

	UUIComponent_AnimateAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeOutAsWell
// (Final, Defined, Singular, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::STATIC_FadeOutAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.FadeOutAsWell");

	UUIComponent_FadeOutAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent.FadeInAsWell
// (Defined, Singular, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent::STATIC_FadeInAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent.FadeInAsWell");

	UUIComponent_FadeInAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_HealFeed.HideHealSource
// (Final, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// int                            nColumn                        (Parm)

void UUIComponent_HealFeed::HideHealSource(int nColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_HealFeed.HideHealSource");

	UUIComponent_HealFeed_HideHealSource_Params params;
	params.nColumn = nColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_HealFeed.ShowHealSource
// (Iterator, Latent, Simulated, HasOptionalParms)
// Parameters:
// int                            nColumn                        (Parm)

void UUIComponent_HealFeed::ShowHealSource(int nColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_HealFeed.ShowHealSource");

	UUIComponent_HealFeed_ShowHealSource_Params params;
	params.nColumn = nColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_HealFeed.HideHealGlow
// (PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// int                            nColumn                        (Parm)

void UUIComponent_HealFeed::HideHealGlow(int nColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_HealFeed.HideHealGlow");

	UUIComponent_HealFeed_HideHealGlow_Params params;
	params.nColumn = nColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_HealFeed.ShowHealGlow
// (Final, Defined, Latent, Simulated, HasOptionalParms)
// Parameters:
// int                            nColumn                        (Parm)

void UUIComponent_HealFeed::ShowHealGlow(int nColumn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_HealFeed.ShowHealGlow");

	UUIComponent_HealFeed_ShowHealGlow_Params params;
	params.nColumn = nColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_HealFeedEntry.QueueAnimation
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FVector                 vAnimOrigin                    (Parm)

void UUIComponent_HealFeedEntry::QueueAnimation(const struct FVector& vAnimOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_HealFeedEntry.QueueAnimation");

	UUIComponent_HealFeedEntry_QueueAnimation_Params params;
	params.vAnimOrigin = vAnimOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_ItemPreviewStack.OnLoadingScreenLoaded
// (Defined, Iterator, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void UUIComponent_ItemPreviewStack::STATIC_OnLoadingScreenLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_ItemPreviewStack.OnLoadingScreenLoaded");

	UUIComponent_ItemPreviewStack_OnLoadingScreenLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_ItemPreviewStack.PreviewLoadingScreen
// (Final, Singular, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void UUIComponent_ItemPreviewStack::STATIC_PreviewLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_ItemPreviewStack.PreviewLoadingScreen");

	UUIComponent_ItemPreviewStack_PreviewLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_ItemPreviewStack.InitLoadingScreenManifest
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Native, Operator, Static, HasOptionalParms)

void UUIComponent_ItemPreviewStack::STATIC_InitLoadingScreenManifest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_ItemPreviewStack.InitLoadingScreenManifest");

	UUIComponent_ItemPreviewStack_InitLoadingScreenManifest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_TitlesView.FadeOut
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent_TitlesView::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_TitlesView.FadeOut");

	UUIComponent_TitlesView_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_TitlesView.FadeIn
// (Final, Defined, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIComponent_TitlesView::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_TitlesView.FadeIn");

	UUIComponent_TitlesView_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.ClearQueuedSounds
// (Latent, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (OptionalParm, Parm)

void UUIScene::STATIC_ClearQueuedSounds(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.ClearQueuedSounds");

	UUIScene_ClearQueuedSounds_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.QueueSound
// (Defined, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// float                          fDelay                         (Parm)

void UUIScene::STATIC_QueueSound(class UAkBaseSoundObject* akSound, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.QueueSound");

	UUIScene_QueueSound_Params params;
	params.akSound = akSound;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.IsSoundQueued
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScene::STATIC_IsSoundQueued(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.IsSoundQueued");

	UUIScene_IsSoundQueued_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIScene.EndAnim
// (Final, Defined, PreOperator, Singular, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)

void UUIScene::STATIC_EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.EndAnim");

	UUIScene_EndAnim_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.GetAnimationTarget
// (Defined, Latent, Net, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIScene::STATIC_GetAnimationTarget(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.GetAnimationTarget");

	UUIScene_GetAnimationTarget_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIScene.IsAnimating
// (Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIScene::STATIC_IsAnimating(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.IsAnimating");

	UUIScene_IsAnimating_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.UIScene.QueueAnim
// (Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)

void UUIScene::STATIC_QueueAnim(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, unsigned char eQuad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.QueueAnim");

	UUIScene_QueueAnim_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.eQuad = eQuad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.Animate
// (Final, Iterator, Latent, Net, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)
// bool                           bEndCurrentAnim                (OptionalParm, Parm)

void UUIScene::STATIC_Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.Animate");

	UUIScene_Animate_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;
	params.bEndCurrentAnim = bEndCurrentAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeOutAsWell
// (Final, Defined, Singular, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::STATIC_FadeOutAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.FadeOutAsWell");

	UUIScene_FadeOutAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeInAsWell
// (Defined, Singular, Net, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::STATIC_FadeInAsWell(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.FadeInAsWell");

	UUIScene_FadeInAsWell_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeOut
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.FadeOut");

	UUIScene_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene.FadeIn
// (Final, Defined, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UUIScene::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene.FadeIn");

	UUIScene_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIFooterGamepad.Thaw
// (Final, Defined, PreOperator, NetReliable, Exec, Operator, Static, HasOptionalParms)

void UUIScene_UIFooterGamepad::STATIC_Thaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene_UIFooterGamepad.Thaw");

	UUIScene_UIFooterGamepad_Thaw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIScene_UIFooterGamepad.Freeze
// (Final, Defined, Latent, PreOperator, Net, Exec, Native, Event, Operator)

void UUIScene_UIFooterGamepad::Freeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIScene_UIFooterGamepad.Freeze");

	UUIScene_UIFooterGamepad_Freeze_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIComponent_ProgressBarHorizontal.IsValid
// (Final, Defined, PreOperator, Net, Simulated, Exec, Event, Static, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIComponent_ProgressBarHorizontal::STATIC_IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIComponent_ProgressBarHorizontal.IsValid");

	UUIComponent_ProgressBarHorizontal_IsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxScene.HandleAnimState
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// int                            nAnimState                     (Parm)
// int                            nAnimGroup                     (OptionalParm, Parm)

void UTgGfxScene::HandleAnimState(int nAnimState, int nAnimGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.HandleAnimState");

	UTgGfxScene_HandleAnimState_Params params;
	params.nAnimState = nAnimState;
	params.nAnimGroup = nAnimGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.SlamOutAnim
// (Latent, Singular, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::STATIC_SlamOutAnim(class UGFxObject* pObj, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.SlamOutAnim");

	UTgGfxScene_SlamOutAnim_Params params;
	params.pObj = pObj;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.SlamInAnim
// (Final, Defined, Iterator, Singular, Net, Exec, Operator, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::STATIC_SlamInAnim(class UGFxObject* pObj, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.SlamInAnim");

	UTgGfxScene_SlamInAnim_Params params;
	params.pObj = pObj;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Highlight
// (Defined, Iterator, Net, NetReliable, Exec, Native, Event, Operator, Static)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// bool                           bShow                          (Parm)
// float                          fTime                          (OptionalParm, Parm)

void UTgGfxScene::STATIC_Highlight(class UGFxObject* pObj, bool bShow, float fTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.Highlight");

	UTgGfxScene_Highlight_Params params;
	params.pObj = pObj;
	params.bShow = bShow;
	params.fTime = fTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.FadeOut
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::FadeOut(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.FadeOut");

	UTgGfxScene_FadeOut_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.FadeIn
// (Final, Defined, PreOperator, Singular, Net, Event, HasOptionalParms, Const)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (OptionalParm, Parm)
// float                          fDelay                         (OptionalParm, Parm)

void UTgGfxScene::FadeIn(class UGFxObject* pObj, float fTime, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.FadeIn");

	UTgGfxScene_FadeIn_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.ClearQueuedSounds
// (Latent, PreOperator, Net, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (OptionalParm, Parm)

void UTgGfxScene::STATIC_ClearQueuedSounds(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.ClearQueuedSounds");

	UTgGfxScene_ClearQueuedSounds_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.QueueSound
// (Defined, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// float                          fDelay                         (Parm)

void UTgGfxScene::STATIC_QueueSound(class UAkBaseSoundObject* akSound, float fDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.QueueSound");

	UTgGfxScene_QueueSound_Params params;
	params.akSound = akSound;
	params.fDelay = fDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.IsSoundQueued
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UAkBaseSoundObject*      akSound                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxScene::STATIC_IsSoundQueued(class UAkBaseSoundObject* akSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.IsSoundQueued");

	UTgGfxScene_IsSoundQueued_Params params;
	params.akSound = akSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxScene.IsAnimatingType
// (Final, Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxScene::STATIC_IsAnimatingType(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.IsAnimatingType");

	UTgGfxScene_IsAnimatingType_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxScene.IsAnimating
// (Singular, Net, NetReliable, Exec, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxScene::STATIC_IsAnimating(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.IsAnimating");

	UTgGfxScene_IsAnimating_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxScene.EndAnim
// (Final, Defined, PreOperator, Singular, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)

void UTgGfxScene::STATIC_EndAnim(class UGFxObject* pObj, TEnumAsByte<EUIANIMTYPE> eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.EndAnim");

	UTgGfxScene_EndAnim_Params params;
	params.pObj = pObj;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.CancelAnim
// (Final, Iterator, PreOperator, Singular, NetReliable, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::STATIC_CancelAnim(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.CancelAnim");

	UTgGfxScene_CancelAnim_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Animate
// (Final, Iterator, Latent, Net, Native, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// float                          fTime                          (Parm)
// TEnumAsByte<EUIANIMTYPE>       eType                          (Parm)
// float                          fValue                         (Parm)
// float                          fDelay                         (OptionalParm, Parm)
// unsigned char                  eQuad                          (OptionalParm, Parm)
// bool                           bEndCurrentAnim                (OptionalParm, Parm)

void UTgGfxScene::STATIC_Animate(class UGFxObject* pObj, float fTime, TEnumAsByte<EUIANIMTYPE> eType, float fValue, float fDelay, unsigned char eQuad, bool bEndCurrentAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.Animate");

	UTgGfxScene_Animate_Params params;
	params.pObj = pObj;
	params.fTime = fTime;
	params.eType = eType;
	params.fValue = fValue;
	params.fDelay = fDelay;
	params.eQuad = eQuad;
	params.bEndCurrentAnim = bEndCurrentAnim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Click
// (Final, Defined, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Click(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.Click");

	UTgGfxScene_Click_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Rollout
// (Defined, Simulated, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Rollout(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.Rollout");

	UTgGfxScene_Rollout_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Rollover
// (Final, Defined, Simulated, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Rollover(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.Rollover");

	UTgGfxScene_Rollover_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.Focus
// (Final, Defined, Iterator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxScene::Focus(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.Focus");

	UTgGfxScene_Focus_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.ReceiveEvent
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Operator, Static, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// int                            nEvent                         (Parm)

void UTgGfxScene::STATIC_ReceiveEvent(class UGFxObject* pObj, int nEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.ReceiveEvent");

	UTgGfxScene_ReceiveEvent_Params params;
	params.pObj = pObj;
	params.nEvent = nEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxScene.DelegateEvent
// (Final, Iterator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// class UGFxObject*              pObj                           (Parm)
// int                            nEvent                         (Parm)

void UTgGfxScene::DelegateEvent(class UGFxObject* pObj, int nEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxScene.DelegateEvent");

	UTgGfxScene_DelegateEvent_Params params;
	params.pObj = pObj;
	params.nEvent = nEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudCenter.GetCatapultAimScreenLocation
// (Final, Latent, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// float                          fClipSize                      (Parm)
// class UCanvas*                 pCanvas                        (Parm)
// struct FVector                 CameraRotation                 (Parm)
// struct FVector                 CatapultDirection              (Parm)
// struct FVector                 ScreenLocation                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIHudCenter::GetCatapultAimScreenLocation(float fClipSize, class UCanvas* pCanvas, const struct FVector& CameraRotation, const struct FVector& CatapultDirection, struct FVector* ScreenLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudCenter.GetCatapultAimScreenLocation");

	UUIHudCenter_GetCatapultAimScreenLocation_Params params;
	params.fClipSize = fClipSize;
	params.pCanvas = pCanvas;
	params.CameraRotation = CameraRotation;
	params.CatapultDirection = CatapultDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;

	return params.ReturnValue;
}


// Function TgClient.UIHudCenter.TriggerPounceReticleAnim
// (Defined, PreOperator, Simulated, HasOptionalParms)
// Parameters:
// bool                           bPounceReady                   (Parm)

void UUIHudCenter::TriggerPounceReticleAnim(bool bPounceReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudCenter.TriggerPounceReticleAnim");

	UUIHudCenter_TriggerPounceReticleAnim_Params params;
	params.bPounceReady = bPounceReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudMap.AddNamedArea
// (Defined, Net, Native, Static, HasOptionalParms)
// Parameters:
// class ATgNamedPOIActor*        pPOI                           (Parm)

void UUIHudMap::STATIC_AddNamedArea(class ATgNamedPOIActor* pPOI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudMap.AddNamedArea");

	UUIHudMap_AddNamedArea_Params params;
	params.pPOI = pPOI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudMinimap.AnimateObjectiveCheck
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms)
// Parameters:
// class UGFxObject*              pCheck                         (Parm)

void UUIHudMinimap::AnimateObjectiveCheck(class UGFxObject* pCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudMinimap.AnimateObjectiveCheck");

	UUIHudMinimap_AnimateObjectiveCheck_Params params;
	params.pCheck = pCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudMinimap.AddNamedArea
// (Defined, Net, Native, Static, HasOptionalParms)
// Parameters:
// class ATgNamedPOIActor*        pPOI                           (Parm)

void UUIHudMinimap::STATIC_AddNamedArea(class ATgNamedPOIActor* pPOI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudMinimap.AddNamedArea");

	UUIHudMinimap_AddNamedArea_Params params;
	params.pPOI = pPOI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudOverlay.ScaleAdvancedDamage
// (Iterator, Simulated, HasOptionalParms)
// Parameters:
// struct FDamageOverlayData      Data                           (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UUIHudOverlay::ScaleAdvancedDamage(struct FDamageOverlayData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudOverlay.ScaleAdvancedDamage");

	UUIHudOverlay_ScaleAdvancedDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function TgClient.UIHudOverlay.AnimateAdvancedDamage
// (Iterator, Latent, PreOperator, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FDamageOverlayData      Data                           (Parm, OutParm)

void UUIHudOverlay::AnimateAdvancedDamage(struct FDamageOverlayData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudOverlay.AnimateAdvancedDamage");

	UUIHudOverlay_AnimateAdvancedDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TgClient.UIHudOverlay.InitAdvancedDamage
// (Defined, PreOperator, Singular, Net, NetReliable, HasOptionalParms)
// Parameters:
// struct FDamageOverlayData      Data                           (Parm, OutParm)
// bool                           bHeadShot                      (Parm)

void UUIHudOverlay::InitAdvancedDamage(bool bHeadShot, struct FDamageOverlayData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudOverlay.InitAdvancedDamage");

	UUIHudOverlay_InitAdvancedDamage_Params params;
	params.bHeadShot = bHeadShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function TgClient.UIHudOverlay.OnForgeItemFinish
// (Iterator, NetReliable, Simulated, Event, Operator, Static, HasOptionalParms)

void UUIHudOverlay::STATIC_OnForgeItemFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudOverlay.OnForgeItemFinish");

	UUIHudOverlay_OnForgeItemFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.UIHudOverlay.ShowScope
// (Final, Iterator, PreOperator, Simulated, Exec, Static, HasOptionalParms)
// Parameters:
// bool                           bShow                          (Parm)
// unsigned char                  eType                          (OptionalParm, Parm)

void UUIHudOverlay::STATIC_ShowScope(bool bShow, unsigned char eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.UIHudOverlay.ShowScope");

	UUIHudOverlay_ShowScope_Params params;
	params.bShow = bShow;
	params.eType = eType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgIconGroup.OnManifestLoaded
// (Final, Latent, Net, Simulated, Operator, Static, HasOptionalParms)

void UTgIconGroup::STATIC_OnManifestLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgIconGroup.OnManifestLoaded");

	UTgIconGroup_OnManifestLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

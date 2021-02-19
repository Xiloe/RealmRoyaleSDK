// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_PlatformCommon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatformCommon.PComGameEngine.HandlePlayerCommandInput
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 FSCommand                      (Parm, NeedCtorLink)
// class APlayerController*       PC                             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::STATIC_HandlePlayerCommandInput(const struct FString& FSCommand, class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.HandlePlayerCommandInput");

	UPComGameEngine_HandlePlayerCommandInput_Params params;
	params.FSCommand = FSCommand;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SendGameRequest
// (Final, Latent, PreOperator, Singular, Net)
// Parameters:
// struct FString                 fsRequest                      (Parm, NeedCtorLink)

void UPComGameEngine::SendGameRequest(const struct FString& fsRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendGameRequest");

	UPComGameEngine_SendGameRequest_Params params;
	params.fsRequest = fsRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendCtrlRequest
// (Latent, PreOperator, Singular, Net)
// Parameters:
// struct FString                 fsRequest                      (Parm, NeedCtorLink)

void UPComGameEngine::SendCtrlRequest(const struct FString& fsRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendCtrlRequest");

	UPComGameEngine_SendCtrlRequest_Params params;
	params.fsRequest = fsRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendMarshalAll
// (Final, Defined, Latent, PreOperator, Singular, Net)
// Parameters:
// bool                           bLowPriority                   (Parm)

void UPComGameEngine::SendMarshalAll(bool bLowPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendMarshalAll");

	UPComGameEngine_SendMarshalAll_Params params;
	params.bLowPriority = bLowPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SendMarshal
// (Defined, Latent, PreOperator, Singular, Net)
// Parameters:
// struct FUniqueNetId            qwPlayerId                     (Parm)
// bool                           bLowPriority                   (Parm)

void UPComGameEngine::SendMarshal(const struct FUniqueNetId& qwPlayerId, bool bLowPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SendMarshal");

	UPComGameEngine_SendMarshal_Params params;
	params.qwPlayerId = qwPlayerId;
	params.bLowPriority = bLowPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.ClearMarshal
// (Defined, Iterator, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComGameEngine::STATIC_ClearMarshal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.ClearMarshal");

	UPComGameEngine_ClearMarshal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameEngine.SetFieldString
// (Defined, Iterator, Latent, NetReliable)
// Parameters:
// int                            nToken                         (Parm)
// struct FString                 StrValue                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::SetFieldString(int nToken, const struct FString& StrValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFieldString");

	UPComGameEngine_SetFieldString_Params params;
	params.nToken = nToken;
	params.StrValue = StrValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFieldFloat
// (Iterator, Latent, NetReliable)
// Parameters:
// int                            nToken                         (Parm)
// float                          FloatValue                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::SetFieldFloat(int nToken, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFieldFloat");

	UPComGameEngine_SetFieldFloat_Params params;
	params.nToken = nToken;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFieldInt
// (Final, Iterator, Latent, NetReliable)
// Parameters:
// int                            nToken                         (Parm)
// int                            IntValue                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::SetFieldInt(int nToken, int IntValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFieldInt");

	UPComGameEngine_SetFieldInt_Params params;
	params.nToken = nToken;
	params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameEngine.SetFunction
// (Net, NetReliable, Exec, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            nFunction                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameEngine::STATIC_SetFunction(int nFunction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameEngine.SetFunction");

	UPComGameEngine_SetFunction_Params params;
	params.nFunction = nFunction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// struct FString                 OutError                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComGameViewportClient::Init(struct FString* OutError)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.Init");

	UPComGameViewportClient_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutError != nullptr)
		*OutError = params.OutError;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming
// (Defined, Iterator, Latent, Singular, NetReliable)

void UPComGameViewportClient::StartFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.StartFacebookStreaming");

	UPComGameViewportClient_StartFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming
// (Final, Iterator, PreOperator, Net, NetReliable)

void UPComGameViewportClient::StopRTMPStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.StopRTMPStreaming");

	UPComGameViewportClient_StopRTMPStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming
// (Final, Defined, Iterator, Latent, Singular, NetReliable)
// Parameters:
// struct FString                 InServer                       (Parm, NeedCtorLink)
// struct FString                 InKey                          (Parm, NeedCtorLink)

void UPComGameViewportClient::StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.StartRTMPStreaming");

	UPComGameViewportClient_StartRTMPStreaming_Params params;
	params.InServer = InServer;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.SetRTMPSettings
// (Defined, Iterator, PreOperator, NetReliable)
// Parameters:
// bool                           bAllowWebcam                   (Parm)
// bool                           bAllowMicrophone               (Parm)
// bool                           bAllowDesktopAudio             (Parm)

void UPComGameViewportClient::SetRTMPSettings(bool bAllowWebcam, bool bAllowMicrophone, bool bAllowDesktopAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.SetRTMPSettings");

	UPComGameViewportClient_SetRTMPSettings_Params params;
	params.bAllowWebcam = bAllowWebcam;
	params.bAllowMicrophone = bAllowMicrophone;
	params.bAllowDesktopAudio = bAllowDesktopAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComGameViewportClient::STATIC_CheckGameSettingsVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.CheckGameSettingsVersion");

	UPComGameViewportClient_CheckGameSettingsVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration
// (Final, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            OldGameSettingsVersion         (Parm)

void UPComGameViewportClient::STATIC_HandleGameSettingsMigration(int OldGameSettingsVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.HandleGameSettingsMigration");

	UPComGameViewportClient_HandleGameSettingsMigration_Params params;
	params.OldGameSettingsVersion = OldGameSettingsVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion
// (Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPComGameViewportClient::STATIC_GetCurrentGameSettingsVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.GetCurrentGameSettingsVersion");

	UPComGameViewportClient_GetCurrentGameSettingsVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler
// (Final, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComGameViewportClient::STATIC_InitDynamicResolutionScaler()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComGameViewportClient.InitDynamicResolutionScaler");

	UPComGameViewportClient_InitDynamicResolutionScaler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate
// (Final, Iterator, PreOperator, NetReliable)
// Parameters:
// struct FScriptDelegate         PComImageDownloadedDelegate    (Parm, NeedCtorLink)

void UPComImageDownloader::SetPComImageDownloadedDelegate(const struct FScriptDelegate& PComImageDownloadedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComImageDownloader.SetPComImageDownloadedDelegate");

	UPComImageDownloader_SetPComImageDownloadedDelegate_Params params;
	params.PComImageDownloadedDelegate = PComImageDownloadedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded
// (Final, PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FPComImageDownload      CachedEntry                    (Parm, NeedCtorLink)

void UPComImageDownloader::STATIC_OnPComImageDownloaded(const struct FPComImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComImageDownloader.OnPComImageDownloaded");

	UPComImageDownloader_OnPComImageDownloaded_Params params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid
// (Final, Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComInputLightingEffect::STATIC_IsLogitechSdkVersionValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.IsLogitechSdkVersionValid");

	UPComInputLightingEffect_IsLogitechSdkVersionValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComInputLightingEffect.SetCurrentTime
// (Final, Latent, NetReliable)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// float                          CurrentTime                    (Parm)

void UPComInputLightingEffect::SetCurrentTime(const struct FName& InPresetName, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.SetCurrentTime");

	UPComInputLightingEffect_SetCurrentTime_Params params;
	params.InPresetName = InPresetName;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.StopPreset
// (Iterator, PreOperator, Net, NetReliable)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void UPComInputLightingEffect::StopPreset(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.StopPreset");

	UPComInputLightingEffect_StopPreset_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.PlayPreset
// (Final, Iterator, Latent, Singular)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void UPComInputLightingEffect::PlayPreset(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.PlayPreset");

	UPComInputLightingEffect_PlayPreset_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.DisableSystem
// (Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComInputLightingEffect::STATIC_DisableSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.DisableSystem");

	UPComInputLightingEffect_DisableSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComInputLightingEffect.TryEnableSystem
// (Final, Defined, PreOperator, Singular, Net, NetReliable)

void UPComInputLightingEffect::TryEnableSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComInputLightingEffect.TryEnableSystem");

	UPComInputLightingEffect_TryEnableSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComJsonHandler.OnImageDownloaded
// (Iterator)
// Parameters:
// struct FPComImageDownload      CachedEntry                    (Parm, NeedCtorLink)

void UPComJsonHandler::OnImageDownloaded(const struct FPComImageDownload& CachedEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComJsonHandler.OnImageDownloaded");

	UPComJsonHandler_OnImageDownloaded_Params params;
	params.CachedEntry = CachedEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl
// (Final, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FString                 InRequest                      (Parm, NeedCtorLink)
// class UWebRequest*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UWebRequest* UPComOpenBroadcaster::STATIC_DecodeFacebookRTMPUrl(const struct FString& InRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.DecodeFacebookRTMPUrl");

	UPComOpenBroadcaster_DecodeFacebookRTMPUrl_Params params;
	params.InRequest = InRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UPComOpenBroadcaster::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.Tick");

	UPComOpenBroadcaster_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming
// (Final, Latent, PreOperator, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComOpenBroadcaster::STATIC_ForceStopStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.ForceStopStreaming");

	UPComOpenBroadcaster_ForceStopStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StopStreaming
// (Defined, Iterator, PreOperator, Net, NetReliable)

void UPComOpenBroadcaster::StopStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.StopStreaming");

	UPComOpenBroadcaster_StopStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming
// (Final, Defined, Iterator, Latent, Singular, NetReliable)
// Parameters:
// struct FString                 InServer                       (Parm, NeedCtorLink)
// struct FString                 InKey                          (Parm, NeedCtorLink)

void UPComOpenBroadcaster::StartRTMPStreaming(const struct FString& InServer, const struct FString& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.StartRTMPStreaming");

	UPComOpenBroadcaster_StartRTMPStreaming_Params params;
	params.InServer = InServer;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming
// (Defined, Iterator, Latent, Singular, NetReliable)

void UPComOpenBroadcaster::StartFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.StartFacebookStreaming");

	UPComOpenBroadcaster_StartFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming
// (Defined, PreOperator, Net)

void UPComOpenBroadcaster::QueueFacebookStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.QueueFacebookStreaming");

	UPComOpenBroadcaster_QueueFacebookStreaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings
// (Final, Latent, PreOperator, NetReliable)
// Parameters:
// struct FPComOpenBroadcasterSettings InSettings                     (Const, Parm, OutParm)

void UPComOpenBroadcaster::SetStreamSettings(struct FPComOpenBroadcasterSettings* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.SetStreamSettings");

	UPComOpenBroadcaster_SetStreamSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSettings != nullptr)
		*InSettings = params.InSettings;
}


// Function PlatformCommon.PComOpenBroadcaster.IsStreaming
// (Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComOpenBroadcaster::STATIC_IsStreaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.IsStreaming");

	UPComOpenBroadcaster_IsStreaming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)

void UPComOpenBroadcaster::STATIC_CloseWebBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.CloseWebBrowser");

	UPComOpenBroadcaster_CloseWebBrowser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser
// (Iterator, PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UPComOpenBroadcaster::STATIC_OpenWebBrowser(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.OpenWebBrowser");

	UPComOpenBroadcaster_OpenWebBrowser_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded
// (Final, Iterator, Latent, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComOpenBroadcaster::STATIC_IsWebBrowserLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.IsWebBrowserLoaded");

	UPComOpenBroadcaster_IsWebBrowserLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void UPComOpenBroadcaster::STATIC_PreloadWebBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComOpenBroadcaster.PreloadWebBrowser");

	UPComOpenBroadcaster_PreloadWebBrowser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit
// (Defined, Iterator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 FileNameWithExtension          (Parm, NeedCtorLink)
// struct FString                 FileContents                   (Parm, NeedCtorLink)
// struct FString                 SubfolderName                  (Parm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_CreateFileAndExit(const struct FString& FileNameWithExtension, const struct FString& FileContents, const struct FString& SubfolderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.CreateFileAndExit");

	UPComPerformanceCaptureBase_CreateFileAndExit_Params params;
	params.FileNameWithExtension = FileNameWithExtension;
	params.FileContents = FileContents;
	params.SubfolderName = SubfolderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats
// (Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Const, Parm, NeedCtorLink)
// struct FString                 FileContents                   (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetPerfStats(TArray<struct FPComPerformanceCaptureStat> PerfStats, struct FString* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetPerfStats");

	UPComPerformanceCaptureBase_GetPerfStats_Params params;
	params.PerfStats = PerfStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 FileContents                   (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetStatsToCollect(struct FString* FileContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetStatsToCollect");

	UPComPerformanceCaptureBase_GetStatsToCollect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime
// (Final, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 MapNameStr                     (Parm, OutParm, NeedCtorLink)
// struct FString                 FormattedDate                  (Parm, OutParm, NeedCtorLink)
// struct FString                 FormattedTime                  (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetMapNameAndTime(struct FString* MapNameStr, struct FString* FormattedDate, struct FString* FormattedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetMapNameAndTime");

	UPComPerformanceCaptureBase_GetMapNameAndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapNameStr != nullptr)
		*MapNameStr = params.MapNameStr;
	if (FormattedDate != nullptr)
		*FormattedDate = params.FormattedDate;
	if (FormattedTime != nullptr)
		*FormattedTime = params.FormattedTime;
}


// Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats
// (Defined, PreOperator, Net, NetReliable)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::StopCycleStats(TArray<struct FPComPerformanceCaptureStat>* PerfStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.StopCycleStats");

	UPComPerformanceCaptureBase_StopCycleStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerfStats != nullptr)
		*PerfStats = params.PerfStats;
}


// Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData
// (Final, Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<struct FPComPerformanceCaptureStat> PerfStats                      (Parm, OutParm, NeedCtorLink)

void UPComPerformanceCaptureBase::STATIC_GetPerformanceData(TArray<struct FPComPerformanceCaptureStat>* PerfStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.GetPerformanceData");

	UPComPerformanceCaptureBase_GetPerformanceData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerfStats != nullptr)
		*PerfStats = params.PerfStats;
}


// Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify
// (Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComPerformanceCaptureBase::STATIC_EnableStatNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.EnableStatNotify");

	UPComPerformanceCaptureBase_EnableStatNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComPerformanceCaptureBase::STATIC_EnableNonCycleStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.EnableNonCycleStats");

	UPComPerformanceCaptureBase_EnableNonCycleStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class APlayerController*       PlayerController               (Parm)
// class AActor*                  Node                           (Parm)

void UPComPerformanceCaptureBase::STATIC_MoveCamera(class APlayerController* PlayerController, class AActor* Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.MoveCamera");

	UPComPerformanceCaptureBase_MoveCamera_Params params;
	params.PlayerController = PlayerController;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings
// (Defined, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComPerformanceCaptureBase::STATIC_InitializePerformanceCaptureSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureBase.InitializePerformanceCaptureSettings");

	UPComPerformanceCaptureBase_InitializePerformanceCaptureSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPerformanceCaptureGame::STATIC_DoNextAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureGame.DoNextAction");

	APComPerformanceCaptureGame_DoNextAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes
// (Defined, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPerformanceCaptureGame::STATIC_CollectNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureGame.CollectNodes");

	APComPerformanceCaptureGame_CollectNodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay
// (Final, Latent, Net, Simulated)

void APComPerformanceCaptureGame::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPerformanceCaptureGame.PostBeginPlay");

	APComPerformanceCaptureGame_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.TestPictureInPicture
// (Singular, Net, NetReliable)

void UPComPictureInPicture::TestPictureInPicture()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.TestPictureInPicture");

	UPComPictureInPicture_TestPictureInPicture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.DebugRender
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UPComPictureInPicture::STATIC_DebugRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.DebugRender");

	UPComPictureInPicture_DebugRender_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.IsViewDescReady
// (Final, Defined, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FPComPipViewDesc        ViewDesc                       (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPictureInPicture::STATIC_IsViewDescReady(struct FPComPipViewDesc* ViewDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.IsViewDescReady");

	UPComPictureInPicture_IsViewDescReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewDesc != nullptr)
		*ViewDesc = params.ViewDesc;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPicture.IsViewReady
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FName                   ViewName                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPictureInPicture::STATIC_IsViewReady(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.IsViewReady");

	UPComPictureInPicture_IsViewReady_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPicture.RequestRender
// (Final, Iterator, Latent, PreOperator, Net)
// Parameters:
// struct FName                   ViewName                       (Parm)

void UPComPictureInPicture::RequestRender(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.RequestRender");

	UPComPictureInPicture_RequestRender_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.RemoveView
// (Defined, Latent, PreOperator, Net)
// Parameters:
// struct FName                   ViewName                       (Parm)

void UPComPictureInPicture::RemoveView(const struct FName& ViewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.RemoveView");

	UPComPictureInPicture_RemoveView_Params params;
	params.ViewName = ViewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.AddView
// (Final, Defined, PreOperator, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FPComPipViewDesc        InViewDesc                     (Const, Parm, OutParm, NeedCtorLink)

void UPComPictureInPicture::STATIC_AddView(struct FPComPipViewDesc* InViewDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.AddView");

	UPComPictureInPicture_AddView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InViewDesc != nullptr)
		*InViewDesc = params.InViewDesc;
}


// Function PlatformCommon.PComPictureInPicture.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)

void UPComPictureInPicture::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.Tick");

	UPComPictureInPicture_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget
// (Final, Defined, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComPictureInPicture::STATIC_InitializeRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPicture.InitializeRenderTarget");

	UPComPictureInPicture_InitializeRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetSkyColor
// (Latent, PreOperator, NetReliable)
// Parameters:
// struct FColor                  InSkyColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetSkyColor(struct FColor* InSkyColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetSkyColor");

	UPComPictureInPictureScene_SetSkyColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSkyColor != nullptr)
		*InSkyColor = params.InSkyColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness
// (Final, Defined, Iterator, PreOperator, NetReliable)
// Parameters:
// float                          InSkyBrightness                (Parm)

void UPComPictureInPictureScene::SetSkyBrightness(float InSkyBrightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetSkyBrightness");

	UPComPictureInPictureScene_SetSkyBrightness_Params params;
	params.InSkyBrightness = InSkyBrightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor
// (Defined, Iterator, NetReliable)
// Parameters:
// struct FColor                  LightColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetBounceLightColor(struct FColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightColor");

	UPComPictureInPictureScene_SetBounceLightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness
// (Final, Iterator, NetReliable)
// Parameters:
// float                          InLightBrightness              (Parm)

void UPComPictureInPictureScene::SetBounceLightBrightness(float InLightBrightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightBrightness");

	UPComPictureInPictureScene_SetBounceLightBrightness_Params params;
	params.InLightBrightness = InLightBrightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection
// (Final, Defined, Iterator, NetReliable)
// Parameters:
// struct FRotator                InLightDir                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetBounceLightDirection(struct FRotator* InLightDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetBounceLightDirection");

	UPComPictureInPictureScene_SetBounceLightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLightDir != nullptr)
		*InLightDir = params.InLightDir;
}


// Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           bInEnableBoundLight            (Parm)
// float                          InBounceLightBrightness        (OptionalParm, Parm)
// struct FRotator                BounceLightDir                 (OptionalParm, Parm)

void UPComPictureInPictureScene::STATIC_EnableDirectionalBounceLight(bool bInEnableBoundLight, float InBounceLightBrightness, const struct FRotator& BounceLightDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.EnableDirectionalBounceLight");

	UPComPictureInPictureScene_EnableDirectionalBounceLight_Params params;
	params.bInEnableBoundLight = bInEnableBoundLight;
	params.InBounceLightBrightness = InBounceLightBrightness;
	params.BounceLightDir = BounceLightDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightColor
// (PreOperator, NetReliable)
// Parameters:
// struct FColor                  LightColor                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetLightColor(struct FColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetLightColor");

	UPComPictureInPictureScene_SetLightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightColor != nullptr)
		*LightColor = params.LightColor;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness
// (Final, Defined, Iterator, Latent, NetReliable)
// Parameters:
// float                          InLightBrightness              (Parm)

void UPComPictureInPictureScene::SetLightBrightness(float InLightBrightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetLightBrightness");

	UPComPictureInPictureScene_SetLightBrightness_Params params;
	params.InLightBrightness = InLightBrightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.SetLightDirection
// (Final, PreOperator, NetReliable)
// Parameters:
// struct FRotator                InLightDir                     (Const, Parm, OutParm)

void UPComPictureInPictureScene::SetLightDirection(struct FRotator* InLightDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.SetLightDirection");

	UPComPictureInPictureScene_SetLightDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InLightDir != nullptr)
		*InLightDir = params.InLightDir;
}


// Function PlatformCommon.PComPictureInPictureScene.GetLightDirection
// (Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UPComPictureInPictureScene::STATIC_GetLightDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.GetLightDirection");

	UPComPictureInPictureScene_GetLightDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPictureInPictureScene.RemoveComponent
// (Final, Latent, PreOperator, Net)
// Parameters:
// class UActorComponent*         Component                      (Parm, EditInline)

void UPComPictureInPictureScene::RemoveComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.RemoveComponent");

	UPComPictureInPictureScene_RemoveComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPictureInPictureScene.AddComponent
// (Final, PreOperator, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UActorComponent*         Component                      (Parm, EditInline)
// struct FMatrix                 LocalToWorld                   (Const, Parm, OutParm)

void UPComPictureInPictureScene::STATIC_AddComponent(class UActorComponent* Component, struct FMatrix* LocalToWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.AddComponent");

	UPComPictureInPictureScene_AddComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalToWorld != nullptr)
		*LocalToWorld = params.LocalToWorld;
}


// Function PlatformCommon.PComPictureInPictureScene.InitScene
// (Iterator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComPictureInPictureScene::STATIC_InitScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPictureInPictureScene.InitScene");

	UPComPictureInPictureScene_InitScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect
// (Defined, Iterator, PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void APComPlayerController::STATIC_PlayTestInputLightingEffect(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayTestInputLightingEffect");

	APComPlayerController_PlayTestInputLightingEffect_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect
// (Defined, Latent, NetReliable)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// float                          InCurrentTime                  (Parm)

void APComPlayerController::SetCurrentTimeForInputLightingEffect(const struct FName& InPresetName, float InCurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SetCurrentTimeForInputLightingEffect");

	APComPlayerController_SetCurrentTimeForInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.InCurrentTime = InCurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.StopInputLightingEffect
// (Final, Defined, PreOperator, Net, NetReliable)
// Parameters:
// struct FName                   InPresetName                   (Parm)

void APComPlayerController::StopInputLightingEffect(const struct FName& InPresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.StopInputLightingEffect");

	APComPlayerController_StopInputLightingEffect_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayInputLightingEffect
// (Final, Defined, Latent, Singular)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void APComPlayerController::PlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayInputLightingEffect");

	APComPlayerController_PlayInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FName                   InPresetName                   (Parm)
// bool                           bUseOverrideStartTime          (OptionalParm, Parm)
// float                          OverrideStartTime              (OptionalParm, Parm)

void APComPlayerController::STATIC_ClientPlayInputLightingEffect(const struct FName& InPresetName, bool bUseOverrideStartTime, float OverrideStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClientPlayInputLightingEffect");

	APComPlayerController_ClientPlayInputLightingEffect_Params params;
	params.InPresetName = InPresetName;
	params.bUseOverrideStartTime = bUseOverrideStartTime;
	params.OverrideStartTime = OverrideStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TryAutoLogin
// (Defined, PreOperator, Singular, Net, NetReliable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::TryAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryAutoLogin");

	APComPlayerController_TryAutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed
// (Final, Defined, Singular, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_TryAutoLoginDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryAutoLoginDelayed");

	APComPlayerController_TryAutoLoginDelayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SetAsNewPartyHost
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_SetAsNewPartyHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SetAsNewPartyHost");

	APComPlayerController_SetAsNewPartyHost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed
// (Final, Singular, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// bool                           bAllowed                       (Parm)

void APComPlayerController::STATIC_ToggleGameSessionInvitesAllowed(bool bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ToggleGameSessionInvitesAllowed");

	APComPlayerController_ToggleGameSessionInvitesAllowed_Params params;
	params.bAllowed = bAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed
// (Defined, Singular, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// bool                           bAllowed                       (Parm)

void APComPlayerController::STATIC_TogglePartySessionInvitesAllowed(bool bAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TogglePartySessionInvitesAllowed");

	APComPlayerController_TogglePartySessionInvitesAllowed_Params params;
	params.bAllowed = bAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo
// (Defined, Iterator, Singular, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_UpdateMCTSWithNewPartyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateMCTSWithNewPartyInfo");

	APComPlayerController_UpdateMCTSWithNewPartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsHostOfParty
// (Final, Defined, Latent, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsHostOfParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsHostOfParty");

	APComPlayerController_IsHostOfParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete
// (Final, Defined, Iterator, Simulated, Native, Event, Static)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// TArray<struct FOnlineFriend>   PeoplePicked                   (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnPeoplePickerComplete(bool bWasSuccessful, TArray<struct FOnlineFriend> PeoplePicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPeoplePickerComplete");

	APComPlayerController_OnPeoplePickerComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PeoplePicked = PeoplePicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete
// (Final, Defined, Latent)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnReadFriendsListComplete(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadFriendsListComplete");

	APComPlayerController_OnReadFriendsListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI
// (Singular, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_ShowPeoplePickerUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPeoplePickerUI");

	APComPlayerController_ShowPeoplePickerUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay
// (Final, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_JoinCustomMatchForInviteDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.JoinCustomMatchForInviteDelay");

	APComPlayerController_JoinCustomMatchForInviteDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite
// (Defined, Iterator, Latent, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_JoinCustomMatchFromInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.JoinCustomMatchFromInvite");

	APComPlayerController_JoinCustomMatchFromInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete
// (Defined, Iterator)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnJoinSessionForReceivedInviteComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnJoinSessionForReceivedInviteComplete");

	APComPlayerController_OnJoinSessionForReceivedInviteComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin
// (Latent)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::OnPrivilegeCheckForGameSessionJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeCheckForGameSessionJoin");

	APComPlayerController_OnPrivilegeCheckForGameSessionJoin_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin
// (Final, Latent)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::OnPrivilegeLevelCheckedCompleteForPartyJoin(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeLevelCheckedCompleteForPartyJoin");

	APComPlayerController_OnPrivilegeLevelCheckedCompleteForPartyJoin_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin
// (Defined)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnGameDestroyedForPartyJoin(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGameDestroyedForPartyJoin");

	APComPlayerController_OnGameDestroyedForPartyJoin_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete
// ()
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::OnAlternatePrivilegeLevelCheckedComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnAlternatePrivilegeLevelCheckedComplete");

	APComPlayerController_OnAlternatePrivilegeLevelCheckedComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGameInviteAccepted
// (Final, Defined, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void APComPlayerController::STATIC_OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGameInviteAccepted");

	APComPlayerController_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function PlatformCommon.PComPlayerController.JoinPartySession
// (Final, Defined, Iterator, Latent, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  PartySessionGuid               (Parm)

void APComPlayerController::STATIC_JoinPartySession(unsigned char PartySessionGuid)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.JoinPartySession");

	APComPlayerController_JoinPartySession_Params params;
	params.PartySessionGuid = PartySessionGuid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed
// (PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnPartySessionDestroyed(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPartySessionDestroyed");

	APComPlayerController_OnPartySessionDestroyed_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DestroyPartySession
// (Defined, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_DestroyPartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DestroyPartySession");

	APComPlayerController_DestroyPartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.InvitePlayerToParty
// (Final, Latent, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FUniqueNetId            InPlayerId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_InvitePlayerToParty(const struct FUniqueNetId& InPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.InvitePlayerToParty");

	APComPlayerController_InvitePlayerToParty_Params params;
	params.InPlayerId = InPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName
// (Defined, Latent, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FString                 InPlayerName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_InvitePlayerToPartyByName(const struct FString& InPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.InvitePlayerToPartyByName");

	APComPlayerController_InvitePlayerToPartyByName_Params params;
	params.InPlayerName = InPlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete
// (Final)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bSuccessful                    (Parm)

void APComPlayerController::OnCreatePartySessionComplete(const struct FName& SessionName, bool bSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnCreatePartySessionComplete");

	APComPlayerController_OnCreatePartySessionComplete_Params params;
	params.SessionName = SessionName;
	params.bSuccessful = bSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CreatePartySession
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_CreatePartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CreatePartySession");

	APComPlayerController_CreatePartySession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch
// (Final, Iterator, Singular, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// TArray<struct FUniqueNetId>    EnemyIds                       (Parm, NeedCtorLink)

void APComPlayerController::STATIC_UnregisterP2PEnemiesForCustomMatch(TArray<struct FUniqueNetId> EnemyIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UnregisterP2PEnemiesForCustomMatch");

	APComPlayerController_UnregisterP2PEnemiesForCustomMatch_Params params;
	params.EnemyIds = EnemyIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete
// (Final, Defined)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResult> Results                        (Parm, NeedCtorLink)

void APComPlayerController::OnGetVoicePermissionsForUsersComplete(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGetVoicePermissionsForUsersComplete");

	APComPlayerController_OnGetVoicePermissionsForUsersComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete
// (Final, Defined, Iterator, Simulated, Native, Event, Operator, Static)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnGetSessionMemberInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGetSessionMemberInfoComplete");

	APComPlayerController_OnGetSessionMemberInfoComplete_Params params;
	params.SessionListInfo = SessionListInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete
// (Latent, Simulated, Native, Event, Operator, Static)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnGetUserConnectionInfoComplete(TArray<struct FSessionMemberInfo> SessionListInfo, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnGetUserConnectionInfoComplete");

	APComPlayerController_OnGetUserConnectionInfoComplete_Params params;
	params.SessionListInfo = SessionListInfo;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections
// (Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> APComPlayerController::STATIC_GetUserNamesForPS4P2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetUserNamesForPS4P2PConnections");

	APComPlayerController_GetUserNamesForPS4P2PConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, NeedCtorLink)

void APComPlayerController::STATIC_CloseConnectionsToInvalidPeers(TArray<struct FSessionMemberInfo> SessionListInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CloseConnectionsToInvalidPeers");

	APComPlayerController_CloseConnectionsToInvalidPeers_Params params;
	params.SessionListInfo = SessionListInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.EstablishPeers
// (Final, Defined, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_EstablishPeers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.EstablishPeers");

	APComPlayerController_EstablishPeers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.LostP2PConnection
// (Iterator, Latent, PreOperator, Net, Simulated, Exec, Event, Operator, Static)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)

void APComPlayerController::STATIC_LostP2PConnection(const struct FUniqueNetId& UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.LostP2PConnection");

	APComPlayerController_LostP2PConnection_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId
// (Iterator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            ControllerId                   (Parm, OutParm)

void APComPlayerController::STATIC_GetControllerIdFromNetId(const struct FUniqueNetId& PlayerID, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetControllerIdFromNetId");

	APComPlayerController_GetControllerIdFromNetId_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;
}


// Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController
// (Final, Iterator, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_PairLoggedInUserAndCurrentController()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PairLoggedInUserAndCurrentController");

	APComPlayerController_PairLoggedInUserAndCurrentController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsInGame
// (Final, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsInGame");

	APComPlayerController_IsInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.IsPackageInstalled
// (Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsPackageInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsPackageInstalled");

	APComPlayerController_IsPackageInstalled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange
// (Final, PreOperator, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FSessionUpdateInfo      SessionChanges                 (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnMultiplayerSessionChange(const struct FName& SessionName, const struct FSessionUpdateInfo& SessionChanges)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnMultiplayerSessionChange");

	APComPlayerController_OnMultiplayerSessionChange_Params params;
	params.SessionName = SessionName;
	params.SessionChanges = SessionChanges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CheckFilterText
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_CheckFilterText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CheckFilterText");

	APComPlayerController_CheckFilterText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds
// (Defined, Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_CanCommunicateTextWithUsersByUniqueNetIds(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CanCommunicateTextWithUsersByUniqueNetIds");

	APComPlayerController_CanCommunicateTextWithUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CanCommunicateText
// (Final, Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           bAttemptToResolve              (OptionalParm, Parm)
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_CanCommunicateText(unsigned char LocalUserNum, bool bAttemptToResolve, const struct FString& Reason, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CanCommunicateText");

	APComPlayerController_CanCommunicateText_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAttemptToResolve = bAttemptToResolve;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnTextFilterApplied
// (Defined, PreOperator, Simulated)
// Parameters:
// struct FString                 OriginalText                   (Parm, NeedCtorLink)
// struct FString                 FilteredText                   (Parm, NeedCtorLink)
// bool                           bCensorCompletely              (Parm)

void APComPlayerController::OnTextFilterApplied(const struct FString& OriginalText, const struct FString& FilteredText, bool bCensorCompletely)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnTextFilterApplied");

	APComPlayerController_OnTextFilterApplied_Params params;
	params.OriginalText = OriginalText;
	params.FilteredText = FilteredText;
	params.bCensorCompletely = bCensorCompletely;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList
// (Final, Defined, Iterator, Latent, PreOperator, Net)
// Parameters:
// bool                           bForceRequest                  (OptionalParm, Parm)

void APComPlayerController::RequestUpdateFriendsList(bool bForceRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RequestUpdateFriendsList");

	APComPlayerController_RequestUpdateFriendsList_Params params;
	params.bForceRequest = bForceRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends
// (Defined, Latent, PreOperator, Singular, Net, NetReliable)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::UpdateMctsWithFriends(bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateMctsWithFriends");

	APComPlayerController_UpdateMctsWithFriends_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse
// (PreOperator, Singular, Net, NetReliable, Native, Event, Static)
// Parameters:
// bool                           bAuthorized                    (Parm)
// struct FQWord                  qwOrderId                      (Parm)

void APComPlayerController::STATIC_OnContentPurchaseResponse(bool bAuthorized, const struct FQWord& qwOrderId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnContentPurchaseResponse");

	APComPlayerController_OnContentPurchaseResponse_Params params;
	params.bAuthorized = bAuthorized;
	params.qwOrderId = qwOrderId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds
// (Defined, Latent, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResultByUniqueNetId> Results                        (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeCheckedForUsersByUniqueNetIds");

	APComPlayerController_OnPrivilegeCheckedForUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked
// (Final, Defined, Latent, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void APComPlayerController::STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnPrivilegeLevelChecked");

	APComPlayerController_OnPrivilegeLevelChecked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClearOnlineDelegates
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Event, Operator, Static)

void APComPlayerController::STATIC_ClearOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClearOnlineDelegates");

	APComPlayerController_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Static)

void APComPlayerController::STATIC_RegisterOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RegisterOnlineDelegates");

	APComPlayerController_RegisterOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_ClientRestablishP2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClientRestablishP2PConnections");

	APComPlayerController_ClientRestablishP2PConnections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net)

void APComPlayerController::ServerReEstablishP2PConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ServerReEstablishP2PConnections");

	APComPlayerController_ServerReEstablishP2PConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsReconnect
// (Final, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsReconnect");

	APComPlayerController_IsReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect
// (Iterator, Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_RestablishVoiceForReconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RestablishVoiceForReconnect");

	APComPlayerController_RestablishVoiceForReconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo
// (Final, Iterator)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::OnJoinOnlineGameCompleteForReceivedSessionInfo(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnJoinOnlineGameCompleteForReceivedSessionInfo");

	APComPlayerController_OnJoinOnlineGameCompleteForReceivedSessionInfo_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ReceiveSessionInfo
// (Defined, Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// unsigned char                  PlatformSpecificInfo           (Parm)
// TEnumAsByte<EConsoleType>      ConsoleType                    (Parm)

void APComPlayerController::STATIC_ReceiveSessionInfo(unsigned char PlatformSpecificInfo, TEnumAsByte<EConsoleType> ConsoleType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ReceiveSessionInfo");

	APComPlayerController_ReceiveSessionInfo_Params params;
	params.PlatformSpecificInfo = PlatformSpecificInfo;
	params.ConsoleType = ConsoleType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Native, Event, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnCreateOnlineGameComplete");

	APComPlayerController_OnCreateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout
// (Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)
// Parameters:
// bool                           bCustomMatch                   (Parm)
// int                            MaxPlayers                     (Parm)
// bool                           bPrivate                       (Parm)
// TArray<struct FUniqueNetId>    ReservedMembers                (OptionalParm, Parm, OutParm, NeedCtorLink)

void APComPlayerController::STATIC_ChooseThisControllerForSessionScout(bool bCustomMatch, int MaxPlayers, bool bPrivate, TArray<struct FUniqueNetId>* ReservedMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChooseThisControllerForSessionScout");

	APComPlayerController_ChooseThisControllerForSessionScout_Params params;
	params.bCustomMatch = bCustomMatch;
	params.MaxPlayers = MaxPlayers;
	params.bPrivate = bPrivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReservedMembers != nullptr)
		*ReservedMembers = params.ReservedMembers;
}


// Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Native, Event, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnDestroyOnlineGameComplete");

	APComPlayerController_OnDestroyOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete
// (Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void APComPlayerController::STATIC_OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnEndOnlineGameComplete");

	APComPlayerController_OnEndOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu
// (Final, Iterator, PreOperator, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_FinishQuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.FinishQuitToMainMenu");

	APComPlayerController_FinishQuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession
// (Final, Iterator, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           bWasFromMenu                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_CleanupOnlineSubsystemSession(bool bWasFromMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CleanupOnlineSubsystemSession");

	APComPlayerController_CleanupOnlineSubsystemSession_Params params;
	params.bWasFromMenu = bWasFromMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.QuitToMainMenu
// (Final, Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_QuitToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.QuitToMainMenu");

	APComPlayerController_QuitToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession
// (Defined, Iterator, Latent, Native, Event, Operator, Static)
// Parameters:
// class APawn*                   P                              (Parm)

void APComPlayerController::STATIC_ServerAcknowledgePossession(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ServerAcknowledgePossession");

	APComPlayerController_ServerAcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.AcknowledgePossession
// (Final, Defined, Latent, NetReliable, Simulated, Native, Event, Static, Const)
// Parameters:
// class APawn*                   P                              (Parm)

void APComPlayerController::STATIC_AcknowledgePossession(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.AcknowledgePossession");

	APComPlayerController_AcknowledgePossession_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnAllMarketplaceProductDetailsRead
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_OnAllMarketplaceProductDetailsRead()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnAllMarketplaceProductDetailsRead");

	APComPlayerController_OnAllMarketplaceProductDetailsRead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.LeaveMatchQueue
// (Defined, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_LeaveMatchQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.LeaveMatchQueue");

	APComPlayerController_LeaveMatchQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdatePartyUI
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable)

void APComPlayerController::UpdatePartyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdatePartyUI");

	APComPlayerController_UpdatePartyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TryOpenPartyUI
// (Final, Iterator, PreOperator, Singular, Net, NetReliable)

void APComPlayerController::TryOpenPartyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryOpenPartyUI");

	APComPlayerController_TryOpenPartyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup
// (Iterator, Latent, PreOperator, NetReliable)

void APComPlayerController::ShowCustomGameDisallowedPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowCustomGameDisallowedPopup");

	APComPlayerController_ShowCustomGameDisallowedPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning
// (Defined, Iterator, Latent, PreOperator, NetReliable)

void APComPlayerController::ShowPackageNotInstalledForPartyInviteWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPackageNotInstalledForPartyInviteWarning");

	APComPlayerController_ShowPackageNotInstalledForPartyInviteWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning
// (Singular, NetReliable)

void APComPlayerController::ShowPartyNoLongerAvailableWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPartyNoLongerAvailableWarning");

	APComPlayerController_ShowPartyNoLongerAvailableWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowPartyFullWarning
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable)
// Parameters:
// bool                           bPartySession                  (Parm)

void APComPlayerController::ShowPartyFullWarning(bool bPartySession)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPartyFullWarning");

	APComPlayerController_ShowPartyFullWarning_Params params;
	params.bPartySession = bPartySession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning
// (Defined, Singular, NetReliable)

void APComPlayerController::ShowUnableToReadFriendsListWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowUnableToReadFriendsListWarning");

	APComPlayerController_ShowUnableToReadFriendsListWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning
// (Final, Iterator, Latent, PreOperator, NetReliable)

void APComPlayerController::ShowNoFriendsForPartyInviteWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowNoFriendsForPartyInviteWarning");

	APComPlayerController_ShowNoFriendsForPartyInviteWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning
// (Final, Defined, Latent, PreOperator, NetReliable)

void APComPlayerController::ShowControllerDisconnectedWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowControllerDisconnectedWarning");

	APComPlayerController_ShowControllerDisconnectedWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic
// (Defined, Latent, PreOperator, NetReliable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::ShouldPartySessionsBePublic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShouldPartySessionsBePublic");

	APComPlayerController_ShouldPartySessionsBePublic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession
// (Defined, Latent, Simulated)

void APComPlayerController::CreateOrJoinPartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CreateOrJoinPartySession");

	APComPlayerController_CreateOrJoinPartySession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed
// (Final, Defined, Iterator, PreOperator, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_ArePartySessionInvitesAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ArePartySessionInvitesAllowed");

	APComPlayerController_ArePartySessionInvitesAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.UpdateMCTSSession
// (Final, Latent, PreOperator, Singular, Net, NetReliable)
// Parameters:
// struct FString                 SessionGuid                    (Parm, NeedCtorLink)
// bool                           bIsHost                        (Parm)

void APComPlayerController::UpdateMCTSSession(const struct FString& SessionGuid, bool bIsHost)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateMCTSSession");

	APComPlayerController_UpdateMCTSSession_Params params;
	params.SessionGuid = SessionGuid;
	params.bIsHost = bIsHost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.BlockPartySceneInput
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           bBlockInput                    (Parm)

void APComPlayerController::STATIC_BlockPartySceneInput(bool bBlockInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.BlockPartySceneInput");

	APComPlayerController_BlockPartySceneInput_Params params;
	params.bBlockInput = bBlockInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker
// (Iterator, PreOperator, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<struct FOnlineFriend>   FriendList                     (Parm, OutParm, NeedCtorLink)
// TArray<struct FSessionMemberInfo> SessionMemberList              (Parm, OutParm, NeedCtorLink)

void APComPlayerController::STATIC_FilterFriendListForPeoplePicker(TArray<struct FOnlineFriend>* FriendList, TArray<struct FSessionMemberInfo>* SessionMemberList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.FilterFriendListForPeoplePicker");

	APComPlayerController_FilterFriendListForPeoplePicker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendList != nullptr)
		*FriendList = params.FriendList;
	if (SessionMemberList != nullptr)
		*SessionMemberList = params.SessionMemberList;
}


// Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite
// (Final, Singular, NetReliable)

void APComPlayerController::ShowPrivilegeMessageAndDeclineInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowPrivilegeMessageAndDeclineInvite");

	APComPlayerController_ShowPrivilegeMessageAndDeclineInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ConnectToPeers
// (Final, Iterator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TArray<struct FSessionMemberInfo> SessionListInfo                (Parm, OutParm, NeedCtorLink)

void APComPlayerController::STATIC_ConnectToPeers(TArray<struct FSessionMemberInfo>* SessionListInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ConnectToPeers");

	APComPlayerController_ConnectToPeers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SessionListInfo != nullptr)
		*SessionListInfo = params.SessionListInfo;
}


// Function PlatformCommon.PComPlayerController.TryJoinSession
// (Iterator, PreOperator, Singular, Net, NetReliable)

void APComPlayerController::TryJoinSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TryJoinSession");

	APComPlayerController_TryJoinSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.MCTSSetSessionId
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// unsigned char                  PlatformSpecificInfo           (Parm)

void APComPlayerController::STATIC_MCTSSetSessionId(unsigned char PlatformSpecificInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.MCTSSetSessionId");

	APComPlayerController_MCTSSetSessionId_Params params;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsInCustomMatch
// (Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsInCustomMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsInCustomMatch");

	APComPlayerController_IsInCustomMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.SendSessionEnd
// (Final, Iterator, Latent, PreOperator, Singular, Net)

void APComPlayerController::SendSessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SendSessionEnd");

	APComPlayerController_SendSessionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.SendSessionStart
// (Defined, Iterator, Latent, PreOperator, Singular, Net)
// Parameters:
// int                            GameModeId                     (Parm)

void APComPlayerController::SendSessionStart(int GameModeId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.SendSessionStart");

	APComPlayerController_SendSessionStart_Params params;
	params.GameModeId = GameModeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange
// (Final, Iterator, Latent, PreOperator, Simulated, Native, Event, Static)
// Parameters:
// struct FUniqueNetId            RemoteNetId                    (Parm)
// bool                           bIsTalking                     (Parm)

void APComPlayerController::STATIC_OnRemoteTalkerStatusChange(const struct FUniqueNetId& RemoteNetId, bool bIsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnRemoteTalkerStatusChange");

	APComPlayerController_OnRemoteTalkerStatusChange_Params params;
	params.RemoteNetId = RemoteNetId;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnCurrentUserChanged
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 CurrentUser                    (Parm, NeedCtorLink)
// struct FString                 LoggedInUser                   (Parm, NeedCtorLink)

void APComPlayerController::STATIC_OnCurrentUserChanged(unsigned char LocalUserNum, const struct FString& CurrentUser, const struct FString& LoggedInUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnCurrentUserChanged");

	APComPlayerController_OnCurrentUserChanged_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CurrentUser = CurrentUser;
	params.LoggedInUser = LoggedInUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnConnectionStatusChange
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Native, Event, Static)
// Parameters:
// TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus               (Parm)

void APComPlayerController::STATIC_OnConnectionStatusChange(TEnumAsByte<EOnlineServerConnectionStatus> ConnectionStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnConnectionStatusChange");

	APComPlayerController_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnLoginStatusChange
// (Iterator, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<ELoginStatus>      NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void APComPlayerController::STATIC_OnLoginStatusChange(TEnumAsByte<ELoginStatus> NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnLoginStatusChange");

	APComPlayerController_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased
// (Iterator, PreOperator, Singular, Simulated, Native, Event, Static)

void APComPlayerController::STATIC_OnMarketplaceItemPurchased()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnMarketplaceItemPurchased");

	APComPlayerController_OnMarketplaceItemPurchased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses
// (Latent, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// TArray<struct FOnlineContent>  ContentList                    (Parm, OutParm, NeedCtorLink)
// TEnumAsByte<EOnlineEnumerationReadState> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<EOnlineEnumerationReadState> APComPlayerController::STATIC_GetPlayerDLCLicenses(TArray<struct FOnlineContent>* ContentList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetPlayerDLCLicenses");

	APComPlayerController_GetPlayerDLCLicenses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentList != nullptr)
		*ContentList = params.ContentList;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete
// (Iterator, Latent)

void APComPlayerController::OnReadPlayerMarketplaceInventoryComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadPlayerMarketplaceInventoryComplete");

	APComPlayerController_OnReadPlayerMarketplaceInventoryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory
// (Defined, Iterator, PreOperator, Simulated)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void APComPlayerController::PlayerReceivedURLTokenAndSignatureForPortalInventory(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForPortalInventory");

	APComPlayerController_PlayerReceivedURLTokenAndSignatureForPortalInventory_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken
// (Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_ProcessPortalInventoryWithAuthToken()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ProcessPortalInventoryWithAuthToken");

	APComPlayerController_ProcessPortalInventoryWithAuthToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpStoreCatalog
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::STATIC_DumpStoreCatalog(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpStoreCatalog");

	APComPlayerController_DumpStoreCatalog_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpConumables
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_DumpConumables()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpConumables");

	APComPlayerController_DumpConumables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpDurables
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_DumpDurables()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpDurables");

	APComPlayerController_DumpDurables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.DumpGameProducts
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_DumpGameProducts()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.DumpGameProducts");

	APComPlayerController_DumpGameProducts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete
// (Final, Iterator, PreOperator, Singular, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::STATIC_OnReadAdditionalProductDetailsComplete(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadAdditionalProductDetailsComplete");

	APComPlayerController_OnReadAdditionalProductDetailsComplete_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.OnReadDetailsForProductIdListComplete
// (Defined, Latent)
// Parameters:
// TArray<struct FMarketplaceProductDetails> ProductList                    (Parm, OutParm, NeedCtorLink)

void APComPlayerController::OnReadDetailsForProductIdListComplete(TArray<struct FMarketplaceProductDetails>* ProductList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadDetailsForProductIdListComplete");

	APComPlayerController_OnReadDetailsForProductIdListComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProductList != nullptr)
		*ProductList = params.ProductList;
}


// Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete
// (Defined, Iterator, PreOperator, Singular, Simulated, Native, Event, Static)
// Parameters:
// TEnumAsByte<EMediaItemType>    MediaType                      (Parm)

void APComPlayerController::STATIC_OnReadAvailableProductsComplete(TEnumAsByte<EMediaItemType> MediaType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.OnReadAvailableProductsComplete");

	APComPlayerController_OnReadAvailableProductsComplete_Params params;
	params.MediaType = MediaType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.RefreshStoreData
// (Final, Defined, Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_RefreshStoreData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.RefreshStoreData");

	APComPlayerController_RefreshStoreData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS
// (Iterator, Latent, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_IsLoggedIntoOSS()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.IsLoggedIntoOSS");

	APComPlayerController_IsLoggedIntoOSS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bForceLoginAfter               (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APComPlayerController::STATIC_ShowConsoleLoginUI(int ControllerId, bool bForceLoginAfter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ShowConsoleLoginUI");

	APComPlayerController_ShowConsoleLoginUI_Params params;
	params.ControllerId = ControllerId;
	params.bForceLoginAfter = bForceLoginAfter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad
// (Latent, PreOperator, Singular, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_CacheLoggedInGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.CacheLoggedInGamepad");

	APComPlayerController_CacheLoggedInGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin
// (Iterator, PreOperator, Simulated)
// Parameters:
// bool                           bSuccess                       (Parm)

void APComPlayerController::PlayerReceivedTokenForLogin(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerReceivedTokenForLogin");

	APComPlayerController_PlayerReceivedTokenForLogin_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin
// (Final, Iterator, PreOperator, Simulated)
// Parameters:
// bool                           bSuccess                       (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 Token                          (Parm, NeedCtorLink)
// struct FString                 AuthToken                      (Parm, NeedCtorLink)
// struct FString                 Signature                      (Parm, NeedCtorLink)

void APComPlayerController::PlayerReceivedURLTokenAndSignatureForLogin(bool bSuccess, unsigned char LocalUserNum, const struct FString& URL, const struct FString& Token, const struct FString& AuthToken, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerReceivedURLTokenAndSignatureForLogin");

	APComPlayerController_PlayerReceivedURLTokenAndSignatureForLogin_Params params;
	params.bSuccess = bSuccess;
	params.LocalUserNum = LocalUserNum;
	params.URL = URL;
	params.Token = Token;
	params.AuthToken = AuthToken;
	params.Signature = Signature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession
// (Final, Latent, PreOperator, Simulated)

void APComPlayerController::ValidateCreatedPartySession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ValidateCreatedPartySession");

	APComPlayerController_ValidateCreatedPartySession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin
// (Final, Defined, Iterator, Net, Simulated, Native, Event, Operator, Static)

void APComPlayerController::STATIC_GetOSSTokenAndSignatureForLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetOSSTokenAndSignatureForLogin");

	APComPlayerController_GetOSSTokenAndSignatureForLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.GetTokenURL
// (Final, Defined, Latent, Simulated)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString APComPlayerController::GetTokenURL()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.GetTokenURL");

	APComPlayerController_GetTokenURL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerController.BeginLogin
// (Latent, Simulated)

void APComPlayerController::BeginLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.BeginLogin");

	APComPlayerController_BeginLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory
// (Defined, Latent, Singular)
// Parameters:
// TArray<struct FMarketplaceInventoryItem> Items                          (Parm, OutParm, NeedCtorLink)

void APComPlayerController::PlayerRetrievedOSSInventory(TArray<struct FMarketplaceInventoryItem>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.PlayerRetrievedOSSInventory");

	APComPlayerController_PlayerRetrievedOSSInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function PlatformCommon.PComPlayerController.UpdateClientAuthToken
// (Final, Defined, Iterator, PreOperator, Simulated)
// Parameters:
// struct FString                 Token                          (Parm, NeedCtorLink)

void APComPlayerController::UpdateClientAuthToken(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateClientAuthToken");

	APComPlayerController_UpdateClientAuthToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateClientToken
// (Latent, PreOperator, Simulated)
// Parameters:
// struct FString                 Token                          (Parm, NeedCtorLink)

void APComPlayerController::UpdateClientToken(const struct FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateClientToken");

	APComPlayerController_UpdateClientToken_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeStartGame
// (Defined, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_ChallengeStartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChallengeStartGame");

	APComPlayerController_ChallengeStartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeKickPlayer
// (Final, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 fsName                         (Parm, NeedCtorLink)

void APComPlayerController::STATIC_ChallengeKickPlayer(const struct FString& fsName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChallengeKickPlayer");

	APComPlayerController_ChallengeKickPlayer_Params params;
	params.fsName = fsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeJoin
// (PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            nMatchId                       (Parm)
// struct FString                 fsName                         (Parm, NeedCtorLink)
// struct FString                 fsPassword                     (OptionalParm, Parm, NeedCtorLink)

void APComPlayerController::STATIC_ChallengeJoin(int nMatchId, const struct FString& fsName, const struct FString& fsPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChallengeJoin");

	APComPlayerController_ChallengeJoin_Params params;
	params.nMatchId = nMatchId;
	params.fsName = fsName;
	params.fsPassword = fsPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ChallengeCreate
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 fsCmdLine                      (Parm, NeedCtorLink)

void APComPlayerController::STATIC_ChallengeCreate(const struct FString& fsCmdLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ChallengeCreate");

	APComPlayerController_ChallengeCreate_Params params;
	params.fsCmdLine = fsCmdLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.UpdateDatacenterPing
// (Latent, PreOperator, Singular, Net, NetReliable)

void APComPlayerController::UpdateDatacenterPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.UpdateDatacenterPing");

	APComPlayerController_UpdateDatacenterPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.TestVideoPlayer
// (Final, Singular, Net, NetReliable)

void APComPlayerController::TestVideoPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.TestVideoPlayer");

	APComPlayerController_TestVideoPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.AddCheats
// (Final, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Event, Static, Const)

void APComPlayerController::STATIC_AddCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.AddCheats");

	APComPlayerController_AddCheats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerController.ClientAddCheats
// (Latent, PreOperator, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComPlayerController::STATIC_ClientAddCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerController.ClientAddCheats");

	APComPlayerController_ClientAddCheats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.Jump
// (Final, Iterator, Latent, Singular, Simulated, Static, HasOptionalParms)

void UPComPlayerInput::STATIC_Jump()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.Jump");

	UPComPlayerInput_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindCommand
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// int                            nAlternate                     (OptionalParm, Parm)

void UPComPlayerInput::UnbindCommand(const struct FString& Command, int nAlternate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.UnbindCommand");

	UPComPlayerInput_UnbindCommand_Params params;
	params.Command = Command;
	params.nAlternate = nAlternate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindCommandAll
// (Iterator, Singular, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UPComPlayerInput::STATIC_UnbindCommandAll(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.UnbindCommandAll");

	UPComPlayerInput_UnbindCommandAll_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.UnbindKey
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable)
// Parameters:
// struct FName                   BindName                       (Const, Parm, OutParm)

void UPComPlayerInput::UnbindKey(struct FName* BindName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.UnbindKey");

	UPComPlayerInput_UnbindKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BindName != nullptr)
		*BindName = params.BindName;
}


// Function PlatformCommon.PComPlayerInput.SetCommandBind
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// int                            nAlternate                     (Parm)
// struct FString                 ExtendedBinding                (Const, Parm, NeedCtorLink)

void UPComPlayerInput::STATIC_SetCommandBind(const struct FString& Command, int nAlternate, const struct FString& ExtendedBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetCommandBind");

	UPComPlayerInput_SetCommandBind_Params params;
	params.Command = Command;
	params.nAlternate = nAlternate;
	params.ExtendedBinding = ExtendedBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetBindExtended
// (Iterator, NetReliable)
// Parameters:
// struct FString                 ExtendedBinding                (Const, Parm, NeedCtorLink)
// struct FString                 Command                        (Parm, NeedCtorLink)

void UPComPlayerInput::SetBindExtended(const struct FString& ExtendedBinding, const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetBindExtended");

	UPComPlayerInput_SetBindExtended_Params params;
	params.ExtendedBinding = ExtendedBinding;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY
// (Defined, Iterator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComPlayerInput::STATIC_GetDisplayLookSensitivityY()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivityY");

	UPComPlayerInput_GetDisplayLookSensitivityY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity
// (Final, Iterator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComPlayerInput::STATIC_GetDisplayLookSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetDisplayLookSensitivity");

	UPComPlayerInput_GetDisplayLookSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.SetAimAcceleration
// (Final, Defined, NetReliable)
// Parameters:
// float                          fLookAccel                     (Parm)

void UPComPlayerInput::SetAimAcceleration(float fLookAccel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetAimAcceleration");

	UPComPlayerInput_SetAimAcceleration_Params params;
	params.fLookAccel = fLookAccel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetLookSensitivity
// (Final, Defined, PreOperator, NetReliable)
// Parameters:
// float                          fSensitivity                   (Parm)
// float                          fSensitivityY                  (OptionalParm, Parm)

void UPComPlayerInput::SetLookSensitivity(float fSensitivity, float fSensitivityY)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetLookSensitivity");

	UPComPlayerInput_SetLookSensitivity_Params params;
	params.fSensitivity = fSensitivity;
	params.fSensitivityY = fSensitivityY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetMouseInput
// (Iterator, PreOperator, NetReliable)
// Parameters:
// bool                           bInvert                        (Parm)
// bool                           bSmooth                        (Parm)
// float                          fSensitivity                   (Parm)

void UPComPlayerInput::SetMouseInput(bool bInvert, bool bSmooth, float fSensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetMouseInput");

	UPComPlayerInput_SetMouseInput_Params params;
	params.bInvert = bInvert;
	params.bSmooth = bSmooth;
	params.fSensitivity = fSensitivity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.SetDirty
// (Final, Defined, Latent, NetReliable)

void UPComPlayerInput::SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.SetDirty");

	UPComPlayerInput_SetDirty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.ReadMouseSettings
// (Final, Defined, Iterator, PreOperator, Net)

void UPComPlayerInput::ReadMouseSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.ReadMouseSettings");

	UPComPlayerInput_ReadMouseSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.StoreMouseSettings
// (Final, Defined, Iterator, PreOperator, Net, NetReliable)

void UPComPlayerInput::StoreMouseSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.StoreMouseSettings");

	UPComPlayerInput_StoreMouseSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers
// (PreOperator, NetReliable, Native, Event, HasOptionalParms, Const)
// Parameters:
// struct FName                   Key                            (Const, Parm, OutParm)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::GetKeybindWithCurrentModifiers(struct FName* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetKeybindWithCurrentModifiers");

	UPComPlayerInput_GetKeybindWithCurrentModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBind
// (Singular, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms, Const)
// Parameters:
// struct FName                   Key                            (Const, Parm, OutParm)
// struct FKeyBind                ModifierKeyBind                (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComPlayerInput::GetBind(struct FName* Key, struct FKeyBind* ModifierKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetBind");

	UPComPlayerInput_GetBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (ModifierKeyBind != nullptr)
		*ModifierKeyBind = params.ModifierKeyBind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.KeybindToExtendedString
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FKeyBind                Bind                           (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComPlayerInput::STATIC_KeybindToExtendedString(struct FKeyBind* Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.KeybindToExtendedString");

	UPComPlayerInput_KeybindToExtendedString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bind != nullptr)
		*Bind = params.Bind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind
// (Final, Defined, Latent, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::STATIC_ExtendedStringToKeybind(const struct FString& Str, const struct FString& Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.ExtendedStringToKeybind");

	UPComPlayerInput_ExtendedStringToKeybind_Params params;
	params.Str = Str;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBindFromCommand
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 Cmd                            (Parm, NeedCtorLink)
// int                            nAlternate                     (OptionalParm, Parm)
// struct FKeyBind                ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FKeyBind UPComPlayerInput::STATIC_GetBindFromCommand(const struct FString& Cmd, int nAlternate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetBindFromCommand");

	UPComPlayerInput_GetBindFromCommand_Params params;
	params.Cmd = Cmd;
	params.nAlternate = nAlternate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.GetBindExtended
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FKeyBind                Bind                           (Parm, OutParm, NeedCtorLink)
// bool                           bExactMatch                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPlayerInput::STATIC_GetBindExtended(const struct FString& Str, bool bExactMatch, struct FKeyBind* Bind)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.GetBindExtended");

	UPComPlayerInput_GetBindExtended_Params params;
	params.Str = Str;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bind != nullptr)
		*Bind = params.Bind;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPlayerInput.ResetKeysToDefault
// (Singular, Net)

void UPComPlayerInput::ResetKeysToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPlayerInput.ResetKeysToDefault");

	UPComPlayerInput_ResetKeysToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere
// (Defined, Iterator, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          RewindTime                     (Parm)
// struct FVector                 LocationToCheck                (Parm)
// float                          RadiusToCheck                  (Parm)
// struct FPComPositionHistoryData PastDataUsed                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPositionHistoryServerComponent::STATIC_IsInSphere(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.IsInSphere");

	UPComPositionHistoryServerComponent_IsInSphere_Params params;
	params.RewindTime = RewindTime;
	params.LocationToCheck = LocationToCheck;
	params.RadiusToCheck = RadiusToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PastDataUsed != nullptr)
		*PastDataUsed = params.PastDataUsed;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping
// (Iterator, Latent, PreOperator, Net, Simulated, Operator, HasOptionalParms, Const)
// Parameters:
// float                          RewindTime                     (Parm)
// struct FVector                 LocationToCheck                (Parm)
// float                          RadiusToCheck                  (Parm)
// struct FPComPositionHistoryData PastDataUsed                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComPositionHistoryServerComponent::IsOverlapping(float RewindTime, const struct FVector& LocationToCheck, float RadiusToCheck, struct FPComPositionHistoryData* PastDataUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.IsOverlapping");

	UPComPositionHistoryServerComponent_IsOverlapping_Params params;
	params.RewindTime = RewindTime;
	params.LocationToCheck = LocationToCheck;
	params.RadiusToCheck = RadiusToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PastDataUsed != nullptr)
		*PastDataUsed = params.PastDataUsed;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData
// (Iterator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          RewindTime                     (Parm)
// bool                           bUseClientTimeStamps           (OptionalParm, Parm)
// struct FPComPositionHistoryData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPComPositionHistoryData UPComPositionHistoryServerComponent::STATIC_GetPastData(float RewindTime, bool bUseClientTimeStamps)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.GetPastData");

	UPComPositionHistoryServerComponent_GetPastData_Params params;
	params.RewindTime = RewindTime;
	params.bUseClientTimeStamps = bUseClientTimeStamps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComPositionHistoryServerComponent.RecordData
// (Latent, PreOperator, Net)

void UPComPositionHistoryServerComponent::RecordData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComPositionHistoryServerComponent.RecordData");

	UPComPositionHistoryServerComponent_RecordData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComRepInfo_Game::STATIC_CreateMusicThemePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComRepInfo_Game.CreateMusicThemePlayer");

	APComRepInfo_Game_CreateMusicThemePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.PostBeginPlay
// (Final, Latent, Net, Simulated)

void APComRepInfo_Game::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComRepInfo_Game.PostBeginPlay");

	APComRepInfo_Game_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent
// (Iterator, Latent, Singular)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void APComRepInfo_Game::PlayMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComRepInfo_Game.PlayMusicEvent");

	APComRepInfo_Game_PlayMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLogTickFlags
// (Iterator, Latent, Singular, Net)
// Parameters:
// int                            nFlags                         (Parm)
// bool                           bSet                           (OptionalParm, Parm)

void UPComSupportCommands::scLogTickFlags(int nFlags, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scLogTickFlags");

	UPComSupportCommands_scLogTickFlags_Params params;
	params.nFlags = nFlags;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit
// (Defined, Iterator, Latent, Singular, Net)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::scPerfAlwaysRelevantLimit(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfAlwaysRelevantLimit");

	UPComSupportCommands_scPerfAlwaysRelevantLimit_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scGPerfServerFlags
// (Final, Latent, Singular, Net)
// Parameters:
// int                            Flags                          (Parm)
// int                            alternate1                     (Parm)
// int                            alternate2                     (Parm)

void UPComSupportCommands::scGPerfServerFlags(int Flags, int alternate1, int alternate2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scGPerfServerFlags");

	UPComSupportCommands_scGPerfServerFlags_Params params;
	params.Flags = Flags;
	params.alternate1 = alternate1;
	params.alternate2 = alternate2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold
// (Defined, PreOperator, Singular, Net)
// Parameters:
// float                          thresh1                        (Parm)
// float                          thesh2                         (Parm)

void UPComSupportCommands::scPerfPhysThreshold(float thresh1, float thesh2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfPhysThreshold");

	UPComSupportCommands_scPerfPhysThreshold_Params params;
	params.thresh1 = thresh1;
	params.thesh2 = thesh2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfTickRate
// (Final, Defined, PreOperator, Singular, Net)
// Parameters:
// int                            tickHz                         (Parm)
// int                            altTickHz                      (Parm)

void UPComSupportCommands::scPerfTickRate(int tickHz, int altTickHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfTickRate");

	UPComSupportCommands_scPerfTickRate_Params params;
	params.tickHz = tickHz;
	params.altTickHz = altTickHz;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode
// (PreOperator, Singular, Net)
// Parameters:
// int                            Mode                           (Parm)

void UPComSupportCommands::scPerfDebugRelevMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfDebugRelevMode");

	UPComSupportCommands_scPerfDebugRelevMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugSkip
// (Final, PreOperator, Singular, Net)
// Parameters:
// int                            skips                          (Parm)

void UPComSupportCommands::scPerfDebugSkip(int skips)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfDebugSkip");

	UPComSupportCommands_scPerfDebugSkip_Params params;
	params.skips = skips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scPerfDebugFeet
// (Final, Defined, Iterator, Latent, Singular, Net)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::scPerfDebugFeet(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scPerfDebugFeet");

	UPComSupportCommands_scPerfDebugFeet_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scDemoStop
// (Final, Defined, Iterator, Singular, Net)

void UPComSupportCommands::scDemoStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scDemoStop");

	UPComSupportCommands_scDemoStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scDemoRec
// (Defined, Iterator, Singular, Net)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::scDemoRec(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scDemoRec");

	UPComSupportCommands_scDemoRec_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scTimer
// (Final, Defined, Iterator, PreOperator, Singular, Net)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::scTimer(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scTimer");

	UPComSupportCommands_scTimer_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scTime
// (Defined, Iterator, PreOperator, Singular, Net)
// Parameters:
// int                            nSeconds                       (Parm)

void UPComSupportCommands::scTime(int nSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scTime");

	UPComSupportCommands_scTime_Params params;
	params.nSeconds = nSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scScore
// (Iterator, PreOperator, Singular, Net)
// Parameters:
// int                            nTeam                          (Parm)
// int                            nCount                         (OptionalParm, Parm)

void UPComSupportCommands::scScore(int nTeam, int nCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scScore");

	UPComSupportCommands_scScore_Params params;
	params.nTeam = nTeam;
	params.nCount = nCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scEndGame
// (Latent, Singular, Net)
// Parameters:
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)

void UPComSupportCommands::scEndGame(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scEndGame");

	UPComSupportCommands_scEndGame_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scStartGame
// (Final, Iterator, PreOperator, Singular, Net)
// Parameters:
// struct FString                 Reason                         (OptionalParm, Parm, NeedCtorLink)

void UPComSupportCommands::scStartGame(const struct FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scStartGame");

	UPComSupportCommands_scStartGame_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLogMark
// (Final, Defined, Latent, Singular, Net)
// Parameters:
// struct FString                 Comment                        (Parm, NeedCtorLink)

void UPComSupportCommands::scLogMark(const struct FString& Comment)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scLogMark");

	UPComSupportCommands_scLogMark_Params params;
	params.Comment = Comment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.scLog
// (Defined, Latent, Singular, Net)
// Parameters:
// struct FString                 LogName                        (Parm, NeedCtorLink)
// bool                           bEnabled                       (OptionalParm, Parm)

void UPComSupportCommands::scLog(const struct FString& LogName, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.scLog");

	UPComSupportCommands_scLog_Params params;
	params.LogName = LogName;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmmf
// (PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComSupportCommands::STATIC_gmmf()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmmf");

	UPComSupportCommands_gmmf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags
// (Defined, PreOperator, NetReliable)
// Parameters:
// int                            Flags                          (Parm)
// bool                           bSet                           (Parm)

void UPComSupportCommands::SetLogServerTickStatsFlags(int Flags, bool bSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.SetLogServerTickStatsFlags");

	UPComSupportCommands_SetLogServerTickStatsFlags_Params params;
	params.Flags = Flags;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold
// (Final, Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          fThresh1                       (Parm)
// float                          fThresh2                       (Parm)

void UPComSupportCommands::STATIC_GPerfDebugPhysicsThreshold(float fThresh1, float fThresh2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugPhysicsThreshold");

	UPComSupportCommands_GPerfDebugPhysicsThreshold_Params params;
	params.fThresh1 = fThresh1;
	params.fThresh2 = fThresh2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate
// (Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            tickHz                         (Parm)
// int                            altTickHz                      (Parm)

void UPComSupportCommands::STATIC_GPerfDebugTickRate(int tickHz, int altTickHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugTickRate");

	UPComSupportCommands_GPerfDebugTickRate_Params params;
	params.tickHz = tickHz;
	params.altTickHz = altTickHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit
// (Final, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::STATIC_GPerfAllRelevantLimit(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfAllRelevantLimit");

	UPComSupportCommands_GPerfAllRelevantLimit_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfServerFlags
// (Final, Defined, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Flags                          (Parm)
// int                            alternate1                     (Parm)
// int                            alternate2                     (Parm)

void UPComSupportCommands::STATIC_GPerfServerFlags(int Flags, int alternate1, int alternate2)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfServerFlags");

	UPComSupportCommands_GPerfServerFlags_Params params;
	params.Flags = Flags;
	params.alternate1 = alternate1;
	params.alternate2 = alternate2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode
// (Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Mode                           (Parm)

void UPComSupportCommands::STATIC_GPerfDebugRelevMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugRelevMode");

	UPComSupportCommands_GPerfDebugRelevMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugSkips
// (Final, Iterator, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            skips                          (Parm)

void UPComSupportCommands::STATIC_GPerfDebugSkips(int skips)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugSkips");

	UPComSupportCommands_GPerfDebugSkips_Params params;
	params.skips = skips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.GPerfDebugFeet
// (Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            feet                           (Parm)

void UPComSupportCommands::STATIC_GPerfDebugFeet(int feet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.GPerfDebugFeet");

	UPComSupportCommands_GPerfDebugFeet_Params params;
	params.feet = feet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmDiag
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            Code                           (Parm)
// int                            Route                          (Parm)

void UPComSupportCommands::STATIC_gmDiag(int Code, int Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmDiag");

	UPComSupportCommands_gmDiag_Params params;
	params.Code = Code;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmC
// (Final, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_gmC(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmC");

	UPComSupportCommands_gmC_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmCommand
// (Defined, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 sCommand                       (Parm, NeedCtorLink)

void UPComSupportCommands::STATIC_gmCommand(const struct FString& sCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmCommand");

	UPComSupportCommands_gmCommand_Params params;
	params.sCommand = sCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComSupportCommands::STATIC_gmMatchLobbyResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchLobbyResume");

	UPComSupportCommands_gmMatchLobbyResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComSupportCommands::STATIC_gmMatchLobbyPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchLobbyPause");

	UPComSupportCommands_gmMatchLobbyPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchNext
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            nMapId                         (Parm)

void UPComSupportCommands::STATIC_gmMatchNext(int nMapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchNext");

	UPComSupportCommands_gmMatchNext_Params params;
	params.nMapId = nMapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComSupportCommands.gmMatchForce
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// int                            nQueueId                       (OptionalParm, Parm)

void UPComSupportCommands::STATIC_gmMatchForce(int nQueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComSupportCommands.gmMatchForce");

	UPComSupportCommands_gmMatchForce_Params params;
	params.nQueueId = nQueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComUIManagerBase.DebugDraw
// (Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UPComUIManagerBase::STATIC_DebugDraw(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUIManagerBase.DebugDraw");

	UPComUIManagerBase_DebugDraw_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPComUtilityFunctions::STATIC_GetGDeltaTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUtilityFunctions.GetGDeltaTime");

	UPComUtilityFunctions_GetGDeltaTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComUtilityFunctions.IsAWithStop
// (Final, Defined, PreOperator, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// class UObject*                 InObject                       (Parm)
// class UClass*                  SomeBase                       (Const, Parm)
// class UClass*                  StopAtBase                     (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPComUtilityFunctions::STATIC_IsAWithStop(class UObject* InObject, class UClass* SomeBase, class UClass* StopAtBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUtilityFunctions.IsAWithStop");

	UPComUtilityFunctions_IsAWithStop_Params params;
	params.InObject = InObject;
	params.SomeBase = SomeBase;
	params.StopAtBase = StopAtBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize
// (Final, Iterator, Latent, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FVector                 InVector                       (Const, Parm, OutParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UPComUtilityFunctions::STATIC_FakeNetSerialize(struct FVector* InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComUtilityFunctions.FakeNetSerialize");

	UPComUtilityFunctions_FakeNetSerialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVector != nullptr)
		*InVector = params.InVector;

	return params.ReturnValue;
}


// Function PlatformCommon.PComVideoPlayer.DestroyMe
// (Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void APComVideoPlayer::STATIC_DestroyMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.DestroyMe");

	APComVideoPlayer_DestroyMe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.TestOnVideoError
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable)
// Parameters:
// class APComVideoPlayer*        VideoPlayer                    (Parm)
// TEnumAsByte<EPComVideoPlayerError> ErrorCode                      (Parm)

void APComVideoPlayer::TestOnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.TestOnVideoError");

	APComVideoPlayer_TestOnVideoError_Params params;
	params.VideoPlayer = VideoPlayer;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.TestVideoPlayer
// (Final, Singular, Net, NetReliable)
// Parameters:
// class AActor*                  SpawningActor                  (Parm)
// struct FString                 InURL                          (OptionalParm, Parm, NeedCtorLink)

void APComVideoPlayer::TestVideoPlayer(class AActor* SpawningActor, const struct FString& InURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.TestVideoPlayer");

	APComVideoPlayer_TestVideoPlayer_Params params;
	params.SpawningActor = SpawningActor;
	params.InURL = InURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.Initialize
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Event, HasOptionalParms, Const)

void APComVideoPlayer::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.Initialize");

	APComVideoPlayer_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.NativePostRenderFor
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Operator, HasOptionalParms, Const)
// Parameters:
// class APlayerController*       PC                             (Parm)
// class UCanvas*                 Canvas                         (Parm)
// struct FVector                 CameraPosition                 (Parm)
// struct FVector                 CameraDir                      (Parm)

void APComVideoPlayer::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.NativePostRenderFor");

	APComVideoPlayer_NativePostRenderFor_Params params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.OnVideoError
// (Defined, PreOperator, Net, Simulated, Native, Event, Operator, Static)
// Parameters:
// class APComVideoPlayer*        VideoPlayer                    (Parm)
// TEnumAsByte<EPComVideoPlayerError> ErrorCode                      (Parm)

void APComVideoPlayer::STATIC_OnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.OnVideoError");

	APComVideoPlayer_OnVideoError_Params params;
	params.VideoPlayer = VideoPlayer;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComVideoPlayer.OnVideoFinished
// (Final, Defined, PreOperator, Net, Simulated, Native, Event, Operator, Static)

void APComVideoPlayer::STATIC_OnVideoFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComVideoPlayer.OnVideoFinished");

	APComVideoPlayer_OnVideoFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void UPComMusicThemePlayer::UpdateReplicatedMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.UpdateReplicatedMusicEvent");

	UPComMusicThemePlayer_UpdateReplicatedMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack
// (Defined, Iterator, Latent, Exec, Native, Event, Static, HasOptionalParms, Const)
// Parameters:
// struct FMusicTrackStruct       NewMusicTrack                  (Const, Parm, NeedCtorLink)
// float                          fDuration                      (Const, OptionalParm, Parm)

void UPComMusicThemePlayer::STATIC_UpdateMusicTrack(const struct FMusicTrackStruct& NewMusicTrack, float fDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.UpdateMusicTrack");

	UPComMusicThemePlayer_UpdateMusicTrack_Params params;
	params.NewMusicTrack = NewMusicTrack;
	params.fDuration = fDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.StopMusic
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Exec, Native, Event, Operator, Const)

void UPComMusicThemePlayer::StopMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.StopMusic");

	UPComMusicThemePlayer_StopMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent
// (Iterator, Latent, Singular)
// Parameters:
// struct FName                   EventName                      (Const, Parm)

void UPComMusicThemePlayer::PlayMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.PlayMusicEvent");

	UPComMusicThemePlayer_PlayMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic
// (Latent, Singular)

void UPComMusicThemePlayer::PlayDefaultMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.PlayDefaultMusic");

	UPComMusicThemePlayer_PlayDefaultMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded
// (Final, Iterator, Latent)

void UPComMusicThemePlayer::OnThemeLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.OnThemeLoaded");

	UPComMusicThemePlayer_OnThemeLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.LoadTheme
// (Final, Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 themepath                      (Const, Parm, NeedCtorLink)

void UPComMusicThemePlayer::STATIC_LoadTheme(const struct FString& themepath)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.LoadTheme");

	UPComMusicThemePlayer_LoadTheme_Params params;
	params.themepath = themepath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath
// (Final, Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPComMusicThemePlayer::STATIC_GetDefaultThemePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.GetDefaultThemePath");

	UPComMusicThemePlayer_GetDefaultThemePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme
// (Iterator, Singular, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalParms, Const)

void UPComMusicThemePlayer::STATIC_LoadDefaultTheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.LoadDefaultTheme");

	UPComMusicThemePlayer_LoadDefaultTheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemePlayer.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)

void UPComMusicThemePlayer::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemePlayer.Init");

	UPComMusicThemePlayer_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, Operator, Static)
// Parameters:
// struct FName                   VarName                        (Parm)

void APComMusicThemeSyncActor::STATIC_ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemeSyncActor.ReplicatedEvent");

	APComMusicThemeSyncActor_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable)
// Parameters:
// struct FName                   EventName                      (Parm)

void APComMusicThemeSyncActor::UpdateMusicEventClient(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEventClient");

	APComMusicThemeSyncActor_UpdateMusicEventClient_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable)
// Parameters:
// struct FName                   EventName                      (Parm)

void APComMusicThemeSyncActor::UpdateMusicEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PComMusicThemeSyncActor.UpdateMusicEvent");

	APComMusicThemeSyncActor_UpdateMusicEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_Vivox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vivox.VivoxOSSConnectors.OnGameChatBlockedChanged
// (Iterator, Latent, Net, NetReliable, Operator, Static, HasOptionalParms, Const)
// Parameters:
// bool                           bIsActive                      (Parm)

void UVivoxOSSConnectors::STATIC_OnGameChatBlockedChanged(bool bIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.OnGameChatBlockedChanged");

	UVivoxOSSConnectors_OnGameChatBlockedChanged_Params params;
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.IsGameChatBlocked
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::STATIC_IsGameChatBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.IsGameChatBlocked");

	UVivoxOSSConnectors_IsGameChatBlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.SignalGameChatStopping
// (Final, Singular, Net, NetReliable, Native, Event, Static)

void UVivoxOSSConnectors::STATIC_SignalGameChatStopping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.SignalGameChatStopping");

	UVivoxOSSConnectors_SignalGameChatStopping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.SignalGameChatAttempting
// (Singular, Net, NetReliable, Native, Event, Static)

void UVivoxOSSConnectors::STATIC_SignalGameChatAttempting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.SignalGameChatAttempting");

	UVivoxOSSConnectors_SignalGameChatAttempting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.OnPrivilegeCheckedForUsersByUniqueNetIds
// (Defined, Latent, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TArray<struct FPermissionsResultByUniqueNetId> Results                        (Parm, NeedCtorLink)

void UVivoxOSSConnectors::STATIC_OnPrivilegeCheckedForUsersByUniqueNetIds(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.OnPrivilegeCheckedForUsersByUniqueNetIds");

	UVivoxOSSConnectors_OnPrivilegeCheckedForUsersByUniqueNetIds_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.Results = Results;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.CanCommunicateVoiceWithUsersByUniqueNetIds
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Static)
// Parameters:
// TArray<struct FUniqueNetId>    Users                          (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::STATIC_CanCommunicateVoiceWithUsersByUniqueNetIds(TArray<struct FUniqueNetId> Users)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.CanCommunicateVoiceWithUsersByUniqueNetIds");

	UVivoxOSSConnectors_CanCommunicateVoiceWithUsersByUniqueNetIds_Params params;
	params.Users = Users;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.OnPrivilegeLevelChecked
// (Final, Defined, Latent, Simulated, Native, Event, Static)
// Parameters:
// int                            ChannelJoinCount               (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::STATIC_OnPrivilegeLevelChecked(int ChannelJoinCount, unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.OnPrivilegeLevelChecked");

	UVivoxOSSConnectors_OnPrivilegeLevelChecked_Params params;
	params.ChannelJoinCount = ChannelJoinCount;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.CanCommunicateVoice
// (Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Static)
// Parameters:
// int                            ChannelJoinCount               (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevelHint             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UVivoxOSSConnectors::STATIC_CanCommunicateVoice(int ChannelJoinCount, TEnumAsByte<EFeaturePrivilegeLevel>* PrivilegeLevelHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.CanCommunicateVoice");

	UVivoxOSSConnectors_CanCommunicateVoice_Params params;
	params.ChannelJoinCount = ChannelJoinCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrivilegeLevelHint != nullptr)
		*PrivilegeLevelHint = params.PrivilegeLevelHint;

	return params.ReturnValue;
}


// Function Vivox.VivoxOSSConnectors.RemoveClosure
// (Defined, Iterator, Singular, Simulated)
// Parameters:
// class UVivoxClosure*           Closure                        (Parm)

void UVivoxOSSConnectors::RemoveClosure(class UVivoxClosure* Closure)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.RemoveClosure");

	UVivoxOSSConnectors_RemoveClosure_Params params;
	params.Closure = Closure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxOSSConnectors.RegisterOnlineDelegates
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Static)

void UVivoxOSSConnectors::STATIC_RegisterOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxOSSConnectors.RegisterOnlineDelegates");

	UVivoxOSSConnectors_RegisterOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosure.ClearOnlineDelegates
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Event, Operator, Static)

void UVivoxClosure::STATIC_ClearOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxClosure.ClearOnlineDelegates");

	UVivoxClosure_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosure.RegisterOnlineDelegates
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Static)
// Parameters:
// class UOnlineSubsystem*        OnlineSub                      (Parm)

void UVivoxClosure::STATIC_RegisterOnlineDelegates(class UOnlineSubsystem* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxClosure.RegisterOnlineDelegates");

	UVivoxClosure_RegisterOnlineDelegates_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosure.Init
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec)
// Parameters:
// class UVivoxOSSConnectors*     ParamConnector                 (Parm)

void UVivoxClosure::Init(class UVivoxOSSConnectors* ParamConnector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxClosure.Init");

	UVivoxClosure_Init_Params params;
	params.ParamConnector = ParamConnector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.OnPrivilegeLevelChecked
// (Final, Defined, Latent, Simulated, Native, Event, Static)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TEnumAsByte<EFeaturePrivilege> Privilege                      (Parm)
// TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel                 (Parm)
// bool                           bDiffersFromHint               (Parm)

void UVivoxClosureOnPrivilegeLevelChecked::STATIC_OnPrivilegeLevelChecked(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TEnumAsByte<EFeaturePrivilegeLevel> PrivilegeLevel, bool bDiffersFromHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.OnPrivilegeLevelChecked");

	UVivoxClosureOnPrivilegeLevelChecked_OnPrivilegeLevelChecked_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Privilege = Privilege;
	params.PrivilegeLevel = PrivilegeLevel;
	params.bDiffersFromHint = bDiffersFromHint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.ClearOnlineDelegates
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Exec, Event, Operator, Static)

void UVivoxClosureOnPrivilegeLevelChecked::STATIC_ClearOnlineDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.ClearOnlineDelegates");

	UVivoxClosureOnPrivilegeLevelChecked_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.RegisterOnlineDelegates
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Native, Event, Static)
// Parameters:
// class UOnlineSubsystem*        OnlineSub                      (Parm)

void UVivoxClosureOnPrivilegeLevelChecked::STATIC_RegisterOnlineDelegates(class UOnlineSubsystem* OnlineSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.RegisterOnlineDelegates");

	UVivoxClosureOnPrivilegeLevelChecked_RegisterOnlineDelegates_Params params;
	params.OnlineSub = OnlineSub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vivox.VivoxClosureOnPrivilegeLevelChecked.InitClosure
// (Singular, Simulated)
// Parameters:
// int                            ChannelJoinCount               (Parm)
// class UVivoxOSSConnectors*     Connector                      (Parm)

void UVivoxClosureOnPrivilegeLevelChecked::InitClosure(int ChannelJoinCount, class UVivoxOSSConnectors* Connector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vivox.VivoxClosureOnPrivilegeLevelChecked.InitClosure");

	UVivoxClosureOnPrivilegeLevelChecked_InitClosure_Params params;
	params.ChannelJoinCount = ChannelJoinCount;
	params.Connector = Connector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

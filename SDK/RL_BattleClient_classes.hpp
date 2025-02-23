#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_BattleClient_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleClient.BattleHUD
// 0x0000 (0x062C - 0x062C)
class ABattleHUD : public ATgClientHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleClient.BattleHUD");
		return ptr;
	}


	void BattleHUDFunction();
};


// Class BattleClient.BattleLaunch
// 0x0000 (0x04F0 - 0x04F0)
class ABattleLaunch : public ATgGameLaunch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleClient.BattleLaunch");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

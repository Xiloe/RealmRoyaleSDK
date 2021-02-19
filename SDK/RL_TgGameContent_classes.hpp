#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_TgGameContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TgGameContent.TgMenuTransitionActor_Content
// 0x0000 (0x0298 - 0x0298)
class ATgMenuTransitionActor_Content : public ATgMenuTransitionActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgGameContent.TgMenuTransitionActor_Content");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// RealmRoyale (0.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RL_Basic.hpp"
#include "RL_Core_classes.hpp"
#include "RL_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x000C
struct FAkEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	class UAkEvent*                                    Event;                                                    // 0x0004(0x0008) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

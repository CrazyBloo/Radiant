#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct MovementSettings_State.MovementSettings_State
	 * Size -> 0x00C0
	 */
	struct FMovementSettings_State
	{
	public:
		struct FMovementSettings_Stance                            VelocityDirection_17_291919F34C61D6D2C253D3B80934D9D2;   // 0x0000(0x0040) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMovementSettings_Stance                            LookingDirection_18_DEF8FDDA4324E7EF87C9DE8D07831456;    // 0x0040(0x0040) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMovementSettings_Stance                            Aiming_21_D7B17FD043E721735EF6CCA049CD9E66;              // 0x0080(0x0040) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

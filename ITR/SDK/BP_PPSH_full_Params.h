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
	 * Function BP_PPSH_full.BP_PPSH_full_C.ReceiveBeginPlay
	 */
	struct ABP_PPSH_full_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PPSH_full.BP_PPSH_full_C.SafetyVisual
	 */
	struct ABP_PPSH_full_C_SafetyVisual_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PPSH_full.BP_PPSH_full_C.ExecuteUbergraph_BP_PPSH_full
	 */
	struct ABP_PPSH_full_C_ExecuteUbergraph_BP_PPSH_full_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * Function BP_PPSH.BP_PPSH_C.ReceiveBeginPlay
	 */
	struct ABP_PPSH_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PPSH.BP_PPSH_C.SafetyVisual
	 */
	struct ABP_PPSH_C_SafetyVisual_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PPSH.BP_PPSH_C.ExecuteUbergraph_BP_PPSH
	 */
	struct ABP_PPSH_C_ExecuteUbergraph_BP_PPSH_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

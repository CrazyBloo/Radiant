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
	 * Function BPA_Consumable.BPA_Consumable_C.Use
	 */
	struct ABPA_Consumable_C_Use_Params
	{	};

	/**
	 * Function BPA_Consumable.BPA_Consumable_C.OnUseCountEnd
	 */
	struct ABPA_Consumable_C_OnUseCountEnd_Params
	{	};

	/**
	 * Function BPA_Consumable.BPA_Consumable_C.ExecuteUbergraph_BPA_Consumable
	 */
	struct ABPA_Consumable_C_ExecuteUbergraph_BPA_Consumable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

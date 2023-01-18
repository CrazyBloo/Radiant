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
		unsigned char                                              UnknownData_BHIH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.OnInject
	 */
	struct ABP_Item_Injector_Heal_C_OnInject_Params
	{	};

	/**
	 * Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.HealTick
	 */
	struct ABP_Item_Injector_Heal_C_HealTick_Params
	{	};

	/**
	 * Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.ReceiveEndPlay
	 */
	struct ABP_Item_Injector_Heal_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.ExecuteUbergraph_BP_Item_Injector_Heal
	 */
	struct ABP_Item_Injector_Heal_C_ExecuteUbergraph_BP_Item_Injector_Heal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1C7I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

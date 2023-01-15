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
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.BlockFaceTrigger
	 */
	struct ABPA_Armor_Head_C_BlockFaceTrigger_Params
	{
	};

	/**
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.RemovePostProcess
	 */
	struct ABPA_Armor_Head_C_RemovePostProcess_Params
	{	};

	/**
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.AddPostProcess
	 */
	struct ABPA_Armor_Head_C_AddPostProcess_Params
	{	};

	/**
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.ReceiveEndPlay
	 */
	struct ABPA_Armor_Head_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.OnStart
	 */
	struct ABPA_Armor_Head_C_OnStart_Params
	{	};

	/**
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.OnAddedToHolster
	 */
	struct ABPA_Armor_Head_C_OnAddedToHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.OnRemovedFromHolster
	 */
	struct ABPA_Armor_Head_C_OnRemovedFromHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Head.BPA_Armor_Head_C.ExecuteUbergraph_BPA_Armor_Head
	 */
	struct ABPA_Armor_Head_C_ExecuteUbergraph_BPA_Armor_Head_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BVWZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

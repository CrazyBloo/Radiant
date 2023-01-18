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
	 * Function BPA_Armor_Base.BPA_Armor_Base_C.GetFootStepBonus
	 */
	struct ABPA_Armor_Base_C_GetFootStepBonus_Params
	{
	public:
		unsigned char                                              UnknownData_PKON[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bonus;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHB3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Armor_Base.BPA_Armor_Base_C.BlockFaceTrigger
	 */
	struct ABPA_Armor_Base_C_BlockFaceTrigger_Params
	{
	};

	/**
	 * Function BPA_Armor_Base.BPA_Armor_Base_C.GetSoundType
	 */
	struct ABPA_Armor_Base_C_GetSoundType_Params
	{
	public:
		bool                                                       Exist;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8U05[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Base.BPA_Armor_Base_C.OnAddedToHolster
	 */
	struct ABPA_Armor_Base_C_OnAddedToHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Base.BPA_Armor_Base_C.ExecuteUbergraph_BPA_Armor_Base
	 */
	struct ABPA_Armor_Base_C_ExecuteUbergraph_BPA_Armor_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4WHK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

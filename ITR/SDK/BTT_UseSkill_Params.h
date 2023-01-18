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
	 * Function BTT_UseSkill.BTT_UseSkill_C.Use
	 */
	struct UBTT_UseSkill_C_Use_Params
	{	};

	/**
	 * Function BTT_UseSkill.BTT_UseSkill_C.CheckReadiness
	 */
	struct UBTT_UseSkill_C_CheckReadiness_Params
	{	};

	/**
	 * Function BTT_UseSkill.BTT_UseSkill_C.CheckProgress
	 */
	struct UBTT_UseSkill_C_CheckProgress_Params
	{	};

	/**
	 * Function BTT_UseSkill.BTT_UseSkill_C.CheckCooldown
	 */
	struct UBTT_UseSkill_C_CheckCooldown_Params
	{	};

	/**
	 * Function BTT_UseSkill.BTT_UseSkill_C.ReceiveExecute
	 */
	struct UBTT_UseSkill_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_UseSkill.BTT_UseSkill_C.ExecuteUbergraph_BTT_UseSkill
	 */
	struct UBTT_UseSkill_C_ExecuteUbergraph_BTT_UseSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

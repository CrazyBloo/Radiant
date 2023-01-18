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
	 * Function BP_AUG.BP_AUG_C.Next Fire Mode
	 */
	struct ABP_AUG_C_NextFireMode_Params
	{
	public:
		bool                                                       Changed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWeaponFireMode                                            FireMode;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AUG.BP_AUG_C.SafetyVisual
	 */
	struct ABP_AUG_C_SafetyVisual_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AUG.BP_AUG_C.AttachmentAttached
	 */
	struct ABP_AUG_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AUG.BP_AUG_C.AttachmentDetached
	 */
	struct ABP_AUG_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AUG.BP_AUG_C.OnReconfigure
	 */
	struct ABP_AUG_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_AUG.BP_AUG_C.RefreshSights
	 */
	struct ABP_AUG_C_RefreshSights_Params
	{	};

	/**
	 * Function BP_AUG.BP_AUG_C.PrimaryTrigger
	 */
	struct ABP_AUG_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AUG.BP_AUG_C.OnEndUsed
	 */
	struct ABP_AUG_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_AUG.BP_AUG_C.DoFire
	 */
	struct ABP_AUG_C_DoFire_Params
	{	};

	/**
	 * Function BP_AUG.BP_AUG_C.ExecuteUbergraph_BP_AUG
	 */
	struct ABP_AUG_C_ExecuteUbergraph_BP_AUG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

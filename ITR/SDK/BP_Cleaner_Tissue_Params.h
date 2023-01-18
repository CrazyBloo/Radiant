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
	 * Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.IsExcludedFromPool
	 */
	struct ABP_Cleaner_Tissue_C_IsExcludedFromPool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.PopFromPoolActor
	 */
	struct ABP_Cleaner_Tissue_C_PopFromPoolActor_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.PushToPoolActor
	 */
	struct ABP_Cleaner_Tissue_C_PushToPoolActor_Params
	{	};

	/**
	 * Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.UpdateMaterial
	 */
	struct ABP_Cleaner_Tissue_C_UpdateMaterial_Params
	{	};

	/**
	 * Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.OnReconfigure
	 */
	struct ABP_Cleaner_Tissue_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.ExecuteUbergraph_BP_Cleaner_Tissue
	 */
	struct ABP_Cleaner_Tissue_C_ExecuteUbergraph_BP_Cleaner_Tissue_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GLJO[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

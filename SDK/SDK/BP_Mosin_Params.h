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
	 * Function BP_Mosin.BP_Mosin_C.GetPoseShift
	 */
	struct ABP_Mosin_C_GetPoseShift_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P7CJ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mosin.BP_Mosin_C.DestroyComp
	 */
	struct ABP_Mosin_C_DestroyComp_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mosin.BP_Mosin_C.OnReconfigure
	 */
	struct ABP_Mosin_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Mosin.BP_Mosin_C.UpdateAttachmentSlots
	 */
	struct ABP_Mosin_C_UpdateAttachmentSlots_Params
	{	};

	/**
	 * Function BP_Mosin.BP_Mosin_C.ExecuteUbergraph_BP_Mosin
	 */
	struct ABP_Mosin_C_ExecuteUbergraph_BP_Mosin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function ABP_Shade.ABP_Shade_C.AnimGraph
	 */
	struct UABP_Shade_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Shade.ABP_Shade_C.IsMeleeAttackPlaying
	 */
	struct UABP_Shade_C_IsMeleeAttackPlaying_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Shade.ABP_Shade_C.IsAttacking
	 */
	struct UABP_Shade_C_IsAttacking_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Shade.ABP_Shade_C.BlueprintUpdateAnimation
	 */
	struct UABP_Shade_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Shade.ABP_Shade_C.BlueprintBeginPlay
	 */
	struct UABP_Shade_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_Shade.ABP_Shade_C.AnimNotify_FootstepHit
	 */
	struct UABP_Shade_C_AnimNotify_FootstepHit_Params
	{	};

	/**
	 * Function ABP_Shade.ABP_Shade_C.ExecuteUbergraph_ABP_Shade
	 */
	struct UABP_Shade_C_ExecuteUbergraph_ABP_Shade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0IWS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

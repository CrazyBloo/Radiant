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
	 * Function ABP_Multileg.ABP_Multileg_C.AnimGraph
	 */
	struct UABP_Multileg_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Multileg.ABP_Multileg_C.BlueprintUpdateAnimation
	 */
	struct UABP_Multileg_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Multileg.ABP_Multileg_C.BlueprintBeginPlay
	 */
	struct UABP_Multileg_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_Multileg.ABP_Multileg_C.ExecuteUbergraph_ABP_Multileg
	 */
	struct UABP_Multileg_C_ExecuteUbergraph_ABP_Multileg_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

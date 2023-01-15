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
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.AnimGraph
	 */
	struct UABP_Player_MainWithHands_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.SetLeftHand
	 */
	struct UABP_Player_MainWithHands_C_SetLeftHand_Params
	{	};

	/**
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.CalculateGait
	 */
	struct UABP_Player_MainWithHands_C_CalculateGait_Params
	{	};

	/**
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.ReadDefaultData
	 */
	struct UABP_Player_MainWithHands_C_ReadDefaultData_Params
	{	};

	/**
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.CalculateTickData
	 */
	struct UABP_Player_MainWithHands_C_CalculateTickData_Params
	{	};

	/**
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.BlueprintInitializeAnimation
	 */
	struct UABP_Player_MainWithHands_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.BlueprintUpdateAnimation
	 */
	struct UABP_Player_MainWithHands_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.ExecuteUbergraph_ABP_Player_MainWithHands
	 */
	struct UABP_Player_MainWithHands_C_ExecuteUbergraph_ABP_Player_MainWithHands_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_TideBase.BP_TideBase_C.GetTideRadius
	 */
	struct ABP_TideBase_C_GetTideRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.AnimateTide
	 */
	struct ABP_TideBase_C_AnimateTide_Params
	{
	public:
		class FScriptDelegate                                      OnFinished;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       Animating;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PL92[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.GetRandomLocationAlongSpline
	 */
	struct ABP_TideBase_C_GetRandomLocationAlongSpline_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MPNB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.GetRandomPositionAlongRadius
	 */
	struct ABP_TideBase_C_GetRandomPositionAlongRadius_Params
	{
	public:
		struct FTransform                                          navigablePosition;                                       // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		bool                                                       success;                                                 // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GCP4[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.GetInZoneGate
	 */
	struct ABP_TideBase_C_GetInZoneGate_Params
	{
	public:
		class ABP_ZoneGate_C*                                      Gate;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.GetTideCenter
	 */
	struct ABP_TideBase_C_GetTideCenter_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.CheckIsInTide
	 */
	struct ABP_TideBase_C_CheckIsInTide_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       inTide;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.GetDistanceToTide
	 */
	struct ABP_TideBase_C_GetDistanceToTide_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.EventCheck
	 */
	struct ABP_TideBase_C_EventCheck_Params
	{	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.DoTransition
	 */
	struct ABP_TideBase_C_DoTransition_Params
	{	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.ReceiveEndPlay
	 */
	struct ABP_TideBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.OnTransitionEnd
	 */
	struct ABP_TideBase_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.OnLevelPrepare
	 */
	struct ABP_TideBase_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.OnTransitionStart
	 */
	struct ABP_TideBase_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.UpdateCenterLocation
	 */
	struct ABP_TideBase_C_UpdateCenterLocation_Params
	{	};

	/**
	 * Function BP_TideBase.BP_TideBase_C.ExecuteUbergraph_BP_TideBase
	 */
	struct ABP_TideBase_C_ExecuteUbergraph_BP_TideBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RTXW[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

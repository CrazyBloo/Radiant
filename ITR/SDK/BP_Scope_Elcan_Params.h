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
	 * Function BP_Scope_Elcan.BP_Scope_Elcan_C.BndEvt__BP_Scope_Elcan_VRLever_K2Node_ComponentBoundEvent_0_VRLeverStateChangedSignature__DelegateSignature
	 */
	struct ABP_Scope_Elcan_C_BndEvt__BP_Scope_Elcan_VRLever_K2Node_ComponentBoundEvent_0_VRLeverStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       LeverStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EVRInteractibleLeverEventType                              LeverStatusType;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G381[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LeverAngleAtTime;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FullLeverAngleAtTime;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Scope_Elcan.BP_Scope_Elcan_C.OnReconfigure
	 */
	struct ABP_Scope_Elcan_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Scope_Elcan.BP_Scope_Elcan_C.UpdateFov
	 */
	struct ABP_Scope_Elcan_C_UpdateFov_Params
	{	};

	/**
	 * Function BP_Scope_Elcan.BP_Scope_Elcan_C.ExecuteUbergraph_BP_Scope_Elcan
	 */
	struct ABP_Scope_Elcan_C_ExecuteUbergraph_BP_Scope_Elcan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_Flashlight.BP_Flashlight_C.GetLightItem
	 */
	struct ABP_Flashlight_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XB9F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.TurnOffBasedOnFlashlightType
	 */
	struct ABP_Flashlight_C_TurnOffBasedOnFlashlightType_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.IsOn
	 */
	struct ABP_Flashlight_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GSVZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.GetDefaultPoseType
	 */
	struct ABP_Flashlight_C_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.LightDetection
	 */
	struct ABP_Flashlight_C_LightDetection_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.UpdateBounceLight
	 */
	struct ABP_Flashlight_C_UpdateBounceLight_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.UpdateLight_Internal
	 */
	struct ABP_Flashlight_C_UpdateLight_Internal_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.UserConstructionScript
	 */
	struct ABP_Flashlight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.OnUsed
	 */
	struct ABP_Flashlight_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.ShowLight
	 */
	struct ABP_Flashlight_C_ShowLight_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.ReceiveTick
	 */
	struct ABP_Flashlight_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.ThumbLeft
	 */
	struct ABP_Flashlight_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.OnGrip
	 */
	struct ABP_Flashlight_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EPMV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.OnGripRelease
	 */
	struct ABP_Flashlight_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6CS6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.OnReconfigure
	 */
	struct ABP_Flashlight_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.HideLight
	 */
	struct ABP_Flashlight_C_HideLight_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.SetItemVisibility
	 */
	struct ABP_Flashlight_C_SetItemVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.SetLightsVisibility
	 */
	struct ABP_Flashlight_C_SetLightsVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.TurnOffBasedOnLightType
	 */
	struct ABP_Flashlight_C_TurnOffBasedOnLightType_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.ReceiveBeginPlay
	 */
	struct ABP_Flashlight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.SwitchLight
	 */
	struct ABP_Flashlight_C_SwitchLight_Params
	{
	public:
		bool                                                       bSwitchOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Flashlight.BP_Flashlight_C.ExecuteUbergraph_BP_Flashlight
	 */
	struct ABP_Flashlight_C_ExecuteUbergraph_BP_Flashlight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CEB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffLightHelper
	 */
	struct ABP_Flashlight_Pocket_C_TurnOffLightHelper_Params
	{	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffBasedOnFlashlightType
	 */
	struct ABP_Flashlight_Pocket_C_TurnOffBasedOnFlashlightType_Params
	{	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ToggleLight
	 */
	struct ABP_Flashlight_Pocket_C_ToggleLight_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ReceiveBeginPlay
	 */
	struct ABP_Flashlight_Pocket_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ThumbLeft
	 */
	struct ABP_Flashlight_Pocket_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.BindEvents
	 */
	struct ABP_Flashlight_Pocket_C_BindEvents_Params
	{	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnGameDataSave
	 */
	struct ABP_Flashlight_Pocket_C_OnGameDataSave_Params
	{	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnLevelPrepare
	 */
	struct ABP_Flashlight_Pocket_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnGripRelease
	 */
	struct ABP_Flashlight_Pocket_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C3QG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffBasedOnLightType
	 */
	struct ABP_Flashlight_Pocket_C_TurnOffBasedOnLightType_Params
	{	};

	/**
	 * Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ExecuteUbergraph_BP_Flashlight_Pocket
	 */
	struct ABP_Flashlight_Pocket_C_ExecuteUbergraph_BP_Flashlight_Pocket_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OAWN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

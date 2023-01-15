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
	 * Function BP_Camera.BP_Camera_C.GetPictureMarker
	 */
	struct ABP_Camera_C_GetPictureMarker_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Camera.BP_Camera_C.GetTakenPictures
	 */
	struct ABP_Camera_C_GetTakenPictures_Params
	{
	public:
		TArray<struct FGameplayTag>                                pictures;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Camera.BP_Camera_C.CheckTag
	 */
	struct ABP_Camera_C_CheckTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PMTA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Camera.BP_Camera_C.UserConstructionScript
	 */
	struct ABP_Camera_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Camera_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Camera_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.ReceiveTick
	 */
	struct ABP_Camera_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Camera.BP_Camera_C.ThumbUp
	 */
	struct ABP_Camera_C_ThumbUp_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.EjectMag
	 */
	struct ABP_Camera_C_EjectMag_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.OnUsed
	 */
	struct ABP_Camera_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.ReceiveDestroyed
	 */
	struct ABP_Camera_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.OnGrip
	 */
	struct ABP_Camera_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_36U0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Camera.BP_Camera_C.OnGripRelease
	 */
	struct ABP_Camera_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W77F[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Camera.BP_Camera_C.RefreshMissionPictures
	 */
	struct ABP_Camera_C_RefreshMissionPictures_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.OnReconfigure
	 */
	struct ABP_Camera_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Camera.BP_Camera_C.ME
	 */
	struct ABP_Camera_C_ME_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Camera.BP_Camera_C.ExecuteUbergraph_BP_Camera
	 */
	struct ABP_Camera_C_ExecuteUbergraph_BP_Camera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

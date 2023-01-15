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
	 * Function BP_DVL.BP_DVL_C.IsCanLoadRound
	 */
	struct ABP_DVL_C_IsCanLoadRound_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DVL.BP_DVL_C.GetAttachmentsList
	 */
	struct ABP_DVL_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_DVL.BP_DVL_C.GetPoseShift
	 */
	struct ABP_DVL_C_GetPoseShift_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BZ1Z[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DVL.BP_DVL_C.EjectMag
	 */
	struct ABP_DVL_C_EjectMag_Params
	{	};

	/**
	 * Function BP_DVL.BP_DVL_C.DropEjectedMag
	 */
	struct ABP_DVL_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BP_DVL.BP_DVL_C.OnGrip
	 */
	struct ABP_DVL_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5MAO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_DVL.BP_DVL_C.LoadRound
	 */
	struct ABP_DVL_C_LoadRound_Params
	{	};

	/**
	 * Function BP_DVL.BP_DVL_C.UpdateAmmoInBolt
	 */
	struct ABP_DVL_C_UpdateAmmoInBolt_Params
	{	};

	/**
	 * Function BP_DVL.BP_DVL_C.BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature
	 */
	struct ABP_DVL_C_BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature_Params
	{
	public:
		EWeaponBoltState                                           prevState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DVL.BP_DVL_C.OnReconfigure
	 */
	struct ABP_DVL_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_DVL.BP_DVL_C.ExecuteUbergraph_BP_DVL
	 */
	struct ABP_DVL_C_ExecuteUbergraph_BP_DVL_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AGD1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

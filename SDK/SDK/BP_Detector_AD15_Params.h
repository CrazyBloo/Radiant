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
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.FindNearestActorLocation
	 */
	struct ABP_Detector_AD15_C_FindNearestActorLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.FindArtifactsInRange
	 */
	struct ABP_Detector_AD15_C_FindArtifactsInRange_Params
	{
	public:
		TArray<class AActor*>                                      ActorArr;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      ArtifactsInRange;                                        // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.CheckDetectedActors
	 */
	struct ABP_Detector_AD15_C_CheckDetectedActors_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.CalculateDetaction_RangeBased
	 */
	struct ABP_Detector_AD15_C_CalculateDetaction_RangeBased_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxRange;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DetectorValue;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.CalculateDetection_WithDirection
	 */
	struct ABP_Detector_AD15_C_CalculateDetection_WithDirection_Params
	{
	public:
		struct FVector                                             ActorLocation;                                           // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxRange;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DetectorValueDistance;                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DetectorValueDirection;                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Detector_AD15_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Detector_AD15_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Detector_AD15_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Detector_AD15_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.MadeVisible
	 */
	struct ABP_Detector_AD15_C_MadeVisible_Params
	{
	public:
		class ABPA_Artifact_C*                                     ArtRef;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveBeginPlay
	 */
	struct ABP_Detector_AD15_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveTick
	 */
	struct ABP_Detector_AD15_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.OnGrip
	 */
	struct ABP_Detector_AD15_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8ZZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.OnUsed
	 */
	struct ABP_Detector_AD15_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.Cooldown
	 */
	struct ABP_Detector_AD15_C_Cooldown_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.Flash
	 */
	struct ABP_Detector_AD15_C_Flash_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.ReceiveDestroyed
	 */
	struct ABP_Detector_AD15_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.FindArtifacts
	 */
	struct ABP_Detector_AD15_C_FindArtifacts_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.ThumbLeft
	 */
	struct ABP_Detector_AD15_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Detector_AD15.BP_Detector_AD15_C.ExecuteUbergraph_BP_Detector_AD15
	 */
	struct ABP_Detector_AD15_C_ExecuteUbergraph_BP_Detector_AD15_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

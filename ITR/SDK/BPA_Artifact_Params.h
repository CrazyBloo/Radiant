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
	 * Function BPA_Artifact.BPA_Artifact_C.IsVisible
	 */
	struct ABPA_Artifact_C_IsVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YNJ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.DestroyArtifact
	 */
	struct ABPA_Artifact_C_DestroyArtifact_Params
	{
	public:
		bool                                                       Particles;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OB3B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.ApplyEffect
	 */
	struct ABPA_Artifact_C_ApplyEffect_Params
	{	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.ReduceDurabilityPerCall
	 */
	struct ABPA_Artifact_C_ReduceDurabilityPerCall_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.Timeline_0__FinishedFunc
	 */
	struct ABPA_Artifact_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.Timeline_0__UpdateFunc
	 */
	struct ABPA_Artifact_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.MakeVisible
	 */
	struct ABPA_Artifact_C_MakeVisible_Params
	{
	public:
		bool                                                       NoGlow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dropItem;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.OnGrip
	 */
	struct ABPA_Artifact_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W2UH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.OnGripRelease
	 */
	struct ABPA_Artifact_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PFXO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.ReceiveTick
	 */
	struct ABPA_Artifact_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.OnUsed
	 */
	struct ABPA_Artifact_C_OnUsed_Params
	{	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.OnEndUsed
	 */
	struct ABPA_Artifact_C_OnEndUsed_Params
	{	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.MadeVisible
	 */
	struct ABPA_Artifact_C_MadeVisible_Params
	{
	public:
		class ABPA_Artifact_C*                                     ArtRef;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.OnReconfigure
	 */
	struct ABPA_Artifact_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.ReceiveEndPlay
	 */
	struct ABPA_Artifact_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.MakeHidden
	 */
	struct ABPA_Artifact_C_MakeHidden_Params
	{	};

	/**
	 * Function BPA_Artifact.BPA_Artifact_C.ExecuteUbergraph_BPA_Artifact
	 */
	struct ABPA_Artifact_C_ExecuteUbergraph_BPA_Artifact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

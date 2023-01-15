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
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.DropItemOnGround
	 */
	struct ABP_SleepingBag_Simple_C_DropItemOnGround_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SetPacked
	 */
	struct ABP_SleepingBag_Simple_C_SetPacked_Params
	{
	public:
		bool                                                       Packed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.ButtonsOn
	 */
	struct ABP_SleepingBag_Simple_C_ButtonsOn_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.PackToggle
	 */
	struct ABP_SleepingBag_Simple_C_PackToggle_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnReconfigure
	 */
	struct ABP_SleepingBag_Simple_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnStart
	 */
	struct ABP_SleepingBag_Simple_C_OnStart_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.UpdateButtons
	 */
	struct ABP_SleepingBag_Simple_C_UpdateButtons_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnUsed
	 */
	struct ABP_SleepingBag_Simple_C_OnUsed_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnGrip
	 */
	struct ABP_SleepingBag_Simple_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E29G[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnGripRelease
	 */
	struct ABP_SleepingBag_Simple_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1IF5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnEndUsed
	 */
	struct ABP_SleepingBag_Simple_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.UnbindButtons
	 */
	struct ABP_SleepingBag_Simple_C_UnbindButtons_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnLevelStartedEvent
	 */
	struct ABP_SleepingBag_Simple_C_OnLevelStartedEvent_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SleepFor
	 */
	struct ABP_SleepingBag_Simple_C_SleepFor_Params
	{
	public:
		float                                                      SleepFor;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_SleepingBag_Simple_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.TakenByHolder
	 */
	struct ABP_SleepingBag_Simple_C_TakenByHolder_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.Fix Position
	 */
	struct ABP_SleepingBag_Simple_C_Fix_Position_Params
	{	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.ExecuteUbergraph_BP_SleepingBag_Simple
	 */
	struct ABP_SleepingBag_Simple_C_ExecuteUbergraph_BP_SleepingBag_Simple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SleepStart__DelegateSignature
	 */
	struct ABP_SleepingBag_Simple_C_SleepStart__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

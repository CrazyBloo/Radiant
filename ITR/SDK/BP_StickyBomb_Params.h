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
	 * Function BP_StickyBomb.BP_StickyBomb_C.Timeline_0__FinishedFunc
	 */
	struct ABP_StickyBomb_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.Timeline_0__UpdateFunc
	 */
	struct ABP_StickyBomb_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.ReceiveTick
	 */
	struct ABP_StickyBomb_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.OnUsed
	 */
	struct ABP_StickyBomb_C_OnUsed_Params
	{	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.StopUse
	 */
	struct ABP_StickyBomb_C_StopUse_Params
	{	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.OnGripRelease
	 */
	struct ABP_StickyBomb_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TIKS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.OnEndUsed
	 */
	struct ABP_StickyBomb_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.ThrowItem
	 */
	struct ABP_StickyBomb_C_ThrowItem_Params
	{	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_StickyBomb_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.VisRecoil
	 */
	struct ABP_StickyBomb_C_VisRecoil_Params
	{
	public:
		struct FVector                                             ExplosionPos;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.Explosion
	 */
	struct ABP_StickyBomb_C_Explosion_Params
	{	};

	/**
	 * Function BP_StickyBomb.BP_StickyBomb_C.ExecuteUbergraph_BP_StickyBomb
	 */
	struct ABP_StickyBomb_C_ExecuteUbergraph_BP_StickyBomb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AGEX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnReconfigure
	 */
	struct ABP_Consumable_Cake_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnGripRelease
	 */
	struct ABP_Consumable_Cake_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XUPZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnGrip
	 */
	struct ABP_Consumable_Cake_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1MWI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.Use
	 */
	struct ABP_Consumable_Cake_C_Use_Params
	{	};

	/**
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnUseCountEnd
	 */
	struct ABP_Consumable_Cake_C_OnUseCountEnd_Params
	{	};

	/**
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.UpdateMesh
	 */
	struct ABP_Consumable_Cake_C_UpdateMesh_Params
	{	};

	/**
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.BndEvt__BP_Consumable_Cake_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature
	 */
	struct ABP_Consumable_Cake_C_BndEvt__BP_Consumable_Cake_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Consumable_Cake.BP_Consumable_Cake_C.ExecuteUbergraph_BP_Consumable_Cake
	 */
	struct ABP_Consumable_Cake_C_ExecuteUbergraph_BP_Consumable_Cake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7040[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

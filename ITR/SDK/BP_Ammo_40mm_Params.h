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
	 * Function BP_Ammo_40mm.BP_Ammo_40mm_C.GetPhysicsRootComponent
	 */
	struct ABP_Ammo_40mm_C_GetPhysicsRootComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ammo_40mm.BP_Ammo_40mm_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature
	 */
	struct ABP_Ammo_40mm_C_BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        weaponTag;                                               // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BKGS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DmgType;                                                 // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ammo_40mm.BP_Ammo_40mm_C.HealthEndedOverride
	 */
	struct ABP_Ammo_40mm_C_HealthEndedOverride_Params
	{	};

	/**
	 * Function BP_Ammo_40mm.BP_Ammo_40mm_C.ExecuteUbergraph_BP_Ammo_40mm
	 */
	struct ABP_Ammo_40mm_C_ExecuteUbergraph_BP_Ammo_40mm_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

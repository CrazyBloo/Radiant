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
	 * Function BP_XmasTree.BP_XmasTree_C.UpdateMaterialDamage
	 */
	struct ABP_XmasTree_C_UpdateMaterialDamage_Params
	{	};

	/**
	 * Function BP_XmasTree.BP_XmasTree_C.UserConstructionScript
	 */
	struct ABP_XmasTree_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_XmasTree.BP_XmasTree_C.ReceiveBeginPlay
	 */
	struct ABP_XmasTree_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_XmasTree.BP_XmasTree_C.BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDamaged__DelegateSignature
	 */
	struct ABP_XmasTree_C_BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDamaged__DelegateSignature_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        weaponTag;                                               // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MLGO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DmgType;                                                 // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_XmasTree.BP_XmasTree_C.CustomEvent_1
	 */
	struct ABP_XmasTree_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_XmasTree.BP_XmasTree_C.BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDestroyed__DelegateSignature
	 */
	struct ABP_XmasTree_C_BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDestroyed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_XmasTree.BP_XmasTree_C.ExecuteUbergraph_BP_XmasTree
	 */
	struct ABP_XmasTree_C_ExecuteUbergraph_BP_XmasTree_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXKE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

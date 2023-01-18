/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_XmasTree.BP_XmasTree_C.UpdateMaterialDamage
	 * 		Flags  -> ()
	 */
	void ABP_XmasTree_C::UpdateMaterialDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_XmasTree.BP_XmasTree_C.UpdateMaterialDamage");
		
		ABP_XmasTree_C_UpdateMaterialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_XmasTree.BP_XmasTree_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_XmasTree_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_XmasTree.BP_XmasTree_C.UserConstructionScript");
		
		ABP_XmasTree_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_XmasTree.BP_XmasTree_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void ABP_XmasTree_C::CustomEvent_1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_XmasTree.BP_XmasTree_C.CustomEvent_1");
		
		ABP_XmasTree_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_XmasTree.BP_XmasTree_C.BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDestroyed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_XmasTree_C::BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDestroyed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_XmasTree.BP_XmasTree_C.BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDestroyed__DelegateSignature");
		
		ABP_XmasTree_C_BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_XmasTree.BP_XmasTree_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_XmasTree_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_XmasTree.BP_XmasTree_C.ReceiveBeginPlay");
		
		ABP_XmasTree_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_XmasTree.BP_XmasTree_C.BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                weaponTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DmgType                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_XmasTree_C::BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDamaged__DelegateSignature(class AActor* causer, float Damage, const struct FGameplayTag& weaponTag, class UDamageType* DmgType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_XmasTree.BP_XmasTree_C.BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDamaged__DelegateSignature");
		
		ABP_XmasTree_C_BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDamaged__DelegateSignature_Params params {};
		params.causer = causer;
		params.Damage = Damage;
		params.weaponTag = weaponTag;
		params.DmgType = DmgType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_XmasTree.BP_XmasTree_C.ExecuteUbergraph_BP_XmasTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_XmasTree_C::ExecuteUbergraph_BP_XmasTree(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_XmasTree.BP_XmasTree_C.ExecuteUbergraph_BP_XmasTree");
		
		ABP_XmasTree_C_ExecuteUbergraph_BP_XmasTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_XmasTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_XmasTree_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_XmasTree.BP_XmasTree_C");
		return ptr;
	}

}



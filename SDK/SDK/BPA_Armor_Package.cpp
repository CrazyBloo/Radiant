/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * 		Name   -> Function BPA_Armor.BPA_Armor_C.BndEvt__Destructible_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitPoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDirection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_C::BndEvt__Destructible_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature(const struct FVector& HitPoint, const struct FVector& HitDirection)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor.BPA_Armor_C.BndEvt__Destructible_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature");
		
		ABPA_Armor_C_BndEvt__Destructible_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature_Params params {};
		params.HitPoint = HitPoint;
		params.HitDirection = HitDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor.BPA_Armor_C.ExecuteUbergraph_BPA_Armor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_C::ExecuteUbergraph_BPA_Armor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor.BPA_Armor_C.ExecuteUbergraph_BPA_Armor");
		
		ABPA_Armor_C_ExecuteUbergraph_BPA_Armor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Armor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Armor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Armor.BPA_Armor_C");
		return ptr;
	}

}



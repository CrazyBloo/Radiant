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
	 * 		Name   -> Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.OnInject
	 * 		Flags  -> ()
	 */
	void ABP_Item_Injector_Heal_C::OnInject()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.OnInject");
		
		ABP_Item_Injector_Heal_C_OnInject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.HealTick
	 * 		Flags  -> ()
	 */
	void ABP_Item_Injector_Heal_C::HealTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.HealTick");
		
		ABP_Item_Injector_Heal_C_HealTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Item_Injector_Heal_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.ReceiveEndPlay");
		
		ABP_Item_Injector_Heal_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.ExecuteUbergraph_BP_Item_Injector_Heal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Item_Injector_Heal_C::ExecuteUbergraph_BP_Item_Injector_Heal(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Item_Injector_Heal.BP_Item_Injector_Heal_C.ExecuteUbergraph_BP_Item_Injector_Heal");
		
		ABP_Item_Injector_Heal_C_ExecuteUbergraph_BP_Item_Injector_Heal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Item_Injector_Heal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Item_Injector_Heal_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Item_Injector_Heal.BP_Item_Injector_Heal_C");
		return ptr;
	}

}



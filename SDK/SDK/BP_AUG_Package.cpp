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
	 * 		Name   -> Function BP_AUG.BP_AUG_C.Next Fire Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EWeaponFireMode                                    FireMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AUG_C::Next_Fire_Mode(bool* Changed, EWeaponFireMode* FireMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.Next Fire Mode");
		
		ABP_AUG_C_Next_Fire_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Changed != nullptr)
			*Changed = params.Changed;
		if (FireMode != nullptr)
			*FireMode = params.FireMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.SafetyVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AUG_C::SafetyVisual(EWeaponFireMode FireMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.SafetyVisual");
		
		ABP_AUG_C_SafetyVisual_Params params {};
		params.FireMode = FireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.AttachmentAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AUG_C::AttachmentAttached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.AttachmentAttached");
		
		ABP_AUG_C_AttachmentAttached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AUG_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.AttachmentDetached");
		
		ABP_AUG_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_AUG_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.OnReconfigure");
		
		ABP_AUG_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.RefreshSights
	 * 		Flags  -> ()
	 */
	void ABP_AUG_C::RefreshSights()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.RefreshSights");
		
		ABP_AUG_C_RefreshSights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AUG_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.PrimaryTrigger");
		
		ABP_AUG_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_AUG_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.OnEndUsed");
		
		ABP_AUG_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.DoFire
	 * 		Flags  -> ()
	 */
	void ABP_AUG_C::DoFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.DoFire");
		
		ABP_AUG_C_DoFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AUG.BP_AUG_C.ExecuteUbergraph_BP_AUG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AUG_C::ExecuteUbergraph_BP_AUG(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AUG.BP_AUG_C.ExecuteUbergraph_BP_AUG");
		
		ABP_AUG_C_ExecuteUbergraph_BP_AUG_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AUG_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AUG_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AUG.BP_AUG_C");
		return ptr;
	}

}



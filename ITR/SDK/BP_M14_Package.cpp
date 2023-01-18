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
	 * 		Name   -> Function BP_M14.BP_M14_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_M14_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M14.BP_M14_C.ReceiveTick");
		
		ABP_M14_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_M14.BP_M14_C.SKBoltAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Finish                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_M14_C::SKBoltAnimation(bool Finish, bool Forward)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M14.BP_M14_C.SKBoltAnimation");
		
		ABP_M14_C_SKBoltAnimation_Params params {};
		params.Finish = Finish;
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_M14.BP_M14_C.SafetyVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_M14_C::SafetyVisual(EWeaponFireMode FireMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M14.BP_M14_C.SafetyVisual");
		
		ABP_M14_C_SafetyVisual_Params params {};
		params.FireMode = FireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_M14.BP_M14_C.ExecuteUbergraph_BP_M14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_M14_C::ExecuteUbergraph_BP_M14(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M14.BP_M14_C.ExecuteUbergraph_BP_M14");
		
		ABP_M14_C_ExecuteUbergraph_BP_M14_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_M14_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_M14_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_M14.BP_M14_C");
		return ptr;
	}

}



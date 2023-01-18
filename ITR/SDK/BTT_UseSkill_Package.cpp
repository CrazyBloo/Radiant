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
	 * 		Name   -> Function BTT_UseSkill.BTT_UseSkill_C.Use
	 * 		Flags  -> ()
	 */
	void UBTT_UseSkill_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_UseSkill.BTT_UseSkill_C.Use");
		
		UBTT_UseSkill_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_UseSkill.BTT_UseSkill_C.CheckReadiness
	 * 		Flags  -> ()
	 */
	void UBTT_UseSkill_C::CheckReadiness()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_UseSkill.BTT_UseSkill_C.CheckReadiness");
		
		UBTT_UseSkill_C_CheckReadiness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_UseSkill.BTT_UseSkill_C.CheckProgress
	 * 		Flags  -> ()
	 */
	void UBTT_UseSkill_C::CheckProgress()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_UseSkill.BTT_UseSkill_C.CheckProgress");
		
		UBTT_UseSkill_C_CheckProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_UseSkill.BTT_UseSkill_C.CheckCooldown
	 * 		Flags  -> ()
	 */
	void UBTT_UseSkill_C::CheckCooldown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_UseSkill.BTT_UseSkill_C.CheckCooldown");
		
		UBTT_UseSkill_C_CheckCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_UseSkill.BTT_UseSkill_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_UseSkill_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_UseSkill.BTT_UseSkill_C.ReceiveExecute");
		
		UBTT_UseSkill_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_UseSkill.BTT_UseSkill_C.ExecuteUbergraph_BTT_UseSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_UseSkill_C::ExecuteUbergraph_BTT_UseSkill(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_UseSkill.BTT_UseSkill_C.ExecuteUbergraph_BTT_UseSkill");
		
		UBTT_UseSkill_C_ExecuteUbergraph_BTT_UseSkill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_UseSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_UseSkill_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_UseSkill.BTT_UseSkill_C");
		return ptr;
	}

}



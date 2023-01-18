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
	 * 		Name   -> Function BP_CigPack.BP_CigPack_C.RefillBulletPoints
	 * 		Flags  -> ()
	 */
	void ABP_CigPack_C::RefillBulletPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CigPack.BP_CigPack_C.RefillBulletPoints");
		
		ABP_CigPack_C_RefillBulletPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CigPack.BP_CigPack_C.ProcessTriggerOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CigPack_C::ProcessTriggerOverlap(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CigPack.BP_CigPack_C.ProcessTriggerOverlap");
		
		ABP_CigPack_C_ProcessTriggerOverlap_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CigPack.BP_CigPack_C.InitBought
	 * 		Flags  -> ()
	 */
	void ABP_CigPack_C::InitBought()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CigPack.BP_CigPack_C.InitBought");
		
		ABP_CigPack_C_InitBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CigPack.BP_CigPack_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_CigPack_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CigPack.BP_CigPack_C.OnUsed");
		
		ABP_CigPack_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CigPack.BP_CigPack_C.ExecuteUbergraph_BP_CigPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CigPack_C::ExecuteUbergraph_BP_CigPack(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CigPack.BP_CigPack_C.ExecuteUbergraph_BP_CigPack");
		
		ABP_CigPack_C_ExecuteUbergraph_BP_CigPack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CigPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CigPack_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CigPack.BP_CigPack_C");
		return ptr;
	}

}



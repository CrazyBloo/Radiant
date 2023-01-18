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
	 * 		Name   -> Function BP_SKS.BP_SKS_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_SKS_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SKS.BP_SKS_C.OnReconfigure");
		
		ABP_SKS_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SKS.BP_SKS_C.UpdateAttachmentSlots
	 * 		Flags  -> ()
	 */
	void ABP_SKS_C::UpdateAttachmentSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SKS.BP_SKS_C.UpdateAttachmentSlots");
		
		ABP_SKS_C_UpdateAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SKS.BP_SKS_C.ExecuteUbergraph_BP_SKS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SKS_C::ExecuteUbergraph_BP_SKS(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SKS.BP_SKS_C.ExecuteUbergraph_BP_SKS");
		
		ABP_SKS_C_ExecuteUbergraph_BP_SKS_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SKS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SKS_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SKS.BP_SKS_C");
		return ptr;
	}

}



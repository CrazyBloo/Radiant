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
	 * 		Name   -> Function BP_AK74U.BP_AK74U_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_AK74U_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AK74U.BP_AK74U_C.OnReconfigure");
		
		ABP_AK74U_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AK74U.BP_AK74U_C.AttachmentAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AK74U_C::AttachmentAttached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AK74U.BP_AK74U_C.AttachmentAttached");
		
		ABP_AK74U_C_AttachmentAttached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AK74U.BP_AK74U_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AK74U_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AK74U.BP_AK74U_C.AttachmentDetached");
		
		ABP_AK74U_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AK74U.BP_AK74U_C.UpdateAttachmentSlots
	 * 		Flags  -> ()
	 */
	void ABP_AK74U_C::UpdateAttachmentSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AK74U.BP_AK74U_C.UpdateAttachmentSlots");
		
		ABP_AK74U_C_UpdateAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AK74U.BP_AK74U_C.ExecuteUbergraph_BP_AK74U
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AK74U_C::ExecuteUbergraph_BP_AK74U(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AK74U.BP_AK74U_C.ExecuteUbergraph_BP_AK74U");
		
		ABP_AK74U_C_ExecuteUbergraph_BP_AK74U_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AK74U_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AK74U_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AK74U.BP_AK74U_C");
		return ptr;
	}

}



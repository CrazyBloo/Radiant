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
	 * 		Name   -> Function BP_Kedr.BP_Kedr_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Kedr_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Kedr.BP_Kedr_C.OnReconfigure");
		
		ABP_Kedr_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Kedr.BP_Kedr_C.AttachmentAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Kedr_C::AttachmentAttached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Kedr.BP_Kedr_C.AttachmentAttached");
		
		ABP_Kedr_C_AttachmentAttached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Kedr.BP_Kedr_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Kedr_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Kedr.BP_Kedr_C.AttachmentDetached");
		
		ABP_Kedr_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Kedr.BP_Kedr_C.ExecuteUbergraph_BP_Kedr
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Kedr_C::ExecuteUbergraph_BP_Kedr(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Kedr.BP_Kedr_C.ExecuteUbergraph_BP_Kedr");
		
		ABP_Kedr_C_ExecuteUbergraph_BP_Kedr_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Kedr_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Kedr_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Kedr.BP_Kedr_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_M4A1.BP_M4A1_C.AttachmentAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_M4A1_C::AttachmentAttached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M4A1.BP_M4A1_C.AttachmentAttached");
		
		ABP_M4A1_C_AttachmentAttached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_M4A1.BP_M4A1_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_M4A1_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M4A1.BP_M4A1_C.AttachmentDetached");
		
		ABP_M4A1_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_M4A1.BP_M4A1_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_M4A1_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M4A1.BP_M4A1_C.OnReconfigure");
		
		ABP_M4A1_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_M4A1.BP_M4A1_C.RefreshSights
	 * 		Flags  -> ()
	 */
	void ABP_M4A1_C::RefreshSights()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M4A1.BP_M4A1_C.RefreshSights");
		
		ABP_M4A1_C_RefreshSights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_M4A1.BP_M4A1_C.ExecuteUbergraph_BP_M4A1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_M4A1_C::ExecuteUbergraph_BP_M4A1(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_M4A1.BP_M4A1_C.ExecuteUbergraph_BP_M4A1");
		
		ABP_M4A1_C_ExecuteUbergraph_BP_M4A1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_M4A1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_M4A1_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_M4A1.BP_M4A1_C");
		return ptr;
	}

}



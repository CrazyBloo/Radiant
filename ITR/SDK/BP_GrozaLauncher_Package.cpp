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
	 * 		Name   -> Function BP_GrozaLauncher.BP_GrozaLauncher_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABP_GrozaLauncher_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrozaLauncher.BP_GrozaLauncher_C.GetAttachmentsList");
		
		ABP_GrozaLauncher_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrozaLauncher.BP_GrozaLauncher_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_GrozaLauncher_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrozaLauncher.BP_GrozaLauncher_C.UserConstructionScript");
		
		ABP_GrozaLauncher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrozaLauncher.BP_GrozaLauncher_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_GrozaLauncher_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrozaLauncher.BP_GrozaLauncher_C.OnReconfigure");
		
		ABP_GrozaLauncher_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrozaLauncher.BP_GrozaLauncher_C.OnSecondaryUsed
	 * 		Flags  -> ()
	 */
	void ABP_GrozaLauncher_C::OnSecondaryUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrozaLauncher.BP_GrozaLauncher_C.OnSecondaryUsed");
		
		ABP_GrozaLauncher_C_OnSecondaryUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrozaLauncher.BP_GrozaLauncher_C.ExecuteUbergraph_BP_GrozaLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrozaLauncher_C::ExecuteUbergraph_BP_GrozaLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrozaLauncher.BP_GrozaLauncher_C.ExecuteUbergraph_BP_GrozaLauncher");
		
		ABP_GrozaLauncher_C_ExecuteUbergraph_BP_GrozaLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GrozaLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrozaLauncher_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrozaLauncher.BP_GrozaLauncher_C");
		return ptr;
	}

}



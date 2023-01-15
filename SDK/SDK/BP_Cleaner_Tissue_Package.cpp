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
	 * 		Name   -> Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.IsExcludedFromPool
	 * 		Flags  -> ()
	 */
	bool ABP_Cleaner_Tissue_C::IsExcludedFromPool()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.IsExcludedFromPool");
		
		ABP_Cleaner_Tissue_C_IsExcludedFromPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.PopFromPoolActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABP_Cleaner_Tissue_C::PopFromPoolActor(const struct FTransform& Transform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.PopFromPoolActor");
		
		ABP_Cleaner_Tissue_C_PopFromPoolActor_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.PushToPoolActor
	 * 		Flags  -> ()
	 */
	void ABP_Cleaner_Tissue_C::PushToPoolActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.PushToPoolActor");
		
		ABP_Cleaner_Tissue_C_PushToPoolActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.UpdateMaterial
	 * 		Flags  -> ()
	 */
	void ABP_Cleaner_Tissue_C::UpdateMaterial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.UpdateMaterial");
		
		ABP_Cleaner_Tissue_C_UpdateMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Cleaner_Tissue_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.OnReconfigure");
		
		ABP_Cleaner_Tissue_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.ExecuteUbergraph_BP_Cleaner_Tissue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cleaner_Tissue_C::ExecuteUbergraph_BP_Cleaner_Tissue(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Tissue.BP_Cleaner_Tissue_C.ExecuteUbergraph_BP_Cleaner_Tissue");
		
		ABP_Cleaner_Tissue_C_ExecuteUbergraph_BP_Cleaner_Tissue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cleaner_Tissue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cleaner_Tissue_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cleaner_Tissue.BP_Cleaner_Tissue_C");
		return ptr;
	}

}



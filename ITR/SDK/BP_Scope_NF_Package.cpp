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
	 * 		Name   -> Function BP_Scope_NF.BP_Scope_NF_C.BndEvt__BP_Scope_NF_VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DialMilestoneAngle                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Scope_NF_C::BndEvt__BP_Scope_NF_VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature(float DialMilestoneAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scope_NF.BP_Scope_NF_C.BndEvt__BP_Scope_NF_VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature");
		
		ABP_Scope_NF_C_BndEvt__BP_Scope_NF_VRDial_K2Node_ComponentBoundEvent_0_VRDialStateChangedSignature__DelegateSignature_Params params {};
		params.DialMilestoneAngle = DialMilestoneAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Scope_NF.BP_Scope_NF_C.ExecuteUbergraph_BP_Scope_NF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Scope_NF_C::ExecuteUbergraph_BP_Scope_NF(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scope_NF.BP_Scope_NF_C.ExecuteUbergraph_BP_Scope_NF");
		
		ABP_Scope_NF_C_ExecuteUbergraph_BP_Scope_NF_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Scope_NF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Scope_NF_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Scope_NF.BP_Scope_NF_C");
		return ptr;
	}

}



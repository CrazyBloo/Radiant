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
	 * 		Name   -> Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ApplyEffect
	 * 		Flags  -> ()
	 */
	void ABP_Mission_Artifact_6_C::ApplyEffect()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ApplyEffect");
		
		ABP_Mission_Artifact_6_C_ApplyEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Mission_Artifact_6_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnUsed");
		
		ABP_Mission_Artifact_6_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_Mission_Artifact_6_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnEndUsed");
		
		ABP_Mission_Artifact_6_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mission_Artifact_6_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ReceiveTick");
		
		ABP_Mission_Artifact_6_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.MakeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NoGlow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dropItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Mission_Artifact_6_C::MakeVisible(bool NoGlow, bool dropItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.MakeVisible");
		
		ABP_Mission_Artifact_6_C_MakeVisible_Params params {};
		params.NoGlow = NoGlow;
		params.dropItem = dropItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Mission_Artifact_6_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnStart");
		
		ABP_Mission_Artifact_6_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ExecuteUbergraph_BP_Mission_Artifact_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mission_Artifact_6_C::ExecuteUbergraph_BP_Mission_Artifact_7(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ExecuteUbergraph_BP_Mission_Artifact_7");
		
		ABP_Mission_Artifact_6_C_ExecuteUbergraph_BP_Mission_Artifact_7_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mission_Artifact_6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mission_Artifact_6_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mission_Artifact_7.BP_Mission_Artifact_6_C");
		return ptr;
	}

}



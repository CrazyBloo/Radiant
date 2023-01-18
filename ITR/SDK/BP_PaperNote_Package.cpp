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
	 * 		Name   -> Function BP_PaperNote.BP_PaperNote_C.UpdateMaterialDamage
	 * 		Flags  -> ()
	 */
	void ABP_PaperNote_C::UpdateMaterialDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaperNote.BP_PaperNote_C.UpdateMaterialDamage");
		
		ABP_PaperNote_C_UpdateMaterialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PaperNote.BP_PaperNote_C.GetNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPaperNote                                  Note                                                       (Parm, OutParm)
	 */
	void ABP_PaperNote_C::GetNote(bool* success, struct FPaperNote* Note)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaperNote.BP_PaperNote_C.GetNote");
		
		ABP_PaperNote_C_GetNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Note != nullptr)
			*Note = params.Note;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PaperNote.BP_PaperNote_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PaperNote_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaperNote.BP_PaperNote_C.UserConstructionScript");
		
		ABP_PaperNote_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PaperNote.BP_PaperNote_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_PaperNote_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaperNote.BP_PaperNote_C.OnReconfigure");
		
		ABP_PaperNote_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PaperNote.BP_PaperNote_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PaperNote_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaperNote.BP_PaperNote_C.OnGrip");
		
		ABP_PaperNote_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PaperNote.BP_PaperNote_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PaperNote_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaperNote.BP_PaperNote_C.ReceiveBeginPlay");
		
		ABP_PaperNote_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PaperNote.BP_PaperNote_C.ExecuteUbergraph_BP_PaperNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PaperNote_C::ExecuteUbergraph_BP_PaperNote(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PaperNote.BP_PaperNote_C.ExecuteUbergraph_BP_PaperNote");
		
		ABP_PaperNote_C_ExecuteUbergraph_BP_PaperNote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PaperNote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PaperNote_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PaperNote.BP_PaperNote_C");
		return ptr;
	}

}



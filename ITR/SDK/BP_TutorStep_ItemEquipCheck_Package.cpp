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
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.KillMarks
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_ItemEquipCheck_C::KillMarks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.KillMarks");
		
		ABP_TutorStep_ItemEquipCheck_C_KillMarks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.FindItemActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_ItemEquipCheck_C::FindItemActor(bool* success, class AActor** Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.FindItemActor");
		
		ABP_TutorStep_ItemEquipCheck_C_FindItemActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoExecute
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_ItemEquipCheck_C::DoExecute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoExecute");
		
		ABP_TutorStep_ItemEquipCheck_C_DoExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.CheckIfPickedUp
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_ItemEquipCheck_C::CheckIfPickedUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.CheckIfPickedUp");
		
		ABP_TutorStep_ItemEquipCheck_C_CheckIfPickedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.FinishStep
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_ItemEquipCheck_C::FinishStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.FinishStep");
		
		ABP_TutorStep_ItemEquipCheck_C_FinishStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_ItemEquipCheck_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.ReceiveTick");
		
		ABP_TutorStep_ItemEquipCheck_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoStop
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_ItemEquipCheck_C::DoStop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoStop");
		
		ABP_TutorStep_ItemEquipCheck_C_DoStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoPrepare
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_ItemEquipCheck_C::DoPrepare()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoPrepare");
		
		ABP_TutorStep_ItemEquipCheck_C_DoPrepare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_ItemEquipCheck_C::OnLevelPrepare(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.OnLevelPrepare");
		
		ABP_TutorStep_ItemEquipCheck_C_OnLevelPrepare_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.SkipStep
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_ItemEquipCheck_C::SkipStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.SkipStep");
		
		ABP_TutorStep_ItemEquipCheck_C_SkipStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.ExecuteUbergraph_BP_TutorStep_ItemEquipCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_ItemEquipCheck_C::ExecuteUbergraph_BP_TutorStep_ItemEquipCheck(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.ExecuteUbergraph_BP_TutorStep_ItemEquipCheck");
		
		ABP_TutorStep_ItemEquipCheck_C_ExecuteUbergraph_BP_TutorStep_ItemEquipCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TutorStep_ItemEquipCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TutorStep_ItemEquipCheck_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C");
		return ptr;
	}

}



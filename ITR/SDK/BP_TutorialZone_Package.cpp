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
	 * 		Name   -> Function BP_TutorialZone.BP_TutorialZone_C.CheckInside
	 * 		Flags  -> ()
	 */
	void ABP_TutorialZone_C::CheckInside()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialZone.BP_TutorialZone_C.CheckInside");
		
		ABP_TutorialZone_C_CheckInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialZone.BP_TutorialZone_C.SpeedControll
	 * 		Flags  -> ()
	 */
	void ABP_TutorialZone_C::SpeedControll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialZone.BP_TutorialZone_C.SpeedControll");
		
		ABP_TutorialZone_C_SpeedControll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialZone.BP_TutorialZone_C.Activate
	 * 		Flags  -> ()
	 */
	void ABP_TutorialZone_C::Activate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialZone.BP_TutorialZone_C.Activate");
		
		ABP_TutorialZone_C_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialZone.BP_TutorialZone_C.Deactivate
	 * 		Flags  -> ()
	 */
	void ABP_TutorialZone_C::Deactivate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialZone.BP_TutorialZone_C.Deactivate");
		
		ABP_TutorialZone_C_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialZone.BP_TutorialZone_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialZone_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialZone.BP_TutorialZone_C.OnLevelStarted");
		
		ABP_TutorialZone_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialZone.BP_TutorialZone_C.OnTransitionStartOnce
	 * 		Flags  -> ()
	 */
	void ABP_TutorialZone_C::OnTransitionStartOnce()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialZone.BP_TutorialZone_C.OnTransitionStartOnce");
		
		ABP_TutorialZone_C_OnTransitionStartOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialZone.BP_TutorialZone_C.ExecuteUbergraph_BP_TutorialZone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialZone_C::ExecuteUbergraph_BP_TutorialZone(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialZone.BP_TutorialZone_C.ExecuteUbergraph_BP_TutorialZone");
		
		ABP_TutorialZone_C_ExecuteUbergraph_BP_TutorialZone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TutorialZone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TutorialZone_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorialZone.BP_TutorialZone_C");
		return ptr;
	}

}



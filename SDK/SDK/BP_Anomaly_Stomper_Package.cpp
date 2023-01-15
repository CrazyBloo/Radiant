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
	 * 		Name   -> Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.Movement
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Stomper_C::Movement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.Movement");
		
		ABP_Anomaly_Stomper_C_Movement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.Step_Effects
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Stomper_C::Step_Effects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.Step_Effects");
		
		ABP_Anomaly_Stomper_C_Step_Effects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Stomper_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.OnLevelStarted");
		
		ABP_Anomaly_Stomper_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.ExecuteUbergraph_BP_Anomaly_Stomper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Stomper_C::ExecuteUbergraph_BP_Anomaly_Stomper(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.ExecuteUbergraph_BP_Anomaly_Stomper");
		
		ABP_Anomaly_Stomper_C_ExecuteUbergraph_BP_Anomaly_Stomper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Stomper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Stomper_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Stomper.BP_Anomaly_Stomper_C");
		return ptr;
	}

}



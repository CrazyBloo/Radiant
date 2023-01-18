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
	 * 		Name   -> Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Gas_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.UserConstructionScript");
		
		ABP_Anomaly_Gas_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Gas_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.ReceiveTick");
		
		ABP_Anomaly_Gas_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.SplineSet
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Gas_C::SplineSet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.SplineSet");
		
		ABP_Anomaly_Gas_C_SplineSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Gas_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnLevelStarted");
		
		ABP_Anomaly_Gas_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnOverlapTimer
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Gas_C::OnOverlapTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnOverlapTimer");
		
		ABP_Anomaly_Gas_C_OnOverlapTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnSetupEvent
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Gas_C::OnSetupEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnSetupEvent");
		
		ABP_Anomaly_Gas_C_OnSetupEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.ExecuteUbergraph_BP_Anomaly_Gas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Gas_C::ExecuteUbergraph_BP_Anomaly_Gas(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.ExecuteUbergraph_BP_Anomaly_Gas");
		
		ABP_Anomaly_Gas_C_ExecuteUbergraph_BP_Anomaly_Gas_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Gas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Gas_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Gas.BP_Anomaly_Gas_C");
		return ptr;
	}

}



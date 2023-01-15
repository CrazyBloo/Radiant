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
	 * 		Name   -> Function BP_Anomaly_Obelisk.BP_Anomaly_Obelisk_C.Effect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Obelisk_C::Effect(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Obelisk.BP_Anomaly_Obelisk_C.Effect");
		
		ABP_Anomaly_Obelisk_C_Effect_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Obelisk.BP_Anomaly_Obelisk_C.Custom Logic_2
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Obelisk_C::Custom_Logic_2()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Obelisk.BP_Anomaly_Obelisk_C.Custom Logic_2");
		
		ABP_Anomaly_Obelisk_C_Custom_Logic_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Obelisk.BP_Anomaly_Obelisk_C.ExecuteUbergraph_BP_Anomaly_Obelisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Obelisk_C::ExecuteUbergraph_BP_Anomaly_Obelisk(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Obelisk.BP_Anomaly_Obelisk_C.ExecuteUbergraph_BP_Anomaly_Obelisk");
		
		ABP_Anomaly_Obelisk_C_ExecuteUbergraph_BP_Anomaly_Obelisk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Obelisk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Obelisk_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Obelisk.BP_Anomaly_Obelisk_C");
		return ptr;
	}

}



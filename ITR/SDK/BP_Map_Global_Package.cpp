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
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.Update Player Positions on Child Maps
	 * 		Flags  -> ()
	 */
	void ABP_Map_Global_C::UpdatePlayerPositionsonChildMaps()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.Update Player Positions on Child Maps");
		
		ABP_Map_Global_C_UpdatePlayerPositionsonChildMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.UpdateMaps
	 * 		Flags  -> ()
	 */
	void ABP_Map_Global_C::UpdateMaps()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.UpdateMaps");
		
		ABP_Map_Global_C_UpdateMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.UpdateMapsVisibility
	 * 		Flags  -> ()
	 */
	void ABP_Map_Global_C::UpdateMapsVisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.UpdateMapsVisibility");
		
		ABP_Map_Global_C_UpdateMapsVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Map_Global_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.UserConstructionScript");
		
		ABP_Map_Global_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Map_Global_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.ReceiveBeginPlay");
		
		ABP_Map_Global_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.OnLevelStartedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Global_C::OnLevelStartedEvent(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.OnLevelStartedEvent");
		
		ABP_Map_Global_C_OnLevelStartedEvent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Global_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.ReceiveTick");
		
		ABP_Map_Global_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Global.BP_Map_Global_C.ExecuteUbergraph_BP_Map_Global
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Global_C::ExecuteUbergraph_BP_Map_Global(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Global.BP_Map_Global_C.ExecuteUbergraph_BP_Map_Global");
		
		ABP_Map_Global_C_ExecuteUbergraph_BP_Map_Global_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Map_Global_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Map_Global_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Map_Global.BP_Map_Global_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.UpdateMissionDescription
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Missions_C::UpdateMissionDescription()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.UpdateMissionDescription");
		
		UWBP_HMap_Missions_C_UpdateMissionDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.UpdateMissions
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Missions_C::UpdateMissions()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.UpdateMissions");
		
		UWBP_HMap_Missions_C_UpdateMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnMissionClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Missions_C::OnMissionClicked(class UMissionData* MissionData, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnMissionClicked");
		
		UWBP_HMap_Missions_C_OnMissionClicked_Params params {};
		params.MissionData = MissionData;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Missions_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.Construct");
		
		UWBP_HMap_Missions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.E2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMissionAbstractObjectiveData*               objectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Missions_C::E2(class UMissionData* MissionData, class UMissionAbstractObjectiveData* objectiveData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.E2");
		
		UWBP_HMap_Missions_C_E2_Params params {};
		params.MissionData = MissionData;
		params.objectiveData = objectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.E1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Missions_C::E1(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.E1");
		
		UWBP_HMap_Missions_C_E1_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnItemsChangesEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Missions_C::OnItemsChangesEvent(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnItemsChangesEvent");
		
		UWBP_HMap_Missions_C_OnItemsChangesEvent_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnItemActosChangesEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Missions_C::OnItemActosChangesEvent(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnItemActosChangesEvent");
		
		UWBP_HMap_Missions_C_OnItemActosChangesEvent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.Set Page Is Open
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HMap_Missions_C::Set_Page_Is_Open(bool IsOpen)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.Set Page Is Open");
		
		UWBP_HMap_Missions_C_Set_Page_Is_Open_Params params {};
		params.IsOpen = IsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnTriggerOrStoryNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Missions_C::OnTriggerOrStoryNote(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnTriggerOrStoryNote");
		
		UWBP_HMap_Missions_C_OnTriggerOrStoryNote_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Missions.WBP_HMap_Missions_C.ExecuteUbergraph_WBP_HMap_Missions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Missions_C::ExecuteUbergraph_WBP_HMap_Missions(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Missions.WBP_HMap_Missions_C.ExecuteUbergraph_WBP_HMap_Missions");
		
		UWBP_HMap_Missions_C_ExecuteUbergraph_WBP_HMap_Missions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HMap_Missions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HMap_Missions_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HMap_Missions.WBP_HMap_Missions_C");
		return ptr;
	}

}



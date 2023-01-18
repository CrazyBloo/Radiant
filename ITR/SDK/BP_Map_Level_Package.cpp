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
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.HideMarkers
	 * 		Flags  -> ()
	 */
	void ABP_Map_Level_C::HideMarkers()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.HideMarkers");
		
		ABP_Map_Level_C_HideMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.ShowPlayerPositionMarker
	 * 		Flags  -> ()
	 */
	bool ABP_Map_Level_C::ShowPlayerPositionMarker()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.ShowPlayerPositionMarker");
		
		ABP_Map_Level_C_ShowPlayerPositionMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.CreateMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapMarker                                         Marker                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetComponent*                            WidgetComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::CreateMarker(EMapMarker Marker, class UWidgetComponent** WidgetComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.CreateMarker");
		
		ABP_Map_Level_C_CreateMarker_Params params {};
		params.Marker = Marker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WidgetComponent != nullptr)
			*WidgetComponent = params.WidgetComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.UpdateMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            markerWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMapMarker                                         MarkerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::UpdateMarker(class UWidgetComponent* markerWidget, EMapMarker MarkerType, const struct FVector& Location, float ScaleMultiplier)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.UpdateMarker");
		
		ABP_Map_Level_C_UpdateMarker_Params params {};
		params.markerWidget = markerWidget;
		params.MarkerType = MarkerType;
		params.Location = Location;
		params.ScaleMultiplier = ScaleMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.Remap Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     relativeRealLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     relativeMapLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::RemapLocation(const struct FVector& relativeRealLocation, struct FVector* relativeMapLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.Remap Location");
		
		ABP_Map_Level_C_RemapLocation_Params params {};
		params.relativeRealLocation = relativeRealLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (relativeMapLocation != nullptr)
			*relativeMapLocation = params.relativeMapLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.GetMaterialInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMaterialInterface*                          MaterialInterface                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::GetMaterialInterface(bool* Empty, class UMaterialInterface** MaterialInterface)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.GetMaterialInterface");
		
		ABP_Map_Level_C_GetMaterialInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Empty != nullptr)
			*Empty = params.Empty;
		if (MaterialInterface != nullptr)
			*MaterialInterface = params.MaterialInterface;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.UpdateLevelTag
	 * 		Flags  -> ()
	 */
	void ABP_Map_Level_C::UpdateLevelTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.UpdateLevelTag");
		
		ABP_Map_Level_C_UpdateLevelTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.UpdateMapPicture
	 * 		Flags  -> ()
	 */
	void ABP_Map_Level_C::UpdateMapPicture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.UpdateMapPicture");
		
		ABP_Map_Level_C_UpdateMapPicture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.UpdatePlayerPosition
	 * 		Flags  -> ()
	 */
	void ABP_Map_Level_C::UpdatePlayerPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.UpdatePlayerPosition");
		
		ABP_Map_Level_C_UpdatePlayerPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.SetupMarkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UMissionData*>                        MissionsData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Map_Level_C::SetupMarkers(TArray<class UMissionData*>* MissionsData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.SetupMarkers");
		
		ABP_Map_Level_C_SetupMarkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MissionsData != nullptr)
			*MissionsData = params.MissionsData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.UpdateMap
	 * 		Flags  -> ()
	 */
	void ABP_Map_Level_C::UpdateMap()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.UpdateMap");
		
		ABP_Map_Level_C_UpdateMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Map_Level_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.UserConstructionScript");
		
		ABP_Map_Level_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_Map_Level_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.OnGameStarted");
		
		ABP_Map_Level_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.OnMissionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::OnMissionEvent(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.OnMissionEvent");
		
		ABP_Map_Level_C_OnMissionEvent_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.OnLevelStartedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::OnLevelStartedEvent(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.OnLevelStartedEvent");
		
		ABP_Map_Level_C_OnLevelStartedEvent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.OnCustomMapMarkPassed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::OnCustomMapMarkPassed(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.OnCustomMapMarkPassed");
		
		ABP_Map_Level_C_OnCustomMapMarkPassed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.OnPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::OnPreview(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.OnPreview");
		
		ABP_Map_Level_C_OnPreview_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Map_Level.BP_Map_Level_C.ExecuteUbergraph_BP_Map_Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Map_Level_C::ExecuteUbergraph_BP_Map_Level(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Map_Level.BP_Map_Level_C.ExecuteUbergraph_BP_Map_Level");
		
		ABP_Map_Level_C_ExecuteUbergraph_BP_Map_Level_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Map_Level_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Map_Level_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Map_Level.BP_Map_Level_C");
		return ptr;
	}

}



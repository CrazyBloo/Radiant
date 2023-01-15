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
	 * 		Name   -> Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_StorageDelivery_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.PageTick");
		
		UWBP_MCPage_StorageDelivery_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.UpdatePages
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_StorageDelivery_C::UpdatePages()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.UpdatePages");
		
		UWBP_MCPage_StorageDelivery_C_UpdatePages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_StorageDelivery_C::Update(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.Update");
		
		UWBP_MCPage_StorageDelivery_C_Update_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_StorageDelivery_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.Construct");
		
		UWBP_MCPage_StorageDelivery_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.EM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_StorageDelivery_C::EM(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.EM");
		
		UWBP_MCPage_StorageDelivery_C_EM_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.EO
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMissionAbstractObjectiveData*               objectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_StorageDelivery_C::EO(class UMissionData* MissionData, class UMissionAbstractObjectiveData* objectiveData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.EO");
		
		UWBP_MCPage_StorageDelivery_C_EO_Params params {};
		params.MissionData = MissionData;
		params.objectiveData = objectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.ExecuteUbergraph_WBP_MCPage_StorageDelivery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_StorageDelivery_C::ExecuteUbergraph_WBP_MCPage_StorageDelivery(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.ExecuteUbergraph_WBP_MCPage_StorageDelivery");
		
		UWBP_MCPage_StorageDelivery_C_ExecuteUbergraph_WBP_MCPage_StorageDelivery_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_StorageDelivery_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_StorageDelivery_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C");
		return ptr;
	}

}



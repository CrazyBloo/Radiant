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
	 * 		Name   -> Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_StorageDeliveryMissions_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.Construct");
		
		UWBP_MCPage_StorageDeliveryMissions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_StorageDeliveryMissions_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.PageTick");
		
		UWBP_MCPage_StorageDeliveryMissions_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_StorageDeliveryMissions_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.ShowPage");
		
		UWBP_MCPage_StorageDeliveryMissions_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.OnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_StorageDeliveryMissions_C::OnSelected(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.OnSelected");
		
		UWBP_MCPage_StorageDeliveryMissions_C_OnSelected_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.ExecuteUbergraph_WBP_MCPage_StorageDeliveryMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_StorageDeliveryMissions_C::ExecuteUbergraph_WBP_MCPage_StorageDeliveryMissions(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.ExecuteUbergraph_WBP_MCPage_StorageDeliveryMissions");
		
		UWBP_MCPage_StorageDeliveryMissions_C_ExecuteUbergraph_WBP_MCPage_StorageDeliveryMissions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.OnMissionSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_StorageDeliveryMissions_C::OnMissionSelected__DelegateSignature(const class FString& InstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.OnMissionSelected__DelegateSignature");
		
		UWBP_MCPage_StorageDeliveryMissions_C_OnMissionSelected__DelegateSignature_Params params {};
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_StorageDeliveryMissions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_StorageDeliveryMissions_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C");
		return ptr;
	}

}



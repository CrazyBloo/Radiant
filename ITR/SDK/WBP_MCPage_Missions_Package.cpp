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
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Missions_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.PageTick");
		
		UWBP_MCPage_Missions_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Missions_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.Construct");
		
		UWBP_MCPage_Missions_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Missions_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.ShowPage");
		
		UWBP_MCPage_Missions_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_InProgress_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Missions_C::BndEvt__WBP_MCPage_Missions_Button_InProgress_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_InProgress_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature");
		
		UWBP_MCPage_Missions_C_BndEvt__WBP_MCPage_Missions_Button_InProgress_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_NotStarted_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Missions_C::BndEvt__WBP_MCPage_Missions_Button_NotStarted_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_NotStarted_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");
		
		UWBP_MCPage_Missions_C_BndEvt__WBP_MCPage_Missions_Button_NotStarted_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Missions_C::BndEvt__WBP_MCPage_Missions_Button_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UWBP_MCPage_Missions_C_BndEvt__WBP_MCPage_Missions_Button_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.OnExecutingMissionPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Missions_C::OnExecutingMissionPress(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.OnExecutingMissionPress");
		
		UWBP_MCPage_Missions_C_OnExecutingMissionPress_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.OnMissionPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Missions_C::OnMissionPress(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.OnMissionPress");
		
		UWBP_MCPage_Missions_C_OnMissionPress_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.ExecuteUbergraph_WBP_MCPage_Missions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Missions_C::ExecuteUbergraph_WBP_MCPage_Missions(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.ExecuteUbergraph_WBP_MCPage_Missions");
		
		UWBP_MCPage_Missions_C_ExecuteUbergraph_WBP_MCPage_Missions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_Missions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_Missions_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_Missions.WBP_MCPage_Missions_C");
		return ptr;
	}

}



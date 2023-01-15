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
	 * 		Name   -> Function WBP_Element_Mission.WBP_Element_Mission_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_Element_Mission_C::Update()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Mission.WBP_Element_Mission_C.Update");
		
		UWBP_Element_Mission_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Element_Mission_C::BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Element_Mission_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Element_Mission_C::BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Element_Mission_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Element_Mission_C::BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Element_Mission_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Mission.WBP_Element_Mission_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_Mission_C::Setup(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Mission.WBP_Element_Mission_C.Setup");
		
		UWBP_Element_Mission_C_Setup_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Mission.WBP_Element_Mission_C.ExecuteUbergraph_WBP_Element_Mission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_Mission_C::ExecuteUbergraph_WBP_Element_Mission(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Mission.WBP_Element_Mission_C.ExecuteUbergraph_WBP_Element_Mission");
		
		UWBP_Element_Mission_C_ExecuteUbergraph_WBP_Element_Mission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Mission.WBP_Element_Mission_C.OnMissionPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_Mission_C::OnMissionPressed__DelegateSignature(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Mission.WBP_Element_Mission_C.OnMissionPressed__DelegateSignature");
		
		UWBP_Element_Mission_C_OnMissionPressed__DelegateSignature_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_Mission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_Mission_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_Mission.WBP_Element_Mission_C");
		return ptr;
	}

}



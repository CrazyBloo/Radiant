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
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.UpdateObjectives
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Delivering_C::UpdateObjectives()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.UpdateObjectives");
		
		UWBP_MCPage_Delivering_C_UpdateObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessagePut
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Delivering_C::SetDeliveryMessagePut()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessagePut");
		
		UWBP_MCPage_Delivering_C_SetDeliveryMessagePut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageClose
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Delivering_C::SetDeliveryMessageClose()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageClose");
		
		UWBP_MCPage_Delivering_C_SetDeliveryMessageClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageRemove
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Delivering_C::SetDeliveryMessageRemove()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageRemove");
		
		UWBP_MCPage_Delivering_C_SetDeliveryMessageRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.ToggleDeliveryMessageWrongItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MCPage_Delivering_C::ToggleDeliveryMessageWrongItem(bool State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.ToggleDeliveryMessageWrongItem");
		
		UWBP_MCPage_Delivering_C_ToggleDeliveryMessageWrongItem_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Delivering_C::Update(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.Update");
		
		UWBP_MCPage_Delivering_C_Update_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Delivering_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.PageTick");
		
		UWBP_MCPage_Delivering_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageKill
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Delivering_C::SetDeliveryMessageKill()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageKill");
		
		UWBP_MCPage_Delivering_C_SetDeliveryMessageKill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.ExecuteUbergraph_WBP_MCPage_Delivering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Delivering_C::ExecuteUbergraph_WBP_MCPage_Delivering(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.ExecuteUbergraph_WBP_MCPage_Delivering");
		
		UWBP_MCPage_Delivering_C_ExecuteUbergraph_WBP_MCPage_Delivering_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_Delivering_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_Delivering_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_Delivering.WBP_MCPage_Delivering_C");
		return ptr;
	}

}



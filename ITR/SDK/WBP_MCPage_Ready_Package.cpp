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
	 * 		Name   -> Function WBP_MCPage_Ready.WBP_MCPage_Ready_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Ready_C::Update(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Ready.WBP_MCPage_Ready_C.Update");
		
		UWBP_MCPage_Ready_C_Update_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Ready.WBP_MCPage_Ready_C.ExecuteUbergraph_WBP_MCPage_Ready
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Ready_C::ExecuteUbergraph_WBP_MCPage_Ready(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Ready.WBP_MCPage_Ready_C.ExecuteUbergraph_WBP_MCPage_Ready");
		
		UWBP_MCPage_Ready_C_ExecuteUbergraph_WBP_MCPage_Ready_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_Ready_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_Ready_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_Ready.WBP_MCPage_Ready_C");
		return ptr;
	}

}



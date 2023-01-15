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
	 * 		Name   -> Function WBP_Block_GameStats.WBP_Block_GameStats_C.AddDeathStats
	 * 		Flags  -> ()
	 */
	void UWBP_Block_GameStats_C::AddDeathStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_GameStats.WBP_Block_GameStats_C.AddDeathStats");
		
		UWBP_Block_GameStats_C_AddDeathStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_GameStats.WBP_Block_GameStats_C.AddKillsStats
	 * 		Flags  -> ()
	 */
	void UWBP_Block_GameStats_C::AddKillsStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_GameStats.WBP_Block_GameStats_C.AddKillsStats");
		
		UWBP_Block_GameStats_C_AddKillsStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_GameStats.WBP_Block_GameStats_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Block_GameStats_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_GameStats.WBP_Block_GameStats_C.Construct");
		
		UWBP_Block_GameStats_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_GameStats.WBP_Block_GameStats_C.ExecuteUbergraph_WBP_Block_GameStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_GameStats_C::ExecuteUbergraph_WBP_Block_GameStats(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_GameStats.WBP_Block_GameStats_C.ExecuteUbergraph_WBP_Block_GameStats");
		
		UWBP_Block_GameStats_C_ExecuteUbergraph_WBP_Block_GameStats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Block_GameStats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Block_GameStats_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Block_GameStats.WBP_Block_GameStats_C");
		return ptr;
	}

}



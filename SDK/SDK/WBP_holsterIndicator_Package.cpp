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
	 * 		Name   -> Function WBP_holsterIndicator.WBP_holsterIndicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_holsterIndicator_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_holsterIndicator.WBP_holsterIndicator_C.Construct");
		
		UWBP_holsterIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_holsterIndicator.WBP_holsterIndicator_C.ShowSides
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               showLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               showRight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_holsterIndicator_C::ShowSides(bool showLeft, bool showRight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_holsterIndicator.WBP_holsterIndicator_C.ShowSides");
		
		UWBP_holsterIndicator_C_ShowSides_Params params {};
		params.showLeft = showLeft;
		params.showRight = showRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_holsterIndicator.WBP_holsterIndicator_C.ExecuteUbergraph_WBP_holsterIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_holsterIndicator_C::ExecuteUbergraph_WBP_holsterIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_holsterIndicator.WBP_holsterIndicator_C.ExecuteUbergraph_WBP_holsterIndicator");
		
		UWBP_holsterIndicator_C_ExecuteUbergraph_WBP_holsterIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_holsterIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_holsterIndicator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_holsterIndicator.WBP_holsterIndicator_C");
		return ptr;
	}

}



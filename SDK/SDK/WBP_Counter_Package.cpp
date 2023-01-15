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
	 * 		Name   -> Function WBP_Counter.WBP_Counter_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_Counter_C::Destruct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Counter.WBP_Counter_C.Destruct");
		
		UWBP_Counter_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Counter.WBP_Counter_C.Clear
	 * 		Flags  -> ()
	 */
	void UWBP_Counter_C::Clear()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Counter.WBP_Counter_C.Clear");
		
		UWBP_Counter_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Counter.WBP_Counter_C.UpdateType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Counter_C::UpdateType(const class FText& Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Counter.WBP_Counter_C.UpdateType");
		
		UWBP_Counter_C_UpdateType_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Counter.WBP_Counter_C.UpdateCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Counter_C::UpdateCounter(const class FText& Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Counter.WBP_Counter_C.UpdateCounter");
		
		UWBP_Counter_C_UpdateCounter_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Counter.WBP_Counter_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Counter_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Counter.WBP_Counter_C.Construct");
		
		UWBP_Counter_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Counter.WBP_Counter_C.ExecuteUbergraph_WBP_Counter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Counter_C::ExecuteUbergraph_WBP_Counter(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Counter.WBP_Counter_C.ExecuteUbergraph_WBP_Counter");
		
		UWBP_Counter_C_ExecuteUbergraph_WBP_Counter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Counter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Counter_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Counter.WBP_Counter_C");
		return ptr;
	}

}



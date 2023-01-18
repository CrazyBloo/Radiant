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
	 * 		Name   -> Function WBP_Block_Credits.WBP_Block_Credits_C.SequenceEvent__ENTRYPOINTWBP_Block_Credits_1
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Credits_C::SequenceEvent__ENTRYPOINTWBP_Block_Credits_1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Credits.WBP_Block_Credits_C.SequenceEvent__ENTRYPOINTWBP_Block_Credits_1");
		
		UWBP_Block_Credits_C_SequenceEvent__ENTRYPOINTWBP_Block_Credits_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Credits.WBP_Block_Credits_C.SequenceEvent_Scroll
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Credits_C::SequenceEvent_Scroll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Credits.WBP_Block_Credits_C.SequenceEvent_Scroll");
		
		UWBP_Block_Credits_C_SequenceEvent_Scroll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Credits.WBP_Block_Credits_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Credits_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Credits.WBP_Block_Credits_C.Construct");
		
		UWBP_Block_Credits_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Credits.WBP_Block_Credits_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Credits_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Credits.WBP_Block_Credits_C.Tick");
		
		UWBP_Block_Credits_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Credits.WBP_Block_Credits_C.BndEvt__WBP_Block_Credits_ScrollBox_1_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Credits_C::BndEvt__WBP_Block_Credits_ScrollBox_1_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Credits.WBP_Block_Credits_C.BndEvt__WBP_Block_Credits_ScrollBox_1_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
		
		UWBP_Block_Credits_C_BndEvt__WBP_Block_Credits_ScrollBox_1_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params {};
		params.CurrentOffset = CurrentOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Credits.WBP_Block_Credits_C.EventOnVisibilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Credits_C::EventOnVisibilityChanged(ESlateVisibility InVisibility)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Credits.WBP_Block_Credits_C.EventOnVisibilityChanged");
		
		UWBP_Block_Credits_C_EventOnVisibilityChanged_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Credits.WBP_Block_Credits_C.ExecuteUbergraph_WBP_Block_Credits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Credits_C::ExecuteUbergraph_WBP_Block_Credits(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Credits.WBP_Block_Credits_C.ExecuteUbergraph_WBP_Block_Credits");
		
		UWBP_Block_Credits_C_ExecuteUbergraph_WBP_Block_Credits_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Block_Credits_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Block_Credits_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Block_Credits.WBP_Block_Credits_C");
		return ptr;
	}

}



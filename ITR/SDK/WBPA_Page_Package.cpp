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
	 * 		Name   -> Function WBPA_Page.WBPA_Page_C.GetComputerRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_MissionComputer_C*                       ComputerRef                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBPA_Page_C::GetComputerRef(class ABP_MissionComputer_C** ComputerRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBPA_Page.WBPA_Page_C.GetComputerRef");
		
		UWBPA_Page_C_GetComputerRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComputerRef != nullptr)
			*ComputerRef = params.ComputerRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBPA_Page.WBPA_Page_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBPA_Page_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBPA_Page.WBPA_Page_C.Construct");
		
		UWBPA_Page_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBPA_Page.WBPA_Page_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBPA_Page_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBPA_Page.WBPA_Page_C.ShowPage");
		
		UWBPA_Page_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBPA_Page.WBPA_Page_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBPA_Page_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBPA_Page.WBPA_Page_C.PageTick");
		
		UWBPA_Page_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBPA_Page.WBPA_Page_C.HidePage
	 * 		Flags  -> ()
	 */
	void UWBPA_Page_C::HidePage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBPA_Page.WBPA_Page_C.HidePage");
		
		UWBPA_Page_C_HidePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBPA_Page.WBPA_Page_C.ExecuteUbergraph_WBPA_Page
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBPA_Page_C::ExecuteUbergraph_WBPA_Page(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBPA_Page.WBPA_Page_C.ExecuteUbergraph_WBPA_Page");
		
		UWBPA_Page_C_ExecuteUbergraph_WBPA_Page_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBPA_Page_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBPA_Page_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBPA_Page.WBPA_Page_C");
		return ptr;
	}

}



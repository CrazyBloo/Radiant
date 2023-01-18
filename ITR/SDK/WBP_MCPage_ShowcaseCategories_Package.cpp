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
	 * 		Name   -> Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_ShowcaseCategories_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.ShowPage");
		
		UWBP_MCPage_ShowcaseCategories_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.OnCategoryPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            categoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_ShowcaseCategories_C::OnCategoryPressed(int32_t categoryIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.OnCategoryPressed");
		
		UWBP_MCPage_ShowcaseCategories_C_OnCategoryPressed_Params params {};
		params.categoryIndex = categoryIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.InitializeByActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_ShowcaseCategories_C::InitializeByActor(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.InitializeByActor");
		
		UWBP_MCPage_ShowcaseCategories_C_InitializeByActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.ExecuteUbergraph_WBP_MCPage_ShowcaseCategories
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_ShowcaseCategories_C::ExecuteUbergraph_WBP_MCPage_ShowcaseCategories(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C.ExecuteUbergraph_WBP_MCPage_ShowcaseCategories");
		
		UWBP_MCPage_ShowcaseCategories_C_ExecuteUbergraph_WBP_MCPage_ShowcaseCategories_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_ShowcaseCategories_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_ShowcaseCategories_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_ShowcaseCategories.WBP_MCPage_ShowcaseCategories_C");
		return ptr;
	}

}



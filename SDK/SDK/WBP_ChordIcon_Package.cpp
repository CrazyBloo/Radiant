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
	 * 		Name   -> Function WBP_ChordIcon.WBP_ChordIcon_C.GetChordInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChordID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlayTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChordIcon_C::GetChordInfo(int32_t* ChordID, float* PlayTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordIcon.WBP_ChordIcon_C.GetChordInfo");
		
		UWBP_ChordIcon_C_GetChordInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChordID != nullptr)
			*ChordID = params.ChordID;
		if (PlayTime != nullptr)
			*PlayTime = params.PlayTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordIcon.WBP_ChordIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ChordIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordIcon.WBP_ChordIcon_C.PreConstruct");
		
		UWBP_ChordIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordIcon.WBP_ChordIcon_C.AutoDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChordIcon_C::AutoDestroy(float Delay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordIcon.WBP_ChordIcon_C.AutoDestroy");
		
		UWBP_ChordIcon_C_AutoDestroy_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordIcon.WBP_ChordIcon_C.DoDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSuccess                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ChordIcon_C::DoDestroy(bool bIsSuccess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordIcon.WBP_ChordIcon_C.DoDestroy");
		
		UWBP_ChordIcon_C_DoDestroy_Params params {};
		params.bIsSuccess = bIsSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChordIcon.WBP_ChordIcon_C.ExecuteUbergraph_WBP_ChordIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChordIcon_C::ExecuteUbergraph_WBP_ChordIcon(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChordIcon.WBP_ChordIcon_C.ExecuteUbergraph_WBP_ChordIcon");
		
		UWBP_ChordIcon_C_ExecuteUbergraph_WBP_ChordIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ChordIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ChordIcon_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChordIcon.WBP_ChordIcon_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function WDB_ChordPad.WDB_ChordPad_C.SwitchSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFirstSet                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWDB_ChordPad_C::SwitchSet(bool bIsFirstSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WDB_ChordPad.WDB_ChordPad_C.SwitchSet");
		
		UWDB_ChordPad_C_SwitchSet_Params params {};
		params.bIsFirstSet = bIsFirstSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WDB_ChordPad.WDB_ChordPad_C.SetOutlined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOutlined                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsOtherSet                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWDB_ChordPad_C::SetOutlined(bool bIsOutlined, bool bIsOtherSet)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WDB_ChordPad.WDB_ChordPad_C.SetOutlined");
		
		UWDB_ChordPad_C_SetOutlined_Params params {};
		params.bIsOutlined = bIsOutlined;
		params.bIsOtherSet = bIsOtherSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WDB_ChordPad.WDB_ChordPad_C.SetHighlighted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsHighlighted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWDB_ChordPad_C::SetHighlighted(bool bIsHighlighted)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WDB_ChordPad.WDB_ChordPad_C.SetHighlighted");
		
		UWDB_ChordPad_C_SetHighlighted_Params params {};
		params.bIsHighlighted = bIsHighlighted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WDB_ChordPad.WDB_ChordPad_C.SetChordName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWDB_ChordPad_C::SetChordName(const class FText& InText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WDB_ChordPad.WDB_ChordPad_C.SetChordName");
		
		UWDB_ChordPad_C_SetChordName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WDB_ChordPad.WDB_ChordPad_C.ShowChordError
	 * 		Flags  -> ()
	 */
	void UWDB_ChordPad_C::ShowChordError()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WDB_ChordPad.WDB_ChordPad_C.ShowChordError");
		
		UWDB_ChordPad_C_ShowChordError_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WDB_ChordPad.WDB_ChordPad_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWDB_ChordPad_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WDB_ChordPad.WDB_ChordPad_C.PreConstruct");
		
		UWDB_ChordPad_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WDB_ChordPad.WDB_ChordPad_C.ExecuteUbergraph_WDB_ChordPad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWDB_ChordPad_C::ExecuteUbergraph_WDB_ChordPad(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WDB_ChordPad.WDB_ChordPad_C.ExecuteUbergraph_WDB_ChordPad");
		
		UWDB_ChordPad_C_ExecuteUbergraph_WDB_ChordPad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWDB_ChordPad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWDB_ChordPad_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WDB_ChordPad.WDB_ChordPad_C");
		return ptr;
	}

}



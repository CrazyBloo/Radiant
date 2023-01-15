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
	 * 		Name   -> Function WBP_PlayerSubtitles.WBP_PlayerSubtitles_C.SwitchText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRSubtitleType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlayerSubtitles_C::SwitchText(EPRSubtitleType Type, class UTextBlock** Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerSubtitles.WBP_PlayerSubtitles_C.SwitchText");
		
		UWBP_PlayerSubtitles_C_SwitchText_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlayerSubtitles.WBP_PlayerSubtitles_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EPRSubtitleType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlayerSubtitles_C::SetText(const class FText& Text, EPRSubtitleType Type)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerSubtitles.WBP_PlayerSubtitles_C.SetText");
		
		UWBP_PlayerSubtitles_C_SetText_Params params {};
		params.Text = Text;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PlayerSubtitles.WBP_PlayerSubtitles_C.ExecuteUbergraph_WBP_PlayerSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PlayerSubtitles_C::ExecuteUbergraph_WBP_PlayerSubtitles(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerSubtitles.WBP_PlayerSubtitles_C.ExecuteUbergraph_WBP_PlayerSubtitles");
		
		UWBP_PlayerSubtitles_C_ExecuteUbergraph_WBP_PlayerSubtitles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PlayerSubtitles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PlayerSubtitles_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerSubtitles.WBP_PlayerSubtitles_C");
		return ptr;
	}

}



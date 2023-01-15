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
	 * 		Name   -> Function FL_Helpers_Subtitles.FL_Helpers_Subtitles_C.ShowSaveIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoSave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_Subtitles_C::ShowSaveIcon(bool bAutoSave, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_Subtitles.FL_Helpers_Subtitles_C.ShowSaveIcon");
		
		UFL_Helpers_Subtitles_C_ShowSaveIcon_Params params {};
		params.bAutoSave = bAutoSave;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Helpers_Subtitles.FL_Helpers_Subtitles_C.HideSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_Subtitles_C::HideSubtitles(class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_Subtitles.FL_Helpers_Subtitles_C.HideSubtitles");
		
		UFL_Helpers_Subtitles_C_HideSubtitles_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Helpers_Subtitles.FL_Helpers_Subtitles_C.ShowSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRSubtitleType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSwitchable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_Subtitles_C::ShowSubtitles(const class FText& Text, float Duration, EPRSubtitleType Type, bool bSwitchable, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_Subtitles.FL_Helpers_Subtitles_C.ShowSubtitles");
		
		UFL_Helpers_Subtitles_C_ShowSubtitles_Params params {};
		params.Text = Text;
		params.Duration = Duration;
		params.Type = Type;
		params.bSwitchable = bSwitchable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Helpers_Subtitles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Helpers_Subtitles_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_Helpers_Subtitles.FL_Helpers_Subtitles_C");
		return ptr;
	}

}



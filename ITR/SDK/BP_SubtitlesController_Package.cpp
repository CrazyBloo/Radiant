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
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.updateTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SubtitlesController_C::updateTransform(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.updateTransform");
		
		ABP_SubtitlesController_C_updateTransform_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.HideSubtitles
	 * 		Flags  -> ()
	 */
	void ABP_SubtitlesController_C::HideSubtitles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.HideSubtitles");
		
		ABP_SubtitlesController_C_HideSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SubtitlesController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.ReceiveTick");
		
		ABP_SubtitlesController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              Duration                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRSubtitleType                                    Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSwitchable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SubtitlesController_C::ShowSubtitles(const class FText& Text, float Duration, EPRSubtitleType Type, bool bSwitchable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSubtitles");
		
		ABP_SubtitlesController_C_ShowSubtitles_Params params {};
		params.Text = Text;
		params.Duration = Duration;
		params.Type = Type;
		params.bSwitchable = bSwitchable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSubtitlesString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRSubtitleType                                    Type                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSwitchable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SubtitlesController_C::ShowSubtitlesString(const class FString& Text, float Duration, EPRSubtitleType Type, bool bSwitchable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSubtitlesString");
		
		ABP_SubtitlesController_C_ShowSubtitlesString_Params params {};
		params.Text = Text;
		params.Duration = Duration;
		params.Type = Type;
		params.bSwitchable = bSwitchable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.SetDressingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SubtitlesController_C::SetDressingMode(bool Active)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.SetDressingMode");
		
		ABP_SubtitlesController_C_SetDressingMode_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_SubtitlesController_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.OnGameStarted");
		
		ABP_SubtitlesController_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSaveIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoSave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SubtitlesController_C::ShowSaveIcon(bool bAutoSave)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.ShowSaveIcon");
		
		ABP_SubtitlesController_C_ShowSaveIcon_Params params {};
		params.bAutoSave = bAutoSave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SubtitlesController.BP_SubtitlesController_C.ExecuteUbergraph_BP_SubtitlesController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SubtitlesController_C::ExecuteUbergraph_BP_SubtitlesController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubtitlesController.BP_SubtitlesController_C.ExecuteUbergraph_BP_SubtitlesController");
		
		ABP_SubtitlesController_C_ExecuteUbergraph_BP_SubtitlesController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SubtitlesController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SubtitlesController_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubtitlesController.BP_SubtitlesController_C");
		return ptr;
	}

}



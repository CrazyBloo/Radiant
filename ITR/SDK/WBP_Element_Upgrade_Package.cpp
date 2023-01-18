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
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.IsInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Installed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_Upgrade_C::IsInstalled(bool* Installed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.IsInstalled");
		
		UWBP_Element_Upgrade_C_IsInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Installed != nullptr)
			*Installed = params.Installed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.GetLinked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpgradeInfo                                UpgradeInfo                                                (Parm, OutParm)
	 * 		bool                                               selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_Upgrade_C::GetLinked(struct FUpgradeInfo* UpgradeInfo, bool* selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.GetLinked");
		
		UWBP_Element_Upgrade_C_GetLinked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpgradeInfo != nullptr)
			*UpgradeInfo = params.UpgradeInfo;
		if (selected != nullptr)
			*selected = params.selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.Link
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpgradeInfo                                UpgradeInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Installed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_Upgrade_C::Link(const struct FUpgradeInfo& UpgradeInfo, bool Enabled, bool Installed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.Link");
		
		UWBP_Element_Upgrade_C_Link_Params params {};
		params.UpgradeInfo = UpgradeInfo;
		params.Enabled = Enabled;
		params.Installed = Installed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.BndEvt__WBP_Element_Upgrade_Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Element_Upgrade_C::BndEvt__WBP_Element_Upgrade_Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.BndEvt__WBP_Element_Upgrade_Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Element_Upgrade_C_BndEvt__WBP_Element_Upgrade_Button_Apply_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.Empty
	 * 		Flags  -> ()
	 */
	void UWBP_Element_Upgrade_C::Empty()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.Empty");
		
		UWBP_Element_Upgrade_C_Empty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.PlayProgressAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_Element_Upgrade_C::PlayProgressAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.PlayProgressAnimation");
		
		UWBP_Element_Upgrade_C_PlayProgressAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_Upgrade_C::SetEnabled(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.SetEnabled");
		
		UWBP_Element_Upgrade_C_SetEnabled_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               select                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_Upgrade_C::SetSelected(bool select)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.SetSelected");
		
		UWBP_Element_Upgrade_C_SetSelected_Params params {};
		params.select = select;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.ExecuteUbergraph_WBP_Element_Upgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_Upgrade_C::ExecuteUbergraph_WBP_Element_Upgrade(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.ExecuteUbergraph_WBP_Element_Upgrade");
		
		UWBP_Element_Upgrade_C_ExecuteUbergraph_WBP_Element_Upgrade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Element_Upgrade_C*                      Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_Upgrade_C::OnClicked__DelegateSignature(class UWBP_Element_Upgrade_C* Element)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_Upgrade.WBP_Element_Upgrade_C.OnClicked__DelegateSignature");
		
		UWBP_Element_Upgrade_C_OnClicked__DelegateSignature_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_Upgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_Upgrade_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_Upgrade.WBP_Element_Upgrade_C");
		return ptr;
	}

}



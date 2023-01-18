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
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ToggleFreeMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_StorageUpgrade_C::ToggleFreeMode(bool State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ToggleFreeMode");
		
		UWBP_Page_StorageUpgrade_C_ToggleFreeMode_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.IsUpgradeSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_StorageUpgrade_C::IsUpgradeSelection(bool* Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.IsUpgradeSelection");
		
		UWBP_Page_StorageUpgrade_C_IsUpgradeSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.HidePage
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::HidePage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.HidePage");
		
		UWBP_Page_StorageUpgrade_C_HidePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.UpdatePage
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::UpdatePage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.UpdatePage");
		
		UWBP_Page_StorageUpgrade_C_UpdatePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnCellContentChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::OnCellContentChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnCellContentChanged");
		
		UWBP_Page_StorageUpgrade_C_OnCellContentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Page_StorageUpgrade_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Page_StorageUpgrade_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnItemDroppedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_StorageUpgrade_C::OnItemDroppedEvent(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnItemDroppedEvent");
		
		UWBP_Page_StorageUpgrade_C_OnItemDroppedEvent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_TrainStorage_C*                          storageRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_StorageUpgrade_C::Setup(class ABP_TrainStorage_C* storageRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.Setup");
		
		UWBP_Page_StorageUpgrade_C_Setup_Params params {};
		params.storageRef = storageRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ShowPage");
		
		UWBP_Page_StorageUpgrade_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnButtonApply
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::OnButtonApply()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnButtonApply");
		
		UWBP_Page_StorageUpgrade_C_OnButtonApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.PlayElementUpgradeAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                UpgradeID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_StorageUpgrade_C::PlayElementUpgradeAnimation(const struct FGameplayTag& UpgradeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.PlayElementUpgradeAnimation");
		
		UWBP_Page_StorageUpgrade_C_PlayElementUpgradeAnimation_Params params {};
		params.UpgradeID = UpgradeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.PlayUpgradeAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_Page_StorageUpgrade_C::PlayUpgradeAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.PlayUpgradeAnimation");
		
		UWBP_Page_StorageUpgrade_C_PlayUpgradeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.StateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_StorageUpgrade_C::StateAnimation(bool Pause)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.StateAnimation");
		
		UWBP_Page_StorageUpgrade_C_StateAnimation_Params params {};
		params.Pause = Pause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ExecuteUbergraph_WBP_Page_StorageUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_StorageUpgrade_C::ExecuteUbergraph_WBP_Page_StorageUpgrade(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ExecuteUbergraph_WBP_Page_StorageUpgrade");
		
		UWBP_Page_StorageUpgrade_C_ExecuteUbergraph_WBP_Page_StorageUpgrade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Page_StorageUpgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Page_StorageUpgrade_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function FL_UI.FL_UI_C.GetDurabiltiyRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemDurability                                    Durability                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMinMaxFloat                                DuraRange                                                  (Parm, OutParm, NoDestructor)
	 * 		class FName                                        ParameterName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::GetDurabiltiyRange(EItemDurability Durability, class UObject* __WorldContext, struct FMinMaxFloat* DuraRange, class FName* ParameterName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.GetDurabiltiyRange");
		
		UFL_UI_C_GetDurabiltiyRange_Params params {};
		params.Durability = Durability;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DuraRange != nullptr)
			*DuraRange = params.DuraRange;
		if (ParameterName != nullptr)
			*ParameterName = params.ParameterName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.Find Dur Param Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Durability                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ParameterName                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::FindDurParamName(float Durability, class UObject* __WorldContext, class FName* ParameterName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.Find Dur Param Name");
		
		UFL_UI_C_FindDurParamName_Params params {};
		params.Durability = Durability;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParameterName != nullptr)
			*ParameterName = params.ParameterName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.PlayButtonSfx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::PlayButtonSfx(class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.PlayButtonSfx");
		
		UFL_UI_C_PlayButtonSfx_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.FindNearShopShowcase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ShopShowcase_C*                          showcaseRef                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::FindNearShopShowcase(const struct FVector& Location, class UObject* __WorldContext, class ABP_ShopShowcase_C** showcaseRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.FindNearShopShowcase");
		
		UFL_UI_C_FindNearShopShowcase_Params params {};
		params.Location = Location;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (showcaseRef != nullptr)
			*showcaseRef = params.showcaseRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.FindNearShopComputer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ShopComputer_C*                          ShopCompRef                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::FindNearShopComputer(const struct FVector& Location, class UObject* __WorldContext, class ABP_ShopComputer_C** ShopCompRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.FindNearShopComputer");
		
		UFL_UI_C_FindNearShopComputer_Params params {};
		params.Location = Location;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShopCompRef != nullptr)
			*ShopCompRef = params.ShopCompRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.FindNearShopBin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ShopBin_C*                               shopBinRef                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::FindNearShopBin(const struct FVector& Location, class UObject* __WorldContext, class ABP_ShopBin_C** shopBinRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.FindNearShopBin");
		
		UFL_UI_C_FindNearShopBin_Params params {};
		params.Location = Location;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shopBinRef != nullptr)
			*shopBinRef = params.shopBinRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.InitTutorialButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              OnButtonClicked                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::InitTutorialButton(class UWidgetComponent* Button, const class FText& Text, bool Highlight, const class FScriptDelegate& OnButtonClicked, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.InitTutorialButton");
		
		UFL_UI_C_InitTutorialButton_Params params {};
		params.Button = Button;
		params.Text = Text;
		params.Highlight = Highlight;
		params.OnButtonClicked = OnButtonClicked;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.SetDurabilityProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProgressBar*                                Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::SetDurabilityProgress(class UProgressBar* Progress, float Percent, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.SetDurabilityProgress");
		
		UFL_UI_C_SetDurabilityProgress_Params params {};
		params.Progress = Progress;
		params.Percent = Percent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.UpdateButtonTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::UpdateButtonTextColor(class UButton* Button, class UTextBlock* Text, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.UpdateButtonTextColor");
		
		UFL_UI_C_UpdateButtonTextColor_Params params {};
		params.Button = Button;
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.UpdateButtonStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::UpdateButtonStyle(class UButton* Button, bool selected, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.UpdateButtonStyle");
		
		UFL_UI_C_UpdateButtonStyle_Params params {};
		params.Button = Button;
		params.selected = selected;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.FindTrainStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_TrainStorage_C*                          trainStorageRef                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::FindTrainStorage(class UObject* __WorldContext, class ABP_TrainStorage_C** trainStorageRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.FindTrainStorage");
		
		UFL_UI_C_FindTrainStorage_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (trainStorageRef != nullptr)
			*trainStorageRef = params.trainStorageRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.FindMissionComputer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_MissionComputer_C*                       missionCompRef                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::FindMissionComputer(class UObject* __WorldContext, class ABP_MissionComputer_C** missionCompRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.FindMissionComputer");
		
		UFL_UI_C_FindMissionComputer_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (missionCompRef != nullptr)
			*missionCompRef = params.missionCompRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_UI.FL_UI_C.FindHealthBoothRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HealthBooth_C*                           healthBoothRef                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_UI_C::FindHealthBoothRef(class UObject* __WorldContext, class ABP_HealthBooth_C** healthBoothRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_UI.FL_UI_C.FindHealthBoothRef");
		
		UFL_UI_C_FindHealthBoothRef_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (healthBoothRef != nullptr)
			*healthBoothRef = params.healthBoothRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_UI_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_UI.FL_UI_C");
		return ptr;
	}

}



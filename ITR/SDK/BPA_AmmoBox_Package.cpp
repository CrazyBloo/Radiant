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
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateMaterialDamage
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::UpdateMaterialDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateMaterialDamage");
		
		ABPA_AmmoBox_C_UpdateMaterialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.GetAmmoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ammoCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoBox_C::GetAmmoCount(int32_t* ammoCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.GetAmmoCount");
		
		ABPA_AmmoBox_C_GetAmmoCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ammoCount != nullptr)
			*ammoCount = params.ammoCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.IsFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               full                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_AmmoBox_C::IsFull(bool* full)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.IsFull");
		
		ABPA_AmmoBox_C_IsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (full != nullptr)
			*full = params.full;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateAmmoTypeText
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::UpdateAmmoTypeText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateAmmoTypeText");
		
		ABPA_AmmoBox_C_UpdateAmmoTypeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateItemWeight
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::UpdateItemWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateItemWeight");
		
		ABPA_AmmoBox_C_UpdateItemWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateCounter
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::UpdateCounter()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateCounter");
		
		ABPA_AmmoBox_C_UpdateCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.OnReconfigure");
		
		ABPA_AmmoBox_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoBox_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.ReceiveEndPlay");
		
		ABPA_AmmoBox_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.OnItemCreated
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::OnItemCreated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.OnItemCreated");
		
		ABPA_AmmoBox_C_OnItemCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.OnStart");
		
		ABPA_AmmoBox_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.FillAmmo
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::FillAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.FillAmmo");
		
		ABPA_AmmoBox_C_FillAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.HealthEndedOverride
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::HealthEndedOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.HealthEndedOverride");
		
		ABPA_AmmoBox_C_HealthEndedOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.OnAmmoAdded
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::OnAmmoAdded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.OnAmmoAdded");
		
		ABPA_AmmoBox_C_OnAmmoAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.OnAmmoRemoved
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::OnAmmoRemoved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.OnAmmoRemoved");
		
		ABPA_AmmoBox_C_OnAmmoRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.FillContainerWithFirst
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoBox_C::FillContainerWithFirst()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.FillContainerWithFirst");
		
		ABPA_AmmoBox_C_FillContainerWithFirst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoBox.BPA_AmmoBox_C.ExecuteUbergraph_BPA_AmmoBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoBox_C::ExecuteUbergraph_BPA_AmmoBox(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoBox.BPA_AmmoBox_C.ExecuteUbergraph_BPA_AmmoBox");
		
		ABPA_AmmoBox_C_ExecuteUbergraph_BPA_AmmoBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_AmmoBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_AmmoBox_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_AmmoBox.BPA_AmmoBox_C");
		return ptr;
	}

}



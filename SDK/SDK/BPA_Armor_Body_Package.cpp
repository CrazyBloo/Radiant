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
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.GetSoundType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Exist                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Body_C::GetSoundType(bool* Exist, int32_t* Type)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.GetSoundType");
		
		ABPA_Armor_Body_C_GetSoundType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exist != nullptr)
			*Exist = params.Exist;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.ApplayVisualEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      _char_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Applay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FFBodyArmorSetup                            FBodyArmorSetup                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Body_C::ApplayVisualEffects(class AActor* _char_, bool Applay, const struct FFBodyArmorSetup& FBodyArmorSetup)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.ApplayVisualEffects");
		
		ABPA_Armor_Body_C_ApplayVisualEffects_Params params {};
		params._char_ = _char_;
		params.Applay = Applay;
		params.FBodyArmorSetup = FBodyArmorSetup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.ApplayToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Chracter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Body_C::ApplayToCharacter(class AActor* Chracter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.ApplayToCharacter");
		
		ABPA_Armor_Body_C_ApplayToCharacter_Params params {};
		params.Chracter = Chracter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Body_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.ReceiveEndPlay");
		
		ABPA_Armor_Body_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.OnShowBodyChanged_Event_1
	 * 		Flags  -> ()
	 */
	void ABPA_Armor_Body_C::OnShowBodyChanged_Event_1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.OnShowBodyChanged_Event_1");
		
		ABPA_Armor_Body_C_OnShowBodyChanged_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.OnAddedToHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Body_C::OnAddedToHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.OnAddedToHolster");
		
		ABPA_Armor_Body_C_OnAddedToHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.OnRemovedFromHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Body_C::OnRemovedFromHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.OnRemovedFromHolster");
		
		ABPA_Armor_Body_C_OnRemovedFromHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Body.BPA_Armor_Body_C.ExecuteUbergraph_BPA_Armor_Body
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Body_C::ExecuteUbergraph_BPA_Armor_Body(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Body.BPA_Armor_Body_C.ExecuteUbergraph_BPA_Armor_Body");
		
		ABPA_Armor_Body_C_ExecuteUbergraph_BPA_Armor_Body_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Armor_Body_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Armor_Body_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Armor_Body.BPA_Armor_Body_C");
		return ptr;
	}

}



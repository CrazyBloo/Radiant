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
	 * 		Name   -> Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.OnAmmoTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_GrippableAmmoMag_C::OnAmmoTaken(int32_t AmmoIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.OnAmmoTaken");
		
		UBPC_GrippableAmmoMag_C_OnAmmoTaken_Params params {};
		params.AmmoIndex = AmmoIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.DoSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTypeID                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UStaticMeshComponent* UBPC_GrippableAmmoMag_C::DoSpawn(const struct FGameplayTag& ItemTypeID, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.DoSpawn");
		
		UBPC_GrippableAmmoMag_C_DoSpawn_Params params {};
		params.ItemTypeID = ItemTypeID;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.SetBulletsGrippable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsGrippable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_GrippableAmmoMag_C::SetBulletsGrippable(bool IsGrippable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.SetBulletsGrippable");
		
		UBPC_GrippableAmmoMag_C_SetBulletsGrippable_Params params {};
		params.IsGrippable = IsGrippable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.ExecuteUbergraph_BPC_GrippableAmmoMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_GrippableAmmoMag_C::ExecuteUbergraph_BPC_GrippableAmmoMag(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.ExecuteUbergraph_BPC_GrippableAmmoMag");
		
		UBPC_GrippableAmmoMag_C_ExecuteUbergraph_BPC_GrippableAmmoMag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_GrippableAmmoMag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_GrippableAmmoMag_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C");
		return ptr;
	}

}



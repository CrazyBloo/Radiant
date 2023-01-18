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
	 * 		Name   -> Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.Update Bullet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFired                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_GrippableAmmo_C::UpdateBullet(bool IsFired)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.Update Bullet");
		
		UBPC_GrippableAmmo_C_UpdateBullet_Params params {};
		params.IsFired = IsFired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                AmmoTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFired                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_GrippableAmmo_C::Initialize(const struct FGameplayTag& AmmoTag, int32_t Index, bool IsFired)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.Initialize");
		
		UBPC_GrippableAmmo_C_Initialize_Params params {};
		params.AmmoTag = AmmoTag;
		params.Index = Index;
		params.IsFired = IsFired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UBPC_GrippableAmmo_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.OnGrip");
		
		UBPC_GrippableAmmo_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.ExecuteUbergraph_BPC_GrippableAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_GrippableAmmo_C::ExecuteUbergraph_BPC_GrippableAmmo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.ExecuteUbergraph_BPC_GrippableAmmo");
		
		UBPC_GrippableAmmo_C_ExecuteUbergraph_BPC_GrippableAmmo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.OnTaken__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmmoIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_GrippableAmmo_C::OnTaken__DelegateSignature(int32_t AmmoIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_GrippableAmmo.BPC_GrippableAmmo_C.OnTaken__DelegateSignature");
		
		UBPC_GrippableAmmo_C_OnTaken__DelegateSignature_Params params {};
		params.AmmoIndex = AmmoIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_GrippableAmmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_GrippableAmmo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_GrippableAmmo.BPC_GrippableAmmo_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.GetWeaponInfo
	 * 		Flags  -> ()
	 */
	struct FWeaponInfo ABPA_GrenadeLauncher_C::GetWeaponInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.GetWeaponInfo");
		
		ABPA_GrenadeLauncher_C_GetWeaponInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABPA_GrenadeLauncher_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.UserConstructionScript");
		
		ABPA_GrenadeLauncher_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_GrenadeLauncher_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.OnReconfigure");
		
		ABPA_GrenadeLauncher_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.Fire
	 * 		Flags  -> ()
	 */
	void ABPA_GrenadeLauncher_C::Fire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.Fire");
		
		ABPA_GrenadeLauncher_C_Fire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.DestroyComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_GrenadeLauncher_C::DestroyComp(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.DestroyComp");
		
		ABPA_GrenadeLauncher_C_DestroyComp_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_GrenadeLauncher_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABPA_GrenadeLauncher_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABPA_GrenadeLauncher_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.OnUsed");
		
		ABPA_GrenadeLauncher_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.ExecuteUbergraph_BPA_GrenadeLauncher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_GrenadeLauncher_C::ExecuteUbergraph_BPA_GrenadeLauncher(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.ExecuteUbergraph_BPA_GrenadeLauncher");
		
		ABPA_GrenadeLauncher_C_ExecuteUbergraph_BPA_GrenadeLauncher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_GrenadeLauncher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_GrenadeLauncher_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_GrenadeLauncher.BPA_GrenadeLauncher_C");
		return ptr;
	}

}



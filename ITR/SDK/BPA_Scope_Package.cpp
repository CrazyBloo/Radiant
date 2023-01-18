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
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.UpdateCamera
	 * 		Flags  -> ()
	 */
	void ABPA_Scope_C::UpdateCamera()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.UpdateCamera");
		
		ABPA_Scope_C_UpdateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Scope_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.ReceiveTick");
		
		ABPA_Scope_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Scope_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.OnGrip");
		
		ABPA_Scope_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABPA_Scope_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.OnStart");
		
		ABPA_Scope_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.TogglePhysCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Scope_C::TogglePhysCollisions(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.TogglePhysCollisions");
		
		ABPA_Scope_C_TogglePhysCollisions_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.OnProxyDisabled
	 * 		Flags  -> ()
	 */
	void ABPA_Scope_C::OnProxyDisabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.OnProxyDisabled");
		
		ABPA_Scope_C_OnProxyDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.OnProxyEnabled
	 * 		Flags  -> ()
	 */
	void ABPA_Scope_C::OnProxyEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.OnProxyEnabled");
		
		ABPA_Scope_C_OnProxyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Scope.BPA_Scope_C.ExecuteUbergraph_BPA_Scope
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Scope_C::ExecuteUbergraph_BPA_Scope(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Scope.BPA_Scope_C.ExecuteUbergraph_BPA_Scope");
		
		ABPA_Scope_C_ExecuteUbergraph_BPA_Scope_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Scope_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Scope_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Scope.BPA_Scope_C");
		return ptr;
	}

}



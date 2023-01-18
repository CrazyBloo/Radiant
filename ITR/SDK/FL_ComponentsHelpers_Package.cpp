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
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.UpdatePause
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::UpdatePause(class UAudioComponent* Target, bool Pause, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.UpdatePause");
		
		UFL_ComponentsHelpers_C_UpdatePause_Params params {};
		params.Target = Target;
		params.Pause = Pause;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetInfosController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::GetInfosController(class UObject* __WorldContext, class UObject** Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetInfosController");
		
		UFL_ComponentsHelpers_C_GetInfosController_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetYawRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_ComponentsHelpers_C::GetYawRotator(class USceneComponent* Target, class UObject* __WorldContext, struct FRotator* Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetYawRotator");
		
		UFL_ComponentsHelpers_C_GetYawRotator_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.CallStopAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_ComponentsHelpers_C::CallStopAttack(class AActor* Actor, class UObject* __WorldContext, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.CallStopAttack");
		
		UFL_ComponentsHelpers_C_CallStopAttack_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.KillSceneComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               KillChildren                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::KillSceneComponent(class USceneComponent* Target, bool KillChildren, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.KillSceneComponent");
		
		UFL_ComponentsHelpers_C_KillSceneComponent_Params params {};
		params.Target = Target;
		params.KillChildren = KillChildren;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetSkillRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESkillPhase                                        Phase                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     SkillRef                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::GetSkillRef(class AActor* Actor, ESkillPhase Phase, class UObject* __WorldContext, bool* success, class UObject** SkillRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetSkillRef");
		
		UFL_ComponentsHelpers_C_GetSkillRef_Params params {};
		params.Actor = Actor;
		params.Phase = Phase;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (SkillRef != nullptr)
			*SkillRef = params.SkillRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.SetEnabledToAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UActorComponent*>                     Targets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::SetEnabledToAll(TArray<class UActorComponent*>* Targets, bool Enabled, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.SetEnabledToAll");
		
		UFL_ComponentsHelpers_C_SetEnabledToAll_Params params {};
		params.Enabled = Enabled;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Targets != nullptr)
			*Targets = params.Targets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.Disable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::Disable(class UActorComponent* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.Disable");
		
		UFL_ComponentsHelpers_C_Disable_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.enable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::enable(class UActorComponent* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.enable");
		
		UFL_ComponentsHelpers_C_enable_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::SetEnabled(class UActorComponent* Target, bool Enabled, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.SetEnabled");
		
		UFL_ComponentsHelpers_C_SetEnabled_Params params {};
		params.Target = Target;
		params.Enabled = Enabled;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.IsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_ComponentsHelpers_C::IsEnabled(class UActorComponent* Target, class UObject* __WorldContext, bool* Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.IsEnabled");
		
		UFL_ComponentsHelpers_C_IsEnabled_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetCommandsEventedRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     CommandsEventedRef                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::GetCommandsEventedRef(class AActor* Actor, class UObject* __WorldContext, bool* success, class UObject** CommandsEventedRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetCommandsEventedRef");
		
		UFL_ComponentsHelpers_C_GetCommandsEventedRef_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (CommandsEventedRef != nullptr)
			*CommandsEventedRef = params.CommandsEventedRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetAnimInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::GetAnimInstance(class AActor* Actor, class UObject* __WorldContext, bool* success, class UAnimInstance** AnimInstance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetAnimInstance");
		
		UFL_ComponentsHelpers_C_GetAnimInstance_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (AnimInstance != nullptr)
			*AnimInstance = params.AnimInstance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetAttackRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     AttackRef                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::GetAttackRef(class AActor* Actor, class UObject* __WorldContext, bool* success, class UObject** AttackRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.GetAttackRef");
		
		UFL_ComponentsHelpers_C_GetAttackRef_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (AttackRef != nullptr)
			*AttackRef = params.AttackRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.KillComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_ComponentsHelpers_C::KillComponent(class UActorComponent* Target, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_ComponentsHelpers.FL_ComponentsHelpers_C.KillComponent");
		
		UFL_ComponentsHelpers_C_KillComponent_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_ComponentsHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_ComponentsHelpers_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_ComponentsHelpers.FL_ComponentsHelpers_C");
		return ptr;
	}

}



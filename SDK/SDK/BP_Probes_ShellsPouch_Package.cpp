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
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.GetThrowVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CurrentAvrgLinVel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CurentAvrgAnglVel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Probes_ShellsPouch_C::GetThrowVelocity(float Multiplier, struct FVector* CurrentAvrgLinVel, struct FVector* CurentAvrgAnglVel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.GetThrowVelocity");
		
		ABP_Probes_ShellsPouch_C_GetThrowVelocity_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentAvrgLinVel != nullptr)
			*CurrentAvrgLinVel = params.CurrentAvrgLinVel;
		if (CurentAvrgAnglVel != nullptr)
			*CurentAvrgAnglVel = params.CurentAvrgAnglVel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.SpawnProbe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedProbe                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Probes_ShellsPouch_C::SpawnProbe(class AActor** SpawnedProbe)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.SpawnProbe");
		
		ABP_Probes_ShellsPouch_C_SpawnProbe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedProbe != nullptr)
			*SpawnedProbe = params.SpawnedProbe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Probes_ShellsPouch_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnUsed");
		
		ABP_Probes_ShellsPouch_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_Probes_ShellsPouch_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnEndUsed");
		
		ABP_Probes_ShellsPouch_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Probes_ShellsPouch_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ReceiveTick");
		
		ABP_Probes_ShellsPouch_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ThrowItem
	 * 		Flags  -> ()
	 */
	void ABP_Probes_ShellsPouch_C::ThrowItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ThrowItem");
		
		ABP_Probes_ShellsPouch_C_ThrowItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Probes_ShellsPouch_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnGripRelease");
		
		ABP_Probes_ShellsPouch_C_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABP_Probes_ShellsPouch_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.StopUse");
		
		ABP_Probes_ShellsPouch_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ExecuteUbergraph_BP_Probes_ShellsPouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Probes_ShellsPouch_C::ExecuteUbergraph_BP_Probes_ShellsPouch(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ExecuteUbergraph_BP_Probes_ShellsPouch");
		
		ABP_Probes_ShellsPouch_C_ExecuteUbergraph_BP_Probes_ShellsPouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Probes_ShellsPouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Probes_ShellsPouch_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C");
		return ptr;
	}

}



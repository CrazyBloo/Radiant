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
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ProcessNonplayerTargetList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::ProcessNonplayerTargetList(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ProcessNonplayerTargetList");
		
		ABP_Anomaly_Reflector_C_ProcessNonplayerTargetList_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.Handle Nonplayer Interaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::HandleNonplayerInteraction(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.Handle Nonplayer Interaction");
		
		ABP_Anomaly_Reflector_C_HandleNonplayerInteraction_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.NonplayerPostRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FReflectorAnomlyNonplayerTarget             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_Anomaly_Reflector_C::NonplayerPostRotation(const struct FReflectorAnomlyNonplayerTarget& Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.NonplayerPostRotation");
		
		ABP_Anomaly_Reflector_C_NonplayerPostRotation_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.IsItemHeldOrAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ARadiusItemActor*                            Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HeldOrAttached                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Anomaly_Reflector_C::IsItemHeldOrAttached(class ARadiusItemActor* Item, bool* HeldOrAttached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.IsItemHeldOrAttached");
		
		ABP_Anomaly_Reflector_C_IsItemHeldOrAttached_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeldOrAttached != nullptr)
			*HeldOrAttached = params.HeldOrAttached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.CalcShootPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::CalcShootPosition(const struct FVector& Loc, struct FVector* LocOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.CalcShootPosition");
		
		ABP_Anomaly_Reflector_C_CalcShootPosition_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocOut != nullptr)
			*LocOut = params.LocOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Reflector_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.UserConstructionScript");
		
		ABP_Anomaly_Reflector_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.SpawnBeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     vel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::SpawnBeam(const struct FVector& vel, const struct FVector& Loc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.SpawnBeam");
		
		ABP_Anomaly_Reflector_C_SpawnBeam_Params params {};
		params.vel = vel;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ThrowBack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     vel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::ThrowBack(const struct FVector& vel, const struct FVector& Loc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ThrowBack");
		
		ABP_Anomaly_Reflector_C_ThrowBack_Params params {};
		params.vel = vel;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.Process
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::Process(class AActor* OverlappingActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.Process");
		
		ABP_Anomaly_Reflector_C_Process_Params params {};
		params.OverlappingActor = OverlappingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.VisualTrigger
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Reflector_C::VisualTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.VisualTrigger");
		
		ABP_Anomaly_Reflector_C_VisualTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ReceiveTick");
		
		ABP_Anomaly_Reflector_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OnLevelStarted");
		
		ABP_Anomaly_Reflector_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OnSetupEvent
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Reflector_C::OnSetupEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OnSetupEvent");
		
		ABP_Anomaly_Reflector_C_OnSetupEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.PopFromPoolActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABP_Anomaly_Reflector_C::PopFromPoolActor(const struct FTransform& Transform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.PopFromPoolActor");
		
		ABP_Anomaly_Reflector_C_PopFromPoolActor_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.PushToPoolActor
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Reflector_C::PushToPoolActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.PushToPoolActor");
		
		ABP_Anomaly_Reflector_C_PushToPoolActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.AnomalyTriggered
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Reflector_C::AnomalyTriggered()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.AnomalyTriggered");
		
		ABP_Anomaly_Reflector_C_AnomalyTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OverlapStartingTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::OverlapStartingTriggered(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OverlapStartingTriggered");
		
		ABP_Anomaly_Reflector_C_OverlapStartingTriggered_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ExecuteUbergraph_BP_Anomaly_Reflector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Reflector_C::ExecuteUbergraph_BP_Anomaly_Reflector(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ExecuteUbergraph_BP_Anomaly_Reflector");
		
		ABP_Anomaly_Reflector_C_ExecuteUbergraph_BP_Anomaly_Reflector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Reflector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Reflector_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Reflector.BP_Anomaly_Reflector_C");
		return ptr;
	}

}



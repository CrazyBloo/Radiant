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
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.GetCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharCommand                                       CurrentCommand                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::GetCommand(ECharCommand* CurrentCommand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.GetCommand");
		
		ABP_Sergant_C_GetCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCommand != nullptr)
			*CurrentCommand = params.CurrentCommand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.GetDesiredPosition
	 * 		Flags  -> ()
	 */
	struct FVector ABP_Sergant_C::GetDesiredPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.GetDesiredPosition");
		
		ABP_Sergant_C_GetDesiredPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.GetPerception
	 * 		Flags  -> ()
	 */
	class UPRNpcPerceptionComponent* ABP_Sergant_C::GetPerception()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.GetPerception");
		
		ABP_Sergant_C_GetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.GetSquadMembers
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> ABP_Sergant_C::GetSquadMembers()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.GetSquadMembers");
		
		ABP_Sergant_C_GetSquadMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.GetTargetActor
	 * 		Flags  -> ()
	 */
	class AActor* ABP_Sergant_C::GetTargetActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.GetTargetActor");
		
		ABP_Sergant_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.GetTargetLocation
	 * 		Flags  -> ()
	 */
	struct FVector ABP_Sergant_C::GetTargetLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.GetTargetLocation");
		
		ABP_Sergant_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.AddSquadMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::AddSquadMember(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.AddSquadMember");
		
		ABP_Sergant_C_AddSquadMember_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.OrderAttack
	 * 		Flags  -> ()
	 */
	void ABP_Sergant_C::OrderAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.OrderAttack");
		
		ABP_Sergant_C_OrderAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.OrderCover
	 * 		Flags  -> ()
	 */
	void ABP_Sergant_C::OrderCover()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.OrderCover");
		
		ABP_Sergant_C_OrderCover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.RemoveSquadMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::RemoveSquadMember(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.RemoveSquadMember");
		
		ABP_Sergant_C_RemoveSquadMember_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.SetDesiredPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::SetDesiredPosition(const struct FVector& Pos)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.SetDesiredPosition");
		
		ABP_Sergant_C_SetDesiredPosition_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.SetLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APRBasicActor*                               NewLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::SetLeader(class APRBasicActor* NewLeader)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.SetLeader");
		
		ABP_Sergant_C_SetLeader_Params params {};
		params.NewLeader = NewLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.SetTargetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::SetTargetActor(class AActor* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.SetTargetActor");
		
		ABP_Sergant_C_SetTargetActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.SpreadOut
	 * 		Flags  -> ()
	 */
	void ABP_Sergant_C::SpreadOut()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.SpreadOut");
		
		ABP_Sergant_C_SpreadOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.ReceiveTick");
		
		ABP_Sergant_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_Sergant_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.OnGameStarted");
		
		ABP_Sergant_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.OrderCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::OrderCompleted(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.OrderCompleted");
		
		ABP_Sergant_C_OrderCompleted_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.ReportEnemyLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::ReportEnemyLocation(const struct FVector& Loc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.ReportEnemyLocation");
		
		ABP_Sergant_C_ReportEnemyLocation_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sergant.BP_Sergant_C.ExecuteUbergraph_BP_Sergant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sergant_C::ExecuteUbergraph_BP_Sergant(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sergant.BP_Sergant_C.ExecuteUbergraph_BP_Sergant");
		
		ABP_Sergant_C_ExecuteUbergraph_BP_Sergant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sergant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sergant_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sergant.BP_Sergant_C");
		return ptr;
	}

}



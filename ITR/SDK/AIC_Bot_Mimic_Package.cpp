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
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharCommand                                       CurrentCommand                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::GetCommand(ECharCommand* CurrentCommand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetCommand");
		
		AAIC_Bot_Mimic_C_GetCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCommand != nullptr)
			*CurrentCommand = params.CurrentCommand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetDesiredPosition
	 * 		Flags  -> ()
	 */
	struct FVector AAIC_Bot_Mimic_C::GetDesiredPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetDesiredPosition");
		
		AAIC_Bot_Mimic_C_GetDesiredPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetPerception
	 * 		Flags  -> ()
	 */
	class UPRNpcPerceptionComponent* AAIC_Bot_Mimic_C::GetPerception()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetPerception");
		
		AAIC_Bot_Mimic_C_GetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetSquadMembers
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> AAIC_Bot_Mimic_C::GetSquadMembers()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetSquadMembers");
		
		AAIC_Bot_Mimic_C_GetSquadMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetTargetActor
	 * 		Flags  -> ()
	 */
	class AActor* AAIC_Bot_Mimic_C::GetTargetActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetTargetActor");
		
		AAIC_Bot_Mimic_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetTargetLocation
	 * 		Flags  -> ()
	 */
	struct FVector AAIC_Bot_Mimic_C::GetTargetLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetTargetLocation");
		
		AAIC_Bot_Mimic_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderAttack
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_Mimic_C::OrderAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderAttack");
		
		AAIC_Bot_Mimic_C_OrderAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::OrderCompleted(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderCompleted");
		
		AAIC_Bot_Mimic_C_OrderCompleted_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderCover
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_Mimic_C::OrderCover()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderCover");
		
		AAIC_Bot_Mimic_C_OrderCover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.EnemySpoted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::EnemySpoted(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.EnemySpoted");
		
		AAIC_Bot_Mimic_C_EnemySpoted_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GameStarted
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_Mimic_C::GameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GameStarted");
		
		AAIC_Bot_Mimic_C_GameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SwitchToIdle
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_Mimic_C::SwitchToIdle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SwitchToIdle");
		
		AAIC_Bot_Mimic_C_SwitchToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ReceiveUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ReceiveUnPossess");
		
		AAIC_Bot_Mimic_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.EnemyLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocLastSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::EnemyLost(class AActor* Actor, const struct FVector& LocLastSeen)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.EnemyLost");
		
		AAIC_Bot_Mimic_C_EnemyLost_Params params {};
		params.Actor = Actor;
		params.LocLastSeen = LocLastSeen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APRBasicActor*                               NewLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::SetLeader(class APRBasicActor* NewLeader)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetLeader");
		
		AAIC_Bot_Mimic_C_SetLeader_Params params {};
		params.NewLeader = NewLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetTargetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::SetTargetActor(class AActor* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetTargetActor");
		
		AAIC_Bot_Mimic_C_SetTargetActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetDesiredPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::SetDesiredPosition(const struct FVector& Pos)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetDesiredPosition");
		
		AAIC_Bot_Mimic_C_SetDesiredPosition_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ReportEnemyLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::ReportEnemyLocation(const struct FVector& Loc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ReportEnemyLocation");
		
		AAIC_Bot_Mimic_C_ReportEnemyLocation_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.AddSquadMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::AddSquadMember(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.AddSquadMember");
		
		AAIC_Bot_Mimic_C_AddSquadMember_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.RemoveSquadMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::RemoveSquadMember(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.RemoveSquadMember");
		
		AAIC_Bot_Mimic_C_RemoveSquadMember_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ExecuteUbergraph_AIC_Bot_Mimic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_Mimic_C::ExecuteUbergraph_AIC_Bot_Mimic(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ExecuteUbergraph_AIC_Bot_Mimic");
		
		AAIC_Bot_Mimic_C_ExecuteUbergraph_AIC_Bot_Mimic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_Bot_Mimic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_Bot_Mimic_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Bot_Mimic.AIC_Bot_Mimic_C");
		return ptr;
	}

}



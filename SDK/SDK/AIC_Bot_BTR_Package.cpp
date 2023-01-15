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
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharCommand                                       CurrentCommand                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::GetCommand(ECharCommand* CurrentCommand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetCommand");
		
		AAIC_Bot_BTR_C_GetCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCommand != nullptr)
			*CurrentCommand = params.CurrentCommand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetDesiredPosition
	 * 		Flags  -> ()
	 */
	struct FVector AAIC_Bot_BTR_C::GetDesiredPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetDesiredPosition");
		
		AAIC_Bot_BTR_C_GetDesiredPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetPerception
	 * 		Flags  -> ()
	 */
	class UPRNpcPerceptionComponent* AAIC_Bot_BTR_C::GetPerception()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetPerception");
		
		AAIC_Bot_BTR_C_GetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetSquadMembers
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> AAIC_Bot_BTR_C::GetSquadMembers()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetSquadMembers");
		
		AAIC_Bot_BTR_C_GetSquadMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetTargetActor
	 * 		Flags  -> ()
	 */
	class AActor* AAIC_Bot_BTR_C::GetTargetActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetTargetActor");
		
		AAIC_Bot_BTR_C_GetTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetTargetLocation
	 * 		Flags  -> ()
	 */
	struct FVector AAIC_Bot_BTR_C::GetTargetLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.GetTargetLocation");
		
		AAIC_Bot_BTR_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.AddSquadMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::AddSquadMember(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.AddSquadMember");
		
		AAIC_Bot_BTR_C_AddSquadMember_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.OrderAttack
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_BTR_C::OrderAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.OrderAttack");
		
		AAIC_Bot_BTR_C_OrderAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.OrderCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::OrderCompleted(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.OrderCompleted");
		
		AAIC_Bot_BTR_C_OrderCompleted_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.OrderCover
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_BTR_C::OrderCover()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.OrderCover");
		
		AAIC_Bot_BTR_C_OrderCover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.RemoveSquadMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::RemoveSquadMember(class APawn* Pawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.RemoveSquadMember");
		
		AAIC_Bot_BTR_C_RemoveSquadMember_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.ReportEnemyLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::ReportEnemyLocation(const struct FVector& Loc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.ReportEnemyLocation");
		
		AAIC_Bot_BTR_C_ReportEnemyLocation_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.SetDesiredPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::SetDesiredPosition(const struct FVector& Pos)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.SetDesiredPosition");
		
		AAIC_Bot_BTR_C_SetDesiredPosition_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.SetLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APRBasicActor*                               NewLeader                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::SetLeader(class APRBasicActor* NewLeader)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.SetLeader");
		
		AAIC_Bot_BTR_C_SetLeader_Params params {};
		params.NewLeader = NewLeader;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.SetTargetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::SetTargetActor(class AActor* Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.SetTargetActor");
		
		AAIC_Bot_BTR_C_SetTargetActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.SwitchToIdle
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_BTR_C::SwitchToIdle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.SwitchToIdle");
		
		AAIC_Bot_BTR_C_SwitchToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.EnemySpoted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::EnemySpoted(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.EnemySpoted");
		
		AAIC_Bot_BTR_C_EnemySpoted_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.EnemyLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocLastSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::EnemyLost(class AActor* Actor, const struct FVector& LocLastSeen)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.EnemyLost");
		
		AAIC_Bot_BTR_C_EnemyLost_Params params {};
		params.Actor = Actor;
		params.LocLastSeen = LocLastSeen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.GameStarted
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_BTR_C::GameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.GameStarted");
		
		AAIC_Bot_BTR_C_GameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot_BTR.AIC_Bot_BTR_C.ExecuteUbergraph_AIC_Bot_BTR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_BTR_C::ExecuteUbergraph_AIC_Bot_BTR(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot_BTR.AIC_Bot_BTR_C.ExecuteUbergraph_AIC_Bot_BTR");
		
		AAIC_Bot_BTR_C_ExecuteUbergraph_AIC_Bot_BTR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_Bot_BTR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_Bot_BTR_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Bot_BTR.AIC_Bot_BTR_C");
		return ptr;
	}

}



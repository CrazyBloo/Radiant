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
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.GetDamageDealerName
	 * 		Flags  -> ()
	 */
	class FText AAIC_Bot_C::GetDamageDealerName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.GetDamageDealerName");
		
		AAIC_Bot_C_GetDamageDealerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.GetDamageDealerTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag AAIC_Bot_C::GetDamageDealerTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.GetDamageDealerTag");
		
		AAIC_Bot_C_GetDamageDealerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.FGetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_AliveStats_C*                           CAlive                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::FGetStats(class UBPC_AliveStats_C** CAlive)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.FGetStats");
		
		AAIC_Bot_C_FGetStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CAlive != nullptr)
			*CAlive = params.CAlive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.FDistanceToSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::FDistanceToSelection(const struct FVector& Loc, float* Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.FDistanceToSelection");
		
		AAIC_Bot_C_FDistanceToSelection_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.FAdvanceToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLoc                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::FAdvanceToLocation(const struct FVector& InLoc, struct FVector* Loc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.FAdvanceToLocation");
		
		AAIC_Bot_C_FAdvanceToLocation_Params params {};
		params.InLoc = InLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.FGetPerception
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPRNpcPerceptionComponent*                   PerceptionComp                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::FGetPerception(bool* success, class UPRNpcPerceptionComponent** PerceptionComp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.FGetPerception");
		
		AAIC_Bot_C_FGetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (PerceptionComp != nullptr)
			*PerceptionComp = params.PerceptionComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.OnTransitionEndOnceEventDelegate
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_C::OnTransitionEndOnceEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.OnTransitionEndOnceEventDelegate");
		
		AAIC_Bot_C_OnTransitionEndOnceEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.ReceiveBeginPlay");
		
		AAIC_Bot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.OnStart
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.OnStart");
		
		AAIC_Bot_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.EnemySpoted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::EnemySpoted(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.EnemySpoted");
		
		AAIC_Bot_C_EnemySpoted_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.AwarenessChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAwarenessLevel                                    PrevLvl                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAwarenessLevel                                    NewLvl                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::AwarenessChanged(EAwarenessLevel PrevLvl, EAwarenessLevel NewLvl)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.AwarenessChanged");
		
		AAIC_Bot_C_AwarenessChanged_Params params {};
		params.PrevLvl = PrevLvl;
		params.NewLvl = NewLvl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.ReactToNoise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::ReactToNoise(const class FName& Tag, const struct FVector& Loc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.ReactToNoise");
		
		AAIC_Bot_C_ReactToNoise_Params params {};
		params.Tag = Tag;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.OnGameStartedEventDelegate
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_C::OnGameStartedEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.OnGameStartedEventDelegate");
		
		AAIC_Bot_C_OnGameStartedEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.GameStarted
	 * 		Flags  -> ()
	 */
	void AAIC_Bot_C::GameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.GameStarted");
		
		AAIC_Bot_C_GameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.EnemyLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocLastSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::EnemyLost(class AActor* Actor, const struct FVector& LocLastSeen)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.EnemyLost");
		
		AAIC_Bot_C_EnemyLost_Params params {};
		params.Actor = Actor;
		params.LocLastSeen = LocLastSeen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.ReceiveUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.ReceiveUnPossess");
		
		AAIC_Bot_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.SetPausedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIC_Bot_C::SetPausedState(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.SetPausedState");
		
		AAIC_Bot_C_SetPausedState_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.ReceivePossess");
		
		AAIC_Bot_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIC_Bot.AIC_Bot_C.ExecuteUbergraph_AIC_Bot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIC_Bot_C::ExecuteUbergraph_AIC_Bot(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Bot.AIC_Bot_C.ExecuteUbergraph_AIC_Bot");
		
		AAIC_Bot_C_ExecuteUbergraph_AIC_Bot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIC_Bot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIC_Bot_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Bot.AIC_Bot_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.CheckPreparator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_AnomalyField_C::CheckPreparator(const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.CheckPreparator");
		
		ABP_AnomalyField_C_CheckPreparator_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.IsPreparing
	 * 		Flags  -> ()
	 */
	bool ABP_AnomalyField_C::IsPreparing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.IsPreparing");
		
		ABP_AnomalyField_C_IsPreparing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString ABP_AnomalyField_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.GetInstanceID");
		
		ABP_AnomalyField_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.Debug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABP_AnomalyField_C::Debug(const struct FTransform& Transform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.Debug");
		
		ABP_AnomalyField_C_Debug_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.PrepareVariables
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::PrepareVariables()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.PrepareVariables");
		
		ABP_AnomalyField_C_PrepareVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.FixScale
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::FixScale()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.FixScale");
		
		ABP_AnomalyField_C_FixScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.CheckUID
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::CheckUID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.CheckUID");
		
		ABP_AnomalyField_C_CheckUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.CheckPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLock                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AnomalyField_C::CheckPlayer(const struct FVector& Point, float Radius, bool* bLock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.CheckPlayer");
		
		ABP_AnomalyField_C_CheckPlayer_Params params {};
		params.Point = Point;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLock != nullptr)
			*bLock = params.bLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.PrepareBlocks
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::PrepareBlocks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.PrepareBlocks");
		
		ABP_AnomalyField_C_PrepareBlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.CheckAnomalySpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      Class                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AnomalyField_C::CheckAnomalySpawn(bool* success, class UClass** Class)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.CheckAnomalySpawn");
		
		ABP_AnomalyField_C_CheckAnomalySpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Class != nullptr)
			*Class = params.Class;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.CheckBlocks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_AnomalyField_C::CheckBlocks(const struct FVector& Point, float Radius, bool* bLocked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.CheckBlocks");
		
		ABP_AnomalyField_C_CheckBlocks_Params params {};
		params.Point = Point;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.GetSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AnomalyField_C::GetSpawnPoint(float Radius, bool* success, struct FVector* Point)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.GetSpawnPoint");
		
		ABP_AnomalyField_C_GetSpawnPoint_Params params {};
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.SpawnAnomaly
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::SpawnAnomaly()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.SpawnAnomaly");
		
		ABP_AnomalyField_C_SpawnAnomaly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.UserConstructionScript");
		
		ABP_AnomalyField_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.DoSpawn
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::DoSpawn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.DoSpawn");
		
		ABP_AnomalyField_C_DoSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.CheckIfPlayerInRange
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::CheckIfPlayerInRange()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.CheckIfPlayerInRange");
		
		ABP_AnomalyField_C_CheckIfPlayerInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AnomalyField_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.ReceiveEndPlay");
		
		ABP_AnomalyField_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.OnTransitionStartOnceEvent
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::OnTransitionStartOnceEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.OnTransitionStartOnceEvent");
		
		ABP_AnomalyField_C_OnTransitionStartOnceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AnomalyField_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.ReceiveTick");
		
		ABP_AnomalyField_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.ForceSpawn
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::ForceSpawn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.ForceSpawn");
		
		ABP_AnomalyField_C_ForceSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.EndSpawn
	 * 		Flags  -> ()
	 */
	void ABP_AnomalyField_C::EndSpawn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.EndSpawn");
		
		ABP_AnomalyField_C_EndSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AnomalyField_C::OnLevelPrepare(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.OnLevelPrepare");
		
		ABP_AnomalyField_C_OnLevelPrepare_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AnomalyField.BP_AnomalyField_C.ExecuteUbergraph_BP_AnomalyField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AnomalyField_C::ExecuteUbergraph_BP_AnomalyField(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AnomalyField.BP_AnomalyField_C.ExecuteUbergraph_BP_AnomalyField");
		
		ABP_AnomalyField_C_ExecuteUbergraph_BP_AnomalyField_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AnomalyField_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AnomalyField_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnomalyField.BP_AnomalyField_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetAnomalyInfo
	 * 		Flags  -> ()
	 */
	struct FPRAnomalyInfo ABP_Anomaly_Grass_C::GetAnomalyInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetAnomalyInfo");
		
		ABP_Anomaly_Grass_C_GetAnomalyInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetRadius
	 * 		Flags  -> ()
	 */
	float ABP_Anomaly_Grass_C::GetRadius()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetRadius");
		
		ABP_Anomaly_Grass_C_GetRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABP_Anomaly_Grass_C::GetTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetTypeID");
		
		ABP_Anomaly_Grass_C_GetTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString ABP_Anomaly_Grass_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetInstanceID");
		
		ABP_Anomaly_Grass_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetDamageDealerTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABP_Anomaly_Grass_C::GetDamageDealerTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetDamageDealerTag");
		
		ABP_Anomaly_Grass_C_GetDamageDealerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetDamageDealerName
	 * 		Flags  -> ()
	 */
	class FText ABP_Anomaly_Grass_C::GetDamageDealerName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetDamageDealerName");
		
		ABP_Anomaly_Grass_C_GetDamageDealerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.FindPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasValidPoint                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FVector>                             PointArr                                                   (Parm, OutParm)
	 * 		TArray<struct FVector>                             Normals                                                    (Parm, OutParm)
	 */
	void ABP_Anomaly_Grass_C::FindPoints(bool* HasValidPoint, TArray<struct FVector>* PointArr, TArray<struct FVector>* Normals)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.FindPoints");
		
		ABP_Anomaly_Grass_C_FindPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasValidPoint != nullptr)
			*HasValidPoint = params.HasValidPoint;
		if (PointArr != nullptr)
			*PointArr = params.PointArr;
		if (Normals != nullptr)
			*Normals = params.Normals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.Spawn
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Grass_C::Spawn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.Spawn");
		
		ABP_Anomaly_Grass_C_Spawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Grass_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.UserConstructionScript");
		
		ABP_Anomaly_Grass_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.CheckSun
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Grass_C::CheckSun()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.CheckSun");
		
		ABP_Anomaly_Grass_C_CheckSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Grass_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OnLevelStarted");
		
		ABP_Anomaly_Grass_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Grass_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ReceiveEndPlay");
		
		ABP_Anomaly_Grass_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Grass_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ReceiveBeginPlay");
		
		ABP_Anomaly_Grass_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OverlapStartingTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Grass_C::OverlapStartingTriggered(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OverlapStartingTriggered");
		
		ABP_Anomaly_Grass_C_OverlapStartingTriggered_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ApplyDamageToAffectedActors
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Grass_C::ApplyDamageToAffectedActors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ApplyDamageToAffectedActors");
		
		ABP_Anomaly_Grass_C_ApplyDamageToAffectedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OverlapLeavingTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Grass_C::OverlapLeavingTriggered(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OverlapLeavingTriggered");
		
		ABP_Anomaly_Grass_C_OverlapLeavingTriggered_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ExecuteUbergraph_BP_Anomaly_Grass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Grass_C::ExecuteUbergraph_BP_Anomaly_Grass(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ExecuteUbergraph_BP_Anomaly_Grass");
		
		ABP_Anomaly_Grass_C_ExecuteUbergraph_BP_Anomaly_Grass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Grass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Grass_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Grass.BP_Anomaly_Grass_C");
		return ptr;
	}

}



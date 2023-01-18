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
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowClimabledistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::GetCheatShowClimabledistance(int32_t* Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowClimabledistance");
		
		ABP_PRGameMode_C_GetCheatShowClimabledistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::GetCheatShowItems(int32_t* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowItems");
		
		ABP_PRGameMode_C_GetCheatShowItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowNearbyNPCs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::GetCheatShowNearbyNPCs(bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowNearbyNPCs");
		
		ABP_PRGameMode_C_GetCheatShowNearbyNPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCheatSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::GetCheatSpeed(bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCheatSpeed");
		
		ABP_PRGameMode_C_GetCheatSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetEnvironment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Environment_C*                           Environment                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::GetEnvironment(class ABP_Environment_C** Environment)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetEnvironment");
		
		ABP_PRGameMode_C_GetEnvironment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Environment != nullptr)
			*Environment = params.Environment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.HideTransitionHint
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::HideTransitionHint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.HideTransitionHint");
		
		ABP_PRGameMode_C_HideTransitionHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.CreateTransitionHint
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::CreateTransitionHint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.CreateTransitionHint");
		
		ABP_PRGameMode_C_CreateTransitionHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCheatGodMode
	 * 		Flags  -> ()
	 */
	bool ABP_PRGameMode_C::GetCheatGodMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCheatGodMode");
		
		ABP_PRGameMode_C_GetCheatGodMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetDamageAwarenessValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_PRGameMode_C::GetDamageAwarenessValue(float Damage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetDamageAwarenessValue");
		
		ABP_PRGameMode_C_GetDamageAwarenessValue_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetNoiseAwarenessValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_PRGameMode_C::GetNoiseAwarenessValue(const class FName& Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetNoiseAwarenessValue");
		
		ABP_PRGameMode_C_GetNoiseAwarenessValue_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCheatInvisibility
	 * 		Flags  -> ()
	 */
	bool ABP_PRGameMode_C::GetCheatInvisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCheatInvisibility");
		
		ABP_PRGameMode_C_GetCheatInvisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SpawnItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bProjectOnGround                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSimulate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* ABP_PRGameMode_C::SpawnItem(class UInventoryItem* InventoryItem, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SpawnItem");
		
		ABP_PRGameMode_C_SpawnItem_Params params {};
		params.InventoryItem = InventoryItem;
		params.Transform = Transform;
		params.bProjectOnGround = bProjectOnGround;
		params.bSimulate = bSimulate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.TickAutosave
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::TickAutosave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.TickAutosave");
		
		ABP_PRGameMode_C_TickAutosave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.ReprojectLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABP_PRGameMode_C::ReprojectLocation(const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.ReprojectLocation");
		
		ABP_PRGameMode_C_ReprojectLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SpawnItemByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTypeID                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bProjectOnGround                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSimulate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* ABP_PRGameMode_C::SpawnItemByType(const struct FGameplayTag& ItemTypeID, const class FString& InstanceId, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SpawnItemByType");
		
		ABP_PRGameMode_C_SpawnItemByType_Params params {};
		params.ItemTypeID = ItemTypeID;
		params.InstanceId = InstanceId;
		params.Transform = Transform;
		params.bProjectOnGround = bProjectOnGround;
		params.bSimulate = bSimulate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SpawnSavedNPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNPCGameData                                Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class AActor*                                      SpawnerActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanWalkAway                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SnipingMode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* ABP_PRGameMode_C::SpawnSavedNPC(const struct FNPCGameData& Data, class AActor* SpawnerActor, float Radius, bool bCanWalkAway, bool SnipingMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SpawnSavedNPC");
		
		ABP_PRGameMode_C_SpawnSavedNPC_Params params {};
		params.Data = Data;
		params.SpawnerActor = SpawnerActor;
		params.Radius = Radius;
		params.bCanWalkAway = bCanWalkAway;
		params.SnipingMode = SnipingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SpawnNPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                npcTypeID                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpawnerActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanWalkAway                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SnipingMode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class AActor* ABP_PRGameMode_C::SpawnNPC(const struct FGameplayTag& npcTypeID, class AActor* SpawnerActor, float Radius, bool bCanWalkAway, bool SnipingMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SpawnNPC");
		
		ABP_PRGameMode_C_SpawnNPC_Params params {};
		params.npcTypeID = npcTypeID;
		params.SpawnerActor = SpawnerActor;
		params.Radius = Radius;
		params.bCanWalkAway = bCanWalkAway;
		params.SnipingMode = SnipingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SpawnAnomaly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AnomalyName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UClass*                                      AnomalyClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		struct FTransform                                  AnomalyTransform                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               bProjectOnGround                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AnomalyRadius                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class APRAnomaly* ABP_PRGameMode_C::SpawnAnomaly(const class FString& AnomalyName, class UClass* AnomalyClass, const struct FTransform& AnomalyTransform, bool bProjectOnGround, float AnomalyRadius)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SpawnAnomaly");
		
		ABP_PRGameMode_C_SpawnAnomaly_Params params {};
		params.AnomalyName = AnomalyName;
		params.AnomalyClass = AnomalyClass;
		params.AnomalyTransform = AnomalyTransform;
		params.bProjectOnGround = bProjectOnGround;
		params.AnomalyRadius = AnomalyRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.FindStartTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::FindStartTransform(const struct FGameplayTag& Level, const struct FGameplayTag& Location, struct FTransform* Transform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.FindStartTransform");
		
		ABP_PRGameMode_C_FindStartTransform_Params params {};
		params.Level = Level;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCurrentPlayerVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::GetCurrentPlayerVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCurrentPlayerVelocity");
		
		ABP_PRGameMode_C_GetCurrentPlayerVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.KillActorsOnReload
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::KillActorsOnReload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.KillActorsOnReload");
		
		ABP_PRGameMode_C_KillActorsOnReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.RestorePlayerIfDead
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::RestorePlayerIfDead()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.RestorePlayerIfDead");
		
		ABP_PRGameMode_C_RestorePlayerIfDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.TraceLocationDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::TraceLocationDown(const struct FVector& In, struct FVector* Out)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.TraceLocationDown");
		
		ABP_PRGameMode_C_TraceLocationDown_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.FindLevelStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                LocationTag                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSave                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::FindLevelStart(const struct FGameplayTag& LevelTag, const struct FGameplayTag& LocationTag, struct FTransform* Transform, struct FVector* Velocity, bool* bFromSave)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.FindLevelStart");
		
		ABP_PRGameMode_C_FindLevelStart_Params params {};
		params.LevelTag = LevelTag;
		params.LocationTag = LocationTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
		if (bFromSave != nullptr)
			*bFromSave = params.bFromSave;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetCurrentPlayerTransform
	 * 		Flags  -> ()
	 */
	struct FTransform ABP_PRGameMode_C::GetCurrentPlayerTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetCurrentPlayerTransform");
		
		ABP_PRGameMode_C_GetCurrentPlayerTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SpawnLocationMarkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::SpawnLocationMarkers(const struct FGameplayTag& Level)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SpawnLocationMarkers");
		
		ABP_PRGameMode_C_SpawnLocationMarkers_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetQuestStartTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::GetQuestStartTransform(bool* success, struct FTransform* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetQuestStartTransform");
		
		ABP_PRGameMode_C_GetQuestStartTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetSplineStartTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::GetSplineStartTransform(bool* success, struct FTransform* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetSplineStartTransform");
		
		ABP_PRGameMode_C_GetSplineStartTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.GetPlayerStartTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                StartTransformLevelTag                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Result                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::GetPlayerStartTransform(const struct FGameplayTag& StartTransformLevelTag, struct FTransform* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.GetPlayerStartTransform");
		
		ABP_PRGameMode_C_GetPlayerStartTransform_Params params {};
		params.StartTransformLevelTag = StartTransformLevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SetCheatShowNearbyNPCs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::SetCheatShowNearbyNPCs(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SetCheatShowNearbyNPCs");
		
		ABP_PRGameMode_C_SetCheatShowNearbyNPCs_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowNearbyNPCs
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::SwitchCheatShowNearbyNPCs()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowNearbyNPCs");
		
		ABP_PRGameMode_C_SwitchCheatShowNearbyNPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SetCheatSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::SetCheatSpeed(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SetCheatSpeed");
		
		ABP_PRGameMode_C_SetCheatSpeed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatSpeed
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::SwitchCheatSpeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatSpeed");
		
		ABP_PRGameMode_C_SwitchCheatSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SetCheatInvisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::SetCheatInvisibility(bool bValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SetCheatInvisibility");
		
		ABP_PRGameMode_C_SetCheatInvisibility_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatInvisibility
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::SwitchCheatInvisibility()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatInvisibility");
		
		ABP_PRGameMode_C_SwitchCheatInvisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnPlayerDeath
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnPlayerDeath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnPlayerDeath");
		
		ABP_PRGameMode_C_OnPlayerDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SetCheatShowItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::SetCheatShowItems(int32_t Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SetCheatShowItems");
		
		ABP_PRGameMode_C_SetCheatShowItems_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowItems
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::SwitchCheatShowItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowItems");
		
		ABP_PRGameMode_C_SwitchCheatShowItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SwitchNightVision
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::SwitchNightVision()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SwitchNightVision");
		
		ABP_PRGameMode_C_SwitchNightVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnMissionStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::OnMissionStateChanged(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnMissionStateChanged");
		
		ABP_PRGameMode_C_OnMissionStateChanged_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionStart");
		
		ABP_PRGameMode_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionEnd");
		
		ABP_PRGameMode_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnInitializeGame
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnInitializeGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnInitializeGame");
		
		ABP_PRGameMode_C_OnInitializeGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnInitializeEditor
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnInitializeEditor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnInitializeEditor");
		
		ABP_PRGameMode_C_OnInitializeEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnStartedGame
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnStartedGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnStartedGame");
		
		ABP_PRGameMode_C_OnStartedGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnStartedEditor
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnStartedEditor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnStartedEditor");
		
		ABP_PRGameMode_C_OnStartedEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnEnteredMenu
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnEnteredMenu()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnEnteredMenu");
		
		ABP_PRGameMode_C_OnEnteredMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.ApplySoundVolumes
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::ApplySoundVolumes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.ApplySoundVolumes");
		
		ABP_PRGameMode_C_ApplySoundVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionHint
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnTransitionHint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionHint");
		
		ABP_PRGameMode_C_OnTransitionHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnLevelStarted");
		
		ABP_PRGameMode_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.ApplyBightnessMult
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::ApplyBightnessMult()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.ApplyBightnessMult");
		
		ABP_PRGameMode_C_ApplyBightnessMult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnGameDataPreSave
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnGameDataPreSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnGameDataPreSave");
		
		ABP_PRGameMode_C_OnGameDataPreSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.DoSavePlayerPosition
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::DoSavePlayerPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.DoSavePlayerPosition");
		
		ABP_PRGameMode_C_DoSavePlayerPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::OnLevelPrepare(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnLevelPrepare");
		
		ABP_PRGameMode_C_OnLevelPrepare_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.ResetEffects
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::ResetEffects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.ResetEffects");
		
		ABP_PRGameMode_C_ResetEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.PrepareMissionExecutor
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::PrepareMissionExecutor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.PrepareMissionExecutor");
		
		ABP_PRGameMode_C_PrepareMissionExecutor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowClimableActors
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::SwitchCheatShowClimableActors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowClimableActors");
		
		ABP_PRGameMode_C_SwitchCheatShowClimableActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.CheatShowActorsOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::CheatShowActorsOfClass(class UClass* Class)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.CheatShowActorsOfClass");
		
		ABP_PRGameMode_C_CheatShowActorsOfClass_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnTideHappening
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::OnTideHappening(bool bReload)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnTideHappening");
		
		ABP_PRGameMode_C_OnTideHappening_Params params {};
		params.bReload = bReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnTideFinished
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnTideFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnTideFinished");
		
		ABP_PRGameMode_C_OnTideFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.TickDebug
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::TickDebug()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.TickDebug");
		
		ABP_PRGameMode_C_TickDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SetCheatGodMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::SetCheatGodMode(bool bValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SetCheatGodMode");
		
		ABP_PRGameMode_C_SetCheatGodMode_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatGodMode
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::SwitchCheatGodMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatGodMode");
		
		ABP_PRGameMode_C_SwitchCheatGodMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnVirtualStockChangedEvent
	 * 		Flags  -> ()
	 */
	void ABP_PRGameMode_C::OnVirtualStockChangedEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnVirtualStockChangedEvent");
		
		ABP_PRGameMode_C_OnVirtualStockChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.OnContinue_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               doNotShowAgain                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRGameMode_C::OnContinue_Event(bool doNotShowAgain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.OnContinue_Event");
		
		ABP_PRGameMode_C_OnContinue_Event_Params params {};
		params.doNotShowAgain = doNotShowAgain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRGameMode.BP_PRGameMode_C.ExecuteUbergraph_BP_PRGameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRGameMode_C::ExecuteUbergraph_BP_PRGameMode(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRGameMode.BP_PRGameMode_C.ExecuteUbergraph_BP_PRGameMode");
		
		ABP_PRGameMode_C_ExecuteUbergraph_BP_PRGameMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PRGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PRGameMode_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PRGameMode.BP_PRGameMode_C");
		return ptr;
	}

}



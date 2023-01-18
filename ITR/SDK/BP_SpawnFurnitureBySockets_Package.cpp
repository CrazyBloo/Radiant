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
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString ABP_SpawnFurnitureBySockets_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GetInstanceID");
		
		ABP_SpawnFurnitureBySockets_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GetDoorComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_Door_C*>                          doors                                                      (Parm, OutParm)
	 * 		TArray<class ABP_Box_C*>                           Boxes                                                      (Parm, OutParm)
	 */
	void ABP_SpawnFurnitureBySockets_C::GetDoorComponents(TArray<class ABP_Door_C*>* doors, TArray<class ABP_Box_C*>* Boxes)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GetDoorComponents");
		
		ABP_SpawnFurnitureBySockets_C_GetDoorComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (doors != nullptr)
			*doors = params.doors;
		if (Boxes != nullptr)
			*Boxes = params.Boxes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.SaveMeshTransforms
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::SaveMeshTransforms()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.SaveMeshTransforms");
		
		ABP_SpawnFurnitureBySockets_C_SaveMeshTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.DeleteMesh
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::DeleteMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.DeleteMesh");
		
		ABP_SpawnFurnitureBySockets_C_DeleteMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ConstructMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FTransform>               SlotTransforms                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FName>                                BrokenSockets                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_SpawnFurnitureBySockets_C::ConstructMesh(TMap<class FName, struct FTransform> SlotTransforms, TArray<class FName>* BrokenSockets)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ConstructMesh");
		
		ABP_SpawnFurnitureBySockets_C_ConstructMesh_Params params {};
		params.SlotTransforms = SlotTransforms;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrokenSockets != nullptr)
			*BrokenSockets = params.BrokenSockets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.UserConstructionScript");
		
		ABP_SpawnFurnitureBySockets_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ReceiveBeginPlay");
		
		ABP_SpawnFurnitureBySockets_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.CollectSpawnSlots
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::CollectSpawnSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.CollectSpawnSlots");
		
		ABP_SpawnFurnitureBySockets_C_CollectSpawnSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnFurnitureBySockets_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.OnLevelStarted");
		
		ABP_SpawnFurnitureBySockets_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.CheckDistanceEvent
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::CheckDistanceEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.CheckDistanceEvent");
		
		ABP_SpawnFurnitureBySockets_C_CheckDistanceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnFurnitureBySockets_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ReceiveEndPlay");
		
		ABP_SpawnFurnitureBySockets_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.OnGameDataSave
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::OnGameDataSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.OnGameDataSave");
		
		ABP_SpawnFurnitureBySockets_C_OnGameDataSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.Debug_ConstructMesh
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::Debug_ConstructMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.Debug_ConstructMesh");
		
		ABP_SpawnFurnitureBySockets_C_Debug_ConstructMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GenerateLoot
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::GenerateLoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GenerateLoot");
		
		ABP_SpawnFurnitureBySockets_C_GenerateLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.SpawnLoot
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::SpawnLoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.SpawnLoot");
		
		ABP_SpawnFurnitureBySockets_C_SpawnLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ExecuteUbergraph_BP_SpawnFurnitureBySockets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpawnFurnitureBySockets_C::ExecuteUbergraph_BP_SpawnFurnitureBySockets(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ExecuteUbergraph_BP_SpawnFurnitureBySockets");
		
		ABP_SpawnFurnitureBySockets_C_ExecuteUbergraph_BP_SpawnFurnitureBySockets_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.MeshConstructed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_SpawnFurnitureBySockets_C::MeshConstructed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.MeshConstructed__DelegateSignature");
		
		ABP_SpawnFurnitureBySockets_C_MeshConstructed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpawnFurnitureBySockets_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpawnFurnitureBySockets_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C");
		return ptr;
	}

}



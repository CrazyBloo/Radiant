#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GetInstanceID
	 */
	struct ABP_SpawnFurnitureBySockets_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GetDoorComponents
	 */
	struct ABP_SpawnFurnitureBySockets_C_GetDoorComponents_Params
	{
	public:
		TArray<class ABP_Door_C*>                                  doors;                                                   // 0x0000(0x0010)  (Parm, OutParm)
		TArray<class ABP_Box_C*>                                   Boxes;                                                   // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.SaveMeshTransforms
	 */
	struct ABP_SpawnFurnitureBySockets_C_SaveMeshTransforms_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.DeleteMesh
	 */
	struct ABP_SpawnFurnitureBySockets_C_DeleteMesh_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ConstructMesh
	 */
	struct ABP_SpawnFurnitureBySockets_C_ConstructMesh_Params
	{
	public:
		TMap<class FName, struct FTransform>                       SlotTransforms;                                          // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FName>                                        BrokenSockets;                                           // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.UserConstructionScript
	 */
	struct ABP_SpawnFurnitureBySockets_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ReceiveBeginPlay
	 */
	struct ABP_SpawnFurnitureBySockets_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.CollectSpawnSlots
	 */
	struct ABP_SpawnFurnitureBySockets_C_CollectSpawnSlots_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.OnLevelStarted
	 */
	struct ABP_SpawnFurnitureBySockets_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.CheckDistanceEvent
	 */
	struct ABP_SpawnFurnitureBySockets_C_CheckDistanceEvent_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ReceiveEndPlay
	 */
	struct ABP_SpawnFurnitureBySockets_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.OnGameDataSave
	 */
	struct ABP_SpawnFurnitureBySockets_C_OnGameDataSave_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.Debug_ConstructMesh
	 */
	struct ABP_SpawnFurnitureBySockets_C_Debug_ConstructMesh_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.GenerateLoot
	 */
	struct ABP_SpawnFurnitureBySockets_C_GenerateLoot_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.SpawnLoot
	 */
	struct ABP_SpawnFurnitureBySockets_C_SpawnLoot_Params
	{	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.ExecuteUbergraph_BP_SpawnFurnitureBySockets
	 */
	struct ABP_SpawnFurnitureBySockets_C_ExecuteUbergraph_BP_SpawnFurnitureBySockets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C.MeshConstructed__DelegateSignature
	 */
	struct ABP_SpawnFurnitureBySockets_C_MeshConstructed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

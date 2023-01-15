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
	 * Function BP_MagItem.BP_MagItem_C.GetCleanableVertices
	 */
	struct ABP_MagItem_C_GetCleanableVertices_Params
	{
	public:
		int32_t                                                    NumCleanableVert;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.GetCleanableMeshes
	 */
	struct ABP_MagItem_C_GetCleanableMeshes_Params
	{
	public:
		TArray<class UStaticMeshComponent*>                        CleanableMeshes;                                         // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.GetRepairDurabilityRange
	 */
	struct ABP_MagItem_C_GetRepairDurabilityRange_Params
	{
	public:
		struct FGameplayTag                                        Requestor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FMinMaxFloat                                        DurabilityRange;                                         // 0x0008(0x0008)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.GetRefsForRepair
	 */
	struct ABP_MagItem_C_GetRefsForRepair_Params
	{
	public:
		struct FGameplayTag                                        RepairRequestor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PCS2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPC_ItemDurability_C*                               DurabilityComponent;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextureRenderTarget2D*                              RT;                                                      // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.DetachMagItemFromWeaponItem
	 */
	struct ABP_MagItem_C_DetachMagItemFromWeaponItem_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.GetMaxAmmoInMag
	 */
	struct ABP_MagItem_C_GetMaxAmmoInMag_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.Reconfigure
	 */
	struct ABP_MagItem_C_Reconfigure_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.GetAmmoInMag
	 */
	struct ABP_MagItem_C_GetAmmoInMag_Params
	{
	public:
		int32_t                                                    AmmoInMag;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.RefillBulletPoints
	 */
	struct ABP_MagItem_C_RefillBulletPoints_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.GetEmptyPoint
	 */
	struct ABP_MagItem_C_GetEmptyPoint_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.GetBulletMeshesCount
	 */
	struct ABP_MagItem_C_GetBulletMeshesCount_Params
	{
	public:
		int32_t                                                    BulletMeshesCount;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.RemoveAmmo
	 */
	struct ABP_MagItem_C_RemoveAmmo_Params
	{
	public:
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.UpdateBullets
	 */
	struct ABP_MagItem_C_UpdateBullets_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.UpdateItemWeight
	 */
	struct ABP_MagItem_C_UpdateItemWeight_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.SpawnBullets
	 */
	struct ABP_MagItem_C_SpawnBullets_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.OnGrip
	 */
	struct ABP_MagItem_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B4TO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.FillMag
	 */
	struct ABP_MagItem_C_FillMag_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.OnReconfigure
	 */
	struct ABP_MagItem_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.OnItemCreated
	 */
	struct ABP_MagItem_C_OnItemCreated_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.ReceiveEndPlay
	 */
	struct ABP_MagItem_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.OnAmmoAdded
	 */
	struct ABP_MagItem_C_OnAmmoAdded_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.OnAmmoRemoved
	 */
	struct ABP_MagItem_C_OnAmmoRemoved_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.FillContainerWithFirst
	 */
	struct ABP_MagItem_C_FillContainerWithFirst_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.SetAttachedCollision
	 */
	struct ABP_MagItem_C_SetAttachedCollision_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.SetupCleaning
	 */
	struct ABP_MagItem_C_SetupCleaning_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.RequestUpdateMaterial
	 */
	struct ABP_MagItem_C_RequestUpdateMaterial_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.ReceiveBeginPlay
	 */
	struct ABP_MagItem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MagItem.BP_MagItem_C.ExecuteUbergraph_BP_MagItem
	 */
	struct ABP_MagItem_C_ExecuteUbergraph_BP_MagItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K7H4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

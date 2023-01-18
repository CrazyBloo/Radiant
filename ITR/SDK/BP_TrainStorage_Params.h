#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * Function BP_TrainStorage.BP_TrainStorage_C.StopSfx
	 */
	struct ABP_TrainStorage_C_StopSfx_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.PlaySfx
	 */
	struct ABP_TrainStorage_C_PlaySfx_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ChannelIndex;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.CheckPlayerLevelBlock
	 */
	struct ABP_TrainStorage_C_CheckPlayerLevelBlock_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.ResetDeliveryBulb
	 */
	struct ABP_TrainStorage_C_ResetDeliveryBulb_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.HighlightDeliveryBulb
	 */
	struct ABP_TrainStorage_C_HighlightDeliveryBulb_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.EnableRepiarModeOnly
	 */
	struct ABP_TrainStorage_C_EnableRepiarModeOnly_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.FillterDeliveryBaseItems
	 */
	struct ABP_TrainStorage_C_FillterDeliveryBaseItems_Params
	{
	public:
		TArray<class AActor*>                                      Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class AActor*>                                      Actors;                                                  // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.CheckWrongItems
	 */
	struct ABP_TrainStorage_C_CheckWrongItems_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       State;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F7MX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.InitButtonApplyRepair
	 */
	struct ABP_TrainStorage_C_InitButtonApplyRepair_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.IsUpgrade
	 */
	struct ABP_TrainStorage_C_IsUpgrade_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.LockComputer
	 */
	struct ABP_TrainStorage_C_LockComputer_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.SpawnRepairActors
	 */
	struct ABP_TrainStorage_C_SpawnRepairActors_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.IsRepair
	 */
	struct ABP_TrainStorage_C_IsRepair_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.IsDelivery
	 */
	struct ABP_TrainStorage_C_IsDelivery_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.RepairItems
	 */
	struct ABP_TrainStorage_C_RepairItems_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HA3P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.CheckTags
	 */
	struct ABP_TrainStorage_C_CheckTags_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		TArray<struct FGameplayTag>                                targetTags;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       found;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MVW3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.CheckDelivery
	 */
	struct ABP_TrainStorage_C_CheckDelivery_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       finishObjectives;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       success;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       excessive;                                               // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.unlock
	 */
	struct ABP_TrainStorage_C_unlock_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      stateChangedDelegate;                                    // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      beginOverlapDelegate;                                    // 0x0014(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      endOverlapDelegate;                                      // 0x0024(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.LockAll
	 */
	struct ABP_TrainStorage_C_LockAll_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.GetCurrentIndex
	 */
	struct ABP_TrainStorage_C_GetCurrentIndex_Params
	{
	public:
		bool                                                       Delivery;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_05LC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.GetCellItems
	 */
	struct ABP_TrainStorage_C_GetCellItems_Params
	{
	public:
		bool                                                       Delivery;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CFBQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      cellItems;                                               // 0x0008(0x0010)  (Parm, OutParm)
		TArray<class AActor*>                                      AllItems;                                                // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.IsActive
	 */
	struct ABP_TrainStorage_C_IsActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.ReceiveBeginPlay
	 */
	struct ABP_TrainStorage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.ReceiveTick
	 */
	struct ABP_TrainStorage_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.UpdateDoors
	 */
	struct ABP_TrainStorage_C_UpdateDoors_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.GoToSelection
	 */
	struct ABP_TrainStorage_C_GoToSelection_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.GoToDelivery
	 */
	struct ABP_TrainStorage_C_GoToDelivery_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.GoToRepair
	 */
	struct ABP_TrainStorage_C_GoToRepair_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnLevelStarted
	 */
	struct ABP_TrainStorage_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnItemDroppedEvent
	 */
	struct ABP_TrainStorage_C_OnItemDroppedEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.ReceiveEndPlay
	 */
	struct ABP_TrainStorage_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.GoToUpgrade
	 */
	struct ABP_TrainStorage_C_GoToUpgrade_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.UpgradeItem
	 */
	struct ABP_TrainStorage_C_UpgradeItem_Params
	{
	public:
		class UInventoryItem*                                      Itrem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FUpgradeInfo>                                Install;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FUpgradeInfo>                                Remove;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.GoToMissionSelection
	 */
	struct ABP_TrainStorage_C_GoToMissionSelection_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnPlayerLevelChangeEvent
	 */
	struct ABP_TrainStorage_C_OnPlayerLevelChangeEvent_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnGamePaused
	 */
	struct ABP_TrainStorage_C_OnGamePaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnCompletePressed
	 */
	struct ABP_TrainStorage_C_OnCompletePressed_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnDeliveryBackPressed
	 */
	struct ABP_TrainStorage_C_OnDeliveryBackPressed_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnMissionSelected
	 */
	struct ABP_TrainStorage_C_OnMissionSelected_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.UpgradeOnPressedEvent
	 */
	struct ABP_TrainStorage_C_UpgradeOnPressedEvent_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.BackOnPressedEvent
	 */
	struct ABP_TrainStorage_C_BackOnPressedEvent_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.DebriefingOkOnPressedEvent
	 */
	struct ABP_TrainStorage_C_DebriefingOkOnPressedEvent_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnMissionFinishedEvent
	 */
	struct ABP_TrainStorage_C_OnMissionFinishedEvent_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.DeliveryOnPressedEvent
	 */
	struct ABP_TrainStorage_C_DeliveryOnPressedEvent_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.RepairOnPressedEvent
	 */
	struct ABP_TrainStorage_C_RepairOnPressedEvent_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.StartRepairItems
	 */
	struct ABP_TrainStorage_C_StartRepairItems_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.UpdateWeaponCell
	 */
	struct ABP_TrainStorage_C_UpdateWeaponCell_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnEndOverlapRepair
	 */
	struct ABP_TrainStorage_C_OnEndOverlapRepair_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnBeginOverlapRepair
	 */
	struct ABP_TrainStorage_C_OnBeginOverlapRepair_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TOK2[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnDoorStateChangedWeapon
	 */
	struct ABP_TrainStorage_C_OnDoorStateChangedWeapon_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.UpdateDeliveryCell
	 */
	struct ABP_TrainStorage_C_UpdateDeliveryCell_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnEndOverlap
	 */
	struct ABP_TrainStorage_C_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnBeginOverlap
	 */
	struct ABP_TrainStorage_C_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5WOR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnDoorStateChanged
	 */
	struct ABP_TrainStorage_C_OnDoorStateChanged_Params
	{	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.ExecuteUbergraph_BP_TrainStorage
	 */
	struct ABP_TrainStorage_C_ExecuteUbergraph_BP_TrainStorage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C4NS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TrainStorage.BP_TrainStorage_C.OnCellContentChanged__DelegateSignature
	 */
	struct ABP_TrainStorage_C_OnCellContentChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

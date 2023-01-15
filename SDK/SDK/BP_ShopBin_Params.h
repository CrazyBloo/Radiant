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
	 * Function BP_ShopBin.BP_ShopBin_C.TrySpawnItem
	 */
	struct ABP_ShopBin_C_TrySpawnItem_Params
	{
	public:
		class UClass*                                              itemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     foundPoint;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHasSpawned;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R98S[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     itemActor;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.PlaySfx
	 */
	struct ABP_ShopBin_C_PlaySfx_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.IsFreeMode
	 */
	struct ABP_ShopBin_C_IsFreeMode_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.GetItemRequiredLevel
	 */
	struct ABP_ShopBin_C_GetItemRequiredLevel_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerLevel;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NJPH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.GetItemPrice
	 */
	struct ABP_ShopBin_C_GetItemPrice_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Price;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.GetBoughtBinContent
	 */
	struct ABP_ShopBin_C_GetBoughtBinContent_Params
	{
	public:
		TArray<class AActor*>                                      boughtContent;                                           // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.MarkBinContentBought
	 */
	struct ABP_ShopBin_C_MarkBinContentBought_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.GetAddRemoveItems
	 */
	struct ABP_ShopBin_C_GetAddRemoveItems_Params
	{
	public:
		TArray<struct FGameplayTag>                                itemsToAdd;                                              // 0x0000(0x0010)  (Parm, OutParm)
		TArray<struct FGameplayTag>                                itemsToRemove;                                           // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.IsBinContains
	 */
	struct ABP_ShopBin_C_IsBinContains_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       Contain;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.GetState
	 */
	struct ABP_ShopBin_C_GetState_Params
	{
	public:
		EShopBinState                                              State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZR5A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.IsCanChange
	 */
	struct ABP_ShopBin_C_IsCanChange_Params
	{
	public:
		bool                                                       canChange;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DLSF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.RemoveItemFromBin
	 */
	struct ABP_ShopBin_C_RemoveItemFromBin_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.FindPointInBin
	 */
	struct ABP_ShopBin_C_FindPointInBin_Params
	{
	public:
		TArray<class USceneComponent*>                             Points;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       found;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZG6T[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Result;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.AllowedSpawnLocInBin
	 */
	struct ABP_ShopBin_C_AllowedSpawnLocInBin_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Result;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       found;                                                   // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5PZE[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.SpawnItemInBin
	 */
	struct ABP_ShopBin_C_SpawnItemInBin_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.GetBinTotalPrice
	 */
	struct ABP_ShopBin_C_GetBinTotalPrice_Params
	{
	public:
		int32_t                                                    totalPrice;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.UpdateContent
	 */
	struct ABP_ShopBin_C_UpdateContent_Params
	{
	public:
		bool                                                       Changed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XQSD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.GetBinContent
	 */
	struct ABP_ShopBin_C_GetBinContent_Params
	{
	public:
		TArray<class AActor*>                                      binContent;                                              // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.DoorLockAnim__FinishedFunc
	 */
	struct ABP_ShopBin_C_DoorLockAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.DoorLockAnim__UpdateFunc
	 */
	struct ABP_ShopBin_C_DoorLockAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.DoorHideAnim__FinishedFunc
	 */
	struct ABP_ShopBin_C_DoorHideAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.DoorHideAnim__UpdateFunc
	 */
	struct ABP_ShopBin_C_DoorHideAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ShopBin_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CLE5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_ShopBin_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.LockBin
	 */
	struct ABP_ShopBin_C_LockBin_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.UpdateBinContent
	 */
	struct ABP_ShopBin_C_UpdateBinContent_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.AddItemToBin
	 */
	struct ABP_ShopBin_C_AddItemToBin_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.RemoveItem
	 */
	struct ABP_ShopBin_C_RemoveItem_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.RemoveAllItems
	 */
	struct ABP_ShopBin_C_RemoveAllItems_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.UpdateBinState
	 */
	struct ABP_ShopBin_C_UpdateBinState_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.HideBin
	 */
	struct ABP_ShopBin_C_HideBin_Params
	{
	public:
		bool                                                       hide;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.ReceiveTick
	 */
	struct ABP_ShopBin_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.ReceiveEndPlay
	 */
	struct ABP_ShopBin_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.OnLevelStarted
	 */
	struct ABP_ShopBin_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.Physics Sweep
	 */
	struct ABP_ShopBin_C_Physics_Sweep_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.OnItemDroppedEvent
	 */
	struct ABP_ShopBin_C_OnItemDroppedEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.ExecuteUbergraph_BP_ShopBin
	 */
	struct ABP_ShopBin_C_ExecuteUbergraph_BP_ShopBin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.OnNoMoreSpace__DelegateSignature
	 */
	struct ABP_ShopBin_C_OnNoMoreSpace__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.OnDoorStateChanged__DelegateSignature
	 */
	struct ABP_ShopBin_C_OnDoorStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ShopBin.BP_ShopBin_C.OnContentChanged__DelegateSignature
	 */
	struct ABP_ShopBin_C_OnContentChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_ShopSlot.BP_ShopSlot_C.InitCleanState
	 */
	struct ABP_ShopSlot_C_InitCleanState_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.InitReferences
	 */
	struct ABP_ShopSlot_C_InitReferences_Params
	{
	public:
		class ABP_ShopBin_C*                                       shopBinRef;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_ShopComputer_C*                                  ShopComputerRef;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.GetBinContentResultTags
	 */
	struct ABP_ShopSlot_C_GetBinContentResultTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                Tags;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.GetItemsPrice
	 */
	struct ABP_ShopSlot_C_GetItemsPrice_Params
	{
	public:
		TArray<struct FGameplayTag>                                Tags;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Price;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.GetItem
	 */
	struct ABP_ShopSlot_C_GetItem_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              itemActor;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              itemClass;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.UpdatePrice
	 */
	struct ABP_ShopSlot_C_UpdatePrice_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.Timeline_0__FinishedFunc
	 */
	struct ABP_ShopSlot_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.Timeline_0__UpdateFunc
	 */
	struct ABP_ShopSlot_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.OnPlusClicked
	 */
	struct ABP_ShopSlot_C_OnPlusClicked_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.ButtonPlus
	 */
	struct ABP_ShopSlot_C_ButtonPlus_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.ButtonMinus
	 */
	struct ABP_ShopSlot_C_ButtonMinus_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.ShowUI
	 */
	struct ABP_ShopSlot_C_ShowUI_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.OnMinusClicked
	 */
	struct ABP_ShopSlot_C_OnMinusClicked_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.HideUI
	 */
	struct ABP_ShopSlot_C_HideUI_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.CloseUI
	 */
	struct ABP_ShopSlot_C_CloseUI_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.ReceiveBeginPlay
	 */
	struct ABP_ShopSlot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.OnBinStateChanged
	 */
	struct ABP_ShopSlot_C_OnBinStateChanged_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.UpdateUI
	 */
	struct ABP_ShopSlot_C_UpdateUI_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.OnBinContentChanged
	 */
	struct ABP_ShopSlot_C_OnBinContentChanged_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.ReceiveEndPlay
	 */
	struct ABP_ShopSlot_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.OnLevelStarted
	 */
	struct ABP_ShopSlot_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.SetLock
	 */
	struct ABP_ShopSlot_C_SetLock_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAnnounce;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.UpdateSlot
	 */
	struct ABP_ShopSlot_C_UpdateSlot_Params
	{
	public:
		class USceneComponent*                                     componentToReturnActorTo;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              actorToAttach;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.Clear
	 */
	struct ABP_ShopSlot_C_Clear_Params
	{	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.ExecuteUbergraph_BP_ShopSlot
	 */
	struct ABP_ShopSlot_C_ExecuteUbergraph_BP_ShopSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopSlot.BP_ShopSlot_C.OnPlusPressed__DelegateSignature
	 */
	struct ABP_ShopSlot_C_OnPlusPressed__DelegateSignature_Params
	{
	public:
		class ABP_ShopSlot_C*                                      Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

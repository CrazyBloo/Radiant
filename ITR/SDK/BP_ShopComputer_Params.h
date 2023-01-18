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
	 * Function BP_ShopComputer.BP_ShopComputer_C.CheckPlayerLevelBlock
	 */
	struct ABP_ShopComputer_C_CheckPlayerLevelBlock_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.RefillAmmoInfo
	 */
	struct ABP_ShopComputer_C_RefillAmmoInfo_Params
	{
	public:
		class ABP_MagItem_C*                                       MagRef;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.IsFreeMode
	 */
	struct ABP_ShopComputer_C_IsFreeMode_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.IsSellingAllowed
	 */
	struct ABP_ShopComputer_C_IsSellingAllowed_Params
	{
	public:
		bool                                                       CanSale;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7MX5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.Is Shop Bin Visible
	 */
	struct ABP_ShopComputer_C_IsShopBinVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.HasBoughtItemsInBin
	 */
	struct ABP_ShopComputer_C_HasBoughtItemsInBin_Params
	{
	public:
		bool                                                       HasItems;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.IsInSellingState
	 */
	struct ABP_ShopComputer_C_IsInSellingState_Params
	{
	public:
		bool                                                       selling;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.IsInBuyingState
	 */
	struct ABP_ShopComputer_C_IsInBuyingState_Params
	{
	public:
		bool                                                       buying;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.ReceiveBeginPlay
	 */
	struct ABP_ShopComputer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.OnBinContentChanged
	 */
	struct ABP_ShopComputer_C_OnBinContentChanged_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.Sell
	 */
	struct ABP_ShopComputer_C_Sell_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.Buy
	 */
	struct ABP_ShopComputer_C_Buy_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.Reset
	 */
	struct ABP_ShopComputer_C_Reset_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.StartToBuy
	 */
	struct ABP_ShopComputer_C_StartToBuy_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.ReceiveEndPlay
	 */
	struct ABP_ShopComputer_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.OnLevelStarted
	 */
	struct ABP_ShopComputer_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.OnDoorStateChanged
	 */
	struct ABP_ShopComputer_C_OnDoorStateChanged_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.ShowShopBin
	 */
	struct ABP_ShopComputer_C_ShowShopBin_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.UpdateNewItems
	 */
	struct ABP_ShopComputer_C_UpdateNewItems_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.OnNoMoreSpace
	 */
	struct ABP_ShopComputer_C_OnNoMoreSpace_Params
	{	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.ExecuteUbergraph_BP_ShopComputer
	 */
	struct ABP_ShopComputer_C_ExecuteUbergraph_BP_ShopComputer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9LSQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ShopComputer.BP_ShopComputer_C.OnStateChanged__DelegateSignature
	 */
	struct ABP_ShopComputer_C_OnStateChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_ShopShowcase.BP_ShopShowcase_C.InitSlots
	 */
	struct ABP_ShopShowcase_C_InitSlots_Params
	{	};

	/**
	 * Function BP_ShopShowcase.BP_ShopShowcase_C.ReceiveBeginPlay
	 */
	struct ABP_ShopShowcase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ShopShowcase.BP_ShopShowcase_C.ReceiveTick
	 */
	struct ABP_ShopShowcase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopShowcase.BP_ShopShowcase_C.ExecuteUbergraph_BP_ShopShowcase
	 */
	struct ABP_ShopShowcase_C_ExecuteUbergraph_BP_ShopShowcase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ShopShowcase.BP_ShopShowcase_C.OnSwitchFinished__DelegateSignature
	 */
	struct ABP_ShopShowcase_C_OnSwitchFinished__DelegateSignature_Params
	{	};

	/**
	 * Function BP_ShopShowcase.BP_ShopShowcase_C.OnSwitchStarted__DelegateSignature
	 */
	struct ABP_ShopShowcase_C_OnSwitchStarted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

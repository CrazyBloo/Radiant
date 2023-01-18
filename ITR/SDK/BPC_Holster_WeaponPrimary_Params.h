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
	 * Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.OnItemTaken
	 */
	struct UBPC_Holster_WeaponPrimary_C_OnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.ReceiveTick
	 */
	struct UBPC_Holster_WeaponPrimary_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.Clear GSLerp target
	 */
	struct UBPC_Holster_WeaponPrimary_C_ClearGSLerptarget_Params
	{	};

	/**
	 * Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.AttachAndLerpHold
	 */
	struct UBPC_Holster_WeaponPrimary_C_AttachAndLerpHold_Params
	{	};

	/**
	 * Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.InstantAttach
	 */
	struct UBPC_Holster_WeaponPrimary_C_InstantAttach_Params
	{	};

	/**
	 * Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.SpawnContent
	 */
	struct UBPC_Holster_WeaponPrimary_C_SpawnContent_Params
	{	};

	/**
	 * Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.ExecuteUbergraph_BPC_Holster_WeaponPrimary
	 */
	struct UBPC_Holster_WeaponPrimary_C_ExecuteUbergraph_BPC_Holster_WeaponPrimary_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateMaterialDamage
	 */
	struct ABPA_AmmoBox_C_UpdateMaterialDamage_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.GetAmmoCount
	 */
	struct ABPA_AmmoBox_C_GetAmmoCount_Params
	{
	public:
		int32_t                                                    ammoCount;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z31H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.IsFull
	 */
	struct ABPA_AmmoBox_C_IsFull_Params
	{
	public:
		bool                                                       full;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_42J5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateAmmoTypeText
	 */
	struct ABPA_AmmoBox_C_UpdateAmmoTypeText_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateItemWeight
	 */
	struct ABPA_AmmoBox_C_UpdateItemWeight_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.UpdateCounter
	 */
	struct ABPA_AmmoBox_C_UpdateCounter_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.OnReconfigure
	 */
	struct ABPA_AmmoBox_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.ReceiveEndPlay
	 */
	struct ABPA_AmmoBox_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.OnItemCreated
	 */
	struct ABPA_AmmoBox_C_OnItemCreated_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.OnStart
	 */
	struct ABPA_AmmoBox_C_OnStart_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.FillAmmo
	 */
	struct ABPA_AmmoBox_C_FillAmmo_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.HealthEndedOverride
	 */
	struct ABPA_AmmoBox_C_HealthEndedOverride_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.OnAmmoAdded
	 */
	struct ABPA_AmmoBox_C_OnAmmoAdded_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.OnAmmoRemoved
	 */
	struct ABPA_AmmoBox_C_OnAmmoRemoved_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.FillContainerWithFirst
	 */
	struct ABPA_AmmoBox_C_FillContainerWithFirst_Params
	{	};

	/**
	 * Function BPA_AmmoBox.BPA_AmmoBox_C.ExecuteUbergraph_BPA_AmmoBox
	 */
	struct ABPA_AmmoBox_C_ExecuteUbergraph_BPA_AmmoBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

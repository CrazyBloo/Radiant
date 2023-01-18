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
	 * Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.OnAmmoTaken
	 */
	struct UBPC_GrippableAmmoMag_C_OnAmmoTaken_Params
	{
	public:
		int32_t                                                    AmmoIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7JWF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.DoSpawn
	 */
	struct UBPC_GrippableAmmoMag_C_DoSpawn_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5S1E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.SetBulletsGrippable
	 */
	struct UBPC_GrippableAmmoMag_C_SetBulletsGrippable_Params
	{
	public:
		bool                                                       IsGrippable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C.ExecuteUbergraph_BPC_GrippableAmmoMag
	 */
	struct UBPC_GrippableAmmoMag_C_ExecuteUbergraph_BPC_GrippableAmmoMag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

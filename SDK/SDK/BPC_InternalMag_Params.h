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
	 * Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoContainerData
	 */
	struct UBPC_InternalMag_C_GetAmmoContainerData_Params
	{
	public:
		struct FAmmoContainerData                                  Data;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoContainerInfo
	 */
	struct UBPC_InternalMag_C_GetAmmoContainerInfo_Params
	{
	public:
		struct FPRAmmoContainerInfo                                Info;                                                    // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.IsLoadingLocked
	 */
	struct UBPC_InternalMag_C_IsLoadingLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.CheckLoadingConditions
	 */
	struct UBPC_InternalMag_C_CheckLoadingConditions_Params
	{
	public:
		class UInventoryItem*                                      ammoItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanLoad;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.DoSpawn
	 */
	struct UBPC_InternalMag_C_DoSpawn_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1WGI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.GetNextAmmoInMag
	 */
	struct UBPC_InternalMag_C_GetNextAmmoInMag_Params
	{
	public:
		bool                                                       HasAmmo;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B4GV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Output;                                                  // 0x0004(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.DelayLoading
	 */
	struct UBPC_InternalMag_C_DelayLoading_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.LoadAmmo
	 */
	struct UBPC_InternalMag_C_LoadAmmo_Params
	{
	public:
		class AActor*                                              AmmoActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BDHO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.GetMaxAmmoInMag
	 */
	struct UBPC_InternalMag_C_GetMaxAmmoInMag_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08CW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.RefillBulletPoints
	 */
	struct UBPC_InternalMag_C_RefillBulletPoints_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.RemoveAmmo
	 */
	struct UBPC_InternalMag_C_RemoveAmmo_Params
	{
	public:
		bool                                                       NoUpdate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DW0W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0004(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.UpdateItemWeight
	 */
	struct UBPC_InternalMag_C_UpdateItemWeight_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.UpdateBullets
	 */
	struct UBPC_InternalMag_C_UpdateBullets_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.GetEmptyPoint
	 */
	struct UBPC_InternalMag_C_GetEmptyPoint_Params
	{
	public:
		class USceneComponent*                                     Point;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.GetAmmoInMag
	 */
	struct UBPC_InternalMag_C_GetAmmoInMag_Params
	{
	public:
		int32_t                                                    AmmoInMag;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.GetBulletMeshesCount
	 */
	struct UBPC_InternalMag_C_GetBulletMeshesCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.SpawnBullets
	 */
	struct UBPC_InternalMag_C_SpawnBullets_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.ReceiveTick
	 */
	struct UBPC_InternalMag_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.FillMag
	 */
	struct UBPC_InternalMag_C_FillMag_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.OnAmmoAdded
	 */
	struct UBPC_InternalMag_C_OnAmmoAdded_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.OnAmmoRemoved
	 */
	struct UBPC_InternalMag_C_OnAmmoRemoved_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.SetLoadingLock
	 */
	struct UBPC_InternalMag_C_SetLoadingLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.ProcessTriggerOverlap
	 */
	struct UBPC_InternalMag_C_ProcessTriggerOverlap_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.ExecuteUbergraph_BPC_InternalMag
	 */
	struct UBPC_InternalMag_C_ExecuteUbergraph_BPC_InternalMag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y2RM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.ReqestEjectComponent__DelegateSignature
	 */
	struct UBPC_InternalMag_C_ReqestEjectComponent__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_InternalMag.BPC_InternalMag_C.RequestDestroyComponent__DelegateSignature
	 */
	struct UBPC_InternalMag_C_RequestDestroyComponent__DelegateSignature_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
